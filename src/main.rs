use std::collections::BTreeMap;
use std::ffi::CStr;
use std::path::PathBuf;

use anyhow::bail;
use anyhow::Context;
use anyhow::Result;
use indexmap::IndexMap;
use json::Database;
use json::Pokemon;
use json::Stats;
use pokeemerald_binds::gAbilitiesInfo;
use pokeemerald_binds::gSpeciesInfo;
use pokeemerald_binds::Ability;
use pokeemerald_binds::SpeciesInfo;
use pokeemerald_binds::ABILITIES_COUNT_GEN9;
use pokeemerald_binds::SPECIES_EGG;

mod json;

trait ToStringC {
    fn to_string_c(&self) -> Result<String>;
}

impl ToStringC for *const u8 {
    fn to_string_c(&self) -> Result<String> {
        if *self == std::ptr::null() {
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

fn get_type(poke_type: u8) -> Result<String> {
    use pokeemerald_binds::{
        TYPE_BUG, TYPE_DARK, TYPE_DRAGON, TYPE_ELECTRIC, TYPE_FAIRY, TYPE_FIGHTING, TYPE_FIRE,
        TYPE_FLYING, TYPE_GHOST, TYPE_GRASS, TYPE_GROUND, TYPE_ICE, TYPE_MYSTERY, TYPE_NONE,
        TYPE_NORMAL, TYPE_POISON, TYPE_PSYCHIC, TYPE_ROCK, TYPE_STEEL, TYPE_WATER,
    };
    let str = match poke_type as u32 {
        TYPE_NONE => "None",
        TYPE_NORMAL => "Normal",
        TYPE_FIGHTING => "Fighting",
        TYPE_FLYING => "Flying",
        TYPE_POISON => "Poison",
        TYPE_GROUND => "Ground",
        TYPE_ROCK => "Rock",
        TYPE_BUG => "Bug",
        TYPE_GHOST => "Ghost",
        TYPE_STEEL => "Steel",
        TYPE_MYSTERY => "Mystery",
        TYPE_FIRE => "Fire",
        TYPE_WATER => "Water",
        TYPE_GRASS => "Grass",
        TYPE_ELECTRIC => "Electric",
        TYPE_PSYCHIC => "Psychic",
        TYPE_ICE => "Ice",
        TYPE_DRAGON => "Dragon",
        TYPE_DARK => "Dark",
        TYPE_FAIRY => "Fairy",
        _ => bail!("Invalid type: {poke_type}"),
    };
    Ok(str.to_string())
}
fn idify(str: &str) -> String {
    str.to_ascii_lowercase()
        .chars()
        .filter(|c| matches!(c, '0'..='9' | 'a'..='z'))
        .collect()
}

fn get_species_info() -> Vec<SpeciesInfo> {
    const SPECIES_COUNT: usize = SPECIES_EGG as usize;

    let slice = unsafe { std::slice::from_raw_parts(gSpeciesInfo.as_ptr(), SPECIES_COUNT) };
    Vec::from(slice)
}

fn get_types(species: &SpeciesInfo) -> Result<Vec<String>> {
    if species.types[0] == species.types[1] {
        Ok(vec![get_type(species.types[0])?])
    } else {
        Ok(vec![
            get_type(species.types[0])?,
            get_type(species.types[1])?,
        ])
    }
}

fn get_abilities(
    species: &SpeciesInfo,
    abilities: &[json::Ability],
) -> Result<json::PokemonAbilities> {
    let mut pk_abilities = json::PokemonAbilities {
        zero: Some(
            abilities
                .get(species.abilities[0] as usize)
                .context("getting ability in list")?
                .name
                .clone(),
        ),
        ..Default::default()
    };

    if species.abilities[1] != species.abilities[0] && species.abilities[1] > 0 {
        pk_abilities.one = Some(
            abilities
                .get(species.abilities[1] as usize)
                .context("getting ability in list")?
                .name
                .clone(),
        );
    }
    if species.abilities[2] != species.abilities[0] && species.abilities[2] > 0 {
        pk_abilities.H = Some(
            abilities
                .get(species.abilities[2] as usize)
                .context("getting ability in list")?
                .name
                .clone(),
        );
    }

    Ok(pk_abilities)
}

fn poke_from_species_info(
    species: &SpeciesInfo,
    abilities: &[json::Ability],
) -> Result<json::Pokemon> {
    Ok(Pokemon {
        num: species.natDexNum as _,
        name: species.speciesName.to_string_c()?,
        types: get_types(species)?,
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

        abilities: get_abilities(species, abilities)?,
        weightkg: species.weight as f32,
        prevo: None,
        evoLevel: None,
        evoType: None,
        evoItem: None,
        evoCondition: None,
        evos: None,
        eggGroups: vec![],
        baseSpecies: None,
        forme: None,
        formes: None,
        requiredItems: None,
        unusable: None,
    })
}

fn get_abilities_info() -> Vec<Ability> {
    const COUNT: usize = ABILITIES_COUNT_GEN9 as usize;
    let slice = unsafe { std::slice::from_raw_parts(gAbilitiesInfo.as_ptr(), COUNT) };
    Vec::from(slice)
}

fn ability_from_ability_info(index: u32, ability: &Ability) -> Result<json::Ability> {
    Ok(json::Ability {
        num: index,
        name: ability.name.to_string_c()?,
        desc: ability.description.to_string_c()?,
        shortDesc: ability.description.to_string_c()?,
    })
}

fn main() {
    let abilities = get_abilities_info()
        .into_iter()
        .zip(0..)
        .map(|(ability, index)| {
            let json_ability = ability_from_ability_info(index, &ability)?;
            Ok(json_ability)
        })
        .collect::<Result<Vec<_>>>()
        .unwrap();

    let pokemons = get_species_info()
        .into_iter()
        .map(|species_info| poke_from_species_info(&species_info, &abilities))
        .collect::<Result<Vec<_>>>()
        .unwrap();

    let abilities: IndexMap<String, json::Ability> = abilities
        .into_iter()
        .map(|ability| (idify(&ability.name), ability))
        .collect();
    let pokemons: IndexMap<String, Pokemon> = pokemons
        .into_iter()
        .map(|pokemon| (idify(&pokemon.name), pokemon))
        .collect();

    json::export(
        &PathBuf::from("target"),
        &Database {
            abilities,
            pokemons,
            ..Default::default()
        },
    )
    .unwrap();
}
