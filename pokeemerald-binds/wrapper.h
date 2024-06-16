#include "config.h"
#include "constants/global.h"
#include "constants/pokemon.h"
#include <stdint.h>

#define TRUE 1
#define FALSE 0
#define MAX_COMBO_MOVES 5
#define MAX_TRAINER_ITEMS 4

typedef int8_t s8;
typedef uint8_t u8;
typedef uint8_t bool8;

typedef int16_t s16;
typedef uint16_t u16;

typedef int32_t s32;
typedef uint32_t u32;

typedef int64_t s64;
typedef uint64_t u64;

union AnimCmd {
  s16 type;
};
#define ANIMCMD_FRAME(...)                                                     \
  { .type = -4 }
#define ANIMCMD_LOOP(_count)                                                   \
  { .type = -3 }
#define ANIMCMD_JUMP(_target)                                                  \
  { .type = -2 }
#define ANIMCMD_END                                                            \
  { .type = -1 }

struct Evolution {
  u16 method;
  u16 param;
  u16 targetSpecies;
};

#define FORM_SPECIES_END (0xffff)
struct SpeciesInfo /*0x8C*/
{
  /* 0x00 */ u8 baseHP;
  /* 0x01 */ u8 baseAttack;
  /* 0x02 */ u8 baseDefense;
  /* 0x03 */ u8 baseSpeed;
  /* 0x04 */ u8 baseSpAttack;
  /* 0x05 */ u8 baseSpDefense;
  /* 0x06 */ u8 types[2];
  /* 0x08 */ u8 catchRate;
  /* 0x09 */ u8 padding1;
  // expYield was changed from u8 to u16 for the new Exp System.
  /* 0x0A */ u16 expYield;
  /* 0x0C */ u16 evYield_HP : 2;
  u16 evYield_Attack : 2;
  u16 evYield_Defense : 2;
  u16 evYield_Speed : 2;
  /* 0x0D */ u16 evYield_SpAttack : 2;
  u16 evYield_SpDefense : 2;
  u16 padding2 : 4;
  /* 0x0E */ u16 itemCommon;
  /* 0x10 */ u16 itemRare;
  /* 0x12 */ u8 genderRatio;
  /* 0x13 */ u8 eggCycles;
  /* 0x14 */ u8 friendship;
  /* 0x15 */ u8 growthRate;
  /* 0x16 */ u8 eggGroups[2];

  // 3 abilities, no longer u8 because we have over 255 abilities now.
  /* 0x18 */ u16 abilities[NUM_ABILITY_SLOTS];

