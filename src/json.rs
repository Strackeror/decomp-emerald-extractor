use anyhow::Result;
use indexmap::IndexMap;
use serde::Serialize;
use std::collections::BTreeMap;
use std::fs::File;
use std::path::Path;

#[allow(non_snake_case)]
#[derive(Serialize, Debug)]
pub struct PokemonGenderRatio {
    pub M: f32,
    pub F: f32,
}

#[allow(dead_code)]
#[derive(Serialize, Debug, Clone)]
pub struct Stats {
    pub hp: u8,
    pub atk: u8,
    pub def: u8,
    pub spe: u8,
    pub spa: u8,
    pub spd: u8,
}

#[allow(non_snake_case)]
#[serde_with::skip_serializing_none]
#[derive(Serialize, Debug, Clone, Default)]
pub struct PokemonAbilities {
  #[serde(rename = "0")]
  pub zero: Option<String>,
  #[serde(rename = "1")]
  pub one: Option<String>,
  pub H: Option<String>
}

#[allow(non_snake_case)]
#[serde_with::skip_serializing_none]
#[derive(Serialize, Debug, Clone, Default)]
    pub struct PokemonEvolution {
    pub target: String,
    pub level: Option<u32>,
    pub condition: Option<String>,
    pub item: Option<String>,
}

#[allow(non_snake_case)]
#[serde_with::skip_serializing_none]
#[derive(Serialize, Debug)]
pub struct Pokemon {
    pub num: u32,
    pub name: String,
    pub types: Vec<String>,
    pub gender: Option<String>,
    pub genderRatio: Option<PokemonGenderRatio>,
    pub baseStats: Stats,
    pub abilities: PokemonAbilities,
    pub weightkg: f32,

    pub eggGroups: Vec<String>,

    pub evos: Option<Vec<PokemonEvolution>>,

    pub forme: Option<String>,
    pub formes: Option<Vec<String>>,
    pub requiredItems: Option<Vec<String>>,

    pub unusable: Option<bool>,
}

#[derive(Serialize)]
#[serde(untagged)]
pub enum MoveAccuracy {
    Number(i32),
    Boolean(bool),
}

#[derive(Serialize)]
#[serde(untagged)]
pub enum MoveMultihit {
    Number(i32),
    Range(i32, i32),
}

#[serde_with::skip_serializing_none]
#[derive(Serialize, Default, PartialEq)]
pub struct BoostTable {
    pub atk: Option<i8>,
    pub def: Option<i8>,
    pub spa: Option<i8>,
    pub spd: Option<i8>,
    pub spe: Option<i8>,
    pub accuracy: Option<i8>,
    pub evasion: Option<i8>,
}

#[derive(Serialize)]
pub struct SelfEffect {
    pub boosts: BoostTable,
}

#[allow(non_snake_case)]
#[serde_with::skip_serializing_none]
#[derive(Serialize, Default)]
pub struct MoveSecondary {
    pub chance: i32,
    pub boosts: Option<BoostTable>,
    pub status: Option<String>,
    pub volatileStatus: Option<String>,
    #[serde(rename = "self")]
    pub selfEffects: Option<SelfEffect>,
}

#[allow(non_snake_case)]
#[serde_with::skip_serializing_none]
#[derive(Serialize, Default)]
pub struct MoveZMove {
    pub basePower: Option<i32>,
    pub effect: Option<String>,
    pub boosts: Option<BoostTable>,
}

#[allow(non_snake_case)]
#[serde_with::skip_serializing_none]
#[derive(Serialize)]
pub struct Move {
    pub num: u32,
    pub accuracy: MoveAccuracy,
    pub basePower: u32,
    pub category: String,
    pub name: String,
    pub pp: u32,
    pub priority: i32,
    pub critRatio: i32,
    pub r#type: String,
    pub target: String,
    pub desc: String,
    pub shortDesc: String,
    pub flags: BTreeMap<String, u8>,

    pub willCrit: Option<bool>,
    pub drain: Option<(i32, i32)>,
    pub recoil: Option<(i32, i32)>,
    pub multihit: Option<MoveMultihit>,
    #[serde(rename = "self")]
    pub selfEffects: Option<SelfEffect>,
    pub zMove: Option<MoveZMove>,
    pub secondaries: Option<Vec<MoveSecondary>>,
}

#[allow(non_camel_case_types)]
#[derive(Serialize)]
pub enum Method {
    lvl,
    tm,
    tutor,
    egg,
}

#[serde_with::skip_serializing_none]
#[derive(Serialize)]
pub struct LearnsetEntry {
    #[serde[rename = "move"]]
    pub move_: String,
    pub how: Method,
    pub level: Option<i16>,
}

#[derive(Serialize)]
pub struct Learnset(pub Vec<LearnsetEntry>);

#[derive(Serialize)]
#[allow(non_snake_case)]
pub struct Ability {
    pub name: String,
    pub num: u32,
    pub desc: String,
    pub shortDesc: String,
}

#[derive(Serialize)]
#[allow(non_snake_case)]
pub struct Encounter {
    pub species: String,
    pub chance: Option<f32>,
    pub level: Option<(u32, u32)>
}

#[derive(Serialize)]
#[allow(non_snake_case)]
pub struct Location {
    pub location: String,
    pub encounters: Vec<Encounter>
}

#[derive(Serialize)]
#[allow(non_snake_case)]
pub struct Area {
    pub name: String,
    pub locations: Vec<Location>,
}

#[derive(Default)]
pub struct Database {
    pub moves: IndexMap<String, Move>,
    pub abilities: IndexMap<String, Ability>,
    pub learnsets: IndexMap<String, Learnset>,
    pub pokemons: IndexMap<String, Pokemon>,
    pub areas: IndexMap<String, Area>,
}

pub fn export(path: &Path, db: &Database) -> Result<()> {
    serde_json::to_writer_pretty(File::create(path.join("abilities.json"))?, &db.abilities)?;
    serde_json::to_writer_pretty(File::create(path.join("learnsets.json"))?, &db.learnsets)?;
    serde_json::to_writer_pretty(File::create(path.join("moves.json"))?, &db.moves)?;
    serde_json::to_writer_pretty(File::create(path.join("areas.json"))?, &db.areas)?;
    serde_json::to_writer_pretty(File::create(path.join("pokedex.json"))?, &db.pokemons)?;
    Ok(())
}
