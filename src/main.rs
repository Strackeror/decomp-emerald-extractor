use std::ffi::CStr;
use std::path::PathBuf;

use anyhow::bail;
use anyhow::Context;
use anyhow::Result;
use indexmap::IndexMap;
use json::Area;
use json::Database;
use json::Encounter;
use json::Learnset;
use json::LearnsetEntry;
use json::Location;
use json::Move;
use json::Pokemon;
use json::PokemonEvolution;
use json::Stats;
use pokeemerald_binds::Ability;
use pokeemerald_binds::WildPokemon;
use rom::get_encounter_area_name;
use rom::get_fishing_encounters;
use rom::get_info;
use rom::get_land_encounters;
use rom::get_rock_encounters;
use rom::get_species_formes;
use rom::get_species_levelup_moves;
use rom::get_species_teachable_moves;
use rom::get_water_encounters;
use rom::DamageCategory;
use rom::EvoType;
use rom::Evolution;
use rom::RomInfo;
use rom::SpeciesInfo;
use rom::ToName;
use rom::Type;

mod json;
mod rom;

trait ToStringC {
    fn to_string_c(&self) -> Result<String>;
}

impl ToStringC for *const u8 {
    fn to_string_c(&self) -> Result<String> {
        if (*self).is_null() {
            bail!("Tried to convert nullptr to string")
        }
        unsafe { Ok(CStr::from_ptr(*self as *const i8).to_str()?.to_string()) }
    }
}

impl<const S: usize> ToStringC for [u8; S] {
    fn to_string_c(&self) -> Result<String> {
        self.as_ptr().to_string_c()
    }
}

unsafe fn guarded_array_to_slice<'a, T, F: Fn(*const T) -> bool>(
    ptr: *const T,
    f_is_end: F,
) -> &'a [T] {
    let mut count = 0;
    let mut counter_ptr = ptr;

    while !f_is_end(counter_ptr) {
        count += 1;
        unsafe { counter_ptr = counter_ptr.add(1) };
    }
    unsafe { std::slice::from_raw_parts(ptr, count) }
}

fn idify(str: &str) -> String {
    str.to_ascii_lowercase()
        .chars()
        .filter(|c| matches!(c, '0'..='9' | 'a'..='z'))
        .collect()
}

fn build_ability(index: u32, ability: &rom::Ability) -> Result<json::Ability> {
    Ok(json::Ability {
        num: index,
        name: ability.name.to_string_c()?,
        desc: ability.description.to_string_c().unwrap_or("".to_string()),
        shortDesc: ability.description.to_string_c().unwrap_or("".to_string()),
    })
}
fn build_poke_abilities(
    species: &SpeciesInfo,
    abilities: &[Ability],
) -> Result<json::PokemonAbilities> {
    let mut pk_abilities = json::PokemonAbilities {
        zero: Some(
            abilities
                .get(species.abilities[0] as usize)
                .context("getting ability in list")?
                .name
                .to_string_c()?,
        ),
        ..Default::default()
    };

    if species.abilities[1] != species.abilities[0] && species.abilities[1] > 0 {
        pk_abilities.one = Some(
            abilities
                .get(species.abilities[1] as usize)
                .context("getting ability in list")?
                .name
                .to_string_c()?,
        );
    }
    if species.abilities[2] != species.abilities[0] && species.abilities[2] > 0 {
        pk_abilities.H = Some(
            abilities
                .get(species.abilities[2] as usize)
                .context("getting ability in list")?
                .name
                .to_string_c()?,
        );
    }

    Ok(pk_abilities)
}

enum Override {
    Keep,
    Drop,
    Renamed(String),
}

fn get_override_name(index: usize, info: RomInfo) -> Override {
    let species = &info.species[index];

    let name = match species.speciesName.to_string_c() {
        Err(_) => return Override::Drop,
        Ok(n) => n,
    };

    let formes = match get_species_formes(species) {
        None => return Override::Keep,
        Some(f) => f,
    };

    let forme_index = match formes.iter().position(|fid| *fid as usize == index) {
        None => return Override::Drop,
        Some(f) => f,
    };

    let entry = match info.override_list.0.get(&name) {
        None if forme_index == 0 => return Override::Keep,
        None => return Override::Drop,
        Some(e) => e,
    };

    match entry.get(&forme_index) {
        None => Override::Drop,
        Some(name) => Override::Renamed(name.clone()),
    }
}

