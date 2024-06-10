use std::collections::BTreeMap;
use std::sync::OnceLock;

use super::guarded_array_to_slice;
use anyhow::Context;
use anyhow::Result;
use convert_case::Case;
use convert_case::Casing;
use pokeemerald_binds::Item;
use pokeemerald_binds::WildPokemon;
use pokeemerald_binds::WildPokemonHeader;
use pokeemerald_binds::WildPokemonInfo;
use serde::Deserialize;

pub use pokeemerald_binds::Ability;
pub use pokeemerald_binds::DamageCategory;
pub use pokeemerald_binds::EvoType;
pub use pokeemerald_binds::Evolution;
pub use pokeemerald_binds::LevelUpMove;
pub use pokeemerald_binds::MapGroup;
pub use pokeemerald_binds::MoveInfo;
pub use pokeemerald_binds::SpeciesInfo;
pub use pokeemerald_binds::Type;

pub trait ToName: ToString {
    const PREFIX: &'static str;
    fn to_name(&self) -> String {
        (&self.to_string()[Self::PREFIX.len() + 1..]).to_case(Case::Title)
    }
}

impl ToName for Type {
    const PREFIX: &'static str = "TYPE";
}
impl ToName for MapGroup {
    const PREFIX: &'static str = "MAP";
}
impl ToName for DamageCategory {
    const PREFIX: &'static str = "DAMAGE_CATEGORY";
}

pub fn get_species_evos(species: &SpeciesInfo) -> Option<&[Evolution]> {
    use pokeemerald_binds::EVOLUTIONS_END;
    use pokeemerald_binds::EVO_NONE;

    if species.evolutions.is_null() {
        return None;
    }

    Some(unsafe {
        guarded_array_to_slice(species.evolutions, |evo| {
            let method = (*evo).method as u32;
            method == EVOLUTIONS_END || method == EVO_NONE
        })
    })
}

pub fn get_species_formes(species: &SpeciesInfo) -> Option<&[u16]> {
    use pokeemerald_binds::FORM_SPECIES_END;

    if species.formSpeciesIdTable.is_null() {
        return None;
    }
    Some(unsafe {
        guarded_array_to_slice(species.formSpeciesIdTable, |form_id| {
            *form_id as u32 == FORM_SPECIES_END
        })
    })
}

pub fn get_species_levelup_moves(species: &SpeciesInfo) -> Option<&[LevelUpMove]> {
    use pokeemerald_binds::LEVEL_UP_MOVE_END;
    if species.levelUpLearnset.is_null() {
        return None;
    }

    Some(unsafe {
        guarded_array_to_slice(species.levelUpLearnset, |lvl_up_move| {
            (*lvl_up_move).move_ as u32 == LEVEL_UP_MOVE_END
        })
    })
}

pub fn get_species_teachable_moves(species: &SpeciesInfo) -> Option<&[u16]> {
    use pokeemerald_binds::MOVE_UNAVAILABLE;
    if species.teachableLearnset.is_null() {
        return None;
    }

    Some(unsafe {
        guarded_array_to_slice(species.teachableLearnset, |move_| {
            (*move_) as u32 == MOVE_UNAVAILABLE
        })
    })
}

pub fn _get_species_egg_moves(_species: &SpeciesInfo) -> Option<&[u16]> {
    todo!()
}

unsafe fn get_encounters<'a>(
    info: *const WildPokemonInfo,
    count: usize,
) -> Option<&'a [WildPokemon]> {
    if info.is_null() {
        return None;
    }

    Some(std::slice::from_raw_parts((*info).wildPokemon, count))
}

pub fn get_land_encounters(wild: &WildPokemonHeader) -> Option<&[WildPokemon]> {
    unsafe { get_encounters(wild.landMonsInfo, 12) }
}

pub fn get_water_encounters(wild: &WildPokemonHeader) -> Option<&[WildPokemon]> {
    unsafe { get_encounters(wild.waterMonsInfo, 5) }
}