  /* 0x1E */ u8 safariZoneFleeRate;
  // Pokédex data
  /* 0x1F */ u8 categoryName[13];
  /* 0x1F */ u8 speciesName[POKEMON_NAME_LENGTH + 1];
  /* 0x2C */ u16 cryId;
  /* 0x2E */ u16 natDexNum;
  /* 0x30 */ u16 height; // in decimeters
  /* 0x32 */ u16 weight; // in hectograms
  /* 0x34 */ u16 pokemonScale;
  /* 0x36 */ u16 pokemonOffset;
  /* 0x38 */ u16 trainerScale;
  /* 0x3A */ u16 trainerOffset;
  /* 0x3C */ const s8 *description;
  /* 0x40 */ u8 bodyColor : 7;
  // Graphical Data
  u8 noFlip : 1;
  /* 0x41 */ u8 frontAnimDelay;
  /* 0x42 */ u8 frontAnimId;
  /* 0x43 */ u8 backAnimId;
  /* 0x44 */ const union AnimCmd *const *frontAnimFrames;
  /* 0x48 */ const s8 *frontPic;
  /* 0x4C */ const s8 *frontPicFemale;
  /* 0x50 */ const s8 *backPic;
  /* 0x54 */ const s8 *backPicFemale;
  /* 0x58 */ const s8 *palette;
  /* 0x5C */ const s8 *paletteFemale;
  /* 0x60 */ const s8 *shinyPalette;
  /* 0x64 */ const s8 *shinyPaletteFemale;
  /* 0x68 */ const u8 *iconSprite;
  /* 0x6C */ const u8 *iconSpriteFemale;
#if P_FOOTPRINTS
  /* 0x70 */ const u8 *footprint;
#endif
  // All Pokémon pics are 64x64, but this data table defines where in this 64x64
  // frame the sprite's non-transparent pixels actually are.
  /* 0x74 */ u8 frontPicSize;       // The dimensions of this drawn pixel area.
  /* 0x74 */ u8 frontPicSizeFemale; // The dimensions of this drawn pixel area.
  /* 0x75 */ u8 frontPicYOffset; // The number of pixels between the drawn pixel
                                 // area and the bottom edge.
  /* 0x76 */ u8 backPicSize;     // The dimensions of this drawn pixel area.
  /* 0x76 */ u8 backPicSizeFemale; // The dimensions of this drawn pixel area.
  /* 0x77 */ u8 backPicYOffset; // The number of pixels between the drawn pixel
                                // area and the bottom edge.
  /* 0x78 */ u8 iconPalIndex : 3;
  u8 iconPalIndexFemale : 3;
  u8 padding3 : 2;
  /* 0x79 */ u8
      enemyMonElevation; // This determines how much higher above the usual
                         // position the enemy Pokémon is during battle. Species
                         // that float or fly have nonzero values.
  // Flags
  /* 0x7A */ u32 isLegendary : 1;
  u32 isMythical : 1;
  u32 isUltraBeast : 1;
  u32 isTotem : 1;
  u32 isParadoxForm : 1;
  u32 isMegaEvolution : 1;
  u32 isPrimalReversion : 1;
  u32 isUltraBurst : 1;
  u32 isGigantamax : 1;
  u32 isAlolanForm : 1;
  u32 isGalarianForm : 1;
  u32 isHisuianForm : 1;
  u32 isPaldeanForm : 1;
  u32 cannotBeTraded : 1;
  u32 allPerfectIVs : 1;
  u32 dexForceRequired : 1; // This species will be taken into account for
                            // Pokédex ratings even if they have the
                            // "isMythical" flag set.
  u32 tmIlliterate : 1; // This species will be unable to learn the universal
                        // moves.
  u32 padding4 : 15;
  // Move Data
  /* 0x80 */ const struct LevelUpMove *levelUpLearnset;
  /* 0x84 */ const u16 *teachableLearnset;
  /* 0x88 */ const struct Evolution *evolutions;
  /* 0x84 */ const u16 *formSpeciesIdTable;
  /* 0x84 */ const struct FormChange *formChangeTable;
};

struct MoveInfo {
  const u8 *name;
  const u8 *description;
  u16 effect;
  u16 type : 5;
  u16 category : 2;
  u16 power : 9; // up to 511
  u16 accuracy : 7;
  u16 target : 9;
  u8 pp;
  union {
    u8 effect;
    u8 powerOverride;
  } zMove;

  s32 priority : 4;
  u32 recoil : 7;
  u32 strikeCount : 4; // Max 15 hits. Defaults to 1 if not set. May apply its
                       // effect on each hit.
  u32 criticalHitStage : 2;
  u32 alwaysCriticalHit : 1;
  u32 numAdditionalEffects : 2; // limited to 3 - don't want to get too crazy
  // 12 bits left to complete this word - continues into flags