fn get_species_name(index: usize, info: RomInfo) -> Result<String> {
    if let Override::Renamed(n) = get_override_name(index, info) {
        return Ok(n);
    }

    let species = &info.species[index];
    let name = species.speciesName.to_string_c()?;
    match get_species_formes(species) {
        None => Ok(name),
        Some(list) if list[0] as usize == index => Ok(name),
        Some(_) => Ok(format!("{name}-{index}-UNKNOWN")),
    }
}

fn poke_is_valid(index: usize, info: RomInfo) -> bool {
    let species = &info.species[index];

    if species.natDexNum == 0 {
        return false;
    }
    !matches!(get_override_name(index, info), Override::Drop)
}

fn build_evos(species: &SpeciesInfo, info: RomInfo) -> Result<Option<Vec<PokemonEvolution>>> {
    fn build_evo(evolution: &Evolution, info: RomInfo) -> Result<PokemonEvolution> {
        let method = EvoType::from_int(evolution.method as u32).unwrap_or(EvoType::EVO_NONE);
        let target_index = evolution.targetSpecies as usize;
        Ok(PokemonEvolution {
            target: get_species_name(target_index, info)?,
            level: match method {
                m if m.to_string().starts_with("Level") => Some(evolution.param as u32),
                _ => None,
            },
            item: match method {
                m if m.to_string().starts_with("Item") => {
                    Some(info.items[evolution.param as usize].name.to_string_c()?)
                }
                _ => None,
            },
            condition: match method {
                EvoType::EVO_ITEM_DAY => Some("Used during the day"),
                _ => None,
            }
            .map(str::to_string),
        })
    }

    let evos = match rom::get_species_evos(species) {
        None => return Ok(None),
        Some(evos) => evos,
    };

    Ok(Some(
        evos.iter()
            .filter(|i| poke_is_valid(i.targetSpecies as usize, info))
            .map(|evo| build_evo(evo, info))
            .collect::<Result<_>>()?,
    ))
}

fn build_formes(species: &SpeciesInfo, info: RomInfo) -> Result<Option<Vec<String>>> {
    let formes = match rom::get_species_formes(species) {
        None => return Ok(None),
        Some(f) => f,
    };

    Ok(Some(
        formes
            .iter()
            .filter(|i| poke_is_valid(**i as usize, info))
            .map(|i| get_species_name(*i as usize, info))
            .collect::<Result<_>>()?,
    ))
}

fn build_poke(species_index: usize, info: RomInfo) -> Result<json::Pokemon> {
    let species = &info.species[species_index];
    Ok(Pokemon {
        num: species.natDexNum as _,
        name: get_species_name(species_index, info)?,
        types: rom::get_types(species)?,
        gender: None,
        genderRatio: None,
        baseStats: Stats {
            hp: species.baseHP,
            atk: species.baseAttack,
            def: species.baseDefense,
            spe: species.baseSpeed,
            spa: species.baseSpAttack,
            spd: species.baseSpDefense,
        },

        abilities: build_poke_abilities(species, info.abilities)?,
        weightkg: species.weight as f32 / 10.0,
        evos: build_evos(species, info)?,
        eggGroups: vec![],
        forme: None,
        formes: build_formes(species, info)?,
        requiredItems: None,
        unusable: None,
    })
}

fn build_move(move_index: usize, info: RomInfo) -> Result<Move> {
    let move_info = &info.moves[move_index];

    let category =
        DamageCategory::from_int(move_info.category() as u32).context("Getting move category")?;
    let r#type = Type::from_int(move_info.type_() as u32).context("Getting move type")?;

    Ok(Move {
        name: move_info.name.to_string_c()?,
        num: move_index as u32,
        pp: move_info.pp as u32,
        basePower: move_info.power() as _,
        accuracy: json::MoveAccuracy::Number(move_info.accuracy() as _),
        category: category.to_name(),
        priority: move_info.priority(),
        critRatio: move_info.criticalHitStage() as i32,
        r#type: r#type.to_name(),
        target: String::new(),
        desc: move_info.description.to_string_c()?,
        shortDesc: move_info.description.to_string_c()?,
        flags: Default::default(),
        willCrit: None,
        drain: None,
        recoil: None,
        selfEffects: None,
        multihit: None,
        zMove: None,
        secondaries: None,
    })
}