pub fn get_rock_encounters(wild: &WildPokemonHeader) -> Option<&[WildPokemon]> {
    unsafe { get_encounters(wild.rockSmashMonsInfo, 5) }
}

pub fn get_fishing_encounters(
    wild: &WildPokemonHeader,
) -> Option<(&[WildPokemon], &[WildPokemon], &[WildPokemon])> {
    let all_fishing = unsafe { get_encounters(wild.fishingMonsInfo, 10) }?;

    let (old_rod, rest) = all_fishing.split_at(2);
    let (good_rod, super_rod) = rest.split_at(3);
    Some((old_rod, good_rod, super_rod))
}

pub fn get_types(species: &SpeciesInfo) -> Result<Vec<String>> {
    let mut ret: Vec<Type> = species
        .types
        .iter()
        .map(|type_id| Type::from_int(*type_id as u32).context("type from id"))
        .collect::<Result<_>>()?;
    if ret[0] == ret[1] {
        _ = ret.pop();
    }
    Ok(ret.into_iter().map(|t| t.to_name()).collect())
}

fn get_species_info() -> &'static [SpeciesInfo] {
    use pokeemerald_binds::gSpeciesInfo;
    use pokeemerald_binds::NUM_SPECIES;

    const COUNT: usize = NUM_SPECIES as usize;
    unsafe { std::slice::from_raw_parts(gSpeciesInfo.as_ptr(), COUNT) }
}

fn get_abilities_info() -> &'static [Ability] {
    use pokeemerald_binds::gAbilitiesInfo;
    use pokeemerald_binds::ABILITIES_COUNT;

    const COUNT: usize = ABILITIES_COUNT as usize;
    unsafe { std::slice::from_raw_parts(gAbilitiesInfo.as_ptr(), COUNT) }
}

fn get_moves_info() -> &'static [MoveInfo] {
    use pokeemerald_binds::gMovesInfo;
    use pokeemerald_binds::MOVES_COUNT;

    const COUNT: usize = MOVES_COUNT as usize;
    unsafe { std::slice::from_raw_parts(gMovesInfo.as_ptr(), COUNT) }
}

fn get_item_info() -> &'static [Item] {
    use pokeemerald_binds::gItemsInfo;
    use pokeemerald_binds::ITEMS_COUNT;

    const COUNT: usize = ITEMS_COUNT as usize;
    unsafe { std::slice::from_raw_parts(gItemsInfo.as_ptr(), COUNT) }
}

fn get_encounter_info() -> &'static [WildPokemonHeader] {
    use pokeemerald_binds::gWildMonHeaders;

    unsafe { guarded_array_to_slice(gWildMonHeaders.as_ptr(), |h| (*h).mapGroup == 0xff) }
}

pub fn get_encounter_area_name(group: u8, num: u8) -> Option<String> {
    let index = ((group as u32) << 8) + (num as u32);
    MapGroup::from_int(index).map(|m|m.to_name())
}

#[derive(Deserialize)]
pub struct OverrideList(pub BTreeMap<String, BTreeMap<usize, String>>);
const OVERRIDE_LIST_STR: &str = include_str!("overrides.json");
static OVERRIDE_LIST: OnceLock<OverrideList> = OnceLock::new();

fn get_override_list() -> &'static OverrideList {
    OVERRIDE_LIST.get_or_init(|| serde_json::from_str(OVERRIDE_LIST_STR).unwrap())
}

#[derive(Clone, Copy)]
pub struct RomInfo {
    pub abilities: &'static [Ability],
    pub items: &'static [Item],
    pub moves: &'static [MoveInfo],
    pub species: &'static [SpeciesInfo],
    pub encounters: &'static [WildPokemonHeader],
    pub override_list: &'static OverrideList,
}

pub fn get_info() -> RomInfo {
    RomInfo {
        abilities: get_abilities_info(),
        items: get_item_info(),
        moves: get_moves_info(),
        species: get_species_info(),
        encounters: get_encounter_info(),
        override_list: get_override_list(),
    }
}