  // Flags
  u32 makesContact : 1;
  u32 ignoresProtect : 1;
  u32 magicCoatAffected : 1;
  u32 snatchAffected : 1;
  u32 ignoresKingsRock : 1;
  u32 punchingMove : 1;
  u32 bitingMove : 1;
  u32 pulseMove : 1;
  u32 soundMove : 1;
  u32 ballisticMove : 1;
  u32 powderMove : 1;
  u32 danceMove : 1;
  u32 windMove : 1;
  u32 slicingMove : 1; // end of word
  u32 healingMove : 1;
  u32 minimizeDoubleDamage : 1;
  u32 ignoresTargetAbility : 1;
  u32 ignoresTargetDefenseEvasionStages : 1;
  u32 damagesUnderground : 1;
  u32 damagesUnderwater : 1;
  u32 damagesAirborne : 1;
  u32 damagesAirborneDoubleDamage : 1;
  u32 ignoreTypeIfFlyingAndUngrounded : 1;
  u32 thawsUser : 1;
  u32 ignoresSubstitute : 1;
  u32 forcePressure : 1;
  u32 cantUseTwice : 1;

  // Ban flags
  u32 gravityBanned : 1;
  u32 mirrorMoveBanned : 1;
  u32 meFirstBanned : 1;
  u32 mimicBanned : 1;
  u32 metronomeBanned : 1;
  u32 copycatBanned : 1;
  u32 assistBanned : 1; // Matches same moves as copycatBanned +
                        // semi-invulnerable moves and Mirror Coat.
  u32 sleepTalkBanned : 1;
  u32 instructBanned : 1;
  u32 encoreBanned : 1;
  u32 parentalBondBanned : 1;
  u32 skyBattleBanned : 1;
  u32 sketchBanned : 1;
  u32 padding : 5; // end of word

  u32 argument;

  // primary/secondary effects
  const struct AdditionalEffect *additionalEffects;

  // contest parameters
  u8 contestEffect;
  u8 contestCategory : 3;
  u8 contestComboStarterId;
  u8 contestComboMoves[MAX_COMBO_MOVES];
};

#define EFFECTS_ARR(...)                                                       \
  (const struct AdditionalEffect[]) { __VA_ARGS__ }
#define ADDITIONAL_EFFECTS(...)                                                \
  EFFECTS_ARR(__VA_ARGS__),                                                    \
      .numAdditionalEffects = ARRAY_COUNT(EFFECTS_ARR(__VA_ARGS__))

// Just a hack to make a move boosted by Sheer Force despite having no secondary
// effects affected
#define SHEER_FORCE_HACK                                                       \
  { .moveEffect = 0, .chance = 100, }

struct AdditionalEffect {
  u16 moveEffect;
  u8 self : 1;
  u8 onlyIfTargetRaisedStats : 1;
  u8 onChargeTurnOnly : 1;
  u8 chance; // 0% = effect certain, primary effect
};

struct Ability {
  u8 name[ABILITY_NAME_LENGTH + 1];
  const u8 *description;
  s8 aiRating;
  u8 cantBeCopied : 1;  // cannot be copied by Role Play or Doodle
  u8 cantBeSwapped : 1; // cannot be swapped with Skill Swap or Wandering Spirit
  u8 cantBeTraced : 1;  // cannot be copied by Trace - same as cantBeCopied
                        // except for Wonder Guard
  u8 cantBeSuppressed : 1;  // cannot be negated by Gastro Acid or Neutralizing
                            // Gas
  u8 cantBeOverwritten : 1; // cannot be overwritten by Entrainment, Worry Seed
                            // or Simple Beam (but can be by Mummy) - same as
                            // cantBeSuppressed except for Truant
  u8 breakable : 1;         // can be bypassed by Mold Breaker and clones
  u8 failsOnImposter : 1;   // doesn't work on an Imposter mon; when can we
                            // actually use this?
};

#define SPINDA_SPOT_WIDTH 16
#define SPINDA_SPOT_HEIGHT 16

struct SpindaSpot {
  u8 x, y;
  u16 image[SPINDA_SPOT_HEIGHT];
};

struct LevelUpMove {
  u16 move;
  u16 level;
};

struct FormChange {
  u16 method;
  u16 targetSpecies;
  u16 param1;
  u16 param2;
  u16 param3;
};