fn build_learnset(species_index: usize, info: RomInfo) -> Result<Learnset> {
    let species = &info.species[species_index];

    let level_up_moves: Vec<LearnsetEntry> = get_species_levelup_moves(species)
        .unwrap_or(&[])
        .iter()
        .map(|lvlup_move| {
            Ok(LearnsetEntry {
                how: json::Method::lvl,
                level: Some(lvlup_move.level as _),
                move_: idify(&info.moves[lvlup_move.move_ as usize].name.to_string_c()?),
            })
        })
        .collect::<Result<_>>()?;

    let teachable_moves: Vec<LearnsetEntry> = get_species_teachable_moves(species)
        .unwrap_or(&[])
        .iter()
        .map(|move_| {
            Ok(LearnsetEntry {
                how: json::Method::tm,
                level: None,
                move_: idify(&info.moves[*move_ as usize].name.to_string_c()?),
            })
        })
        .collect::<Result<_>>()?;

    let mut moves = Vec::new();
    moves.extend(level_up_moves);
    moves.extend(teachable_moves);
    Ok(Learnset(moves))
}

fn build_area(index: usize, info: RomInfo) -> Result<Area> {
    let wild_info = &info.encounters[index];

    fn build_location(name: &str, encounters: &[WildPokemon], info: RomInfo) -> Result<Location> {
        let mut encounters = encounters
            .iter()
            .map(|e| {
                Ok(Encounter {
                    species: get_species_name(e.species as usize, info)?,
                    chance: None,
                    level: Some((e.minLevel as _, e.maxLevel as _)),
                })
            })
            .collect::<Result<Vec<_>>>()?;
        encounters.sort_by(|a, b| a.species.cmp(&b.species));
        encounters.dedup_by(|a, b| a.species == b.species);

        Ok(Location {
            location: name.to_string(),
            encounters,
        })
    }
    let land = get_land_encounters(wild_info).map(|i| build_location("land", i, info));
    let water = get_water_encounters(wild_info).map(|i| build_location("water", i, info));
    let rock = get_rock_encounters(wild_info).map(|i| build_location("rock", i, info));
    let fishing = get_fishing_encounters(wild_info)
        .iter()
        .flat_map(|(a, b, c)| [a, b, c])
        .zip(["oldRod", "goodRod", "superRod"])
        .map(|(encounters, name)| build_location(name, encounters, info))
        .collect::<Vec<_>>();

    let locations = land
        .into_iter()
        .chain(water.into_iter())
        .chain(rock.into_iter())
        .chain(fishing.into_iter())
        .collect::<Result<Vec<_>>>()?;
    let name = get_encounter_area_name(wild_info.mapGroup, wild_info.mapNum)
        .context("getting associated map")?;
    Ok(Area { name, locations })
}

fn main() -> Result<()> {
    let info = get_info();

    let abilities: IndexMap<String, json::Ability> = info
        .abilities
        .iter()
        .zip(0..)
        .map(|(ability, index)| {
            let ability = build_ability(index, ability)?;
            Ok((idify(&ability.name), ability))
        })
        .collect::<Result<_>>()?;

    let mut pokemons: IndexMap<String, Pokemon> = (0..info.species.len())
        .filter(|i| poke_is_valid(*i, info))
        .map(|i| build_poke(i, info))
        .collect::<Result<Vec<_>>>()?
        .into_iter()
        .map(|pokemon| (idify(&pokemon.name), pokemon))
        .collect();
    pokemons.sort_by_cached_key(|_, v| v.num);

    let moves: IndexMap<String, Move> = (1..info.moves.len())
        .map(|i| {
            let move_ = build_move(i, info)?;
            Ok((idify(&move_.name), move_))
        })
        .collect::<Result<_>>()?;

    let learnsets: IndexMap<String, Learnset> = info
        .species
        .iter()
        .zip(0..)
        .filter(|(_, i)| poke_is_valid(*i, info))
        .map(|(_, index)| {
            let learnset = build_learnset(index, info)?;
            Ok((idify(&get_species_name(index, info)?), learnset))
        })
        .collect::<Result<_>>()?;

    let areas = (0..info.encounters.len())
        .map(|i| {
            let area = build_area(i, info)?;
            Ok((idify(&area.name), area))
        })
        .collect::<Result<_>>()?;

    json::export(
        &PathBuf::from("output"),
        &Database {
            abilities,
            pokemons,
            moves,
            learnsets,
            areas,
        },
    )?;
    Ok(())
}
