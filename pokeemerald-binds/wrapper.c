#include "wrapper.h"

#define _(a) a
#define INCBIN_U32(a) {}
#define INCBIN_U16(a) {}
#define INCBIN_U8(a) {}

#define COMPOUND_STRING(a) a

#include "data.h"

#include "pokemon_animation.h"
const union AnimCmd sAnim_GeneralFrame0[] = { }; 

#include "constants/battle.h"
#include "constants/battle_frontier.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_script_commands.h"
#include "constants/battle_partner.h"
#include "constants/cries.h"
#include "constants/form_change_types.h"
#include "constants/hold_effects.h"
#include "constants/item_effects.h"
#include "constants/items.h"
#include "constants/layouts.h"
#include "constants/moves.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "constants/union_room.h"
#include "constants/weather.h"

#include "data/graphics/pokemon.h"
#include "data/pokemon_graphics/front_pic_anims.h"

#include "data/pokemon/trainer_class_lookups.h"
#include "data/pokemon/experience_tables.h"

#include "data/pokemon/level_up_learnsets/gen_9.h" // Scarlet/Violet
#include "data/pokemon/teachable_learnsets.h"
#include "data/pokemon/form_species_tables.h"
#include "data/pokemon/form_change_tables.h"
#include "data/pokemon/form_change_table_pointers.h"

#include "data/pokemon/species_info.h"

#include "data/moves_info.h"
#include "data/abilities.h"

///
/// Items
///

#include "item_use.h"
#include "constants/items.h"
#include "constants/item_effects.h"
#include "constants/hold_effects.h"

void ItemUseOutOfBattle_IncreaseIV(u8){};
void ItemUseOutOfBattle_InfiniteRepel(u8){};
void ItemUseOutOfBattle_TmCase(u8){};
void ItemUseOutOfBattle_PokeRadar(u8){};
void ItemUseOutOfBattle_MedKit(u8){};
void ItemUseOutOfBattle_PokeVial(u8){};

void ItemUseOutOfBattle_Mail(u8){};
void ItemUseOutOfBattle_Bike(u8){};
void ItemUseOutOfBattle_Rod(u8){};
void ItemUseOutOfBattle_Itemfinder(u8){};
void ItemUseOutOfBattle_PokeblockCase(u8){};
void ItemUseOutOfBattle_CoinCase(u8){};
void ItemUseOutOfBattle_PokemonBoxLink(u8){};
void ItemUseOutOfBattle_PowderJar(u8){};
void ItemUseOutOfBattle_SSTicket(u8){};
void ItemUseOutOfBattle_WailmerPail(u8){};
void ItemUseOutOfBattle_Medicine(u8){};
void ItemUseOutOfBattle_AbilityCapsule(u8){};
void ItemUseOutOfBattle_AbilityPatch(u8){};
void ItemUseOutOfBattle_Mint(u8){};
void ItemUseOutOfBattle_ResetEVs(u8){};
void ItemUseOutOfBattle_ReduceEV(u8){};
void ItemUseOutOfBattle_SacredAsh(u8){};
void ItemUseOutOfBattle_PPRecovery(u8){};
void ItemUseOutOfBattle_PPUp(u8){};
void ItemUseOutOfBattle_RareCandy(u8){};
void ItemUseOutOfBattle_DynamaxCandy(u8){};
void ItemUseOutOfBattle_TMHM(u8){};
void ItemUseOutOfBattle_Repel(u8){};
void ItemUseOutOfBattle_Lure(u8){};
void ItemUseOutOfBattle_EscapeRope(u8){};
void ItemUseOutOfBattle_BlackWhiteFlute(u8){};
void ItemUseOutOfBattle_EvolutionStone(u8){};
void ItemUseOutOfBattle_Berry(u8){};
void ItemUseOutOfBattle_EnigmaBerry(u8){};
void ItemUseOutOfBattle_FormChange(u8){};
void ItemUseOutOfBattle_FormChange_ConsumedOnUse(u8){};
void ItemUseOutOfBattle_RotomCatalog(u8){};
void ItemUseOutOfBattle_ZygardeCube(u8){};
void ItemUseOutOfBattle_Fusion(u8){};
void ItemUseOutOfBattle_Honey(u8){};
void ItemUseOutOfBattle_CannotUse(u8){};
void ItemUseOutOfBattle_ExpShare(u8){};

#include "data/pokemon/item_effects.h"
#include "data/items.h"


///
/// Areas
///

#include "data/region_map/region_map_entries.h"
#include "data/wild_encounters.h"
