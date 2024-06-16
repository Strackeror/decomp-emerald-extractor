use std::collections::BTreeMap;
use std::collections::HashSet;
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
use pokeemerald_binds::EggGroup;
use pokeemerald_binds::Item;
use pokeemerald_binds::MoveInfo;
use pokeemerald_binds::WildPokemon;
use rom::get_encounter_area_name;
use rom::get_fishing_encounters;
use rom::get_full_species_name;
use rom::get_info;
use rom::get_land_encounters;
use rom::get_rock_encounters;
use rom::get_species_evos;
use rom::get_species_formes;
use rom::get_species_formes_transitions;
use rom::get_species_levelup_moves;
use rom::get_species_teachable_moves;
use rom::get_tm_hm_list;
use rom::get_water_encounters;
use rom::DamageCategory;
use rom::EvoType;
use rom::Evolution;
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

#[derive(Clone, Copy)]
struct RomInfo<'a> {
    rom: rom::RomInfo,
    cosmetic_formes: &'a BTreeMap<u16, u16>,
}

impl<'a> RomInfo<'a> {
    fn species(&self, index: u16) -> &SpeciesInfo {
        &self.rom.species[index as usize]
    }
    fn item(&self, index: u16) -> &Item {
        &self.rom.items[index as usize]
    }
    fn r#move(&self, index: u16) -> &MoveInfo {
        &self.rom.moves[index as usize]
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

fn get_cosmetic_formes(species_list: &[SpeciesInfo]) -> BTreeMap<u16, u16> {
    let mut out_map = BTreeMap::new();
    for (index, species) in (0..).zip(species_list.iter()) {
        let formes = match get_species_formes(species) {
            None => continue,
            Some(f) => f,
        };

        for forme_index in formes.iter() {
            if *forme_index == index {
                break;
            }

            let base_species = &species_list[*forme_index as usize];
            if base_species.abilities == species.abilities
                && base_species.types == species.types
                && species.baseHP == base_species.baseHP
                && species.baseAttack == base_species.baseAttack
                && species.baseDefense == base_species.baseDefense
                && species.baseSpAttack == base_species.baseSpAttack
                && species.baseSpDefense == base_species.baseSpDefense
                && get_species_levelup_moves(species) == get_species_levelup_moves(base_species)
                && get_species_teachable_moves(species) == get_species_teachable_moves(base_species)
            {
                out_map.insert(index, *forme_index);
                break;
            }
        }
    }
    out_map
}

fn get_available_pokes(info: RomInfo) -> std::collections::HashSet<u16> {
    use std::collections::HashSet as Set;

    let mut set: Set<u16> = Set::new();
    for area in info.rom.encounters {
        let fish = match get_fishing_encounters(area) {
            None => (None, None, None),
            Some((a, b, c)) => (Some(a), Some(b), Some(c)),
        };
        let ground = get_land_encounters(area);
        let rock = get_rock_encounters(area);
        let surf = get_water_encounters(area);
        for location in [fish.0, fish.1, fish.2, ground, rock, surf]
            .into_iter()
            .flatten()
        {
            for poke in location {
                set.insert(
                    *info
                        .cosmetic_formes
                        .get(&poke.species)
                        .unwrap_or(&poke.species),
                );
            }
        }
    }

    let mut new_set = set.clone();
    for _ in 0..3 {
        let evo_set = new_set
            .iter()
            .map(|index| info.species(*index))
            .flat_map(|species| {
                get_species_evos(species)
                    .into_iter()
                    .flatten()
                    .map(|evo| evo.targetSpecies)
            })
            .collect::<Vec<_>>();
        let forme_set = new_set
            .iter()
            .map(|index| info.species(*index))
            .flat_map(|species| {
                get_species_formes_transitions(species)
                    .into_iter()
                    .flatten()
                    .map(|forme_change| forme_change.0)
            })
            .collect::<Vec<_>>();

        let prevo_set = info
            .rom
            .species
            .iter()
            .zip(0..)
            .filter(|(species, _)| {
                get_species_evos(species)
                    .into_iter()
                    .flatten()
                    .any(|e| new_set.contains(&e.targetSpecies))
            })
            .map(|(_, index)| index)
            .collect::<Set<_>>();

        new_set.clear();
        new_set.extend(evo_set);
        new_set.extend(forme_set);
        new_set.extend(prevo_set);

        new_set = new_set.difference(&set).cloned().collect();
        set.extend(&new_set)
    }

    set
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

fn poke_is_valid(index: u16, info: RomInfo) -> bool {
    let species = &info.species(index);
    if species.natDexNum == 0 {
        return false;
    }
    if info.cosmetic_formes.contains_key(&index) {
        return false;
    }
    true
}

fn build_evos(species: &SpeciesInfo, info: RomInfo) -> Result<Option<Vec<PokemonEvolution>>> {
    fn build_evo(evolution: &Evolution, info: RomInfo) -> Result<PokemonEvolution> {
        use EvoType as E;

        let method = E::from_int(evolution.method as u32).unwrap_or(E::EVO_NONE);
        let target_index = evolution.targetSpecies;
        let item_name = || info.item(evolution.param).name.to_string_c();
        let move_name = || info.r#move(evolution.param).name.to_string_c();
        Ok(PokemonEvolution {
            target: get_full_species_name(target_index).context("getting species name")?,
            level: None,
            item: None,
            condition: Some(match method {
                E::EVO_LEVEL => format!("Level {}", evolution.param),
                E::EVO_LEVEL_ATK_EQ_DEF => {
                    format!("Level {} when attack equals defense", evolution.param)
                }
                E::EVO_LEVEL_ATK_GT_DEF => format!(
                    "Level {} when attack is greater than defense",
                    evolution.param
                ),
                E::EVO_LEVEL_ATK_LT_DEF => format!(
                    "Level {} when defense is greater than attack",
                    evolution.param
                ),
                E::EVO_LEVEL_DAY => format!("Level {} during the day", evolution.param),
                E::EVO_LEVEL_NIGHT => format!("Level {} during the night", evolution.param),
                E::EVO_LEVEL_DUSK => format!("Level {} during dusk", evolution.param),
                E::EVO_LEVEL_MALE => format!("Level {} while male", evolution.param),
                E::EVO_LEVEL_FEMALE => format!("Level {} while female", evolution.param),

                E::EVO_TRADE => "Trade".to_string(),
                E::EVO_TRADE_ITEM => format!("Trade while holding {}", item_name()?),
                E::EVO_BEAUTY => "Beauty".to_string(),

                E::EVO_FRIENDSHIP => "Friendship".to_string(),
                E::EVO_FRIENDSHIP_DAY => "Friendship during the day".to_string(),
                E::EVO_FRIENDSHIP_NIGHT => "Friendship during the night".to_string(),

                E::EVO_ITEM => format!("Use {}", item_name()?),
                E::EVO_ITEM_DAY => format!("Use {} during the day", item_name()?),
                E::EVO_ITEM_NIGHT => format!("Use {} during the night", item_name()?),
                E::EVO_ITEM_HOLD => format!("Level-up while holding {}", item_name()?),
                E::EVO_ITEM_HOLD_DAY => {
                    format!("Level-up while holding {} during the day", item_name()?)
                }
                E::EVO_ITEM_HOLD_NIGHT => {
                    format!("Level-up while holding {} during the night", item_name()?)
                }
                E::EVO_ITEM_MALE => format!("Use {} while male", item_name()?),
                E::EVO_ITEM_FEMALE => format!("Use {} while female", item_name()?),

                E::EVO_CRITICAL_HITS => {
                    format!("Land {} critical hits in 1 battle", evolution.param)
                }

                evo if evo.c_name().starts_with("EVO_MOVE") => {
                    format!("Level after learning {}", move_name()?)
                }
                evo if evo.c_name().starts_with("EVO_LEVEL") => {
                    format!("Level {} with special conditions", evolution.param)
                }

                _ => format!(
                    "Other:{{type:{} param:{}}}",
                    method.to_name(),
                    evolution.param
                ),
            }),
        })
    }

    let evos = match rom::get_species_evos(species) {
        None => return Ok(None),
        Some(evos) => evos,
    };

    Ok(Some(
        evos.iter()
            .filter(|i| poke_is_valid(i.targetSpecies, info))
            .map(|evo| build_evo(evo, info))
            .collect::<Result<_>>()?,
    ))
}

fn build_egg_groups(species: &SpeciesInfo) -> Result<Vec<String>> {
    let mut vec = species
        .eggGroups
        .into_iter()
        .map(|e| Ok(EggGroup::from_int(e as u32).context("egg group")?.to_name()))
        .collect::<Result<Vec<_>>>()?;
    vec.dedup();
    Ok(vec)
}

fn get_forme_name(index: u16, info: RomInfo) -> Result<Option<String>> {
    let species = info.species(index);
    if get_species_formes(species).is_none() {
        return Ok(None);
    }

    let current_name = get_full_species_name(index).context("getting current name")?;
    let (_, forme) = match current_name.split_once(' ') {
        None => return Ok(None),
        Some(n) => n,
    };
    Ok(Some(forme.to_string()))
}

fn get_base_name(index: u16, info: RomInfo) -> Result<Option<String>> {
    let species = info.species(index);
    if get_species_formes(species).is_none() {
        return Ok(None);
    }
    Ok(Some(species.speciesName.to_string_c()?))
}

fn build_formes(species: &SpeciesInfo, info: RomInfo) -> Result<Option<Vec<String>>> {
    let formes = match get_species_formes(species) {
        None => return Ok(None),
        Some(f) => f,
    };

    let formes = formes
        .iter()
        .filter(|i| poke_is_valid(**i, info))
        .map(|i| get_full_species_name(*i).context("getting forme species name"))
        .collect::<Result<Vec<_>>>()?;
    if formes.len() <= 1 {
        return Ok(None);
    }
    Ok(Some(formes))
}

fn build_cosmetic_formes(index: u16, info: RomInfo) -> Result<Option<Vec<String>>> {
    let cosmetics = info
        .cosmetic_formes
        .iter()
        .filter(|(_, base)| **base == index)
        .map(|(cosmetic, _)| get_forme_name(*cosmetic, info))
        .collect::<Result<Vec<_>>>()?
        .into_iter()
        .flatten()
        .collect::<Vec<_>>();

    if cosmetics.is_empty() {
        Ok(None)
    } else {
        Ok(Some(cosmetics))
    }
}

fn build_poke(index: u16, info: RomInfo, available_pokes: &HashSet<u16>) -> Result<json::Pokemon> {
    let species = &info.species(index);
    let formes = build_formes(species, info)?;
    Ok(Pokemon {
        num: species.natDexNum as _,
        name: get_full_species_name(index).context("getting species name")?,
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

        abilities: build_poke_abilities(species, info.rom.abilities)?,
        weightkg: species.weight as f32 / 10.0,
        evos: build_evos(species, info)?,
        eggGroups: build_egg_groups(species)?,

        forme: get_forme_name(index, info)?,
        baseSpecies: get_base_name(index, info)?,
        formes,
        cosmeticFormes: build_cosmetic_formes(index, info)?,
        requiredItems: None,

        unusable: match available_pokes.contains(&index) {
            true => None,
            false => Some(true),
        },
    })
}

fn build_move(move_index: usize, info: RomInfo) -> Result<Move> {
    let move_info = &info.rom.moves[move_index];

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

fn build_learnset(species_index: u16, info: RomInfo) -> Result<Learnset> {
    let species = info.species(species_index);
    let tms = get_tm_hm_list();

    let level_up_moves: Vec<LearnsetEntry> = get_species_levelup_moves(species)
        .unwrap_or(&[])
        .iter()
        .map(|lvlup_move| {
            Ok(LearnsetEntry {
                how: json::Method::lvl,
                level: Some(lvlup_move.level as _),
                move_: idify(
                    &info.rom.moves[lvlup_move.move_ as usize]
                        .name
                        .to_string_c()?,
                ),
            })
        })
        .collect::<Result<_>>()?;

    let (tm_moves, tutor_moves) = get_species_teachable_moves(species)
        .unwrap_or(&[])
        .iter()
        .fold((Vec::new(), Vec::new()), |mut acc, elem| {
            match tms.contains(elem) {
                true => acc.0.push(elem),
                false => acc.1.push(elem),
            };
            acc
        });
    let tm_moves = tm_moves
        .into_iter()
        .map(|id| {
            Ok(LearnsetEntry {
                how: json::Method::tm,
                level: None,
                move_: idify(&info.rom.moves[*id as usize].name.to_string_c()?),
            })
        })
        .collect::<Result<Vec<_>>>()?;
    let tutor_moves = tutor_moves
        .into_iter()
        .map(|id| {
            Ok(LearnsetEntry {
                how: json::Method::tutor,
                level: None,
                move_: idify(&info.rom.moves[*id as usize].name.to_string_c()?),
            })
        })
        .collect::<Result<Vec<_>>>()?;

    let mut moves = Vec::new();
    moves.extend(level_up_moves);
    moves.extend(tm_moves);
    moves.extend(tutor_moves);
    Ok(Learnset(moves))
}

fn build_area(index: usize, info: RomInfo) -> Result<Area> {
    let wild_info = &info.rom.encounters[index];

    fn build_location(name: &str, encounters: &[WildPokemon], _info: RomInfo) -> Result<Location> {
        let mut encounters = encounters
            .iter()
            .map(|e| {
                Ok(Encounter {
                    species: get_full_species_name(e.species)
                        .context("getting area species name")?,
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
    let cosmetic_formes = get_cosmetic_formes(info.species);

    let info = RomInfo {
        rom: info,
        cosmetic_formes: &cosmetic_formes,
    };
    let available_pokes = get_available_pokes(info);

    let abilities: IndexMap<String, json::Ability> = info
        .rom
        .abilities
        .iter()
        .zip(0..)
        .map(|(ability, index)| {
            let ability = build_ability(index, ability)?;
            Ok((idify(&ability.name), ability))
        })
        .filter(|r| {
            r.as_ref()
                .map(|(index, _)| !index.is_empty())
                .unwrap_or(true)
        })
        .collect::<Result<_>>()?;

    let mut pokemons: IndexMap<String, Pokemon> = (0..info.rom.species.len() as u16)
        .filter(|i| poke_is_valid(*i, info))
        .map(|i| build_poke(i, info, &available_pokes))
        .collect::<Result<Vec<_>>>()?
        .into_iter()
        .map(|pokemon| (idify(&pokemon.name), pokemon))
        .collect();
    pokemons.sort_by_cached_key(|_, v| v.num);

    let moves: IndexMap<String, Move> = (1..info.rom.moves.len())
        .map(|i| {
            let move_ = build_move(i, info)?;
            Ok((idify(&move_.name), move_))
        })
        .collect::<Result<_>>()?;

    let learnsets: IndexMap<String, Learnset> = info
        .rom
        .species
        .iter()
        .zip(0..)
        .filter(|(_, i)| poke_is_valid(*i, info))
        .map(|(_, index)| {
            let learnset = build_learnset(index, info)?;
            let species_name =
                get_full_species_name(index).context("getting species name for learnset")?;
            Ok((idify(&species_name), learnset))
        })
        .collect::<Result<_>>()?;

    let areas = (0..info.rom.encounters.len())
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