struct Fusion {
  u16 fusionStorageIndex;
  u16 itemId;
  u16 targetSpecies1;
  u16 targetSpecies2;
  u16 fusingIntoMon;
  u16 fusionMove;
  u16 unfuseForgetMove;
};

#define DIV_ROUND_UP(val, roundBy)(((val) / (roundBy)) + (((val) % (roundBy)) ? 1 : 0))
#define MON_COORDS_SIZE(width, height)(DIV_ROUND_UP(width, 8) << 4 | DIV_ROUND_UP(height, 8))
#define GET_MON_COORDS_WIDTH(size)((size >> 4) * 8)
#define GET_MON_COORDS_HEIGHT(size)((size & 0xF) * 8)
#define TRAINER_PARTY_IVS(hp, atk, def, speed, spatk, spdef) (hp | (atk << 5) | (def << 10) | (speed << 15) | (spatk << 20) | (spdef << 25))
#define TRAINER_PARTY_EVS(hp, atk, def, speed, spatk, spdef) ((const u8[6]){hp,atk,def,spatk,spdef,speed})

struct TrainerMon
{
    const u8 *nickname;
    const u8 *ev;
    u32 iv;
    u16 moves[4];
    u16 species;
    u16 heldItem;
    u16 ability;
    u8 lvl;
    u8 ball;
    u8 friendship;
    u8 nature:5;
    bool8 gender:2;
    bool8 isShiny:1;
    u8 dynamaxLevel:4;
    bool8 gigantamaxFactor:1;
    bool8 shouldDynamax:1;
    bool8 shouldTerastal:1;
};

#define TRAINER_PARTY(partyArray) partyArray, .partySize = ARRAY_COUNT(partyArray)

struct Trainer
{
    /*0x00*/ u32 aiFlags;
    /*0x04*/ const struct TrainerMon *party;
    /*0x08*/ u16 items[MAX_TRAINER_ITEMS];
    /*0x10*/ u8 trainerClass;
    /*0x11*/ u8 encounterMusic_gender; // last bit is gender
    /*0x12*/ u8 trainerPic;
    /*0x13*/ u8 trainerName[TRAINER_NAME_LENGTH + 1];
    /*0x1E*/ bool8 doubleBattle:1;
             bool8 mugshotEnabled:1;
             u8 startingStatus:6;    // this trainer starts a battle with a given status. see include/constants/battle.h for values
    /*0x1F*/ u8 mugshotColor;
    /*0x20*/ u8 partySize;
};

struct TrainerClass
{
    u8 name[13];
    u8 money;
    u16 ball;
};

typedef void (*ItemUseFunc)(u8);

struct Item
{
    u32 price;
    u16 secondaryId;
    ItemUseFunc fieldUseFunc;
    const u8 *description;
    const u8 *effect;
    u8 name[ITEM_NAME_LENGTH];
    u8 pluralName[ITEM_NAME_PLURAL_LENGTH];
    u8 holdEffect;
    u8 holdEffectParam;
    u8 importance;
    u8 pocket;
    u8 type;
    u8 battleUsage;
    u8 flingPower;
};

struct WildPokemon
{
    u8 minLevel;
    u8 maxLevel;
    u16 species;
};

struct WildPokemonInfo
{
    u8 encounterRate;
    const struct WildPokemon *wildPokemon;
};

struct WildPokemonHeader
{
    u8 mapGroup;
    u8 mapNum;
    const struct WildPokemonInfo *landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo;
    const struct WildPokemonInfo *rockSmashMonsInfo;
    const struct WildPokemonInfo *fishingMonsInfo;
};


const struct SpeciesInfo gSpeciesInfo[];
const struct MoveInfo gMovesInfo[];
const struct Ability gAbilitiesInfo[];
const struct Item gItemsInfo[];
const struct WildPokemonHeader gWildMonHeaders[];
const u16 gTmList[];
const u16 gEggMoves[];
