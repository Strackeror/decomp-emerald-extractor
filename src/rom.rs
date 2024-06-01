use std::collections::BTreeMap;
use std::sync::OnceLock;

use super::guarded_array_to_slice;
use anyhow::Context;
use anyhow::Result;
use paste::paste;
use pokeemerald_binds::Item;
use serde::Deserialize;

pub use pokeemerald_binds::Ability;
pub use pokeemerald_binds::Evolution;
pub use pokeemerald_binds::LevelUpMove;
pub use pokeemerald_binds::MoveInfo;
pub use pokeemerald_binds::SpeciesInfo;

macro_rules! enum_int {
    (enum $name:ident : $type:ty { $prefix:ident... $($suffix:ident),* $(,)? } )  => {
        paste!{
            #[derive(Debug, Copy, Clone, PartialEq, Eq)]
            pub enum $name {
                $( [<$suffix:camel>] ),*
            }

            impl $name {
                pub fn from_int(n: $type) -> Option<$name> {
                    $(use pokeemerald_binds::[<$prefix _ $suffix>]);*;
                    match n as u32 {
                        $([<$prefix _ $suffix>] => Some($name::[<$suffix:camel>])),*,
                        _ => None
                    }
                }

                pub fn name(self) -> &'static str {
                    match self {
                        $($name::[<$suffix:camel>] => stringify!([<$suffix:camel>])),*
                    }
                }
            }
        }
    };
}

enum_int! {
    enum MoveCategory: u16 {
        DAMAGE_CATEGORY...
        PHYSICAL,
        SPECIAL,
        STATUS,
    }
}
enum_int! {
    enum Type : u8 {
        TYPE...
        NONE,
        NORMAL,
        FIGHTING,
        FLYING,
        POISON,
        GROUND,
        ROCK,
        BUG,
        GHOST,
        STEEL,
        MYSTERY,
        FIRE,
        WATER,
        GRASS,
        ELECTRIC,
        PSYCHIC,
        ICE,
        DRAGON,
        DARK,
        FAIRY
    }
}

enum_int! {
    enum EvoMethod: u16 {
        EVO...
        NONE,
        FRIENDSHIP,
        FRIENDSHIP_DAY,
        FRIENDSHIP_NIGHT,
        LEVEL,
        TRADE,
        TRADE_ITEM,
        ITEM,
        LEVEL_ATK_GT_DEF,
        LEVEL_ATK_EQ_DEF,
        LEVEL_ATK_LT_DEF,
        LEVEL_SILCOON,
        LEVEL_CASCOON,
        LEVEL_NINJASK,
        LEVEL_SHEDINJA,
        BEAUTY,
        LEVEL_FEMALE,
        LEVEL_MALE,
        LEVEL_NIGHT,
        LEVEL_DAY,
        LEVEL_DUSK,
        ITEM_HOLD_DAY,
        ITEM_HOLD_NIGHT,
        MOVE,
        FRIENDSHIP_MOVE_TYPE,
        MAPSEC,
        ITEM_MALE,
        ITEM_FEMALE,
        LEVEL_RAIN,
        SPECIFIC_MON_IN_PARTY,
        LEVEL_DARK_TYPE_MON_IN_PARTY,
        TRADE_SPECIFIC_MON,
        SPECIFIC_MAP,
        LEVEL_NATURE_AMPED,
        LEVEL_NATURE_LOW_KEY,
        CRITICAL_HITS,
        SCRIPT_TRIGGER_DMG,
        DARK_SCROLL,
        WATER_SCROLL,
        ITEM_NIGHT,
        ITEM_DAY,
        ITEM_HOLD,
        LEVEL_FOG,
        MOVE_TWO_SEGMENT,
        MOVE_THREE_SEGMENT,
        LEVEL_FAMILY_OF_THREE,
        LEVEL_FAMILY_OF_FOUR,
        LEVEL_MOVE_TWENTY_TIMES,
        LEVEL_RECOIL_DAMAGE_MALE,
        LEVEL_RECOIL_DAMAGE_FEMALE,
    }
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

pub fn get_species_egg_moves(species: &SpeciesInfo) -> Option<&[u16]> {
    todo!()
}

pub fn get_types(species: &SpeciesInfo) -> Result<Vec<String>> {
    let mut ret: Vec<Type> = species
        .types
        .iter()
        .map(|type_id| Type::from_int(*type_id).context("type from id"))
        .collect::<Result<_>>()?;
    if ret[0] == ret[1] {
        _ = ret.pop();
    }
    Ok(ret
        .into_iter()
        .map(Type::name)
        .map(str::to_string)
        .collect())
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

#[derive(Deserialize)]
pub struct FormeList(pub BTreeMap<String, Vec<String>>);
const FORMES_LIST_STR: &str = include_str!("formes.json");
static FORMES_LIST: OnceLock<FormeList> = OnceLock::new();

fn get_formes_list() -> &'static FormeList {
    FORMES_LIST.get_or_init(|| serde_json::from_str(FORMES_LIST_STR).unwrap())
}

#[derive(Clone, Copy)]
pub struct RomInfo {
    pub abilities: &'static [Ability],
    pub items: &'static [Item],
    pub moves: &'static [MoveInfo],
    pub species: &'static [SpeciesInfo],
    pub forme_list: &'static FormeList,
}

pub fn get_info() -> RomInfo {
    RomInfo {
        abilities: get_abilities_info(),
        items: get_item_info(),
        moves: get_moves_info(),
        species: get_species_info(),
        forme_list: get_formes_list(),
    }
}