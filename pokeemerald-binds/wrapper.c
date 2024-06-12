#include "wrapper.h"

// Special defines for the graphics, so we can get the paths easily
#define u32 s8
#define INCBIN_U32(a) a
#define INCBIN_U8(a)                                                           \
  {}
#include "data/graphics/pokemon.h"
#undef u32
#undef INCBIN_U32

#define _(a) a
#define INCBIN_U32(a)                                                          \
  {}
#define INCBIN_U16(a)                                                          \
  {}
#define INCBIN_U8(a)                                                           \
  {}

union AnimCmd sAnim_GeneralFrame0[] = {};
#include "data/pokemon_graphics/front_pic_anims.h"


#include "anims.h"
#include "metaprogram.h"

#undef COMPOUND_STRING
#define COMPOUND_STRING(a) a
#define min(a, b) ((a) > (b) ? (b) : (a))
#define ARRAY_COUNT(array) (size_t)(sizeof(array) / sizeof((array)[0]))

#include "constants/abilities.h"
#include "constants/battle.h"
#include "constants/cries.h"
#include "constants/form_change_types.h"
#include "constants/items.h"
#include "constants/map_groups.h"
#include "constants/moves.h"
#include "constants/pokedex.h"
#include "constants/region_map_sections.h"
#include "constants/species.h"

#include "data/pokemon/form_change_tables.h"

#include "data/pokemon/form_change_table_pointers.h"
#include "data/pokemon/form_species_tables.h"
#include "data/pokemon/level_up_learnsets/gen_9.h" // Scarlet/Violet
#include "data/pokemon/teachable_learnsets.h"

#include "data/abilities.h"
#include "data/moves_info.h"
#include "data/pokemon/species_info.h"

// ///
// /// Items
// ///

#include "constants/hold_effects.h"
#include "constants/item.h"
#include "constants/item_effects.h"
#include "constants/items.h"
#include "constants/tms_hms.h"


#define ENUM_TM(id) CAT(ITEM_TM_, id),
#define ENUM_HM(id) CAT(ITEM_HM_, id),
enum
{
    ENUM_TM_START_ = ITEM_TM01 - 1,
    FOREACH_TM(ENUM_TM)

    ENUM_HM_START_ = ITEM_HM01 - 1,
    FOREACH_HM(ENUM_HM)
};

#undef ENUM_TM
#undef ENUM_HM

#define ENUM_TM(id) CAT(MOVE_, id),
#define ENUM_HM(id) CAT(MOVE_, id),

const u16 gTmList[] = {
  FOREACH_TM(ENUM_TM)
  FOREACH_HM(ENUM_HM)
  0xffff,
};

#undef ENUM_TM
#undef ENUM_HM

#include "item_effects.h"

#include "data/pokemon/item_effects.h"
#include "data/items.h"


///
/// Areas
///

#include "constants/maps.h"
#include "constants/map_groups.h"
#include "data/wild_encounters.h"
