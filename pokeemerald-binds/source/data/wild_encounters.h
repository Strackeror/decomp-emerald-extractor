//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/wild_encounters.json and Inja template src/data/wild_encounters.json.txt
//


#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 20 
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 + 20
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 + 5
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 + 5
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 + 4
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 + 4
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_10 ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 + 1
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_11 ENCOUNTER_CHANCE_LAND_MONS_SLOT_10 + 1
#define ENCOUNTER_CHANCE_LAND_MONS_TOTAL (ENCOUNTER_CHANCE_LAND_MONS_SLOT_11)
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 60 
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 + 30
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 + 5
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_3 ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 + 4
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_4 ENCOUNTER_CHANCE_WATER_MONS_SLOT_3 + 1
#define ENCOUNTER_CHANCE_WATER_MONS_TOTAL (ENCOUNTER_CHANCE_WATER_MONS_SLOT_4)
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_0 60 
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_1 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_0 + 30
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_2 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_1 + 5
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_3 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_2 + 4
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_4 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_3 + 1
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_TOTAL (ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_4)
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 60 
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 + 20
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4 ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 + 20
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4)
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0 70 
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_1 ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0 + 30
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_1)
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 40 
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 + 40
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 + 15
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 + 4
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 + 1
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9)



const struct WildPokemon gRoute101_LandMons[] =
{
    { 2, 4, SPECIES_ZIGZAGOON },
    { 2, 4, SPECIES_POOCHYENA },
    { 2, 4, SPECIES_LILLIPUP },
    { 2, 4, SPECIES_BUNNELBY },
    { 2, 4, SPECIES_PATRAT },
    { 2, 4, SPECIES_RATTATA },
    { 2, 4, SPECIES_SENTRET },
    { 2, 4, SPECIES_BUNEARY },
    { 2, 4, SPECIES_YUNGOOS },
    { 2, 4, SPECIES_SKWOVET },
    { 2, 4, SPECIES_ZORUA },
    { 2, 4, SPECIES_ZORUA },
};

const struct WildPokemonInfo gRoute101_LandMonsInfo = { 20, gRoute101_LandMons };
const struct WildPokemon gRoute102_LandMons[] =
{
    { 3, 6, SPECIES_LOTAD },
    { 3, 6, SPECIES_SEEDOT },
    { 3, 6, SPECIES_FOMANTIS },
    { 3, 6, SPECIES_SPINARAK },
    { 3, 6, SPECIES_PIDGEY },
    { 3, 6, SPECIES_SEWADDLE },
    { 3, 6, SPECIES_BIDOOF },
    { 3, 6, SPECIES_SURSKIT },
    { 3, 6, SPECIES_RALTS },
    { 3, 6, SPECIES_GOTHITA },
    { 3, 6, SPECIES_WIMPOD },
    { 3, 6, SPECIES_WIMPOD },
};

const struct WildPokemonInfo gRoute102_LandMonsInfo = { 20, gRoute102_LandMons };
const struct WildPokemon gRoute102_WaterMons[] =
{
    { 30, 45, SPECIES_BIDOOF },
    { 30, 45, SPECIES_PIDGEY },
    { 30, 45, SPECIES_SURSKIT },
    { 30, 45, SPECIES_PIDGEOTTO },
    { 30, 45, SPECIES_MASQUERAIN },
};

const struct WildPokemonInfo gRoute102_WaterMonsInfo = { 4, gRoute102_WaterMons };
const struct WildPokemon gRoute102_FishingMons[] =
{
    { 5, 10, SPECIES_LOTAD },
    { 5, 10, SPECIES_SURSKIT },
    { 10, 40, SPECIES_LOTAD },
    { 10, 40, SPECIES_CORPHISH },
    { 10, 40, SPECIES_WIMPOD },
    { 40, 65, SPECIES_LOTAD },
    { 40, 65, SPECIES_WIMPOD },
    { 40, 65, SPECIES_CRAWDAUNT },
    { 40, 65, SPECIES_GOLISOPOD },
    { 40, 65, SPECIES_GOLISOPOD },
};

const struct WildPokemonInfo gRoute102_FishingMonsInfo = { 30, gRoute102_FishingMons };
const struct WildPokemon gRoute103_LandMons[] =
{
    { 2, 4, SPECIES_SHELLOS },
    { 2, 4, SPECIES_DEWPIDER },
    { 2, 4, SPECIES_BELLSPROUT },
    { 2, 4, SPECIES_ODDISH },
    { 2, 4, SPECIES_KRICKETOT },
    { 2, 4, SPECIES_CHEWTLE },
    { 2, 4, SPECIES_PINECO },
    { 2, 4, SPECIES_BURMY },
    { 2, 4, SPECIES_SPEAROW },
    { 2, 4, SPECIES_WOOPER },
    { 2, 4, SPECIES_TYNAMO },
    { 2, 4, SPECIES_TYNAMO },
};

const struct WildPokemonInfo gRoute103_LandMonsInfo = { 20, gRoute103_LandMons };
const struct WildPokemon gRoute103_WaterMons[] =
{
    { 30, 45, SPECIES_GASTRODON },
    { 30, 45, SPECIES_ARAQUANID },
    { 30, 45, SPECIES_DREDNAW },
    { 30, 45, SPECIES_QUAGSIRE },
    { 30, 45, SPECIES_EELEKTRIK },
};

const struct WildPokemonInfo gRoute103_WaterMonsInfo = { 4, gRoute103_WaterMons };
const struct WildPokemon gRoute103_FishingMons[] =
{
    { 5, 10, SPECIES_CHEWTLE },
    { 5, 10, SPECIES_WOOPER },
    { 10, 40, SPECIES_CHEWTLE },
    { 10, 40, SPECIES_WOOPER },
    { 10, 40, SPECIES_TYNAMO },
    { 10, 40, SPECIES_WOOPER },
    { 40, 65, SPECIES_TYNAMO },
    { 40, 65, SPECIES_EELEKTRIK },
    { 40, 65, SPECIES_QUAGSIRE },
    { 40, 65, SPECIES_EELEKTROSS },
};

const struct WildPokemonInfo gRoute103_FishingMonsInfo = { 30, gRoute103_FishingMons };
const struct WildPokemon gRoute104_LandMons[] =
{
    { 4, 7, SPECIES_MARILL },
    { 4, 7, SPECIES_WINGULL },
    { 4, 7, SPECIES_YANMA },
    { 4, 7, SPECIES_TAILLOW },
    { 4, 7, SPECIES_PIDOVE },
    { 4, 7, SPECIES_FLETCHLING },
    { 4, 7, SPECIES_PANPOUR },
    { 4, 7, SPECIES_PIKIPEK },
    { 4, 7, SPECIES_STARLY },
    { 4, 7, SPECIES_STARLY },
    { 4, 7, SPECIES_HELIOPTILE },
    { 4, 7, SPECIES_HELIOPTILE },
};

const struct WildPokemonInfo gRoute104_LandMonsInfo = { 20, gRoute104_LandMons };
const struct WildPokemon gRoute104_WaterMons[] =
{
    { 30, 45, SPECIES_WINGULL },
    { 30, 45, SPECIES_GOLDEEN },
    { 30, 45, SPECIES_YANMA },
    { 30, 45, SPECIES_TRUMBEAK },
    { 30, 45, SPECIES_SWELLOW },
};

const struct WildPokemonInfo gRoute104_WaterMonsInfo = { 4, gRoute104_WaterMons };
const struct WildPokemon gRoute104_FishingMons[] =
{
    { 5, 10, SPECIES_GOLDEEN },
    { 5, 10, SPECIES_MARILL },
    { 10, 40, SPECIES_GOLDEEN },
    { 10, 40, SPECIES_MAGIKARP },
    { 10, 40, SPECIES_MARILL },
    { 10, 40, SPECIES_GOLDEEN },
    { 40, 65, SPECIES_MAGIKARP },
    { 40, 65, SPECIES_MARILL },
    { 40, 65, SPECIES_SEAKING },
    { 40, 65, SPECIES_AZUMARILL },
};

const struct WildPokemonInfo gRoute104_FishingMonsInfo = { 30, gRoute104_FishingMons };
const struct WildPokemon gRoute105_WaterMons[] =
{
    { 30, 45, SPECIES_MAGIKARP },
    { 30, 45, SPECIES_ARROKUDA },
    { 30, 45, SPECIES_TENTACOOL },
    { 30, 45, SPECIES_CORVISQUIRE },
    { 30, 45, SPECIES_BARRASKEWDA },
};

const struct WildPokemonInfo gRoute105_WaterMonsInfo = { 4, gRoute105_WaterMons };
const struct WildPokemon gRoute105_FishingMons[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 40, SPECIES_MAGIKARP },
    { 10, 40, SPECIES_TENTACOOL },
    { 10, 40, SPECIES_ARROKUDA },
    { 40, 65, SPECIES_TENTACOOL },
    { 40, 65, SPECIES_ARROKUDA },
    { 40, 65, SPECIES_SEAKING },
    { 40, 65, SPECIES_DREDNAW },
    { 40, 65, SPECIES_GYARADOS },
};

const struct WildPokemonInfo gRoute105_FishingMonsInfo = { 30, gRoute105_FishingMons };
const struct WildPokemon gRoute110_LandMons[] =
{
    { 15, 19, SPECIES_ELECTRIKE },
    { 15, 19, SPECIES_GULPIN },
    { 15, 19, SPECIES_NIDORAN_F },
    { 15, 19, SPECIES_NIDORAN_M },
    { 15, 19, SPECIES_PACHIRISU },
    { 15, 19, SPECIES_MAREEP },
    { 15, 19, SPECIES_PACHIRISU },
    { 15, 19, SPECIES_TRUBBISH },
    { 15, 19, SPECIES_PLUSLE },
    { 15, 19, SPECIES_MINUN },
    { 15, 19, SPECIES_ORICORIO_POM_POM },
    { 15, 19, SPECIES_ORICORIO_POM_POM },
};

const struct WildPokemonInfo gRoute110_LandMonsInfo = { 20, gRoute110_LandMons };
const struct WildPokemon gRoute110_WaterMons[] =
{
    { 30, 45, SPECIES_CHINCHOU },
    { 30, 45, SPECIES_TYNAMO },
    { 30, 45, SPECIES_ORICORIO_POM_POM },
    { 30, 45, SPECIES_VIKAVOLT },
    { 30, 45, SPECIES_VIKAVOLT },
};

const struct WildPokemonInfo gRoute110_WaterMonsInfo = { 4, gRoute110_WaterMons };
const struct WildPokemon gRoute110_FishingMons[] =
{
    { 5, 10, SPECIES_CHINCHOU },
    { 5, 10, SPECIES_QWILFISH },
    { 10, 40, SPECIES_CHINCHOU },
    { 10, 40, SPECIES_PINCURCHIN },
    { 10, 40, SPECIES_QWILFISH },
    { 40, 65, SPECIES_CHINCHOU },
    { 40, 65, SPECIES_PINCURCHIN },
    { 40, 65, SPECIES_QWILFISH },
    { 40, 65, SPECIES_LANTURN },
    { 40, 65, SPECIES_EELEKTRIK },
};

const struct WildPokemonInfo gRoute110_FishingMonsInfo = { 30, gRoute110_FishingMons };
const struct WildPokemon gRoute111_LandMons[] =
{
    { 30, 35, SPECIES_SANDSHREW },
    { 30, 35, SPECIES_TRAPINCH },
    { 30, 35, SPECIES_CACNEA },
    { 30, 35, SPECIES_BALTOY },
    { 30, 35, SPECIES_HIPPOPOTAS },
    { 30, 35, SPECIES_MARACTUS },
    { 30, 35, SPECIES_SANDILE },
    { 30, 35, SPECIES_SILICOBRA },
    { 30, 35, SPECIES_BURMY_SANDY_CLOAK },
    { 30, 35, SPECIES_GLIGAR },
    { 34, 35, SPECIES_GIBLE },
    { 30, 35, SPECIES_GIBLE },
};

const struct WildPokemonInfo gRoute111_LandMonsInfo = { 10, gRoute111_LandMons };
const struct WildPokemon gRoute111_WaterMons[] =
{
    { 30, 45, SPECIES_GOLDEEN },
    { 30, 45, SPECIES_DUCKLETT },
    { 30, 45, SPECIES_LEDYBA },
    { 30, 45, SPECIES_LEDIAN },
    { 30, 45, SPECIES_SWANNA },
};

const struct WildPokemonInfo gRoute111_WaterMonsInfo = { 4, gRoute111_WaterMons };
const struct WildPokemon gRoute111_RockSmashMons[] =
{
    { 10, 15, SPECIES_GEODUDE },
    { 5, 10, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
};

const struct WildPokemonInfo gRoute111_RockSmashMonsInfo = { 20, gRoute111_RockSmashMons };
const struct WildPokemon gRoute111_FishingMons[] =
{
    { 5, 10, SPECIES_GOLDEEN },
    { 5, 10, SPECIES_BARBOACH },
    { 10, 40, SPECIES_GOLDEEN },
    { 10, 40, SPECIES_BARBOACH },
    { 10, 40, SPECIES_BASCULIN },
    { 40, 65, SPECIES_BARBOACH },
    { 40, 65, SPECIES_BARBOACH },
    { 40, 65, SPECIES_BASCULIN },
    { 40, 65, SPECIES_WHISCASH },
    { 40, 65, SPECIES_WHISCASH },
};

const struct WildPokemonInfo gRoute111_FishingMonsInfo = { 30, gRoute111_FishingMons };
const struct WildPokemon gRoute112_LandMons[] =
{
    { 22, 26, SPECIES_NUMEL },
    { 22, 26, SPECIES_TYROGUE },
    { 22, 26, SPECIES_SAWK },
    { 22, 26, SPECIES_THROH },
    { 22, 26, SPECIES_PONYTA },
    { 22, 26, SPECIES_DEERLING_SUMMER },
    { 22, 26, SPECIES_HITMONLEE },
    { 22, 26, SPECIES_HITMONCHAN },
    { 22, 26, SPECIES_HITMONTOP },
    { 22, 26, SPECIES_PANSEAR },
    { 22, 26, SPECIES_HITMONTOP },
    { 22, 26, SPECIES_PANSEAR },
};

const struct WildPokemonInfo gRoute112_LandMonsInfo = { 20, gRoute112_LandMons };
const struct WildPokemon gRoute113_LandMons[] =
{
    { 24, 28, SPECIES_SPINDA },
    { 24, 28, SPECIES_FERROSEED },
    { 24, 28, SPECIES_BOUFFALANT },
    { 24, 28, SPECIES_SKARMORY },
    { 24, 28, SPECIES_MEOWTH_GALARIAN },
    { 24, 28, SPECIES_DEERLING_WINTER },
    { 24, 28, SPECIES_RUFFLET },
    { 24, 28, SPECIES_LITLEO },
    { 24, 28, SPECIES_STUNFISK_GALARIAN },
    { 24, 28, SPECIES_SCRAGGY },
    { 26, 30, SPECIES_FERROTHORN },
    { 26, 30, SPECIES_FERROTHORN },
};

const struct WildPokemonInfo gRoute113_LandMonsInfo = { 20, gRoute113_LandMons };
const struct WildPokemon gRoute114_LandMons[] =
{
    { 26, 30, SPECIES_SWABLU },
    { 26, 30, SPECIES_TOGETIC },
    { 26, 30, SPECIES_SKORUPI },
    { 26, 30, SPECIES_CROAGUNK },
    { 26, 30, SPECIES_ZANGOOSE },
    { 26, 30, SPECIES_SEVIPER },
    { 26, 30, SPECIES_GOURGEIST_SMALL },
    { 26, 30, SPECIES_GOURGEIST },
    { 26, 30, SPECIES_GOURGEIST_LARGE },
    { 26, 30, SPECIES_COMFEY },
    { 26, 30, SPECIES_GOURGEIST_SUPER },
    { 2, 5, SPECIES_TOGEPI },
};

const struct WildPokemonInfo gRoute114_LandMonsInfo = { 20, gRoute114_LandMons };
const struct WildPokemon gRoute114_WaterMons[] =
{
    { 30, 45, SPECIES_BASCULIN },
    { 30, 45, SPECIES_SWABLU },
    { 30, 45, SPECIES_TOGETIC },
    { 30, 45, SPECIES_RUFFLET },
    { 30, 45, SPECIES_RUFFLET },
};

const struct WildPokemonInfo gRoute114_WaterMonsInfo = { 4, gRoute114_WaterMons };
const struct WildPokemon gRoute114_RockSmashMons[] =
{
    { 10, 15, SPECIES_GEODUDE },
    { 5, 10, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
};

const struct WildPokemonInfo gRoute114_RockSmashMonsInfo = { 20, gRoute114_RockSmashMons };
const struct WildPokemon gRoute114_FishingMons[] =
{
    { 5, 10, SPECIES_GOLDEEN },
    { 5, 10, SPECIES_WISHIWASHI },
    { 10, 40, SPECIES_LUVDISC },
    { 10, 40, SPECIES_WISHIWASHI },
    { 10, 40, SPECIES_BASCULIN },
    { 40, 65, SPECIES_LUVDISC },
    { 40, 65, SPECIES_LUVDISC },
    { 40, 65, SPECIES_BASCULIN },
    { 40, 65, SPECIES_WISHIWASHI },
    { 40, 65, SPECIES_WISHIWASHI },
};

const struct WildPokemonInfo gRoute114_FishingMonsInfo = { 30, gRoute114_FishingMons };
const struct WildPokemon gRoute116_LandMons[] =
{
    { 6, 10, SPECIES_PANCHAM },
    { 6, 10, SPECIES_MIENFOO },
    { 6, 10, SPECIES_NINCADA },
    { 6, 10, SPECIES_ABRA },
    { 6, 10, SPECIES_DROWZEE },
    { 6, 10, SPECIES_TIMBURR },
    { 6, 10, SPECIES_SKITTY },
    { 6, 10, SPECIES_EKANS },
    { 6, 10, SPECIES_JOLTIK },
    { 6, 10, SPECIES_PANSAGE },
    { 6, 10, SPECIES_JOLTIK },
    { 6, 10, SPECIES_PANSAGE },
};

const struct WildPokemonInfo gRoute116_LandMonsInfo = { 20, gRoute116_LandMons };
const struct WildPokemon gRoute117_LandMons[] =
{
    { 19, 23, SPECIES_ROSELIA },
    { 19, 23, SPECIES_COMBEE },
    { 19, 23, SPECIES_VOLBEAT },
    { 19, 23, SPECIES_ILLUMISE },
    { 19, 23, SPECIES_WOOLOO },
    { 19, 23, SPECIES_FURFROU },
    { 2, 5, SPECIES_ELEKID },
    { 2, 5, SPECIES_MAGBY },
    { 2, 5, SPECIES_SMOOCHUM },
    { 2, 5, SPECIES_IGGLYBUFF },
    { 24, 26, SPECIES_VESPIQUEN },
    { 24, 26, SPECIES_VESPIQUEN },
};

const struct WildPokemonInfo gRoute117_LandMonsInfo = { 20, gRoute117_LandMons };
const struct WildPokemon gRoute117_WaterMons[] =
{
    { 30, 45, SPECIES_GOLDEEN },
    { 30, 45, SPECIES_COMBEE },
    { 30, 45, SPECIES_VOLBEAT },
    { 30, 45, SPECIES_ILLUMISE },
    { 30, 45, SPECIES_ILLUMISE },
};

const struct WildPokemonInfo gRoute117_WaterMonsInfo = { 4, gRoute117_WaterMons };
const struct WildPokemon gRoute117_FishingMons[] =
{
    { 5, 10, SPECIES_GOLDEEN },
    { 5, 10, SPECIES_MAGIKARP },
    { 10, 40, SPECIES_GOLDEEN },
    { 10, 40, SPECIES_MAGIKARP },
    { 10, 40, SPECIES_CORPHISH },
    { 40, 65, SPECIES_CORPHISH },
    { 40, 65, SPECIES_CORPHISH },
    { 40, 65, SPECIES_GOLDEEN },
    { 40, 65, SPECIES_CRAWDAUNT },
    { 40, 65, SPECIES_CRAWDAUNT },
};

const struct WildPokemonInfo gRoute117_FishingMonsInfo = { 30, gRoute117_FishingMons };
const struct WildPokemon gRoute118_LandMons[] =
{
    { 37, 45, SPECIES_PIKACHU },
    { 37, 45, SPECIES_CHANSEY },
    { 37, 45, SPECIES_PONYTA_GALARIAN },
    { 37, 45, SPECIES_SLOWPOKE_GALARIAN },
    { 37, 45, SPECIES_ZIGZAGOON_GALARIAN },
    { 37, 45, SPECIES_MANECTRIC },
    { 37, 45, SPECIES_FARFETCHD_GALARIAN },
    { 37, 45, SPECIES_SNORLAX },
    { 37, 45, SPECIES_MORPEKO },
    { 37, 45, SPECIES_DODUO },
    { 37, 45, SPECIES_DODRIO },
    { 37, 45, SPECIES_LINOONE_GALARIAN },
};

const struct WildPokemonInfo gRoute118_LandMonsInfo = { 20, gRoute118_LandMons };
const struct WildPokemon gRoute118_WaterMons[] =
{
    { 30, 45, SPECIES_CARVANHA },
    { 30, 45, SPECIES_SLOWPOKE_GALARIAN },
    { 30, 45, SPECIES_SPEAROW },
    { 30, 45, SPECIES_QWILFISH },
    { 30, 45, SPECIES_DRATINI },
};

const struct WildPokemonInfo gRoute118_WaterMonsInfo = { 4, gRoute118_WaterMons };
const struct WildPokemon gRoute118_FishingMons[] =
{
    { 5, 10, SPECIES_SKRELP },
    { 5, 10, SPECIES_QWILFISH },
    { 10, 40, SPECIES_SKRELP },
    { 10, 40, SPECIES_QWILFISH },
    { 10, 40, SPECIES_CARVANHA },
    { 40, 65, SPECIES_QWILFISH },
    { 40, 65, SPECIES_CARVANHA },
    { 40, 65, SPECIES_SKRELP },
    { 40, 65, SPECIES_SHARPEDO },
    { 40, 65, SPECIES_DRATINI },
};

const struct WildPokemonInfo gRoute118_FishingMonsInfo = { 30, gRoute118_FishingMons };
const struct WildPokemon gRoute124_WaterMons[] =
{
    { 30, 50, SPECIES_KRABBY },
    { 30, 50, SPECIES_WAILMER },
    { 30, 50, SPECIES_CRAMORANT },
    { 30, 50, SPECIES_PELIPPER },
    { 30, 50, SPECIES_KINGLER },
};

const struct WildPokemonInfo gRoute124_WaterMonsInfo = { 4, gRoute124_WaterMons };
const struct WildPokemon gRoute124_FishingMons[] =
{
    { 5, 10, SPECIES_KRABBY },
    { 5, 10, SPECIES_CLAUNCHER },
    { 10, 40, SPECIES_TENTACOOL },
    { 10, 40, SPECIES_KRABBY },
    { 10, 40, SPECIES_CLAUNCHER },
    { 40, 65, SPECIES_WAILMER },
    { 40, 65, SPECIES_WAILMER },
    { 40, 65, SPECIES_KRABBY },
    { 40, 65, SPECIES_CLAUNCHER },
    { 40, 65, SPECIES_CLAWITZER },
};

const struct WildPokemonInfo gRoute124_FishingMonsInfo = { 30, gRoute124_FishingMons };
const struct WildPokemon gPetalburgWoods_LandMons[] =
{
    { 4, 7, SPECIES_WURMPLE },
    { 4, 7, SPECIES_SHROOMISH },
    { 4, 7, SPECIES_CATERPIE },
    { 4, 7, SPECIES_WEEDLE },
    { 4, 7, SPECIES_SCATTERBUG },
    { 4, 7, SPECIES_HOOTHOOT },
    { 4, 7, SPECIES_BLIPBUG },
    { 4, 7, SPECIES_VENIPEDE },
    { 4, 7, SPECIES_CASCOON },
    { 4, 7, SPECIES_SILCOON },
    { 4, 7, SPECIES_PHANTUMP },
    { 4, 7, SPECIES_PHANTUMP },
};

const struct WildPokemonInfo gPetalburgWoods_LandMonsInfo = { 20, gPetalburgWoods_LandMons };
const struct WildPokemon gRusturfTunnel_LandMons[] =
{
    { 7, 11, SPECIES_WHISMUR },
    { 7, 11, SPECIES_GEODUDE },
    { 7, 11, SPECIES_PARAS },
    { 7, 11, SPECIES_ROCKRUFF },
    { 7, 11, SPECIES_MUNNA },
    { 7, 11, SPECIES_ROGGENROLA },
    { 7, 11, SPECIES_SWINUB },
    { 7, 11, SPECIES_PAWNIARD },
    { 7, 11, SPECIES_GOLETT },
    { 7, 11, SPECIES_DIGLETT },
    { 7, 11, SPECIES_DIGLETT },
    { 7, 11, SPECIES_ROCKRUFF_OWN_TEMPO },
};

const struct WildPokemonInfo gRusturfTunnel_LandMonsInfo = { 10, gRusturfTunnel_LandMons };
const struct WildPokemon gGraniteCave_1F_LandMons[] =
{
    { 12, 15, SPECIES_MAKUHITA },
    { 12, 15, SPECIES_GEODUDE_ALOLAN },
    { 12, 15, SPECIES_SANDYGAST },
    { 12, 15, SPECIES_DIGLETT_ALOLAN },
    { 12, 15, SPECIES_BINACLE },
    { 12, 15, SPECIES_ABRA },
    { 12, 15, SPECIES_MEOWTH_ALOLAN },
    { 12, 15, SPECIES_MEOWTH_ALOLAN },
    { 12, 15, SPECIES_DWEBBLE },
    { 12, 15, SPECIES_INKAY },
    { 12, 15, SPECIES_DWEBBLE },
    { 12, 15, SPECIES_INKAY },
};

const struct WildPokemonInfo gGraniteCave_1F_LandMonsInfo = { 10, gGraniteCave_1F_LandMons };
const struct WildPokemon gGraniteCave_B1F_LandMons[] =
{
    { 13, 15, SPECIES_WOOBAT },
    { 13, 15, SPECIES_ARON },
    { 13, 15, SPECIES_ZUBAT },
    { 13, 15, SPECIES_ZUBAT },
    { 13, 15, SPECIES_SABLEYE },
    { 13, 15, SPECIES_MAWILE },
    { 13, 15, SPECIES_NOIBAT },
    { 13, 15, SPECIES_DUNSPARCE },
    { 13, 15, SPECIES_ROLYCOLY },
    { 13, 15, SPECIES_NOSEPASS },
    { 13, 15, SPECIES_ROLYCOLY },
    { 13, 15, SPECIES_NOSEPASS },
};

const struct WildPokemonInfo gGraniteCave_B1F_LandMonsInfo = { 10, gGraniteCave_B1F_LandMons };
const struct WildPokemon gMtPyre_1F_LandMons[] =
{
    { 44, 51, SPECIES_SINISTEA },
    { 44, 51, SPECIES_DUSKULL },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_CUBONE },
    { 44, 51, SPECIES_YAMASK },
    { 44, 51, SPECIES_MR_MIME },
    { 44, 51, SPECIES_MIMIKYU },
    { 44, 51, SPECIES_MISDREAVUS },
    { 44, 51, SPECIES_SPIRITOMB },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
};

const struct WildPokemonInfo gMtPyre_1F_LandMonsInfo = { 10, gMtPyre_1F_LandMons };
const struct WildPokemon gVictoryRoad_1F_LandMons[] =
{
    { 76, 85, SPECIES_BLISSEY },
    { 76, 85, SPECIES_DRILBUR },
    { 76, 85, SPECIES_URSARING },
    { 76, 85, SPECIES_ZUBAT },
    { 76, 85, SPECIES_LAIRON },
    { 76, 85, SPECIES_COPPERAJAH },
    { 76, 85, SPECIES_GOLBAT },
    { 76, 85, SPECIES_AGGRON },
    { 76, 85, SPECIES_URSALUNA },
    { 76, 85, SPECIES_EXCADRILL },
    { 76, 85, SPECIES_URSALUNA },
    { 76, 85, SPECIES_EXCADRILL },
};

const struct WildPokemonInfo gVictoryRoad_1F_LandMonsInfo = { 10, gVictoryRoad_1F_LandMons };
const struct WildPokemon gSafariZone_South_LandMons[] =
{
    { 41, 47, SPECIES_EEVEE },
    { 41, 47, SPECIES_DODUO },
    { 41, 47, SPECIES_RHYDON },
    { 41, 47, SPECIES_SCYTHER },
    { 41, 47, SPECIES_PINSIR },
    { 41, 47, SPECIES_TAUROS },
    { 41, 47, SPECIES_LICKITUNG },
    { 41, 47, SPECIES_SNORLAX },
    { 41, 47, SPECIES_KANGASKHAN },
    { 41, 47, SPECIES_CHANSEY },
    { 41, 47, SPECIES_KANGASKHAN },
    { 41, 47, SPECIES_CHANSEY },
};

const struct WildPokemonInfo gSafariZone_South_LandMonsInfo = { 25, gSafariZone_South_LandMons };
const struct WildPokemon gUnderwater_Route126_WaterMons[] =
{
    { 50, 65, SPECIES_SKRELP },
    { 50, 65, SPECIES_MAREANIE },
    { 50, 65, SPECIES_SHELLDER },
    { 50, 65, SPECIES_RELICANTH },
    { 50, 65, SPECIES_DRAGALGE },
};

const struct WildPokemonInfo gUnderwater_Route126_WaterMonsInfo = { 4, gUnderwater_Route126_WaterMons };
const struct WildPokemon gAbandonedShip_Rooms_B1F_WaterMons[] =
{
    { 30, 45, SPECIES_FRILLISH },
    { 30, 45, SPECIES_DHELMISE },
    { 30, 45, SPECIES_DHELMISE },
    { 30, 45, SPECIES_DHELMISE },
    { 30, 45, SPECIES_DHELMISE },
};

const struct WildPokemonInfo gAbandonedShip_Rooms_B1F_WaterMonsInfo = { 4, gAbandonedShip_Rooms_B1F_WaterMons };
const struct WildPokemon gAbandonedShip_Rooms_B1F_FishingMons[] =
{
    { 5, 10, SPECIES_FRILLISH },
    { 5, 10, SPECIES_DHELMISE },
    { 10, 40, SPECIES_DHELMISE },
    { 10, 40, SPECIES_DHELMISE },
    { 10, 40, SPECIES_DHELMISE },
    { 40, 65, SPECIES_DHELMISE },
    { 40, 65, SPECIES_DHELMISE },
    { 40, 65, SPECIES_DHELMISE },
    { 40, 65, SPECIES_JELLICENT },
    { 40, 65, SPECIES_KLEFKI },
};

const struct WildPokemonInfo gAbandonedShip_Rooms_B1F_FishingMonsInfo = { 20, gAbandonedShip_Rooms_B1F_FishingMons };
const struct WildPokemon gGraniteCave_B2F_LandMons[] =
{
    { 13, 15, SPECIES_ZUBAT },
    { 13, 15, SPECIES_WOOBAT },
    { 13, 15, SPECIES_SABLEYE },
    { 13, 15, SPECIES_MAWILE },
    { 13, 15, SPECIES_ROLYCOLY },
    { 13, 15, SPECIES_NOSEPASS },
    { 13, 15, SPECIES_SNOM },
    { 13, 15, SPECIES_SNEASEL },
    { 13, 15, SPECIES_MACHOP },
    { 13, 15, SPECIES_AXEW },
    { 13, 15, SPECIES_DEINO },
    { 13, 15, SPECIES_DEINO },
};

const struct WildPokemonInfo gGraniteCave_B2F_LandMonsInfo = { 10, gGraniteCave_B2F_LandMons };
const struct WildPokemon gGraniteCave_B2F_WaterMons[] =
{
    { 10, 40, SPECIES_BINACLE },
    { 10, 40, SPECIES_CHEWTLE },
    { 10, 40, SPECIES_CLAUNCHER },
    { 10, 40, SPECIES_CLAUNCHER },
    { 10, 40, SPECIES_CLAUNCHER },
};

const struct WildPokemonInfo gGraniteCave_B2F_WaterMonsInfo = { 0, gGraniteCave_B2F_WaterMons };
const struct WildPokemon gGraniteCave_B2F_RockSmashMons[] =
{
    { 10, 15, SPECIES_GEODUDE },
    { 10, 20, SPECIES_NOSEPASS },
    { 5, 10, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
};

const struct WildPokemonInfo gGraniteCave_B2F_RockSmashMonsInfo = { 20, gGraniteCave_B2F_RockSmashMons };
const struct WildPokemon gFieryPath_LandMons[] =
{
    { 22, 26, SPECIES_SLUGMA },
    { 22, 26, SPECIES_SALANDIT },
    { 22, 26, SPECIES_GRIMER },
    { 22, 26, SPECIES_KOFFING },
    { 22, 26, SPECIES_RHYHORN },
    { 22, 26, SPECIES_SIZZLIPEDE },
    { 22, 26, SPECIES_TORKOAL },
    { 22, 26, SPECIES_DARUMAKA },
    { 22, 26, SPECIES_LARVESTA },
    { 22, 26, SPECIES_STONJOURNER },
    { 2, 5, SPECIES_RIOLU },
    { 2, 5, SPECIES_RIOLU },
};

const struct WildPokemonInfo gFieryPath_LandMonsInfo = { 10, gFieryPath_LandMons };
const struct WildPokemon gMeteorFalls_B1F_2R_LandMons[] =
{
    { 64, 74, SPECIES_BAGON },
    { 64, 74, SPECIES_DRUDDIGON },
    { 64, 74, SPECIES_MINIOR_CORE_BLUE },
    { 64, 74, SPECIES_MINIOR_CORE_INDIGO },
    { 64, 74, SPECIES_MINIOR_CORE_VIOLET },
    { 64, 74, SPECIES_SHELGON },
    { 64, 74, SPECIES_AMOONGUSS },
    { 64, 74, SPECIES_CLEFAIRY },
    { 64, 74, SPECIES_SOLROCK },
    { 64, 74, SPECIES_LUNATONE },
    { 64, 74, SPECIES_SALAMENCE },
    { 64, 74, SPECIES_SALAMENCE },
};

const struct WildPokemonInfo gMeteorFalls_B1F_2R_LandMonsInfo = { 10, gMeteorFalls_B1F_2R_LandMons };
const struct WildPokemon gMeteorFalls_B1F_2R_WaterMons[] =
{
    { 50, 75, SPECIES_STARYU },
    { 50, 75, SPECIES_WHISCASH },
    { 50, 75, SPECIES_STARMIE },
    { 50, 75, SPECIES_DRATINI },
    { 50, 75, SPECIES_DRAGONAIR },
};

const struct WildPokemonInfo gMeteorFalls_B1F_2R_WaterMonsInfo = { 4, gMeteorFalls_B1F_2R_WaterMons };
const struct WildPokemon gMeteorFalls_B1F_2R_FishingMons[] =
{
    { 5, 10, SPECIES_STARYU },
    { 5, 10, SPECIES_SHELLDER },
    { 10, 40, SPECIES_STARYU },
    { 10, 40, SPECIES_SHELLDER },
    { 10, 40, SPECIES_BARBOACH },
    { 40, 65, SPECIES_STARYU },
    { 40, 65, SPECIES_SHELLDER },
    { 40, 65, SPECIES_WHISCASH },
    { 40, 65, SPECIES_STARMIE },
    { 40, 65, SPECIES_CLOYSTER },
};

const struct WildPokemonInfo gMeteorFalls_B1F_2R_FishingMonsInfo = { 30, gMeteorFalls_B1F_2R_FishingMons };
const struct WildPokemon gJaggedPass_LandMons[] =
{
    { 27, 32, SPECIES_SPOINK },
    { 27, 32, SPECIES_MANKEY },
    { 27, 32, SPECIES_STANTLER },
    { 27, 32, SPECIES_BEWEAR },
    { 27, 32, SPECIES_URSARING },
    { 27, 32, SPECIES_ORICORIO },
    { 27, 32, SPECIES_HEATMOR },
    { 28, 32, SPECIES_DURANT },
    { 27, 32, SPECIES_WEEZING_GALARIAN },
    { 32, 32, SPECIES_TURTONATOR },
    { 28, 32, SPECIES_LARVITAR },
    { 27, 32, SPECIES_LARVITAR },
};

const struct WildPokemonInfo gJaggedPass_LandMonsInfo = { 20, gJaggedPass_LandMons };
const struct WildPokemon gRoute106_WaterMons[] =
{
    { 30, 45, SPECIES_MAGIKARP },
    { 30, 45, SPECIES_ARROKUDA },
    { 30, 45, SPECIES_TENTACOOL },
    { 30, 45, SPECIES_CORVISQUIRE },
    { 30, 45, SPECIES_BARRASKEWDA },
};

const struct WildPokemonInfo gRoute106_WaterMonsInfo = { 4, gRoute106_WaterMons };
const struct WildPokemon gRoute106_FishingMons[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 40, SPECIES_MAGIKARP },
    { 10, 40, SPECIES_TENTACOOL },
    { 10, 40, SPECIES_ARROKUDA },
    { 40, 65, SPECIES_TENTACOOL },
    { 40, 65, SPECIES_ARROKUDA },
    { 40, 65, SPECIES_SEAKING },
    { 40, 65, SPECIES_DREDNAW },
    { 40, 65, SPECIES_GYARADOS },
};

const struct WildPokemonInfo gRoute106_FishingMonsInfo = { 30, gRoute106_FishingMons };
const struct WildPokemon gRoute107_WaterMons[] =
{
    { 30, 45, SPECIES_MAGIKARP },
    { 30, 45, SPECIES_CLOBBOPUS },
    { 30, 45, SPECIES_FINNEON },
    { 30, 45, SPECIES_CRAMORANT },
    { 30, 45, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute107_WaterMonsInfo = { 4, gRoute107_WaterMons };
const struct WildPokemon gRoute107_FishingMons[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_CLOBBOPUS },
    { 10, 40, SPECIES_MAGIKARP },
    { 10, 40, SPECIES_CLOBBOPUS },
    { 10, 40, SPECIES_HORSEA },
    { 40, 65, SPECIES_CLOBBOPUS },
    { 40, 65, SPECIES_HORSEA },
    { 40, 65, SPECIES_CLAUNCHER },
    { 40, 65, SPECIES_SEADRA },
    { 40, 65, SPECIES_GRAPPLOCT },
};

const struct WildPokemonInfo gRoute107_FishingMonsInfo = { 30, gRoute107_FishingMons };
const struct WildPokemon gRoute108_WaterMons[] =
{
    { 30, 45, SPECIES_WINGULL },
    { 30, 45, SPECIES_FINNEON },
    { 30, 45, SPECIES_DHELMISE },
    { 30, 45, SPECIES_CRAMORANT },
    { 30, 45, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute108_WaterMonsInfo = { 4, gRoute108_WaterMons };
const struct WildPokemon gRoute108_FishingMons[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_FINNEON },
    { 10, 40, SPECIES_MAGIKARP },
    { 10, 40, SPECIES_FINNEON },
    { 10, 40, SPECIES_CLAUNCHER },
    { 40, 65, SPECIES_FINNEON },
    { 40, 65, SPECIES_CLAUNCHER },
    { 40, 65, SPECIES_HORSEA },
    { 40, 65, SPECIES_DHELMISE },
    { 40, 65, SPECIES_LUMINEON },
};

const struct WildPokemonInfo gRoute108_FishingMonsInfo = { 30, gRoute108_FishingMons };
const struct WildPokemon gRoute109_WaterMons[] =
{
    { 30, 45, SPECIES_FINNEON },
    { 30, 45, SPECIES_MAREANIE },
    { 30, 45, SPECIES_MANTYKE },
    { 30, 45, SPECIES_PELIPPER },
    { 30, 45, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute109_WaterMonsInfo = { 4, gRoute109_WaterMons };
const struct WildPokemon gRoute109_FishingMons[] =
{
    { 5, 10, SPECIES_FINNEON },
    { 5, 10, SPECIES_KRABBY },
    { 10, 40, SPECIES_FINNEON },
    { 10, 40, SPECIES_KRABBY },
    { 10, 40, SPECIES_MAREANIE },
    { 40, 65, SPECIES_KRABBY },
    { 40, 65, SPECIES_MAREANIE },
    { 40, 65, SPECIES_LUMINEON },
    { 40, 65, SPECIES_KINGLER },
    { 40, 65, SPECIES_TOXAPEX },
};

const struct WildPokemonInfo gRoute109_FishingMonsInfo = { 30, gRoute109_FishingMons };
const struct WildPokemon gRoute115_LandMons[] =
{
    { 31, 36, SPECIES_JIGGLYPUFF },
    { 31, 36, SPECIES_PSYDUCK },
    { 31, 36, SPECIES_POLIWAG },
    { 31, 36, SPECIES_SLOWPOKE },
    { 31, 36, SPECIES_FARFETCHD },
    { 31, 36, SPECIES_AIPOM },
    { 31, 36, SPECIES_SPRITZEE },
    { 2, 3, SPECIES_SWIRLIX },
    { 35, 36, SPECIES_LICKITUNG },
    { 31, 36, SPECIES_DUCKLETT },
    { 31, 36, SPECIES_WOBBUFFET },
    { 31, 36, SPECIES_WOBBUFFET },
};

const struct WildPokemonInfo gRoute115_LandMonsInfo = { 20, gRoute115_LandMons };
const struct WildPokemon gRoute115_WaterMons[] =
{
    { 30, 45, SPECIES_POLIWAG },
    { 30, 45, SPECIES_DUCKLETT },
    { 30, 45, SPECIES_PSYDUCK },
    { 30, 45, SPECIES_SLOWPOKE },
    { 30, 45, SPECIES_SWANNA },
};

const struct WildPokemonInfo gRoute115_WaterMonsInfo = { 4, gRoute115_WaterMons };
const struct WildPokemon gRoute115_FishingMons[] =
{
    { 5, 10, SPECIES_PSYDUCK },
    { 5, 10, SPECIES_SLOWPOKE },
    { 10, 40, SPECIES_PSYDUCK },
    { 10, 40, SPECIES_SLOWPOKE },
    { 10, 40, SPECIES_POLIWAG },
    { 40, 65, SPECIES_PSYDUCK },
    { 40, 65, SPECIES_SLOWPOKE },
    { 40, 65, SPECIES_POLIWAG },
    { 40, 65, SPECIES_GOLDUCK },
    { 40, 65, SPECIES_POLITOED },
};

const struct WildPokemonInfo gRoute115_FishingMonsInfo = { 30, gRoute115_FishingMons };
const struct WildPokemon gNewMauville_Inside_LandMons[] =
{
    { 40, 44, SPECIES_VOLTORB },
    { 40, 44, SPECIES_MAGNEMITE },
    { 40, 44, SPECIES_ELECTABUZZ },
    { 40, 44, SPECIES_TOXTRICITY },
    { 40, 44, SPECIES_KLINK },
    { 40, 44, SPECIES_GRUBBIN },
    { 40, 44, SPECIES_TOGEDEMARU },
    { 40, 44, SPECIES_TOXTRICITY_LOW_KEY },
    { 40, 44, SPECIES_STUNFISK },
    { 40, 44, SPECIES_DURALUDON },
    { 40, 44, SPECIES_ROTOM },
    { 40, 44, SPECIES_ROTOM },
};

const struct WildPokemonInfo gNewMauville_Inside_LandMonsInfo = { 10, gNewMauville_Inside_LandMons };
const struct WildPokemon gRoute119_LandMons[] =
{
    { 37, 45, SPECIES_TROPIUS },
    { 37, 45, SPECIES_LINOONE_GALARIAN },
    { 37, 45, SPECIES_TANGELA },
    { 37, 45, SPECIES_SCYTHER },
    { 37, 45, SPECIES_PINSIR },
    { 37, 45, SPECIES_HERACROSS },
    { 37, 45, SPECIES_ORANGURU },
    { 37, 45, SPECIES_PASSIMIAN },
    { 37, 45, SPECIES_CARNIVINE },
    { 37, 45, SPECIES_DRIFLOON },
    { 37, 45, SPECIES_GOOMY },
    { 37, 45, SPECIES_GOOMY },
};

const struct WildPokemonInfo gRoute119_LandMonsInfo = { 15, gRoute119_LandMons };
const struct WildPokemon gRoute119_WaterMons[] =
{
    { 30, 45, SPECIES_CARVANHA },
    { 30, 45, SPECIES_FEEBAS },
    { 30, 45, SPECIES_DRIFLOON },
    { 30, 45, SPECIES_DRIFBLIM },
    { 30, 45, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gRoute119_WaterMonsInfo = { 4, gRoute119_WaterMons };
const struct WildPokemon gRoute119_FishingMons[] =
{
    { 5, 10, SPECIES_CARVANHA },
    { 5, 10, SPECIES_FEEBAS },
    { 10, 40, SPECIES_CARVANHA },
    { 10, 40, SPECIES_BASCULIN_BLUE_STRIPED },
    { 10, 40, SPECIES_FEEBAS },
    { 40, 65, SPECIES_FEEBAS },
    { 40, 65, SPECIES_CARVANHA },
    { 40, 65, SPECIES_BASCULIN_BLUE_STRIPED },
    { 40, 65, SPECIES_MILOTIC },
    { 40, 65, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gRoute119_FishingMonsInfo = { 30, gRoute119_FishingMons };
const struct WildPokemon gRoute120_LandMons[] =
{
    { 40, 47, SPECIES_ABSOL },
    { 40, 47, SPECIES_EXEGGCUTE },
    { 40, 47, SPECIES_DEDENNE },
    { 40, 47, SPECIES_DEERLING },
    { 40, 47, SPECIES_AUDINO },
    { 40, 47, SPECIES_APPLIN },
    { 40, 47, SPECIES_MORGREM },
    { 40, 47, SPECIES_HATTREM },
    { 40, 47, SPECIES_DITTO },
    { 40, 47, SPECIES_KECLEON },
    { 40, 47, SPECIES_IMPIDIMP },
    { 40, 47, SPECIES_HATENNA },
};

const struct WildPokemonInfo gRoute120_LandMonsInfo = { 20, gRoute120_LandMons };
const struct WildPokemon gRoute120_WaterMons[] =
{
    { 30, 47, SPECIES_TYMPOLE },
    { 30, 47, SPECIES_BUIZEL },
    { 30, 47, SPECIES_HOOTHOOT },
    { 30, 47, SPECIES_NOCTOWL },
    { 30, 47, SPECIES_NOCTOWL },
};

const struct WildPokemonInfo gRoute120_WaterMonsInfo = { 4, gRoute120_WaterMons };
const struct WildPokemon gRoute120_FishingMons[] =
{
    { 5, 10, SPECIES_TYMPOLE },
    { 5, 10, SPECIES_BUIZEL },
    { 10, 40, SPECIES_TYMPOLE },
    { 10, 40, SPECIES_BUIZEL },
    { 10, 40, SPECIES_WIMPOD },
    { 40, 65, SPECIES_PALPITOAD },
    { 40, 65, SPECIES_WIMPOD },
    { 40, 65, SPECIES_FLOATZEL },
    { 40, 65, SPECIES_SEISMITOAD },
    { 40, 65, SPECIES_GOLISOPOD },
};

const struct WildPokemonInfo gRoute120_FishingMonsInfo = { 30, gRoute120_FishingMons };
const struct WildPokemon gRoute121_LandMons[] =
{
    { 42, 49, SPECIES_BLITZLE },
    { 42, 49, SPECIES_COTTONEE },
    { 42, 49, SPECIES_BOUNSWEET },
    { 42, 49, SPECIES_TAUROS },
    { 42, 49, SPECIES_GIRAFARIG },
    { 42, 49, SPECIES_SKIDDO },
    { 42, 49, SPECIES_HAWLUCHA },
    { 42, 49, SPECIES_CUFANT },
    { 42, 49, SPECIES_EMOLGA },
    { 42, 49, SPECIES_KLEFKI },
    { 42, 49, SPECIES_SMEARGLE },
    { 42, 49, SPECIES_SMEARGLE },
};

const struct WildPokemonInfo gRoute121_LandMonsInfo = { 20, gRoute121_LandMons };
const struct WildPokemon gRoute121_WaterMons[] =
{
    { 5, 35, SPECIES_TYMPOLE },
    { 10, 30, SPECIES_BUIZEL },
    { 15, 25, SPECIES_HOOTHOOT },
    { 25, 30, SPECIES_NOCTOWL },
    { 25, 30, SPECIES_NOCTOWL },
};

const struct WildPokemonInfo gRoute121_WaterMonsInfo = { 4, gRoute121_WaterMons };
const struct WildPokemon gRoute121_FishingMons[] =
{
    { 5, 10, SPECIES_TYMPOLE },
    { 5, 10, SPECIES_BUIZEL },
    { 10, 40, SPECIES_TYMPOLE },
    { 10, 40, SPECIES_BUIZEL },
    { 10, 40, SPECIES_WIMPOD },
    { 40, 65, SPECIES_PALPITOAD },
    { 40, 65, SPECIES_WIMPOD },
    { 40, 65, SPECIES_FLOATZEL },
    { 40, 65, SPECIES_SEISMITOAD },
    { 40, 65, SPECIES_GOLISOPOD },
};

const struct WildPokemonInfo gRoute121_FishingMonsInfo = { 30, gRoute121_FishingMons };
const struct WildPokemon gRoute122_WaterMons[] =
{
    { 30, 47, SPECIES_TENTACOOL },
    { 30, 47, SPECIES_FRILLISH },
    { 30, 47, SPECIES_SHUPPET },
    { 30, 47, SPECIES_DUSKULL },
    { 30, 47, SPECIES_GASTLY },
};

const struct WildPokemonInfo gRoute122_WaterMonsInfo = { 4, gRoute122_WaterMons };
const struct WildPokemon gRoute122_FishingMons[] =
{
    { 5, 10, SPECIES_BASCULIN_WHITE_STRIPED },
    { 5, 10, SPECIES_FRILLISH },
    { 10, 40, SPECIES_BASCULIN_WHITE_STRIPED },
    { 10, 40, SPECIES_FRILLISH },
    { 10, 40, SPECIES_CORSOLA_GALARIAN },
    { 40, 65, SPECIES_BASCULIN_WHITE_STRIPED },
    { 40, 65, SPECIES_FRILLISH },
    { 40, 65, SPECIES_CORSOLA_GALARIAN },
    { 40, 65, SPECIES_JELLICENT },
    { 40, 65, SPECIES_CURSOLA },
};

const struct WildPokemonInfo gRoute122_FishingMonsInfo = { 30, gRoute122_FishingMons };
const struct WildPokemon gRoute123_LandMons[] =
{
    { 37, 45, SPECIES_PHANPY },
    { 37, 45, SPECIES_DEERLING_AUTUMN },
    { 37, 45, SPECIES_CUTIEFLY },
    { 37, 45, SPECIES_VULLABY },
    { 37, 45, SPECIES_MILTANK },
    { 37, 45, SPECIES_MUDBRAY },
    { 37, 45, SPECIES_BISHARP },
    { 37, 45, SPECIES_HOUNDOUR },
    { 37, 45, SPECIES_FALINKS },
    { 37, 45, SPECIES_SUDOWOODO },
    { 2, 5, SPECIES_BONSLY },
    { 2, 5, SPECIES_BONSLY },
};

const struct WildPokemonInfo gRoute123_LandMonsInfo = { 20, gRoute123_LandMons };
const struct WildPokemon gRoute123_WaterMons[] =
{
    { 30, 47, SPECIES_TENTACOOL },
    { 30, 47, SPECIES_WINGULL },
    { 30, 47, SPECIES_VULLABY },
    { 30, 47, SPECIES_PELIPPER },
    { 30, 47, SPECIES_MANDIBUZZ },
};

const struct WildPokemonInfo gRoute123_WaterMonsInfo = { 4, gRoute123_WaterMons };
const struct WildPokemon gRoute123_FishingMons[] =
{
    { 5, 10, SPECIES_TYMPOLE },
    { 5, 10, SPECIES_BUIZEL },
    { 10, 40, SPECIES_TYMPOLE },
    { 10, 40, SPECIES_BUIZEL },
    { 10, 40, SPECIES_CORPHISH },
    { 40, 65, SPECIES_PALPITOAD },
    { 40, 65, SPECIES_CORPHISH },
    { 40, 65, SPECIES_CRAWDAUNT },
    { 40, 65, SPECIES_FLOATZEL },
    { 40, 65, SPECIES_SEISMITOAD },
};

const struct WildPokemonInfo gRoute123_FishingMonsInfo = { 30, gRoute123_FishingMons };
const struct WildPokemon gMtPyre_2F_LandMons[] =
{
    { 44, 51, SPECIES_SINISTEA },
    { 44, 51, SPECIES_DUSKULL },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_CUBONE },
    { 44, 51, SPECIES_YAMASK },
    { 44, 51, SPECIES_MR_MIME },
    { 44, 51, SPECIES_MIMIKYU },
    { 44, 51, SPECIES_MISDREAVUS },
    { 44, 51, SPECIES_SPIRITOMB },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
};

const struct WildPokemonInfo gMtPyre_2F_LandMonsInfo = { 10, gMtPyre_2F_LandMons };
const struct WildPokemon gMtPyre_3F_LandMons[] =
{
    { 44, 51, SPECIES_SINISTEA },
    { 44, 51, SPECIES_DUSKULL },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_CUBONE },
    { 44, 51, SPECIES_YAMASK },
    { 44, 51, SPECIES_MR_MIME },
    { 44, 51, SPECIES_MIMIKYU },
    { 44, 51, SPECIES_MISDREAVUS },
    { 44, 51, SPECIES_SPIRITOMB },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
};

const struct WildPokemonInfo gMtPyre_3F_LandMonsInfo = { 10, gMtPyre_3F_LandMons };
const struct WildPokemon gMtPyre_4F_LandMons[] =
{
    { 44, 51, SPECIES_SINISTEA },
    { 44, 51, SPECIES_DUSKULL },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_CUBONE },
    { 44, 51, SPECIES_YAMASK },
    { 44, 51, SPECIES_MR_MIME },
    { 44, 51, SPECIES_MIMIKYU },
    { 44, 51, SPECIES_MISDREAVUS },
    { 44, 51, SPECIES_SPIRITOMB },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
};

const struct WildPokemonInfo gMtPyre_4F_LandMonsInfo = { 10, gMtPyre_4F_LandMons };
const struct WildPokemon gMtPyre_5F_LandMons[] =
{
    { 44, 51, SPECIES_SINISTEA },
    { 44, 51, SPECIES_DUSKULL },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_CUBONE },
    { 44, 51, SPECIES_YAMASK },
    { 44, 51, SPECIES_MR_MIME },
    { 44, 51, SPECIES_MIMIKYU },
    { 44, 51, SPECIES_MISDREAVUS },
    { 44, 51, SPECIES_SPIRITOMB },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
};

const struct WildPokemonInfo gMtPyre_5F_LandMonsInfo = { 10, gMtPyre_5F_LandMons };
const struct WildPokemon gMtPyre_6F_LandMons[] =
{
    { 44, 51, SPECIES_SINISTEA },
    { 44, 51, SPECIES_DUSKULL },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_CUBONE },
    { 44, 51, SPECIES_YAMASK },
    { 44, 51, SPECIES_MR_MIME },
    { 44, 51, SPECIES_MIMIKYU },
    { 44, 51, SPECIES_MISDREAVUS },
    { 44, 51, SPECIES_SPIRITOMB },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
    { 44, 51, SPECIES_SINISTEA_ANTIQUE },
};

const struct WildPokemonInfo gMtPyre_6F_LandMonsInfo = { 10, gMtPyre_6F_LandMons };
const struct WildPokemon gMtPyre_Exterior_LandMons[] =
{
    { 44, 51, SPECIES_MEDITITE },
    { 44, 51, SPECIES_LITWICK },
    { 44, 51, SPECIES_GASTLY },
    { 44, 51, SPECIES_VULPIX },
    { 44, 51, SPECIES_SHUPPET },
    { 44, 51, SPECIES_DUSKULL },
    { 44, 51, SPECIES_INDEEDEE_FEMALE },
    { 44, 51, SPECIES_INDEEDEE },
    { 44, 51, SPECIES_ELGYEM },
    { 44, 51, SPECIES_HONEDGE },
    { 44, 51, SPECIES_ELGYEM },
    { 44, 51, SPECIES_HONEDGE },
};

const struct WildPokemonInfo gMtPyre_Exterior_LandMonsInfo = { 10, gMtPyre_Exterior_LandMons };
const struct WildPokemon gMtPyre_Summit_LandMons[] =
{
    { 44, 51, SPECIES_BANETTE },
    { 44, 51, SPECIES_DUSCLOPS },
    { 44, 51, SPECIES_HAUNTER },
    { 44, 51, SPECIES_ORICORIO_SENSU },
    { 44, 51, SPECIES_MEDICHAM },
    { 44, 51, SPECIES_CHIMECHO },
    { 44, 51, SPECIES_XATU },
    { 44, 51, SPECIES_BRONZONG },
    { 44, 51, SPECIES_SIGILYPH },
    { 44, 51, SPECIES_LAMPENT },
    { 44, 51, SPECIES_DREEPY },
    { 44, 51, SPECIES_DREEPY },
};

const struct WildPokemonInfo gMtPyre_Summit_LandMonsInfo = { 10, gMtPyre_Summit_LandMons };
const struct WildPokemon gGraniteCave_StevensRoom_LandMons[] =
{
    { 13, 15, SPECIES_MAKUHITA },
    { 13, 15, SPECIES_GEODUDE_ALOLAN },
    { 13, 15, SPECIES_ONIX },
    { 13, 15, SPECIES_DIGLETT_ALOLAN },
    { 13, 15, SPECIES_MORELULL },
    { 13, 15, SPECIES_ABRA },
    { 13, 15, SPECIES_MEOWTH_ALOLAN },
    { 13, 15, SPECIES_MEOWTH_ALOLAN },
    { 13, 15, SPECIES_DWEBBLE },
    { 13, 15, SPECIES_INKAY },
    { 13, 15, SPECIES_BRONZOR },
    { 13, 15, SPECIES_BRONZOR },
};

const struct WildPokemonInfo gGraniteCave_StevensRoom_LandMonsInfo = { 10, gGraniteCave_StevensRoom_LandMons };
const struct WildPokemon gRoute125_WaterMons[] =
{
    { 30, 52, SPECIES_BERGMITE },
    { 30, 52, SPECIES_EISCUE },
    { 30, 52, SPECIES_CRAMORANT },
    { 30, 52, SPECIES_LAPRAS },
    { 30, 52, SPECIES_LAPRAS },
};

const struct WildPokemonInfo gRoute125_WaterMonsInfo = { 4, gRoute125_WaterMons };
const struct WildPokemon gRoute125_FishingMons[] =
{
    { 5, 10, SPECIES_SPHEAL },
    { 5, 10, SPECIES_SEEL },
    { 10, 40, SPECIES_SPHEAL },
    { 10, 40, SPECIES_SEEL },
    { 10, 40, SPECIES_SHELLDER },
    { 40, 65, SPECIES_SPHEAL },
    { 40, 65, SPECIES_SEEL },
    { 40, 65, SPECIES_SHELLDER },
    { 40, 65, SPECIES_DEWGONG },
    { 40, 65, SPECIES_KINGDRA },
};

const struct WildPokemonInfo gRoute125_FishingMonsInfo = { 30, gRoute125_FishingMons };
const struct WildPokemon gRoute126_WaterMons[] =
{
    { 5, 35, SPECIES_SKRELP },
    { 10, 30, SPECIES_CHINCHOU },
    { 15, 25, SPECIES_LANTURN },
    { 25, 30, SPECIES_DRAGALGE },
    { 25, 30, SPECIES_DRAGALGE },
};

const struct WildPokemonInfo gRoute126_WaterMonsInfo = { 4, gRoute126_WaterMons };
const struct WildPokemon gRoute126_FishingMons[] =
{
    { 5, 10, SPECIES_SKRELP },
    { 5, 10, SPECIES_CLAMPERL },
    { 10, 40, SPECIES_SKRELP },
    { 10, 40, SPECIES_CLAMPERL },
    { 10, 40, SPECIES_CHINCHOU },
    { 40, 65, SPECIES_CLAMPERL },
    { 40, 65, SPECIES_CHINCHOU },
    { 40, 65, SPECIES_RELICANTH },
    { 40, 65, SPECIES_DRAGALGE },
    { 40, 65, SPECIES_DRAGALGE },
};

const struct WildPokemonInfo gRoute126_FishingMonsInfo = { 30, gRoute126_FishingMons };
const struct WildPokemon gRoute127_WaterMons[] =
{
    { 30, 55, SPECIES_TENTACOOL },
    { 30, 55, SPECIES_WAILMER },
    { 30, 55, SPECIES_CRAMORANT },
    { 30, 55, SPECIES_PELIPPER },
    { 30, 55, SPECIES_WAILORD },
};

const struct WildPokemonInfo gRoute127_WaterMonsInfo = { 4, gRoute127_WaterMons };
const struct WildPokemon gRoute127_FishingMons[] =
{
    { 5, 10, SPECIES_CHINCHOU },
    { 5, 10, SPECIES_CLAMPERL },
    { 10, 40, SPECIES_CHINCHOU },
    { 10, 40, SPECIES_CLAMPERL },
    { 10, 40, SPECIES_CORSOLA },
    { 40, 65, SPECIES_HUNTAIL },
    { 40, 65, SPECIES_GOREBYSS },
    { 40, 65, SPECIES_LANTURN },
    { 40, 65, SPECIES_WAILMER },
    { 40, 65, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute127_FishingMonsInfo = { 30, gRoute127_FishingMons };
const struct WildPokemon gRoute128_WaterMons[] =
{
    { 30, 55, SPECIES_LUVDISC },
    { 30, 55, SPECIES_CORSOLA },
    { 30, 55, SPECIES_CRAMORANT },
    { 30, 55, SPECIES_WAILMER },
    { 30, 55, SPECIES_WAILORD },
};

const struct WildPokemonInfo gRoute128_WaterMonsInfo = { 4, gRoute128_WaterMons };
const struct WildPokemon gRoute128_FishingMons[] =
{
    { 5, 10, SPECIES_LUVDISC },
    { 5, 10, SPECIES_LUVDISC },
    { 10, 40, SPECIES_LUVDISC },
    { 10, 40, SPECIES_CLAMPERL },
    { 10, 40, SPECIES_CORSOLA },
    { 40, 65, SPECIES_HUNTAIL },
    { 40, 65, SPECIES_GOREBYSS },
    { 40, 65, SPECIES_SHARPEDO },
    { 40, 65, SPECIES_WAILMER },
    { 40, 65, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute128_FishingMonsInfo = { 30, gRoute128_FishingMons };
const struct WildPokemon gRoute129_WaterMons[] =
{
    { 30, 55, SPECIES_WAILMER },
    { 30, 55, SPECIES_SHARPEDO },
    { 30, 55, SPECIES_LAPRAS },
    { 30, 55, SPECIES_WAILMER },
    { 30, 55, SPECIES_WAILORD },
};

const struct WildPokemonInfo gRoute129_WaterMonsInfo = { 4, gRoute129_WaterMons };
const struct WildPokemon gRoute129_FishingMons[] =
{
    { 5, 10, SPECIES_REMORAID },
    { 5, 10, SPECIES_REMORAID },
    { 10, 40, SPECIES_REMORAID },
    { 10, 40, SPECIES_CARVANHA },
    { 10, 40, SPECIES_SHARPEDO },
    { 40, 65, SPECIES_OCTILLERY },
    { 40, 65, SPECIES_SHARPEDO },
    { 40, 65, SPECIES_WAILMER },
    { 40, 65, SPECIES_WAILMER },
    { 40, 65, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute129_FishingMonsInfo = { 30, gRoute129_FishingMons };
const struct WildPokemon gRoute130_LandMons[] =
{
    { 30, 30, SPECIES_WYNAUT },
    { 35, 35, SPECIES_WYNAUT },
    { 25, 25, SPECIES_WYNAUT },
    { 40, 40, SPECIES_WYNAUT },
    { 20, 20, SPECIES_WYNAUT },
    { 45, 45, SPECIES_WYNAUT },
    { 15, 15, SPECIES_WYNAUT },
    { 50, 50, SPECIES_WYNAUT },
    { 10, 10, SPECIES_WYNAUT },
    { 5, 5, SPECIES_WYNAUT },
    { 10, 10, SPECIES_WYNAUT },
    { 5, 5, SPECIES_WYNAUT },
};

const struct WildPokemonInfo gRoute130_LandMonsInfo = { 20, gRoute130_LandMons };
const struct WildPokemon gRoute130_WaterMons[] =
{
    { 30, 55, SPECIES_WAILMER },
    { 30, 55, SPECIES_SHARPEDO },
    { 30, 55, SPECIES_LAPRAS },
    { 30, 55, SPECIES_WAILMER },
    { 30, 55, SPECIES_WAILORD },
};

const struct WildPokemonInfo gRoute130_WaterMonsInfo = { 4, gRoute130_WaterMons };
const struct WildPokemon gRoute130_FishingMons[] =
{
    { 5, 10, SPECIES_REMORAID },
    { 5, 10, SPECIES_BRUXISH },
    { 10, 40, SPECIES_BRUXISH },
    { 10, 40, SPECIES_ALOMOMOLA },
    { 10, 40, SPECIES_ALOMOMOLA },
    { 40, 65, SPECIES_BRUXISH },
    { 40, 65, SPECIES_ALOMOMOLA },
    { 40, 65, SPECIES_PYUKUMUKU },
    { 40, 65, SPECIES_PINCURCHIN },
    { 40, 65, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute130_FishingMonsInfo = { 30, gRoute130_FishingMons };
const struct WildPokemon gRoute131_WaterMons[] =
{
    { 30, 55, SPECIES_ALOMOMOLA },
    { 30, 55, SPECIES_BRUXISH },
    { 30, 55, SPECIES_FLETCHINDER },
    { 30, 55, SPECIES_WAILMER },
    { 30, 55, SPECIES_WAILORD },
};

const struct WildPokemonInfo gRoute131_WaterMonsInfo = { 4, gRoute131_WaterMons };
const struct WildPokemon gRoute131_FishingMons[] =
{
    { 5, 10, SPECIES_BRUXISH },
    { 5, 10, SPECIES_ALOMOMOLA },
    { 10, 40, SPECIES_BRUXISH },
    { 10, 40, SPECIES_ALOMOMOLA },
    { 10, 40, SPECIES_ALOMOMOLA },
    { 40, 65, SPECIES_BRUXISH },
    { 40, 65, SPECIES_ALOMOMOLA },
    { 40, 65, SPECIES_PYUKUMUKU },
    { 40, 65, SPECIES_PINCURCHIN },
    { 40, 65, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute131_FishingMonsInfo = { 30, gRoute131_FishingMons };
const struct WildPokemon gRoute132_LandMons[] =
{
    { 45, 55, SPECIES_EXEGGUTOR },
    { 45, 55, SPECIES_EXEGGUTOR_ALOLAN },
    { 45, 55, SPECIES_GRIMER_ALOLAN },
    { 45, 55, SPECIES_MORPEKO },
    { 45, 55, SPECIES_RATTATA_ALOLAN },
    { 45, 55, SPECIES_CINCCINO },
    { 45, 55, SPECIES_SHUCKLE },
    { 45, 55, SPECIES_KOMALA },
    { 45, 55, SPECIES_MAROWAK_ALOLAN },
    { 45, 55, SPECIES_RAICHU_ALOLAN },
    { 45, 55, SPECIES_JANGMO_O },
    { 45, 55, SPECIES_JANGMO_O },
};

const struct WildPokemonInfo gRoute132_LandMonsInfo = { 30, gRoute132_LandMons };
const struct WildPokemon gRoute132_WaterMons[] =
{
    { 30, 55, SPECIES_ALOMOMOLA },
    { 30, 55, SPECIES_SHELLOS_EAST_SEA },
    { 30, 55, SPECIES_FLETCHINDER },
    { 30, 55, SPECIES_CRAMORANT },
    { 30, 55, SPECIES_RAICHU_ALOLAN },
};

const struct WildPokemonInfo gRoute132_WaterMonsInfo = { 4, gRoute132_WaterMons };
const struct WildPokemon gRoute132_FishingMons[] =
{
    { 5, 10, SPECIES_BRUXISH },
    { 5, 10, SPECIES_ALOMOMOLA },
    { 10, 40, SPECIES_BRUXISH },
    { 10, 40, SPECIES_SHELLOS_EAST_SEA },
    { 10, 40, SPECIES_ALOMOMOLA },
    { 40, 65, SPECIES_SHELLOS_EAST_SEA },
    { 40, 65, SPECIES_ALOMOMOLA },
    { 40, 65, SPECIES_PYUKUMUKU },
    { 40, 65, SPECIES_PINCURCHIN },
    { 40, 65, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute132_FishingMonsInfo = { 30, gRoute132_FishingMons };
const struct WildPokemon gRoute133_WaterMons[] =
{
    { 30, 55, SPECIES_ALOMOMOLA },
    { 30, 55, SPECIES_SHELLOS_EAST_SEA },
    { 30, 55, SPECIES_FLETCHINDER },
    { 30, 55, SPECIES_CRAMORANT },
    { 40, 55, SPECIES_TALONFLAME },
};

const struct WildPokemonInfo gRoute133_WaterMonsInfo = { 4, gRoute133_WaterMons };
const struct WildPokemon gRoute133_FishingMons[] =
{
    { 5, 10, SPECIES_HORSEA },
    { 5, 10, SPECIES_FINNEON },
    { 10, 40, SPECIES_HORSEA },
    { 10, 40, SPECIES_FINNEON },
    { 10, 40, SPECIES_SHELLOS_EAST_SEA },
    { 40, 65, SPECIES_SHELLOS_EAST_SEA },
    { 40, 65, SPECIES_HORSEA },
    { 40, 65, SPECIES_PINCURCHIN },
    { 40, 65, SPECIES_PYUKUMUKU },
    { 40, 65, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute133_FishingMonsInfo = { 30, gRoute133_FishingMons };
const struct WildPokemon gRoute134_WaterMons[] =
{
    { 30, 45, SPECIES_HORSEA },
    { 30, 45, SPECIES_REMORAID },
    { 30, 45, SPECIES_MANTYKE },
    { 30, 45, SPECIES_MANTINE },
    { 30, 45, SPECIES_CRAMORANT },
};

const struct WildPokemonInfo gRoute134_WaterMonsInfo = { 4, gRoute134_WaterMons };
const struct WildPokemon gRoute134_FishingMons[] =
{
    { 5, 10, SPECIES_HORSEA },
    { 5, 10, SPECIES_FINNEON },
    { 10, 40, SPECIES_HORSEA },
    { 10, 40, SPECIES_FINNEON },
    { 10, 40, SPECIES_SHELLOS_EAST_SEA },
    { 40, 65, SPECIES_SHELLOS_EAST_SEA },
    { 40, 65, SPECIES_HORSEA },
    { 40, 65, SPECIES_PINCURCHIN },
    { 40, 65, SPECIES_PYUKUMUKU },
    { 40, 65, SPECIES_WAILMER },
};

const struct WildPokemonInfo gRoute134_FishingMonsInfo = { 30, gRoute134_FishingMons };
const struct WildPokemon gAbandonedShip_HiddenFloorCorridors_WaterMons[] =
{
    { 30, 45, SPECIES_FRILLISH },
    { 30, 45, SPECIES_DHELMISE },
    { 30, 45, SPECIES_DHELMISE },
    { 30, 45, SPECIES_DHELMISE },
    { 30, 45, SPECIES_DHELMISE },
};

const struct WildPokemonInfo gAbandonedShip_HiddenFloorCorridors_WaterMonsInfo = { 4, gAbandonedShip_HiddenFloorCorridors_WaterMons };
const struct WildPokemon gAbandonedShip_HiddenFloorCorridors_FishingMons[] =
{
    { 5, 10, SPECIES_FRILLISH },
    { 5, 10, SPECIES_DHELMISE },
    { 10, 40, SPECIES_DHELMISE },
    { 10, 40, SPECIES_DHELMISE },
    { 10, 40, SPECIES_DHELMISE },
    { 40, 65, SPECIES_DHELMISE },
    { 40, 65, SPECIES_DHELMISE },
    { 40, 65, SPECIES_DHELMISE },
    { 40, 65, SPECIES_JELLICENT },
    { 40, 65, SPECIES_KLEFKI },
};

const struct WildPokemonInfo gAbandonedShip_HiddenFloorCorridors_FishingMonsInfo = { 20, gAbandonedShip_HiddenFloorCorridors_FishingMons };
const struct WildPokemon gSeafloorCavern_Room1_LandMons[] =
{
    { 50, 60, SPECIES_LILEEP },
    { 50, 60, SPECIES_ANORITH },
    { 50, 60, SPECIES_OMANYTE },
    { 50, 60, SPECIES_KABUTO },
    { 50, 60, SPECIES_CRANIDOS },
    { 50, 60, SPECIES_SHIELDON },
    { 58, 68, SPECIES_OMASTAR },
    { 58, 68, SPECIES_KABUTOPS },
    { 58, 68, SPECIES_RAMPARDOS },
    { 58, 68, SPECIES_BASTIODON },
    { 58, 68, SPECIES_RAMPARDOS },
    { 58, 68, SPECIES_BASTIODON },
};

const struct WildPokemonInfo gSeafloorCavern_Room1_LandMonsInfo = { 4, gSeafloorCavern_Room1_LandMons };
const struct WildPokemon gSeafloorCavern_Room2_LandMons[] =
{
    { 50, 60, SPECIES_LILEEP },
    { 50, 60, SPECIES_ANORITH },
    { 50, 60, SPECIES_TIRTOUGA },
    { 50, 60, SPECIES_ARCHEN },
    { 50, 60, SPECIES_TYRUNT },
    { 50, 60, SPECIES_AMAURA },
    { 58, 68, SPECIES_CARRACOSTA },
    { 58, 68, SPECIES_ARCHEOPS },
    { 58, 68, SPECIES_TYRANTRUM },
    { 58, 68, SPECIES_AURORUS },
    { 58, 68, SPECIES_TYRANTRUM },
    { 58, 68, SPECIES_AURORUS },
};

const struct WildPokemonInfo gSeafloorCavern_Room2_LandMonsInfo = { 4, gSeafloorCavern_Room2_LandMons };
const struct WildPokemon gSeafloorCavern_Room3_LandMons[] =
{
    { 50, 60, SPECIES_LILEEP },
    { 50, 60, SPECIES_ANORITH },
    { 50, 60, SPECIES_KABUTO },
    { 50, 60, SPECIES_SHIELDON },
    { 50, 60, SPECIES_ARCHEN },
    { 50, 60, SPECIES_AMAURA },
    { 58, 68, SPECIES_KABUTOPS },
    { 58, 68, SPECIES_BASTIODON },
    { 58, 68, SPECIES_ARCHEOPS },
    { 58, 68, SPECIES_AURORUS },
    { 58, 68, SPECIES_ARCHEOPS },
    { 58, 68, SPECIES_AURORUS },
};

const struct WildPokemonInfo gSeafloorCavern_Room3_LandMonsInfo = { 4, gSeafloorCavern_Room3_LandMons };
const struct WildPokemon gSeafloorCavern_Room4_LandMons[] =
{
    { 50, 60, SPECIES_LILEEP },
    { 50, 60, SPECIES_ANORITH },
    { 58, 68, SPECIES_DRACOVISH },
    { 58, 68, SPECIES_DRACOZOLT },
    { 58, 68, SPECIES_ARCTOZOLT },
    { 50, 60, SPECIES_ARCHEN },
    { 58, 68, SPECIES_ARCHEOPS },
    { 58, 68, SPECIES_AERODACTYL },
    { 58, 68, SPECIES_CRADILY },
    { 58, 68, SPECIES_ARMALDO },
    { 58, 68, SPECIES_CRADILY },
    { 58, 68, SPECIES_ARMALDO },
};

const struct WildPokemonInfo gSeafloorCavern_Room4_LandMonsInfo = { 4, gSeafloorCavern_Room4_LandMons };
const struct WildPokemon gSeafloorCavern_Room5_LandMons[] =
{
    { 50, 60, SPECIES_LILEEP },
    { 50, 60, SPECIES_ANORITH },
    { 50, 60, SPECIES_TIRTOUGA },
    { 50, 60, SPECIES_OMANYTE },
    { 50, 60, SPECIES_KABUTO },
    { 50, 60, SPECIES_ARCHEN },
    { 58, 68, SPECIES_CARRACOSTA },
    { 58, 68, SPECIES_OMASTAR },
    { 58, 68, SPECIES_AERODACTYL },
    { 58, 68, SPECIES_KABUTOPS },
    { 58, 68, SPECIES_ARCHEOPS },
    { 58, 68, SPECIES_KABUTOPS },
};

const struct WildPokemonInfo gSeafloorCavern_Room5_LandMonsInfo = { 4, gSeafloorCavern_Room5_LandMons };
const struct WildPokemon gSeafloorCavern_Room6_LandMons[] =
{
    { 50, 60, SPECIES_LILEEP },
    { 50, 60, SPECIES_ANORITH },
    { 50, 60, SPECIES_TIRTOUGA },
    { 50, 60, SPECIES_OMANYTE },
    { 50, 60, SPECIES_KABUTO },
    { 50, 60, SPECIES_ARCHEN },
    { 58, 68, SPECIES_CARRACOSTA },
    { 58, 68, SPECIES_OMASTAR },
    { 58, 68, SPECIES_AERODACTYL },
    { 58, 68, SPECIES_KABUTOPS },
    { 58, 68, SPECIES_ARCHEOPS },
    { 58, 68, SPECIES_KABUTOPS },
};

const struct WildPokemonInfo gSeafloorCavern_Room6_LandMonsInfo = { 4, gSeafloorCavern_Room6_LandMons };
const struct WildPokemon gSeafloorCavern_Room6_WaterMons[] =
{
    { 30, 55, SPECIES_FINNEON },
    { 30, 55, SPECIES_TIRTOUGA },
    { 50, 55, SPECIES_ARCTOVISH },
    { 30, 65, SPECIES_RELICANTH },
    { 30, 65, SPECIES_RELICANTH },
};

const struct WildPokemonInfo gSeafloorCavern_Room6_WaterMonsInfo = { 4, gSeafloorCavern_Room6_WaterMons };
const struct WildPokemon gSeafloorCavern_Room6_FishingMons[] =
{
    { 5, 10, SPECIES_FINNEON },
    { 5, 10, SPECIES_RELICANTH },
    { 10, 40, SPECIES_FINNEON },
    { 10, 40, SPECIES_RELICANTH },
    { 10, 40, SPECIES_ARCTOVISH },
    { 40, 65, SPECIES_RELICANTH },
    { 40, 65, SPECIES_ARCTOVISH },
    { 40, 65, SPECIES_LUMINEON },
    { 40, 65, SPECIES_LUMINEON },
    { 40, 65, SPECIES_LUMINEON },
};

const struct WildPokemonInfo gSeafloorCavern_Room6_FishingMonsInfo = { 10, gSeafloorCavern_Room6_FishingMons };
const struct WildPokemon gSeafloorCavern_Room7_LandMons[] =
{
    { 50, 60, SPECIES_LILEEP },
    { 50, 60, SPECIES_ANORITH },
    { 50, 60, SPECIES_DRACOVISH },
    { 58, 68, SPECIES_DRACOZOLT },
    { 58, 68, SPECIES_ARCTOZOLT },
    { 50, 60, SPECIES_SHIELDON },
    { 58, 68, SPECIES_BASTIODON },
    { 58, 68, SPECIES_AERODACTYL },
    { 58, 68, SPECIES_CRADILY },
    { 58, 68, SPECIES_ARMALDO },
    { 58, 68, SPECIES_CRADILY },
    { 58, 68, SPECIES_ARMALDO },
};

const struct WildPokemonInfo gSeafloorCavern_Room7_LandMonsInfo = { 4, gSeafloorCavern_Room7_LandMons };
const struct WildPokemon gSeafloorCavern_Room7_WaterMons[] =
{
    { 30, 55, SPECIES_FINNEON },
    { 30, 55, SPECIES_TIRTOUGA },
    { 50, 55, SPECIES_ARCTOVISH },
    { 30, 55, SPECIES_RELICANTH },
    { 30, 55, SPECIES_RELICANTH },
};

const struct WildPokemonInfo gSeafloorCavern_Room7_WaterMonsInfo = { 4, gSeafloorCavern_Room7_WaterMons };
const struct WildPokemon gSeafloorCavern_Room7_FishingMons[] =
{
    { 5, 10, SPECIES_FINNEON },
    { 5, 10, SPECIES_RELICANTH },
    { 10, 40, SPECIES_FINNEON },
    { 10, 40, SPECIES_RELICANTH },
    { 10, 40, SPECIES_ARCTOVISH },
    { 40, 65, SPECIES_RELICANTH },
    { 40, 65, SPECIES_ARCTOVISH },
    { 40, 65, SPECIES_LUMINEON },
    { 40, 65, SPECIES_LUMINEON },
    { 40, 65, SPECIES_LUMINEON },
};

const struct WildPokemonInfo gSeafloorCavern_Room7_FishingMonsInfo = { 10, gSeafloorCavern_Room7_FishingMons };
const struct WildPokemon gSeafloorCavern_Room8_LandMons[] =
{
    { 50, 60, SPECIES_LILEEP },
    { 50, 60, SPECIES_ANORITH },
    { 50, 60, SPECIES_OMANYTE },
    { 50, 60, SPECIES_CRANIDOS },
    { 50, 60, SPECIES_TIRTOUGA },
    { 50, 60, SPECIES_TYRUNT },
    { 58, 68, SPECIES_OMASTAR },
    { 58, 68, SPECIES_RAMPARDOS },
    { 58, 68, SPECIES_CARRACOSTA },
    { 58, 68, SPECIES_TYRANTRUM },
    { 58, 68, SPECIES_CARRACOSTA },
    { 58, 68, SPECIES_TYRANTRUM },
};

const struct WildPokemonInfo gSeafloorCavern_Room8_LandMonsInfo = { 4, gSeafloorCavern_Room8_LandMons };
const struct WildPokemon gSeafloorCavern_Entrance_WaterMons[] =
{
    { 30, 55, SPECIES_FINNEON },
    { 30, 55, SPECIES_TIRTOUGA },
    { 50, 55, SPECIES_ARCTOVISH },
    { 30, 55, SPECIES_RELICANTH },
    { 30, 55, SPECIES_RELICANTH },
};

const struct WildPokemonInfo gSeafloorCavern_Entrance_WaterMonsInfo = { 4, gSeafloorCavern_Entrance_WaterMons };
const struct WildPokemon gSeafloorCavern_Entrance_FishingMons[] =
{
    { 5, 10, SPECIES_FINNEON },
    { 5, 10, SPECIES_RELICANTH },
    { 10, 40, SPECIES_FINNEON },
    { 10, 40, SPECIES_RELICANTH },
    { 10, 40, SPECIES_ARCTOVISH },
    { 40, 65, SPECIES_RELICANTH },
    { 40, 65, SPECIES_ARCTOVISH },
    { 40, 65, SPECIES_LUMINEON },
    { 40, 65, SPECIES_LUMINEON },
    { 40, 65, SPECIES_LUMINEON },
};

const struct WildPokemonInfo gSeafloorCavern_Entrance_FishingMonsInfo = { 10, gSeafloorCavern_Entrance_FishingMons };
const struct WildPokemon gCaveOfOrigin_Entrance_LandMons[] =
{
    { 55, 65, SPECIES_DITTO },
    { 55, 65, SPECIES_DITTO },
    { 55, 65, SPECIES_ZUBAT },
    { 55, 65, SPECIES_WOOBAT },
    { 55, 65, SPECIES_BINACLE },
    { 55, 65, SPECIES_BINACLE },
    { 55, 65, SPECIES_AMOONGUSS },
    { 55, 65, SPECIES_SHIINOTIC },
    { 55, 65, SPECIES_MAWILE },
    { 55, 65, SPECIES_SABLEYE },
    { 55, 65, SPECIES_MAWILE },
    { 55, 65, SPECIES_SABLEYE },
};

const struct WildPokemonInfo gCaveOfOrigin_Entrance_LandMonsInfo = { 4, gCaveOfOrigin_Entrance_LandMons };
const struct WildPokemon gCaveOfOrigin_1F_LandMons[] =
{
    { 55, 65, SPECIES_DITTO },
    { 55, 65, SPECIES_DITTO },
    { 55, 65, SPECIES_ZUBAT },
    { 55, 65, SPECIES_WOOBAT },
    { 55, 65, SPECIES_BINACLE },
    { 55, 65, SPECIES_BINACLE },
    { 55, 65, SPECIES_AMOONGUSS },
    { 55, 65, SPECIES_SHIINOTIC },
    { 55, 65, SPECIES_MAWILE },
    { 55, 65, SPECIES_SABLEYE },
    { 55, 65, SPECIES_MAWILE },
    { 55, 65, SPECIES_SABLEYE },
};

const struct WildPokemonInfo gCaveOfOrigin_1F_LandMonsInfo = { 4, gCaveOfOrigin_1F_LandMons };
const struct WildPokemon gCaveOfOrigin_UnusedRubySapphireMap1_LandMons[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SABLEYE },
    { 32, 32, SPECIES_SABLEYE },
    { 34, 34, SPECIES_SABLEYE },
    { 33, 33, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};

const struct WildPokemonInfo gCaveOfOrigin_UnusedRubySapphireMap1_LandMonsInfo = { 4, gCaveOfOrigin_UnusedRubySapphireMap1_LandMons };
const struct WildPokemon gCaveOfOrigin_UnusedRubySapphireMap2_LandMons[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SABLEYE },
    { 32, 32, SPECIES_SABLEYE },
    { 34, 34, SPECIES_SABLEYE },
    { 33, 33, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};

const struct WildPokemonInfo gCaveOfOrigin_UnusedRubySapphireMap2_LandMonsInfo = { 4, gCaveOfOrigin_UnusedRubySapphireMap2_LandMons };
const struct WildPokemon gCaveOfOrigin_UnusedRubySapphireMap3_LandMons[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SABLEYE },
    { 32, 32, SPECIES_SABLEYE },
    { 34, 34, SPECIES_SABLEYE },
    { 33, 33, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};

const struct WildPokemonInfo gCaveOfOrigin_UnusedRubySapphireMap3_LandMonsInfo = { 4, gCaveOfOrigin_UnusedRubySapphireMap3_LandMons };
const struct WildPokemon gNewMauville_Entrance_LandMons[] =
{
    { 24, 24, SPECIES_VOLTORB },
    { 24, 24, SPECIES_MAGNEMITE },
    { 25, 25, SPECIES_VOLTORB },
    { 25, 25, SPECIES_MAGNEMITE },
    { 23, 23, SPECIES_VOLTORB },
    { 23, 23, SPECIES_MAGNEMITE },
    { 26, 26, SPECIES_VOLTORB },
    { 26, 26, SPECIES_MAGNEMITE },
    { 22, 22, SPECIES_VOLTORB },
    { 22, 22, SPECIES_MAGNEMITE },
    { 22, 22, SPECIES_VOLTORB },
    { 22, 22, SPECIES_MAGNEMITE },
};

const struct WildPokemonInfo gNewMauville_Entrance_LandMonsInfo = { 10, gNewMauville_Entrance_LandMons };
const struct WildPokemon gSafariZone_Southwest_LandMons[] =
{
    { 41, 47, SPECIES_GROWLITHE_HISUIAN },
    { 41, 47, SPECIES_VOLTORB_HISUIAN },
    { 41, 47, SPECIES_SNEASEL_HISUIAN },
    { 41, 47, SPECIES_SNEASEL_HISUIAN },
    { 41, 47, SPECIES_ZORUA_HISUIAN },
    { 41, 47, SPECIES_ZORUA_HISUIAN },
    { 41, 47, SPECIES_GROWLITHE_HISUIAN },
    { 41, 47, SPECIES_VOLTORB_HISUIAN },
    { 41, 47, SPECIES_SNEASEL_HISUIAN },
    { 41, 47, SPECIES_ZORUA_HISUIAN },
    { 41, 47, SPECIES_SNEASEL_HISUIAN },
    { 41, 47, SPECIES_ZORUA_HISUIAN },
};

const struct WildPokemonInfo gSafariZone_Southwest_LandMonsInfo = { 25, gSafariZone_Southwest_LandMons };
const struct WildPokemon gSafariZone_Southwest_WaterMons[] =
{
    { 30, 47, SPECIES_QWILFISH_HISUIAN },
    { 30, 47, SPECIES_BASCULIN_WHITE_STRIPED },
    { 30, 47, SPECIES_SLIGGOO_HISUIAN },
    { 30, 47, SPECIES_AVALUGG_HISUIAN },
    { 30, 47, SPECIES_AVALUGG_HISUIAN },
};

const struct WildPokemonInfo gSafariZone_Southwest_WaterMonsInfo = { 9, gSafariZone_Southwest_WaterMons };
const struct WildPokemon gSafariZone_Southwest_FishingMons[] =
{
    { 5, 10, SPECIES_QWILFISH_HISUIAN },
    { 5, 10, SPECIES_BASCULIN_WHITE_STRIPED },
    { 10, 40, SPECIES_QWILFISH_HISUIAN },
    { 10, 40, SPECIES_BASCULIN_WHITE_STRIPED },
    { 10, 40, SPECIES_BASCULIN_WHITE_STRIPED },
    { 40, 65, SPECIES_QWILFISH_HISUIAN },
    { 40, 65, SPECIES_BASCULIN_WHITE_STRIPED },
    { 40, 65, SPECIES_BASCULIN_WHITE_STRIPED },
    { 40, 65, SPECIES_BASCULIN_WHITE_STRIPED },
    { 40, 65, SPECIES_BASCULIN_WHITE_STRIPED },
};

const struct WildPokemonInfo gSafariZone_Southwest_FishingMonsInfo = { 35, gSafariZone_Southwest_FishingMons };
const struct WildPokemon gSafariZone_North_LandMons[] =
{
    { 41, 47, SPECIES_RATTATA_ALOLAN },
    { 41, 47, SPECIES_MEOWTH_ALOLAN },
    { 41, 47, SPECIES_SANDSHREW_ALOLAN },
    { 41, 47, SPECIES_VULPIX_ALOLAN },
    { 41, 47, SPECIES_DIGLETT_ALOLAN },
    { 41, 47, SPECIES_GEODUDE_ALOLAN },
    { 41, 47, SPECIES_GRIMER_ALOLAN },
    { 41, 47, SPECIES_MAROWAK_ALOLAN },
    { 41, 47, SPECIES_EXEGGUTOR_ALOLAN },
    { 41, 47, SPECIES_RAICHU_ALOLAN },
    { 41, 47, SPECIES_EXEGGUTOR_ALOLAN },
    { 41, 47, SPECIES_RAICHU_ALOLAN },
};

const struct WildPokemonInfo gSafariZone_North_LandMonsInfo = { 25, gSafariZone_North_LandMons };
const struct WildPokemon gSafariZone_North_RockSmashMons[] =
{
    { 10, 15, SPECIES_GEODUDE },
    { 5, 10, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 20, 25, SPECIES_GEODUDE },
    { 25, 30, SPECIES_GEODUDE },
};

const struct WildPokemonInfo gSafariZone_North_RockSmashMonsInfo = { 25, gSafariZone_North_RockSmashMons };
const struct WildPokemon gSafariZone_Northwest_LandMons[] =
{
    { 41, 47, SPECIES_MEOWTH_GALARIAN },
    { 41, 47, SPECIES_PONYTA_GALARIAN },
    { 41, 47, SPECIES_SLOWPOKE_GALARIAN },
    { 41, 47, SPECIES_FARFETCHD_GALARIAN },
    { 41, 47, SPECIES_ZIGZAGOON_GALARIAN },
    { 41, 47, SPECIES_DARUMAKA_GALARIAN },
    { 41, 47, SPECIES_YAMASK_GALARIAN },
    { 41, 47, SPECIES_STUNFISK_GALARIAN },
    { 41, 47, SPECIES_WEEZING_GALARIAN },
    { 41, 47, SPECIES_MR_MIME_GALARIAN },
    { 41, 47, SPECIES_WEEZING_GALARIAN },
    { 41, 47, SPECIES_MR_MIME_GALARIAN },
};

const struct WildPokemonInfo gSafariZone_Northwest_LandMonsInfo = { 25, gSafariZone_Northwest_LandMons };
const struct WildPokemon gSafariZone_Northwest_WaterMons[] =
{
    { 30, 47, SPECIES_SLOWPOKE_GALARIAN },
    { 30, 47, SPECIES_CORSOLA_GALARIAN },
    { 30, 47, SPECIES_SLOWBRO_GALARIAN },
    { 30, 47, SPECIES_SLOWKING_GALARIAN },
    { 30, 47, SPECIES_SLOWKING_GALARIAN },
};

const struct WildPokemonInfo gSafariZone_Northwest_WaterMonsInfo = { 9, gSafariZone_Northwest_WaterMons };
const struct WildPokemon gSafariZone_Northwest_FishingMons[] =
{
    { 5, 10, SPECIES_SLOWPOKE_GALARIAN },
    { 5, 10, SPECIES_CORSOLA_GALARIAN },
    { 10, 40, SPECIES_SLOWPOKE_GALARIAN },
    { 10, 40, SPECIES_CORSOLA_GALARIAN },
    { 10, 40, SPECIES_CORSOLA_GALARIAN },
    { 40, 65, SPECIES_SLOWPOKE_GALARIAN },
    { 40, 65, SPECIES_CORSOLA_GALARIAN },
    { 40, 65, SPECIES_CORSOLA_GALARIAN },
    { 40, 65, SPECIES_CURSOLA },
    { 40, 65, SPECIES_CURSOLA },
};

const struct WildPokemonInfo gSafariZone_Northwest_FishingMonsInfo = { 35, gSafariZone_Northwest_FishingMons };
const struct WildPokemon gVictoryRoad_B1F_LandMons[] =
{
    { 76, 85, SPECIES_CROBAT },
    { 76, 85, SPECIES_AGGRON },
    { 76, 85, SPECIES_GIBLE },
    { 76, 85, SPECIES_GABITE },
    { 76, 85, SPECIES_JANGMO_O },
    { 76, 85, SPECIES_DREEPY },
    { 76, 85, SPECIES_COPPERAJAH },
    { 76, 85, SPECIES_GARCHOMP },
    { 76, 85, SPECIES_HAKAMO_O },
    { 76, 85, SPECIES_DRAGAPULT },
    { 76, 85, SPECIES_KOMMO_O },
    { 76, 85, SPECIES_DRAGAPULT },
};

const struct WildPokemonInfo gVictoryRoad_B1F_LandMonsInfo = { 10, gVictoryRoad_B1F_LandMons };
const struct WildPokemon gVictoryRoad_B1F_RockSmashMons[] =
{
    { 30, 40, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GEODUDE },
    { 35, 40, SPECIES_GRAVELER },
    { 35, 40, SPECIES_GRAVELER },
    { 35, 40, SPECIES_GRAVELER },
};

const struct WildPokemonInfo gVictoryRoad_B1F_RockSmashMonsInfo = { 20, gVictoryRoad_B1F_RockSmashMons };
const struct WildPokemon gVictoryRoad_B2F_LandMons[] =
{
    { 76, 85, SPECIES_CROBAT },
    { 76, 85, SPECIES_AGGRON },
    { 76, 85, SPECIES_LARVITAR },
    { 76, 85, SPECIES_BELDUM },
    { 76, 85, SPECIES_BAGON },
    { 76, 85, SPECIES_DEINO },
    { 76, 85, SPECIES_PUPITAR },
    { 76, 85, SPECIES_METANG },
    { 76, 85, SPECIES_SHELGON },
    { 76, 85, SPECIES_ZWEILOUS },
    { 76, 85, SPECIES_SALAMENCE },
    { 76, 85, SPECIES_HYDREIGON },
};

const struct WildPokemonInfo gVictoryRoad_B2F_LandMonsInfo = { 10, gVictoryRoad_B2F_LandMons };
const struct WildPokemon gVictoryRoad_B2F_WaterMons[] =
{
    { 50, 75, SPECIES_CROBAT },
    { 50, 75, SPECIES_GOOMY },
    { 50, 75, SPECIES_GOODRA },
    { 50, 75, SPECIES_SLOWBRO },
    { 50, 75, SPECIES_SLOWKING },
};

const struct WildPokemonInfo gVictoryRoad_B2F_WaterMonsInfo = { 4, gVictoryRoad_B2F_WaterMons };
const struct WildPokemon gVictoryRoad_B2F_FishingMons[] =
{
    { 5, 10, SPECIES_WISHIWASHI },
    { 5, 10, SPECIES_WISHIWASHI },
    { 10, 40, SPECIES_WISHIWASHI },
    { 10, 40, SPECIES_STARYU },
    { 10, 40, SPECIES_SLOWPOKE },
    { 40, 65, SPECIES_SLOWBRO },
    { 40, 65, SPECIES_SLOWKING },
    { 40, 65, SPECIES_DRATINI },
    { 40, 65, SPECIES_STARYU },
    { 40, 65, SPECIES_STARYU },
};

const struct WildPokemonInfo gVictoryRoad_B2F_FishingMonsInfo = { 30, gVictoryRoad_B2F_FishingMons };
const struct WildPokemon gMeteorFalls_1F_1R_LandMons[] =
{
    { 30, 36, SPECIES_SOLROCK },
    { 30, 36, SPECIES_LUNATONE },
    { 30, 36, SPECIES_CARBINK },
    { 30, 36, SPECIES_MILCERY },
    { 30, 36, SPECIES_DUOSION },
    { 30, 36, SPECIES_CLEFAIRY },
    { 30, 36, SPECIES_VENONAT },
    { 30, 36, SPECIES_ORICORIO_PAU },
    { 30, 36, SPECIES_FOONGUS },
    { 30, 36, SPECIES_DRUDDIGON },
    { 30, 36, SPECIES_BAGON },
    { 30, 36, SPECIES_BAGON },
};

const struct WildPokemonInfo gMeteorFalls_1F_1R_LandMonsInfo = { 10, gMeteorFalls_1F_1R_LandMons };
const struct WildPokemon gMeteorFalls_1F_1R_WaterMons[] =
{
    { 30, 45, SPECIES_STARYU },
    { 30, 45, SPECIES_SHELLDER },
    { 30, 45, SPECIES_SOLROCK },
    { 30, 45, SPECIES_LUNATONE },
    { 30, 45, SPECIES_LUNATONE },
};

const struct WildPokemonInfo gMeteorFalls_1F_1R_WaterMonsInfo = { 4, gMeteorFalls_1F_1R_WaterMons };
const struct WildPokemon gMeteorFalls_1F_1R_FishingMons[] =
{
    { 5, 10, SPECIES_STARYU },
    { 5, 10, SPECIES_SHELLDER },
    { 10, 40, SPECIES_STARYU },
    { 10, 40, SPECIES_SHELLDER },
    { 10, 40, SPECIES_SHELLDER },
    { 40, 65, SPECIES_STARYU },
    { 40, 65, SPECIES_SHELLDER },
    { 40, 65, SPECIES_STARMIE },
    { 40, 65, SPECIES_CLOYSTER },
    { 40, 65, SPECIES_CLOYSTER },
};

const struct WildPokemonInfo gMeteorFalls_1F_1R_FishingMonsInfo = { 30, gMeteorFalls_1F_1R_FishingMons };
const struct WildPokemon gMeteorFalls_1F_2R_LandMons[] =
{
    { 64, 74, SPECIES_MORELULL },
    { 64, 74, SPECIES_SOLOSIS },
    { 64, 74, SPECIES_MINIOR_CORE_ORANGE },
    { 64, 74, SPECIES_MINIOR_CORE_YELLOW },
    { 64, 74, SPECIES_MINIOR_CORE_GREEN },
    { 64, 74, SPECIES_CLEFAIRY },
    { 64, 74, SPECIES_SHIINOTIC },
    { 64, 74, SPECIES_VENOMOTH },
    { 64, 74, SPECIES_SOLROCK },
    { 64, 74, SPECIES_LUNATONE },
    { 64, 74, SPECIES_REUNICLUS },
    { 64, 74, SPECIES_REUNICLUS },
};

const struct WildPokemonInfo gMeteorFalls_1F_2R_LandMonsInfo = { 10, gMeteorFalls_1F_2R_LandMons };
const struct WildPokemon gMeteorFalls_1F_2R_WaterMons[] =
{
    { 50, 75, SPECIES_STARYU },
    { 50, 75, SPECIES_WHISCASH },
    { 50, 75, SPECIES_STARMIE },
    { 50, 75, SPECIES_DRATINI },
    { 50, 75, SPECIES_DRAGONAIR },
};

const struct WildPokemonInfo gMeteorFalls_1F_2R_WaterMonsInfo = { 4, gMeteorFalls_1F_2R_WaterMons };
const struct WildPokemon gMeteorFalls_1F_2R_FishingMons[] =
{
    { 5, 10, SPECIES_STARYU },
    { 5, 10, SPECIES_SHELLDER },
    { 10, 40, SPECIES_STARYU },
    { 10, 40, SPECIES_SHELLDER },
    { 10, 40, SPECIES_BARBOACH },
    { 40, 65, SPECIES_STARYU },
    { 40, 65, SPECIES_SHELLDER },
    { 40, 65, SPECIES_WHISCASH },
    { 40, 65, SPECIES_STARMIE },
    { 40, 65, SPECIES_CLOYSTER },
};

const struct WildPokemonInfo gMeteorFalls_1F_2R_FishingMonsInfo = { 30, gMeteorFalls_1F_2R_FishingMons };
const struct WildPokemon gMeteorFalls_B1F_1R_LandMons[] =
{
    { 64, 74, SPECIES_BAGON },
    { 64, 74, SPECIES_DRUDDIGON },
    { 64, 74, SPECIES_MINIOR_CORE_BLUE },
    { 64, 74, SPECIES_MINIOR_CORE_INDIGO },
    { 64, 74, SPECIES_MINIOR_CORE_VIOLET },
    { 64, 74, SPECIES_SHELGON },
    { 64, 74, SPECIES_AMOONGUSS },
    { 64, 74, SPECIES_CLEFAIRY },
    { 64, 74, SPECIES_SOLROCK },
    { 64, 74, SPECIES_LUNATONE },
    { 64, 74, SPECIES_SALAMENCE },
    { 64, 74, SPECIES_SALAMENCE },
};

const struct WildPokemonInfo gMeteorFalls_B1F_1R_LandMonsInfo = { 10, gMeteorFalls_B1F_1R_LandMons };
const struct WildPokemon gMeteorFalls_B1F_1R_WaterMons[] =
{
    { 50, 75, SPECIES_STARYU },
    { 50, 75, SPECIES_WHISCASH },
    { 50, 75, SPECIES_STARMIE },
    { 50, 75, SPECIES_DRATINI },
    { 50, 75, SPECIES_DRAGONAIR },
};

const struct WildPokemonInfo gMeteorFalls_B1F_1R_WaterMonsInfo = { 4, gMeteorFalls_B1F_1R_WaterMons };
const struct WildPokemon gMeteorFalls_B1F_1R_FishingMons[] =
{
    { 5, 10, SPECIES_STARYU },
    { 5, 10, SPECIES_SHELLDER },
    { 10, 40, SPECIES_STARYU },
    { 10, 40, SPECIES_SHELLDER },
    { 10, 40, SPECIES_BARBOACH },
    { 40, 65, SPECIES_STARYU },
    { 40, 65, SPECIES_SHELLDER },
    { 40, 65, SPECIES_WHISCASH },
    { 40, 65, SPECIES_STARMIE },
    { 40, 65, SPECIES_CLOYSTER },
};

const struct WildPokemonInfo gMeteorFalls_B1F_1R_FishingMonsInfo = { 30, gMeteorFalls_B1F_1R_FishingMons };
const struct WildPokemon gShoalCave_LowTideStairsRoom_LandMons[] =
{
    { 48, 58, SPECIES_SNORUNT },
    { 48, 58, SPECIES_SNOVER },
    { 48, 58, SPECIES_CUBCHOO },
    { 48, 58, SPECIES_DARUMAKA_GALARIAN },
    { 48, 58, SPECIES_MR_MIME_GALARIAN },
    { 48, 58, SPECIES_SWINUB },
    { 48, 58, SPECIES_SANDSHREW_ALOLAN },
    { 48, 58, SPECIES_VULPIX_ALOLAN },
    { 48, 58, SPECIES_SNEASEL },
    { 48, 58, SPECIES_BELDUM },
    { 48, 58, SPECIES_JYNX },
    { 48, 58, SPECIES_METANG },
};

const struct WildPokemonInfo gShoalCave_LowTideStairsRoom_LandMonsInfo = { 10, gShoalCave_LowTideStairsRoom_LandMons };
const struct WildPokemon gShoalCave_LowTideLowerRoom_LandMons[] =
{
    { 48, 58, SPECIES_SNORUNT },
    { 48, 58, SPECIES_SNOVER },
    { 48, 58, SPECIES_CUBCHOO },
    { 48, 58, SPECIES_DARUMAKA_GALARIAN },
    { 48, 58, SPECIES_MR_MIME_GALARIAN },
    { 48, 58, SPECIES_SWINUB },
    { 48, 58, SPECIES_SANDSHREW_ALOLAN },
    { 48, 58, SPECIES_VULPIX_ALOLAN },
    { 48, 58, SPECIES_SNEASEL },
    { 48, 58, SPECIES_BELDUM },
    { 48, 58, SPECIES_JYNX },
    { 48, 58, SPECIES_METANG },
};

const struct WildPokemonInfo gShoalCave_LowTideLowerRoom_LandMonsInfo = { 10, gShoalCave_LowTideLowerRoom_LandMons };
const struct WildPokemon gShoalCave_LowTideInnerRoom_LandMons[] =
{
    { 48, 58, SPECIES_SNORUNT },
    { 48, 58, SPECIES_SNOVER },
    { 48, 58, SPECIES_CUBCHOO },
    { 48, 58, SPECIES_DARUMAKA_GALARIAN },
    { 48, 58, SPECIES_MR_MIME_GALARIAN },
    { 48, 58, SPECIES_SWINUB },
    { 48, 58, SPECIES_SANDSHREW_ALOLAN },
    { 48, 58, SPECIES_VULPIX_ALOLAN },
    { 48, 58, SPECIES_SNEASEL },
    { 48, 58, SPECIES_BELDUM },
    { 48, 58, SPECIES_JYNX },
    { 48, 58, SPECIES_METANG },
};

const struct WildPokemonInfo gShoalCave_LowTideInnerRoom_LandMonsInfo = { 10, gShoalCave_LowTideInnerRoom_LandMons };
const struct WildPokemon gShoalCave_LowTideInnerRoom_WaterMons[] =
{
    { 30, 52, SPECIES_SPHEAL },
    { 30, 52, SPECIES_SEEL },
    { 30, 52, SPECIES_BERGMITE },
    { 30, 52, SPECIES_LAPRAS },
    { 30, 52, SPECIES_LAPRAS },
};

const struct WildPokemonInfo gShoalCave_LowTideInnerRoom_WaterMonsInfo = { 4, gShoalCave_LowTideInnerRoom_WaterMons };
const struct WildPokemon gShoalCave_LowTideInnerRoom_FishingMons[] =
{
    { 5, 10, SPECIES_SPHEAL },
    { 5, 10, SPECIES_SEEL },
    { 10, 40, SPECIES_SPHEAL },
    { 10, 40, SPECIES_SEEL },
    { 10, 40, SPECIES_SHELLDER },
    { 40, 65, SPECIES_SPHEAL },
    { 40, 65, SPECIES_SEEL },
    { 40, 65, SPECIES_SEALEO },
    { 40, 65, SPECIES_DEWGONG },
    { 40, 65, SPECIES_WALREIN },
};

const struct WildPokemonInfo gShoalCave_LowTideInnerRoom_FishingMonsInfo = { 10, gShoalCave_LowTideInnerRoom_FishingMons };
const struct WildPokemon gShoalCave_LowTideEntranceRoom_LandMons[] =
{
    { 48, 58, SPECIES_SNORUNT },
    { 48, 58, SPECIES_SNOVER },
    { 48, 58, SPECIES_CUBCHOO },
    { 48, 58, SPECIES_DARUMAKA_GALARIAN },
    { 48, 58, SPECIES_MR_MIME_GALARIAN },
    { 48, 58, SPECIES_SWINUB },
    { 48, 58, SPECIES_SANDSHREW_ALOLAN },
    { 48, 58, SPECIES_VULPIX_ALOLAN },
    { 48, 58, SPECIES_SNEASEL },
    { 48, 58, SPECIES_BELDUM },
    { 48, 58, SPECIES_JYNX },
    { 48, 58, SPECIES_METANG },
};

const struct WildPokemonInfo gShoalCave_LowTideEntranceRoom_LandMonsInfo = { 10, gShoalCave_LowTideEntranceRoom_LandMons };
const struct WildPokemon gShoalCave_LowTideEntranceRoom_WaterMons[] =
{
    { 30, 52, SPECIES_SPHEAL },
    { 30, 52, SPECIES_SEEL },
    { 30, 52, SPECIES_BERGMITE },
    { 30, 52, SPECIES_LAPRAS },
    { 30, 52, SPECIES_LAPRAS },
};

const struct WildPokemonInfo gShoalCave_LowTideEntranceRoom_WaterMonsInfo = { 4, gShoalCave_LowTideEntranceRoom_WaterMons };
const struct WildPokemon gShoalCave_LowTideEntranceRoom_FishingMons[] =
{
    { 5, 10, SPECIES_SPHEAL },
    { 5, 10, SPECIES_SEEL },
    { 10, 40, SPECIES_SPHEAL },
    { 10, 40, SPECIES_SEEL },
    { 10, 40, SPECIES_SHELLDER },
    { 40, 65, SPECIES_SPHEAL },
    { 40, 65, SPECIES_SEEL },
    { 40, 65, SPECIES_SEALEO },
    { 40, 65, SPECIES_DEWGONG },
    { 40, 65, SPECIES_WALREIN },
};

const struct WildPokemonInfo gShoalCave_LowTideEntranceRoom_FishingMonsInfo = { 10, gShoalCave_LowTideEntranceRoom_FishingMons };
const struct WildPokemon gLilycoveCity_WaterMons[] =
{
    { 30, 47, SPECIES_KRABBY },
    { 30, 47, SPECIES_WINGULL },
    { 30, 47, SPECIES_PELIPPER },
    { 30, 47, SPECIES_KINGLER },
    { 30, 47, SPECIES_KINGLER },
};

const struct WildPokemonInfo gLilycoveCity_WaterMonsInfo = { 4, gLilycoveCity_WaterMons };
const struct WildPokemon gLilycoveCity_FishingMons[] =
{
    { 5, 10, SPECIES_KRABBY },
    { 5, 10, SPECIES_CLAUNCHER },
    { 10, 40, SPECIES_KRABBY },
    { 10, 40, SPECIES_CLAUNCHER },
    { 10, 40, SPECIES_TENTACOOL },
    { 40, 65, SPECIES_KRABBY },
    { 40, 65, SPECIES_CLAUNCHER },
    { 40, 65, SPECIES_TENTACOOL },
    { 40, 65, SPECIES_KINGLER },
    { 40, 65, SPECIES_CLAWITZER },
};

const struct WildPokemonInfo gLilycoveCity_FishingMonsInfo = { 10, gLilycoveCity_FishingMons };
const struct WildPokemon gDewfordTown_WaterMons[] =
{
    { 30, 45, SPECIES_CHEWTLE },
    { 30, 45, SPECIES_CLOBBOPUS },
    { 30, 45, SPECIES_ARROKUDA },
    { 30, 45, SPECIES_DREDNAW },
    { 30, 45, SPECIES_GRAPPLOCT },
};

const struct WildPokemonInfo gDewfordTown_WaterMonsInfo = { 4, gDewfordTown_WaterMons };
const struct WildPokemon gDewfordTown_FishingMons[] =
{
    { 5, 10, SPECIES_CHEWTLE },
    { 5, 10, SPECIES_CLOBBOPUS },
    { 10, 40, SPECIES_CHEWTLE },
    { 10, 40, SPECIES_CLOBBOPUS },
    { 10, 40, SPECIES_ARROKUDA },
    { 40, 65, SPECIES_CLOBBOPUS },
    { 40, 65, SPECIES_ARROKUDA },
    { 40, 65, SPECIES_GRAPPLOCT },
    { 40, 65, SPECIES_BARRASKEWDA },
    { 40, 65, SPECIES_DREDNAW },
};

const struct WildPokemonInfo gDewfordTown_FishingMonsInfo = { 10, gDewfordTown_FishingMons };
const struct WildPokemon gSlateportCity_WaterMons[] =
{
    { 30, 45, SPECIES_HORSEA },
    { 30, 45, SPECIES_REMORAID },
    { 30, 45, SPECIES_MANTYKE },
    { 30, 45, SPECIES_MANTINE },
    { 30, 45, SPECIES_CRAMORANT },
};

const struct WildPokemonInfo gSlateportCity_WaterMonsInfo = { 4, gSlateportCity_WaterMons };
const struct WildPokemon gSlateportCity_FishingMons[] =
{
    { 5, 10, SPECIES_HORSEA },
    { 5, 10, SPECIES_REMORAID },
    { 10, 40, SPECIES_HORSEA },
    { 10, 40, SPECIES_CHINCHOU },
    { 10, 40, SPECIES_QWILFISH },
    { 40, 65, SPECIES_CHINCHOU },
    { 40, 65, SPECIES_MAREANIE },
    { 40, 65, SPECIES_SEADRA },
    { 40, 65, SPECIES_LANTURN },
    { 40, 65, SPECIES_TOXAPEX },
};

const struct WildPokemonInfo gSlateportCity_FishingMonsInfo = { 10, gSlateportCity_FishingMons };
const struct WildPokemon gMossdeepCity_WaterMons[] =
{
    { 30, 52, SPECIES_TENTACOOL },
    { 30, 52, SPECIES_STARAVIA },
    { 30, 52, SPECIES_CRAMORANT },
    { 30, 52, SPECIES_STARAPTOR },
    { 30, 52, SPECIES_STARAPTOR },
};

const struct WildPokemonInfo gMossdeepCity_WaterMonsInfo = { 4, gMossdeepCity_WaterMons };
const struct WildPokemon gMossdeepCity_FishingMons[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_HORSEA },
    { 10, 40, SPECIES_MAGIKARP },
    { 10, 40, SPECIES_HORSEA },
    { 10, 40, SPECIES_TENTACOOL },
    { 40, 63, SPECIES_HORSEA },
    { 40, 65, SPECIES_TENTACOOL },
    { 40, 65, SPECIES_WAILMER },
    { 40, 65, SPECIES_SEADRA },
    { 40, 65, SPECIES_TENTACRUEL },
};

const struct WildPokemonInfo gMossdeepCity_FishingMonsInfo = { 10, gMossdeepCity_FishingMons };
const struct WildPokemon gMossdeepCity1_LandMons[] =
{
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
    { 5, 5, SPECIES_NONE },
};

const struct WildPokemonInfo gMossdeepCity1_LandMonsInfo = { 0, gMossdeepCity1_LandMons };
const struct WildPokemon gPacifidlogTown_WaterMons[] =
{
    { 30, 55, SPECIES_ALOMOMOLA },
    { 30, 55, SPECIES_BRUXISH },
    { 30, 55, SPECIES_FLETCHINDER },
    { 30, 55, SPECIES_CRAMORANT },
    { 30, 55, SPECIES_CRAMORANT },
};

const struct WildPokemonInfo gPacifidlogTown_WaterMonsInfo = { 4, gPacifidlogTown_WaterMons };
const struct WildPokemon gPacifidlogTown_FishingMons[] =
{
    { 5, 10, SPECIES_BRUXISH },
    { 5, 10, SPECIES_ALOMOMOLA },
    { 10, 40, SPECIES_BRUXISH },
    { 10, 40, SPECIES_ALOMOMOLA },
    { 10, 40, SPECIES_ALOMOMOLA },
    { 40, 65, SPECIES_BRUXISH },
    { 40, 65, SPECIES_ALOMOMOLA },
    { 40, 65, SPECIES_PYUKUMUKU },
    { 40, 65, SPECIES_PINCURCHIN },
    { 40, 65, SPECIES_WAILMER },
};

const struct WildPokemonInfo gPacifidlogTown_FishingMonsInfo = { 10, gPacifidlogTown_FishingMons };
const struct WildPokemon gEverGrandeCity_WaterMons[] =
{
    { 50, 55, SPECIES_PIDGEOT },
    { 50, 55, SPECIES_FLOATZEL },
    { 50, 55, SPECIES_MANTINE },
    { 50, 55, SPECIES_MANTINE },
    { 50, 55, SPECIES_GYARADOS },
};

const struct WildPokemonInfo gEverGrandeCity_WaterMonsInfo = { 4, gEverGrandeCity_WaterMons };
const struct WildPokemon gEverGrandeCity_FishingMons[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_STARYU },
    { 10, 40, SPECIES_MAGIKARP },
    { 10, 40, SPECIES_STARYU },
    { 10, 40, SPECIES_MANTYKE },
    { 40, 65, SPECIES_STARYU },
    { 40, 65, SPECIES_MANTINE },
    { 40, 65, SPECIES_BUIZEL },
    { 40, 65, SPECIES_GYARADOS },
    { 40, 65, SPECIES_GYARADOS },
};

const struct WildPokemonInfo gEverGrandeCity_FishingMonsInfo = { 10, gEverGrandeCity_FishingMons };
const struct WildPokemon gPetalburgCity_LandMons[] =
{
    { 4, 7, SPECIES_HOPPIP },
    { 4, 7, SPECIES_TAILLOW },
    { 4, 7, SPECIES_AZURILL },
    { 4, 7, SPECIES_MEOWTH },
    { 4, 7, SPECIES_GLAMEOW },
    { 4, 7, SPECIES_BUIZEL },
    { 4, 7, SPECIES_BUNEARY },
    { 4, 7, SPECIES_NICKIT },
    { 4, 7, SPECIES_RALTS },
    { 4, 7, SPECIES_SLAKOTH },
    { 4, 7, SPECIES_EEVEE },
    { 4, 7, SPECIES_EEVEE },
};

const struct WildPokemonInfo gPetalburgCity_LandMonsInfo = { 30, gPetalburgCity_LandMons };
const struct WildPokemon gPetalburgCity_WaterMons[] =
{
    { 30, 45, SPECIES_MARILL },
    { 30, 45, SPECIES_TAILLOW },
    { 30, 45, SPECIES_SKIPLOOM },
    { 30, 45, SPECIES_POLIWHIRL },
    { 30, 45, SPECIES_JUMPLUFF },
};

const struct WildPokemonInfo gPetalburgCity_WaterMonsInfo = { 1, gPetalburgCity_WaterMons };
const struct WildPokemon gPetalburgCity_FishingMons[] =
{
    { 5, 10, SPECIES_AZURILL },
    { 5, 10, SPECIES_POLIWAG },
    { 10, 40, SPECIES_AZURILL },
    { 10, 40, SPECIES_MARILL },
    { 10, 40, SPECIES_POLIWHIRL },
    { 40, 40, SPECIES_MARILL },
    { 40, 65, SPECIES_POLIWHIRL },
    { 40, 65, SPECIES_POLIWRATH },
    { 40, 65, SPECIES_AZUMARILL },
    { 40, 65, SPECIES_POLITOED },
};

const struct WildPokemonInfo gPetalburgCity_FishingMonsInfo = { 10, gPetalburgCity_FishingMons };
const struct WildPokemon gUnderwater_Route124_WaterMons[] =
{
    { 50, 65, SPECIES_LANTURN },
    { 50, 65, SPECIES_CLAMPERL },
    { 50, 65, SPECIES_HUNTAIL },
    { 50, 65, SPECIES_GOREBYSS },
    { 50, 65, SPECIES_GOREBYSS },
};

const struct WildPokemonInfo gUnderwater_Route124_WaterMonsInfo = { 4, gUnderwater_Route124_WaterMons };
const struct WildPokemon gShoalCave_LowTideIceRoom_LandMons[] =
{
    { 50, 60, SPECIES_SPHEAL },
    { 50, 60, SPECIES_BERGMITE },
    { 50, 60, SPECIES_CRYOGONAL },
    { 50, 60, SPECIES_VANILLITE },
    { 50, 60, SPECIES_EISCUE },
    { 50, 60, SPECIES_DELIBIRD },
    { 50, 60, SPECIES_SEEL },
    { 50, 60, SPECIES_SEEL },
    { 50, 60, SPECIES_DRAMPA },
    { 50, 60, SPECIES_CRABRAWLER },
    { 50, 60, SPECIES_BELDUM },
    { 50, 60, SPECIES_METANG },
};

const struct WildPokemonInfo gShoalCave_LowTideIceRoom_LandMonsInfo = { 10, gShoalCave_LowTideIceRoom_LandMons };
const struct WildPokemon gSkyPillar_1F_LandMons[] =
{
    { 60, 70, SPECIES_NOIBAT },
    { 60, 70, SPECIES_SWABLU },
    { 60, 70, SPECIES_BALTOY },
    { 60, 70, SPECIES_BALTOY },
    { 60, 70, SPECIES_SIGILYPH },
    { 60, 70, SPECIES_CLAYDOL },
    { 60, 70, SPECIES_DRAMPA },
    { 60, 70, SPECIES_DRUDDIGON },
    { 60, 70, SPECIES_NOIVERN },
    { 60, 70, SPECIES_ALTARIA },
    { 60, 70, SPECIES_NOIVERN },
    { 60, 70, SPECIES_ALTARIA },
};

const struct WildPokemonInfo gSkyPillar_1F_LandMonsInfo = { 10, gSkyPillar_1F_LandMons };
const struct WildPokemon gSootopolisCity_WaterMons[] =
{
    { 30, 60, SPECIES_MAGIKARP },
    { 30, 60, SPECIES_FEEBAS },
    { 30, 60, SPECIES_GYARADOS },
    { 30, 60, SPECIES_MILOTIC },
    { 30, 60, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gSootopolisCity_WaterMonsInfo = { 1, gSootopolisCity_WaterMons };
const struct WildPokemon gSootopolisCity_FishingMons[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_BINACLE },
    { 10, 40, SPECIES_MAGIKARP },
    { 10, 40, SPECIES_BINACLE },
    { 10, 40, SPECIES_LUVDISC },
    { 40, 65, SPECIES_MAGIKARP },
    { 40, 65, SPECIES_BINACLE },
    { 40, 65, SPECIES_LUVDISC },
    { 40, 65, SPECIES_GYARADOS_MEGA },
    { 40, 65, SPECIES_GYARADOS },
};

const struct WildPokemonInfo gSootopolisCity_FishingMonsInfo = { 10, gSootopolisCity_FishingMons };
const struct WildPokemon gSkyPillar_3F_LandMons[] =
{
    { 60, 70, SPECIES_NOIBAT },
    { 60, 70, SPECIES_SWABLU },
    { 60, 70, SPECIES_BALTOY },
    { 60, 70, SPECIES_BALTOY },
    { 60, 70, SPECIES_SIGILYPH },
    { 60, 70, SPECIES_CLAYDOL },
    { 60, 70, SPECIES_DRAMPA },
    { 60, 70, SPECIES_DRUDDIGON },
    { 60, 70, SPECIES_NOIVERN },
    { 60, 70, SPECIES_ALTARIA },
    { 60, 70, SPECIES_NOIVERN },
    { 60, 70, SPECIES_ALTARIA },
};

const struct WildPokemonInfo gSkyPillar_3F_LandMonsInfo = { 10, gSkyPillar_3F_LandMons };
const struct WildPokemon gSkyPillar_5F_LandMons[] =
{
    { 60, 70, SPECIES_NOIBAT },
    { 60, 70, SPECIES_SWABLU },
    { 60, 70, SPECIES_BALTOY },
    { 60, 70, SPECIES_BALTOY },
    { 60, 70, SPECIES_SIGILYPH },
    { 60, 70, SPECIES_CLAYDOL },
    { 60, 70, SPECIES_DRAMPA },
    { 60, 70, SPECIES_DRUDDIGON },
    { 60, 70, SPECIES_NOIVERN },
    { 60, 70, SPECIES_ALTARIA },
    { 60, 70, SPECIES_NOIVERN },
    { 60, 70, SPECIES_ALTARIA },
};

const struct WildPokemonInfo gSkyPillar_5F_LandMonsInfo = { 10, gSkyPillar_5F_LandMons };
const struct WildPokemon gSafariZone_Southeast_LandMons[] =
{
    { 5, 13, SPECIES_BULBASAUR },
    { 5, 13, SPECIES_CHARMANDER },
    { 5, 13, SPECIES_CHIKORITA },
    { 5, 13, SPECIES_CYNDAQUIL },
    { 5, 13, SPECIES_TREECKO },
    { 5, 13, SPECIES_TORCHIC },
    { 5, 13, SPECIES_TURTWIG },
    { 5, 13, SPECIES_TURTWIG },
    { 5, 13, SPECIES_CHIMCHAR },
    { 5, 13, SPECIES_CHIMCHAR },
    { 5, 13, SPECIES_CHIMCHAR },
    { 5, 13, SPECIES_CHIMCHAR },
};

const struct WildPokemonInfo gSafariZone_Southeast_LandMonsInfo = { 25, gSafariZone_Southeast_LandMons };
const struct WildPokemon gSafariZone_Southeast_WaterMons[] =
{
    { 25, 30, SPECIES_SQUIRTLE },
    { 25, 30, SPECIES_TOTODILE },
    { 25, 30, SPECIES_TOTODILE },
    { 30, 35, SPECIES_TOTODILE },
    { 35, 40, SPECIES_TOTODILE },
};

const struct WildPokemonInfo gSafariZone_Southeast_WaterMonsInfo = { 9, gSafariZone_Southeast_WaterMons };
const struct WildPokemon gSafariZone_Southeast_FishingMons[] =
{
    { 5, 13, SPECIES_MUDKIP },
    { 5, 13, SPECIES_PIPLUP },
    { 5, 13, SPECIES_OSHAWOTT },
    { 5, 13, SPECIES_FROAKIE },
    { 5, 13, SPECIES_FROAKIE },
    { 5, 13, SPECIES_POPPLIO },
    { 5, 13, SPECIES_SOBBLE },
    { 5, 13, SPECIES_POPPLIO },
    { 5, 13, SPECIES_SOBBLE },
    { 5, 13, SPECIES_SOBBLE },
};

const struct WildPokemonInfo gSafariZone_Southeast_FishingMonsInfo = { 35, gSafariZone_Southeast_FishingMons };
const struct WildPokemon gSafariZone_Northeast_LandMons[] =
{
    { 5, 13, SPECIES_SNIVY },
    { 5, 13, SPECIES_TEPIG },
    { 5, 13, SPECIES_CHESPIN },
    { 5, 13, SPECIES_FENNEKIN },
    { 5, 13, SPECIES_ROWLET },
    { 5, 13, SPECIES_LITTEN },
    { 5, 13, SPECIES_GROOKEY },
    { 5, 13, SPECIES_GROOKEY },
    { 5, 13, SPECIES_SCORBUNNY },
    { 5, 13, SPECIES_SCORBUNNY },
    { 5, 13, SPECIES_SCORBUNNY },
    { 5, 13, SPECIES_SCORBUNNY },
};

const struct WildPokemonInfo gSafariZone_Northeast_LandMonsInfo = { 25, gSafariZone_Northeast_LandMons };
const struct WildPokemon gSafariZone_Northeast_RockSmashMons[] =
{
    { 43, 53, SPECIES_SHUCKLE },
    { 43, 53, SPECIES_SHUCKLE },
    { 43, 53, SPECIES_SHUCKLE },
    { 43, 53, SPECIES_SHUCKLE },
    { 43, 53, SPECIES_SHUCKLE },
};

const struct WildPokemonInfo gSafariZone_Northeast_RockSmashMonsInfo = { 25, gSafariZone_Northeast_RockSmashMons };
const struct WildPokemon gMagmaHideout_1F_LandMons[] =
{
    { 45, 53, SPECIES_MIGHTYENA },
    { 45, 53, SPECIES_HOUNDOOM },
    { 45, 53, SPECIES_MAGMAR },
    { 45, 53, SPECIES_DRILBUR },
    { 45, 53, SPECIES_MACHOKE },
    { 45, 53, SPECIES_CAMERUPT },
    { 45, 53, SPECIES_VIGOROTH },
    { 45, 53, SPECIES_DARMANITAN },
    { 45, 53, SPECIES_COALOSSAL },
    { 45, 53, SPECIES_GURDURR },
    { 45, 53, SPECIES_SLAKING },
    { 45, 53, SPECIES_SLAKING },
};

const struct WildPokemonInfo gMagmaHideout_1F_LandMonsInfo = { 10, gMagmaHideout_1F_LandMons };
const struct WildPokemon gMagmaHideout_2F_1R_LandMons[] =
{
    { 45, 53, SPECIES_MIGHTYENA },
    { 45, 53, SPECIES_HOUNDOOM },
    { 45, 53, SPECIES_MAGMAR },
    { 45, 53, SPECIES_DRILBUR },
    { 45, 53, SPECIES_MACHOKE },
    { 45, 53, SPECIES_CAMERUPT },
    { 45, 53, SPECIES_VIGOROTH },
    { 45, 53, SPECIES_DARMANITAN },
    { 45, 53, SPECIES_COALOSSAL },
    { 45, 53, SPECIES_GURDURR },
    { 45, 53, SPECIES_SLAKING },
    { 45, 53, SPECIES_SLAKING },
};

const struct WildPokemonInfo gMagmaHideout_2F_1R_LandMonsInfo = { 10, gMagmaHideout_2F_1R_LandMons };
const struct WildPokemon gMagmaHideout_2F_2R_LandMons[] =
{
    { 45, 53, SPECIES_MIGHTYENA },
    { 45, 53, SPECIES_HOUNDOOM },
    { 45, 53, SPECIES_MAGMAR },
    { 45, 53, SPECIES_DRILBUR },
    { 45, 53, SPECIES_MACHOKE },
    { 45, 53, SPECIES_CAMERUPT },
    { 45, 53, SPECIES_VIGOROTH },
    { 45, 53, SPECIES_DARMANITAN },
    { 45, 53, SPECIES_COALOSSAL },
    { 45, 53, SPECIES_GURDURR },
    { 45, 53, SPECIES_SLAKING },
    { 45, 53, SPECIES_SLAKING },
};

const struct WildPokemonInfo gMagmaHideout_2F_2R_LandMonsInfo = { 10, gMagmaHideout_2F_2R_LandMons };
const struct WildPokemon gMagmaHideout_3F_1R_LandMons[] =
{
    { 45, 53, SPECIES_MIGHTYENA },
    { 45, 53, SPECIES_HOUNDOOM },
    { 45, 53, SPECIES_MAGMAR },
    { 45, 53, SPECIES_DRILBUR },
    { 45, 53, SPECIES_MACHOKE },
    { 45, 53, SPECIES_CAMERUPT },
    { 45, 53, SPECIES_VIGOROTH },
    { 45, 53, SPECIES_DARMANITAN },
    { 45, 53, SPECIES_COALOSSAL },
    { 45, 53, SPECIES_GURDURR },
    { 45, 53, SPECIES_SLAKING },
    { 45, 53, SPECIES_SLAKING },
};

const struct WildPokemonInfo gMagmaHideout_3F_1R_LandMonsInfo = { 10, gMagmaHideout_3F_1R_LandMons };
const struct WildPokemon gMagmaHideout_3F_2R_LandMons[] =
{
    { 45, 53, SPECIES_MIGHTYENA },
    { 45, 53, SPECIES_HOUNDOOM },
    { 45, 53, SPECIES_MAGMAR },
    { 45, 53, SPECIES_DRILBUR },
    { 45, 53, SPECIES_MACHOKE },
    { 45, 53, SPECIES_CAMERUPT },
    { 45, 53, SPECIES_VIGOROTH },
    { 45, 53, SPECIES_DARMANITAN },
    { 45, 53, SPECIES_COALOSSAL },
    { 45, 53, SPECIES_GURDURR },
    { 45, 53, SPECIES_SLAKING },
    { 45, 53, SPECIES_SLAKING },
};

const struct WildPokemonInfo gMagmaHideout_3F_2R_LandMonsInfo = { 10, gMagmaHideout_3F_2R_LandMons };
const struct WildPokemon gMagmaHideout_4F_LandMons[] =
{
    { 45, 53, SPECIES_MIGHTYENA },
    { 45, 53, SPECIES_HOUNDOOM },
    { 45, 53, SPECIES_MAGMAR },
    { 45, 53, SPECIES_DRILBUR },
    { 45, 53, SPECIES_MACHOKE },
    { 45, 53, SPECIES_CAMERUPT },
    { 45, 53, SPECIES_VIGOROTH },
    { 45, 53, SPECIES_DARMANITAN },
    { 45, 53, SPECIES_COALOSSAL },
    { 45, 53, SPECIES_GURDURR },
    { 45, 53, SPECIES_SLAKING },
    { 45, 53, SPECIES_SLAKING },
};

const struct WildPokemonInfo gMagmaHideout_4F_LandMonsInfo = { 10, gMagmaHideout_4F_LandMons };
const struct WildPokemon gMagmaHideout_3F_3R_LandMons[] =
{
    { 45, 53, SPECIES_MIGHTYENA },
    { 45, 53, SPECIES_HOUNDOOM },
    { 45, 53, SPECIES_MAGMAR },
    { 45, 53, SPECIES_DRILBUR },
    { 45, 53, SPECIES_MACHOKE },
    { 45, 53, SPECIES_CAMERUPT },
    { 45, 53, SPECIES_VIGOROTH },
    { 45, 53, SPECIES_DARMANITAN },
    { 45, 53, SPECIES_COALOSSAL },
    { 45, 53, SPECIES_GURDURR },
    { 45, 53, SPECIES_SLAKING },
    { 45, 53, SPECIES_SLAKING },
};

const struct WildPokemonInfo gMagmaHideout_3F_3R_LandMonsInfo = { 10, gMagmaHideout_3F_3R_LandMons };
const struct WildPokemon gMagmaHideout_2F_3R_LandMons[] =
{
    { 45, 53, SPECIES_MIGHTYENA },
    { 45, 53, SPECIES_HOUNDOOM },
    { 45, 53, SPECIES_MAGMAR },
    { 45, 53, SPECIES_DRILBUR },
    { 45, 53, SPECIES_MACHOKE },
    { 45, 53, SPECIES_CAMERUPT },
    { 45, 53, SPECIES_VIGOROTH },
    { 45, 53, SPECIES_DARMANITAN },
    { 45, 53, SPECIES_COALOSSAL },
    { 45, 53, SPECIES_GURDURR },
    { 45, 53, SPECIES_SLAKING },
    { 45, 53, SPECIES_SLAKING },
};

const struct WildPokemonInfo gMagmaHideout_2F_3R_LandMonsInfo = { 10, gMagmaHideout_2F_3R_LandMons };
const struct WildPokemon gMirageTower_1F_LandMons[] =
{
    { 30, 36, SPECIES_UNOWN },
    { 30, 36, SPECIES_UNOWN_B },
    { 30, 36, SPECIES_UNOWN_C },
    { 30, 36, SPECIES_UNOWN_D },
    { 30, 36, SPECIES_UNOWN_E },
    { 30, 36, SPECIES_UNOWN_F },
    { 30, 36, SPECIES_UNOWN_G },
    { 30, 36, SPECIES_UNOWN_G },
    { 30, 36, SPECIES_UNOWN_C },
    { 34, 36, SPECIES_UNOWN_D },
    { 30, 36, SPECIES_UNOWN_E },
    { 30, 36, SPECIES_UNOWN_F },
};

const struct WildPokemonInfo gMirageTower_1F_LandMonsInfo = { 10, gMirageTower_1F_LandMons };
const struct WildPokemon gMirageTower_2F_LandMons[] =
{
    { 30, 36, SPECIES_UNOWN_H },
    { 30, 36, SPECIES_UNOWN_I },
    { 30, 36, SPECIES_UNOWN_J },
    { 30, 36, SPECIES_UNOWN_K },
    { 30, 36, SPECIES_UNOWN_L },
    { 30, 36, SPECIES_UNOWN_M },
    { 30, 36, SPECIES_UNOWN_N },
    { 30, 36, SPECIES_UNOWN_J },
    { 30, 36, SPECIES_UNOWN_K },
    { 34, 36, SPECIES_UNOWN_L },
    { 30, 36, SPECIES_UNOWN_J },
    { 30, 36, SPECIES_UNOWN_M },
};

const struct WildPokemonInfo gMirageTower_2F_LandMonsInfo = { 10, gMirageTower_2F_LandMons };
const struct WildPokemon gMirageTower_3F_LandMons[] =
{
    { 30, 36, SPECIES_UNOWN_O },
    { 30, 36, SPECIES_UNOWN_P },
    { 30, 36, SPECIES_UNOWN_Q },
    { 30, 36, SPECIES_UNOWN_R },
    { 30, 36, SPECIES_UNOWN_S },
    { 30, 36, SPECIES_UNOWN_T },
    { 30, 36, SPECIES_UNOWN_U },
    { 30, 36, SPECIES_UNOWN_Q },
    { 30, 36, SPECIES_UNOWN_R },
    { 34, 36, SPECIES_UNOWN_S },
    { 30, 36, SPECIES_UNOWN_T },
    { 30, 36, SPECIES_UNOWN_U },
};

const struct WildPokemonInfo gMirageTower_3F_LandMonsInfo = { 10, gMirageTower_3F_LandMons };
const struct WildPokemon gMirageTower_4F_LandMons[] =
{
    { 30, 36, SPECIES_UNOWN_V },
    { 30, 36, SPECIES_UNOWN_W },
    { 30, 36, SPECIES_UNOWN_X },
    { 30, 36, SPECIES_UNOWN_Y },
    { 30, 36, SPECIES_UNOWN_Z },
    { 30, 36, SPECIES_UNOWN_EMARK },
    { 30, 36, SPECIES_UNOWN_QMARK },
    { 30, 36, SPECIES_UNOWN_QMARK },
    { 30, 36, SPECIES_UNOWN_V },
    { 34, 36, SPECIES_UNOWN_W },
    { 30, 36, SPECIES_UNOWN_X },
    { 35, 36, SPECIES_UNOWN_Y },
};

const struct WildPokemonInfo gMirageTower_4F_LandMonsInfo = { 10, gMirageTower_4F_LandMons };
const struct WildPokemon gDesertUnderpass_LandMons[] =
{
    { 38, 38, SPECIES_DITTO },
    { 35, 35, SPECIES_WHISMUR },
    { 40, 40, SPECIES_DITTO },
    { 40, 40, SPECIES_LOUDRED },
    { 41, 41, SPECIES_DITTO },
    { 36, 36, SPECIES_WHISMUR },
    { 38, 38, SPECIES_LOUDRED },
    { 42, 42, SPECIES_DITTO },
    { 38, 38, SPECIES_WHISMUR },
    { 43, 43, SPECIES_DITTO },
    { 44, 44, SPECIES_LOUDRED },
    { 45, 45, SPECIES_DITTO },
};

const struct WildPokemonInfo gDesertUnderpass_LandMonsInfo = { 10, gDesertUnderpass_LandMons };
const struct WildPokemon gArtisanCave_B1F_LandMons[] =
{
    { 40, 40, SPECIES_SMEARGLE },
    { 41, 41, SPECIES_SMEARGLE },
    { 42, 42, SPECIES_SMEARGLE },
    { 43, 43, SPECIES_SMEARGLE },
    { 44, 44, SPECIES_SMEARGLE },
    { 45, 45, SPECIES_SMEARGLE },
    { 46, 46, SPECIES_SMEARGLE },
    { 47, 47, SPECIES_SMEARGLE },
    { 48, 48, SPECIES_SMEARGLE },
    { 49, 49, SPECIES_SMEARGLE },
    { 50, 50, SPECIES_SMEARGLE },
    { 50, 50, SPECIES_SMEARGLE },
};

const struct WildPokemonInfo gArtisanCave_B1F_LandMonsInfo = { 10, gArtisanCave_B1F_LandMons };
const struct WildPokemon gArtisanCave_1F_LandMons[] =
{
    { 40, 40, SPECIES_SMEARGLE },
    { 41, 41, SPECIES_SMEARGLE },
    { 42, 42, SPECIES_SMEARGLE },
    { 43, 43, SPECIES_SMEARGLE },
    { 44, 44, SPECIES_SMEARGLE },
    { 45, 45, SPECIES_SMEARGLE },
    { 46, 46, SPECIES_SMEARGLE },
    { 47, 47, SPECIES_SMEARGLE },
    { 48, 48, SPECIES_SMEARGLE },
    { 49, 49, SPECIES_SMEARGLE },
    { 50, 50, SPECIES_SMEARGLE },
    { 50, 50, SPECIES_SMEARGLE },
};

const struct WildPokemonInfo gArtisanCave_1F_LandMonsInfo = { 10, gArtisanCave_1F_LandMons };
const struct WildPokemon gAlteringCave1_LandMons[] =
{
    { 10, 10, SPECIES_ZUBAT },
    { 12, 12, SPECIES_ZUBAT },
    { 8, 8, SPECIES_ZUBAT },
    { 14, 14, SPECIES_ZUBAT },
    { 10, 10, SPECIES_ZUBAT },
    { 12, 12, SPECIES_ZUBAT },
    { 16, 16, SPECIES_ZUBAT },
    { 6, 6, SPECIES_ZUBAT },
    { 8, 8, SPECIES_ZUBAT },
    { 14, 14, SPECIES_ZUBAT },
    { 8, 8, SPECIES_ZUBAT },
    { 14, 14, SPECIES_ZUBAT },
};

const struct WildPokemonInfo gAlteringCave1_LandMonsInfo = { 7, gAlteringCave1_LandMons };
const struct WildPokemon gAlteringCave2_LandMons[] =
{
    { 7, 7, SPECIES_MAREEP },
    { 9, 9, SPECIES_MAREEP },
    { 5, 5, SPECIES_MAREEP },
    { 11, 11, SPECIES_MAREEP },
    { 7, 7, SPECIES_MAREEP },
    { 9, 9, SPECIES_MAREEP },
    { 13, 13, SPECIES_MAREEP },
    { 3, 3, SPECIES_MAREEP },
    { 5, 5, SPECIES_MAREEP },
    { 11, 11, SPECIES_MAREEP },
    { 5, 5, SPECIES_MAREEP },
    { 11, 11, SPECIES_MAREEP },
};

const struct WildPokemonInfo gAlteringCave2_LandMonsInfo = { 7, gAlteringCave2_LandMons };
const struct WildPokemon gAlteringCave3_LandMons[] =
{
    { 23, 23, SPECIES_PINECO },
    { 25, 25, SPECIES_PINECO },
    { 22, 22, SPECIES_PINECO },
    { 27, 27, SPECIES_PINECO },
    { 23, 23, SPECIES_PINECO },
    { 25, 25, SPECIES_PINECO },
    { 29, 29, SPECIES_PINECO },
    { 19, 19, SPECIES_PINECO },
    { 21, 21, SPECIES_PINECO },
    { 27, 27, SPECIES_PINECO },
    { 21, 21, SPECIES_PINECO },
    { 27, 27, SPECIES_PINECO },
};

const struct WildPokemonInfo gAlteringCave3_LandMonsInfo = { 7, gAlteringCave3_LandMons };
const struct WildPokemon gAlteringCave4_LandMons[] =
{
    { 16, 16, SPECIES_HOUNDOUR },
    { 18, 18, SPECIES_HOUNDOUR },
    { 14, 14, SPECIES_HOUNDOUR },
    { 20, 20, SPECIES_HOUNDOUR },
    { 16, 16, SPECIES_HOUNDOUR },
    { 18, 18, SPECIES_HOUNDOUR },
    { 22, 22, SPECIES_HOUNDOUR },
    { 12, 12, SPECIES_HOUNDOUR },
    { 14, 14, SPECIES_HOUNDOUR },
    { 20, 20, SPECIES_HOUNDOUR },
    { 14, 14, SPECIES_HOUNDOUR },
    { 20, 20, SPECIES_HOUNDOUR },
};

const struct WildPokemonInfo gAlteringCave4_LandMonsInfo = { 7, gAlteringCave4_LandMons };
const struct WildPokemon gAlteringCave5_LandMons[] =
{
    { 10, 10, SPECIES_TEDDIURSA },
    { 12, 12, SPECIES_TEDDIURSA },
    { 8, 8, SPECIES_TEDDIURSA },
    { 14, 14, SPECIES_TEDDIURSA },
    { 10, 10, SPECIES_TEDDIURSA },
    { 12, 12, SPECIES_TEDDIURSA },
    { 16, 16, SPECIES_TEDDIURSA },
    { 6, 6, SPECIES_TEDDIURSA },
    { 8, 8, SPECIES_TEDDIURSA },
    { 14, 14, SPECIES_TEDDIURSA },
    { 8, 8, SPECIES_TEDDIURSA },
    { 14, 14, SPECIES_TEDDIURSA },
};

const struct WildPokemonInfo gAlteringCave5_LandMonsInfo = { 7, gAlteringCave5_LandMons };
const struct WildPokemon gAlteringCave6_LandMons[] =
{
    { 22, 22, SPECIES_AIPOM },
    { 24, 24, SPECIES_AIPOM },
    { 20, 20, SPECIES_AIPOM },
    { 26, 26, SPECIES_AIPOM },
    { 22, 22, SPECIES_AIPOM },
    { 24, 24, SPECIES_AIPOM },
    { 28, 28, SPECIES_AIPOM },
    { 18, 18, SPECIES_AIPOM },
    { 20, 20, SPECIES_AIPOM },
    { 26, 26, SPECIES_AIPOM },
    { 20, 20, SPECIES_AIPOM },
    { 26, 26, SPECIES_AIPOM },
};

const struct WildPokemonInfo gAlteringCave6_LandMonsInfo = { 7, gAlteringCave6_LandMons };
const struct WildPokemon gAlteringCave7_LandMons[] =
{
    { 22, 22, SPECIES_SHUCKLE },
    { 24, 24, SPECIES_SHUCKLE },
    { 20, 20, SPECIES_SHUCKLE },
    { 26, 26, SPECIES_SHUCKLE },
    { 22, 22, SPECIES_SHUCKLE },
    { 24, 24, SPECIES_SHUCKLE },
    { 28, 28, SPECIES_SHUCKLE },
    { 18, 18, SPECIES_SHUCKLE },
    { 20, 20, SPECIES_SHUCKLE },
    { 26, 26, SPECIES_SHUCKLE },
    { 20, 20, SPECIES_SHUCKLE },
    { 26, 26, SPECIES_SHUCKLE },
};

const struct WildPokemonInfo gAlteringCave7_LandMonsInfo = { 7, gAlteringCave7_LandMons };
const struct WildPokemon gAlteringCave8_LandMons[] =
{
    { 22, 22, SPECIES_STANTLER },
    { 24, 24, SPECIES_STANTLER },
    { 20, 20, SPECIES_STANTLER },
    { 26, 26, SPECIES_STANTLER },
    { 22, 22, SPECIES_STANTLER },
    { 24, 24, SPECIES_STANTLER },
    { 28, 28, SPECIES_STANTLER },
    { 18, 18, SPECIES_STANTLER },
    { 20, 20, SPECIES_STANTLER },
    { 26, 26, SPECIES_STANTLER },
    { 20, 20, SPECIES_STANTLER },
    { 26, 26, SPECIES_STANTLER },
};

const struct WildPokemonInfo gAlteringCave8_LandMonsInfo = { 7, gAlteringCave8_LandMons };
const struct WildPokemon gAlteringCave9_LandMons[] =
{
    { 22, 22, SPECIES_SMEARGLE },
    { 24, 24, SPECIES_SMEARGLE },
    { 20, 20, SPECIES_SMEARGLE },
    { 26, 26, SPECIES_SMEARGLE },
    { 22, 22, SPECIES_SMEARGLE },
    { 24, 24, SPECIES_SMEARGLE },
    { 28, 28, SPECIES_SMEARGLE },
    { 18, 18, SPECIES_SMEARGLE },
    { 20, 20, SPECIES_SMEARGLE },
    { 26, 26, SPECIES_SMEARGLE },
    { 20, 20, SPECIES_SMEARGLE },
    { 26, 26, SPECIES_SMEARGLE },
};

const struct WildPokemonInfo gAlteringCave9_LandMonsInfo = { 7, gAlteringCave9_LandMons };
const struct WildPokemon gMeteorFalls_StevensCave_LandMons[] =
{
    { 33, 33, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 35, 35, SPECIES_SOLROCK },
    { 33, 33, SPECIES_SOLROCK },
    { 37, 37, SPECIES_SOLROCK },
    { 35, 35, SPECIES_GOLBAT },
    { 39, 39, SPECIES_SOLROCK },
    { 38, 38, SPECIES_GOLBAT },
    { 40, 40, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GOLBAT },
    { 40, 40, SPECIES_GOLBAT },
};

const struct WildPokemonInfo gMeteorFalls_StevensCave_LandMonsInfo = { 10, gMeteorFalls_StevensCave_LandMons };
const struct WildPokemon gOldaleTown0_LandMons[] =
{
    { 2, 4, SPECIES_PETILIL },
    { 2, 4, SPECIES_GOSSIFLEUR },
    { 2, 4, SPECIES_SUNKERN },
    { 2, 4, SPECIES_LEDYBA },
    { 2, 4, SPECIES_PICHU },
    { 2, 4, SPECIES_BUNEARY },
    { 2, 4, SPECIES_GROWLITHE },
    { 2, 4, SPECIES_GROWLITHE },
    { 2, 4, SPECIES_CHERUBI },
    { 2, 4, SPECIES_CHERUBI },
    { 2, 4, SPECIES_CHERUBI },
    { 2, 4, SPECIES_CHERUBI },
};

const struct WildPokemonInfo gOldaleTown0_LandMonsInfo = { 20, gOldaleTown0_LandMons };
const struct WildPokemon gRustboroCity0_LandMons[] =
{
    { 6, 10, SPECIES_ROOKIDEE },
    { 6, 10, SPECIES_HAPPINY },
    { 6, 10, SPECIES_ESPURR },
    { 6, 10, SPECIES_STUNKY },
    { 6, 10, SPECIES_PURRLOIN },
    { 6, 10, SPECIES_MURKROW },
    { 6, 10, SPECIES_BURMY_TRASH_CLOAK },
    { 6, 10, SPECIES_CHATOT },
    { 6, 10, SPECIES_SHELMET },
    { 6, 10, SPECIES_KARRABLAST },
    { 6, 10, SPECIES_SHELMET },
    { 6, 10, SPECIES_KARRABLAST },
};

const struct WildPokemonInfo gRustboroCity0_LandMonsInfo = { 30, gRustboroCity0_LandMons };
const struct WildPokemon gMauvilleCity0_LandMons[] =
{
    { 19, 23, SPECIES_PIKACHU },
    { 19, 23, SPECIES_FLABEBE },
    { 19, 23, SPECIES_SHINX },
    { 19, 23, SPECIES_YAMPER },
    { 2, 5, SPECIES_BUDEW },
    { 19, 23, SPECIES_SNUBBULL },
    { 19, 23, SPECIES_STARLY },
    { 19, 23, SPECIES_STARLY },
    { 19, 23, SPECIES_HELIOPTILE },
    { 19, 23, SPECIES_HELIOPTILE },
    { 2, 5, SPECIES_TOXEL },
    { 2, 5, SPECIES_TOXEL },
};

const struct WildPokemonInfo gMauvilleCity0_LandMonsInfo = { 30, gMauvilleCity0_LandMons };

const struct WildPokemonHeader gWildMonHeaders[] =
{
    {
        .mapGroup = MAP_GROUP(ROUTE101),
        .mapNum = MAP_NUM(ROUTE101),
        .landMonsInfo = &gRoute101_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE102),
        .mapNum = MAP_NUM(ROUTE102),
        .landMonsInfo = &gRoute102_LandMonsInfo,
        .waterMonsInfo = &gRoute102_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute102_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE103),
        .mapNum = MAP_NUM(ROUTE103),
        .landMonsInfo = &gRoute103_LandMonsInfo,
        .waterMonsInfo = &gRoute103_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute103_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE104),
        .mapNum = MAP_NUM(ROUTE104),
        .landMonsInfo = &gRoute104_LandMonsInfo,
        .waterMonsInfo = &gRoute104_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute104_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE105),
        .mapNum = MAP_NUM(ROUTE105),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute105_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute105_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE110),
        .mapNum = MAP_NUM(ROUTE110),
        .landMonsInfo = &gRoute110_LandMonsInfo,
        .waterMonsInfo = &gRoute110_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute110_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE111),
        .mapNum = MAP_NUM(ROUTE111),
        .landMonsInfo = &gRoute111_LandMonsInfo,
        .waterMonsInfo = &gRoute111_WaterMonsInfo,
        .rockSmashMonsInfo = &gRoute111_RockSmashMonsInfo,
        .fishingMonsInfo = &gRoute111_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE112),
        .mapNum = MAP_NUM(ROUTE112),
        .landMonsInfo = &gRoute112_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE113),
        .mapNum = MAP_NUM(ROUTE113),
        .landMonsInfo = &gRoute113_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE114),
        .mapNum = MAP_NUM(ROUTE114),
        .landMonsInfo = &gRoute114_LandMonsInfo,
        .waterMonsInfo = &gRoute114_WaterMonsInfo,
        .rockSmashMonsInfo = &gRoute114_RockSmashMonsInfo,
        .fishingMonsInfo = &gRoute114_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE116),
        .mapNum = MAP_NUM(ROUTE116),
        .landMonsInfo = &gRoute116_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE117),
        .mapNum = MAP_NUM(ROUTE117),
        .landMonsInfo = &gRoute117_LandMonsInfo,
        .waterMonsInfo = &gRoute117_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute117_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE118),
        .mapNum = MAP_NUM(ROUTE118),
        .landMonsInfo = &gRoute118_LandMonsInfo,
        .waterMonsInfo = &gRoute118_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute118_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE124),
        .mapNum = MAP_NUM(ROUTE124),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute124_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute124_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(PETALBURG_WOODS),
        .mapNum = MAP_NUM(PETALBURG_WOODS),
        .landMonsInfo = &gPetalburgWoods_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(RUSTURF_TUNNEL),
        .mapNum = MAP_NUM(RUSTURF_TUNNEL),
        .landMonsInfo = &gRusturfTunnel_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(GRANITE_CAVE_1F),
        .mapNum = MAP_NUM(GRANITE_CAVE_1F),
        .landMonsInfo = &gGraniteCave_1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(GRANITE_CAVE_B1F),
        .mapNum = MAP_NUM(GRANITE_CAVE_B1F),
        .landMonsInfo = &gGraniteCave_B1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_1F),
        .mapNum = MAP_NUM(MT_PYRE_1F),
        .landMonsInfo = &gMtPyre_1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(VICTORY_ROAD_1F),
        .mapNum = MAP_NUM(VICTORY_ROAD_1F),
        .landMonsInfo = &gVictoryRoad_1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_SOUTH),
        .mapNum = MAP_NUM(SAFARI_ZONE_SOUTH),
        .landMonsInfo = &gSafariZone_South_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(UNDERWATER_ROUTE126),
        .mapNum = MAP_NUM(UNDERWATER_ROUTE126),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gUnderwater_Route126_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ABANDONED_SHIP_ROOMS_B1F),
        .mapNum = MAP_NUM(ABANDONED_SHIP_ROOMS_B1F),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gAbandonedShip_Rooms_B1F_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gAbandonedShip_Rooms_B1F_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(GRANITE_CAVE_B2F),
        .mapNum = MAP_NUM(GRANITE_CAVE_B2F),
        .landMonsInfo = &gGraniteCave_B2F_LandMonsInfo,
        .waterMonsInfo = &gGraniteCave_B2F_WaterMonsInfo,
        .rockSmashMonsInfo = &gGraniteCave_B2F_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(FIERY_PATH),
        .mapNum = MAP_NUM(FIERY_PATH),
        .landMonsInfo = &gFieryPath_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(METEOR_FALLS_B1F_2R),
        .mapNum = MAP_NUM(METEOR_FALLS_B1F_2R),
        .landMonsInfo = &gMeteorFalls_B1F_2R_LandMonsInfo,
        .waterMonsInfo = &gMeteorFalls_B1F_2R_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gMeteorFalls_B1F_2R_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(JAGGED_PASS),
        .mapNum = MAP_NUM(JAGGED_PASS),
        .landMonsInfo = &gJaggedPass_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE106),
        .mapNum = MAP_NUM(ROUTE106),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute106_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute106_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE107),
        .mapNum = MAP_NUM(ROUTE107),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute107_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute107_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE108),
        .mapNum = MAP_NUM(ROUTE108),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute108_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute108_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE109),
        .mapNum = MAP_NUM(ROUTE109),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute109_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute109_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE115),
        .mapNum = MAP_NUM(ROUTE115),
        .landMonsInfo = &gRoute115_LandMonsInfo,
        .waterMonsInfo = &gRoute115_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute115_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(NEW_MAUVILLE_INSIDE),
        .mapNum = MAP_NUM(NEW_MAUVILLE_INSIDE),
        .landMonsInfo = &gNewMauville_Inside_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE119),
        .mapNum = MAP_NUM(ROUTE119),
        .landMonsInfo = &gRoute119_LandMonsInfo,
        .waterMonsInfo = &gRoute119_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute119_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE120),
        .mapNum = MAP_NUM(ROUTE120),
        .landMonsInfo = &gRoute120_LandMonsInfo,
        .waterMonsInfo = &gRoute120_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute120_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE121),
        .mapNum = MAP_NUM(ROUTE121),
        .landMonsInfo = &gRoute121_LandMonsInfo,
        .waterMonsInfo = &gRoute121_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute121_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE122),
        .mapNum = MAP_NUM(ROUTE122),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute122_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute122_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE123),
        .mapNum = MAP_NUM(ROUTE123),
        .landMonsInfo = &gRoute123_LandMonsInfo,
        .waterMonsInfo = &gRoute123_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute123_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_2F),
        .mapNum = MAP_NUM(MT_PYRE_2F),
        .landMonsInfo = &gMtPyre_2F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_3F),
        .mapNum = MAP_NUM(MT_PYRE_3F),
        .landMonsInfo = &gMtPyre_3F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_4F),
        .mapNum = MAP_NUM(MT_PYRE_4F),
        .landMonsInfo = &gMtPyre_4F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_5F),
        .mapNum = MAP_NUM(MT_PYRE_5F),
        .landMonsInfo = &gMtPyre_5F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_6F),
        .mapNum = MAP_NUM(MT_PYRE_6F),
        .landMonsInfo = &gMtPyre_6F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_EXTERIOR),
        .mapNum = MAP_NUM(MT_PYRE_EXTERIOR),
        .landMonsInfo = &gMtPyre_Exterior_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_SUMMIT),
        .mapNum = MAP_NUM(MT_PYRE_SUMMIT),
        .landMonsInfo = &gMtPyre_Summit_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(GRANITE_CAVE_STEVENS_ROOM),
        .mapNum = MAP_NUM(GRANITE_CAVE_STEVENS_ROOM),
        .landMonsInfo = &gGraniteCave_StevensRoom_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE125),
        .mapNum = MAP_NUM(ROUTE125),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute125_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute125_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE126),
        .mapNum = MAP_NUM(ROUTE126),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute126_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute126_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE127),
        .mapNum = MAP_NUM(ROUTE127),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute127_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute127_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE128),
        .mapNum = MAP_NUM(ROUTE128),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute128_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute128_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE129),
        .mapNum = MAP_NUM(ROUTE129),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute129_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute129_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE130),
        .mapNum = MAP_NUM(ROUTE130),
        .landMonsInfo = &gRoute130_LandMonsInfo,
        .waterMonsInfo = &gRoute130_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute130_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE131),
        .mapNum = MAP_NUM(ROUTE131),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute131_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute131_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE132),
        .mapNum = MAP_NUM(ROUTE132),
        .landMonsInfo = &gRoute132_LandMonsInfo,
        .waterMonsInfo = &gRoute132_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute132_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE133),
        .mapNum = MAP_NUM(ROUTE133),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute133_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute133_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ROUTE134),
        .mapNum = MAP_NUM(ROUTE134),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gRoute134_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gRoute134_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS),
        .mapNum = MAP_NUM(ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gAbandonedShip_HiddenFloorCorridors_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gAbandonedShip_HiddenFloorCorridors_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM1),
        .mapNum = MAP_NUM(SEAFLOOR_CAVERN_ROOM1),
        .landMonsInfo = &gSeafloorCavern_Room1_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM2),
        .mapNum = MAP_NUM(SEAFLOOR_CAVERN_ROOM2),
        .landMonsInfo = &gSeafloorCavern_Room2_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM3),
        .mapNum = MAP_NUM(SEAFLOOR_CAVERN_ROOM3),
        .landMonsInfo = &gSeafloorCavern_Room3_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM4),
        .mapNum = MAP_NUM(SEAFLOOR_CAVERN_ROOM4),
        .landMonsInfo = &gSeafloorCavern_Room4_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM5),
        .mapNum = MAP_NUM(SEAFLOOR_CAVERN_ROOM5),
        .landMonsInfo = &gSeafloorCavern_Room5_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM6),
        .mapNum = MAP_NUM(SEAFLOOR_CAVERN_ROOM6),
        .landMonsInfo = &gSeafloorCavern_Room6_LandMonsInfo,
        .waterMonsInfo = &gSeafloorCavern_Room6_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSeafloorCavern_Room6_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM7),
        .mapNum = MAP_NUM(SEAFLOOR_CAVERN_ROOM7),
        .landMonsInfo = &gSeafloorCavern_Room7_LandMonsInfo,
        .waterMonsInfo = &gSeafloorCavern_Room7_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSeafloorCavern_Room7_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM8),
        .mapNum = MAP_NUM(SEAFLOOR_CAVERN_ROOM8),
        .landMonsInfo = &gSeafloorCavern_Room8_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ENTRANCE),
        .mapNum = MAP_NUM(SEAFLOOR_CAVERN_ENTRANCE),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gSeafloorCavern_Entrance_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSeafloorCavern_Entrance_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(CAVE_OF_ORIGIN_ENTRANCE),
        .mapNum = MAP_NUM(CAVE_OF_ORIGIN_ENTRANCE),
        .landMonsInfo = &gCaveOfOrigin_Entrance_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(CAVE_OF_ORIGIN_1F),
        .mapNum = MAP_NUM(CAVE_OF_ORIGIN_1F),
        .landMonsInfo = &gCaveOfOrigin_1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP1),
        .mapNum = MAP_NUM(CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP1),
        .landMonsInfo = &gCaveOfOrigin_UnusedRubySapphireMap1_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP2),
        .mapNum = MAP_NUM(CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP2),
        .landMonsInfo = &gCaveOfOrigin_UnusedRubySapphireMap2_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP3),
        .mapNum = MAP_NUM(CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP3),
        .landMonsInfo = &gCaveOfOrigin_UnusedRubySapphireMap3_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(NEW_MAUVILLE_ENTRANCE),
        .mapNum = MAP_NUM(NEW_MAUVILLE_ENTRANCE),
        .landMonsInfo = &gNewMauville_Entrance_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_SOUTHWEST),
        .mapNum = MAP_NUM(SAFARI_ZONE_SOUTHWEST),
        .landMonsInfo = &gSafariZone_Southwest_LandMonsInfo,
        .waterMonsInfo = &gSafariZone_Southwest_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSafariZone_Southwest_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_NORTH),
        .mapNum = MAP_NUM(SAFARI_ZONE_NORTH),
        .landMonsInfo = &gSafariZone_North_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &gSafariZone_North_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_NORTHWEST),
        .mapNum = MAP_NUM(SAFARI_ZONE_NORTHWEST),
        .landMonsInfo = &gSafariZone_Northwest_LandMonsInfo,
        .waterMonsInfo = &gSafariZone_Northwest_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSafariZone_Northwest_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(VICTORY_ROAD_B1F),
        .mapNum = MAP_NUM(VICTORY_ROAD_B1F),
        .landMonsInfo = &gVictoryRoad_B1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &gVictoryRoad_B1F_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(VICTORY_ROAD_B2F),
        .mapNum = MAP_NUM(VICTORY_ROAD_B2F),
        .landMonsInfo = &gVictoryRoad_B2F_LandMonsInfo,
        .waterMonsInfo = &gVictoryRoad_B2F_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gVictoryRoad_B2F_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(METEOR_FALLS_1F_1R),
        .mapNum = MAP_NUM(METEOR_FALLS_1F_1R),
        .landMonsInfo = &gMeteorFalls_1F_1R_LandMonsInfo,
        .waterMonsInfo = &gMeteorFalls_1F_1R_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gMeteorFalls_1F_1R_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(METEOR_FALLS_1F_2R),
        .mapNum = MAP_NUM(METEOR_FALLS_1F_2R),
        .landMonsInfo = &gMeteorFalls_1F_2R_LandMonsInfo,
        .waterMonsInfo = &gMeteorFalls_1F_2R_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gMeteorFalls_1F_2R_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(METEOR_FALLS_B1F_1R),
        .mapNum = MAP_NUM(METEOR_FALLS_B1F_1R),
        .landMonsInfo = &gMeteorFalls_B1F_1R_LandMonsInfo,
        .waterMonsInfo = &gMeteorFalls_B1F_1R_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gMeteorFalls_B1F_1R_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM),
        .mapNum = MAP_NUM(SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM),
        .landMonsInfo = &gShoalCave_LowTideStairsRoom_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SHOAL_CAVE_LOW_TIDE_LOWER_ROOM),
        .mapNum = MAP_NUM(SHOAL_CAVE_LOW_TIDE_LOWER_ROOM),
        .landMonsInfo = &gShoalCave_LowTideLowerRoom_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SHOAL_CAVE_LOW_TIDE_INNER_ROOM),
        .mapNum = MAP_NUM(SHOAL_CAVE_LOW_TIDE_INNER_ROOM),
        .landMonsInfo = &gShoalCave_LowTideInnerRoom_LandMonsInfo,
        .waterMonsInfo = &gShoalCave_LowTideInnerRoom_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gShoalCave_LowTideInnerRoom_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM),
        .mapNum = MAP_NUM(SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM),
        .landMonsInfo = &gShoalCave_LowTideEntranceRoom_LandMonsInfo,
        .waterMonsInfo = &gShoalCave_LowTideEntranceRoom_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gShoalCave_LowTideEntranceRoom_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(LILYCOVE_CITY),
        .mapNum = MAP_NUM(LILYCOVE_CITY),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gLilycoveCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gLilycoveCity_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(DEWFORD_TOWN),
        .mapNum = MAP_NUM(DEWFORD_TOWN),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gDewfordTown_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gDewfordTown_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SLATEPORT_CITY),
        .mapNum = MAP_NUM(SLATEPORT_CITY),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gSlateportCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSlateportCity_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(MOSSDEEP_CITY),
        .mapNum = MAP_NUM(MOSSDEEP_CITY),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gMossdeepCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gMossdeepCity_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(MOSSDEEP_CITY),
        .mapNum = MAP_NUM(MOSSDEEP_CITY),
        .landMonsInfo = &gMossdeepCity1_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(PACIFIDLOG_TOWN),
        .mapNum = MAP_NUM(PACIFIDLOG_TOWN),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gPacifidlogTown_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gPacifidlogTown_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(EVER_GRANDE_CITY),
        .mapNum = MAP_NUM(EVER_GRANDE_CITY),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gEverGrandeCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gEverGrandeCity_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(PETALBURG_CITY),
        .mapNum = MAP_NUM(PETALBURG_CITY),
        .landMonsInfo = &gPetalburgCity_LandMonsInfo,
        .waterMonsInfo = &gPetalburgCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gPetalburgCity_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(UNDERWATER_ROUTE124),
        .mapNum = MAP_NUM(UNDERWATER_ROUTE124),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gUnderwater_Route124_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SHOAL_CAVE_LOW_TIDE_ICE_ROOM),
        .mapNum = MAP_NUM(SHOAL_CAVE_LOW_TIDE_ICE_ROOM),
        .landMonsInfo = &gShoalCave_LowTideIceRoom_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SKY_PILLAR_1F),
        .mapNum = MAP_NUM(SKY_PILLAR_1F),
        .landMonsInfo = &gSkyPillar_1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SOOTOPOLIS_CITY),
        .mapNum = MAP_NUM(SOOTOPOLIS_CITY),
        .landMonsInfo = NULL,
        .waterMonsInfo = &gSootopolisCity_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSootopolisCity_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SKY_PILLAR_3F),
        .mapNum = MAP_NUM(SKY_PILLAR_3F),
        .landMonsInfo = &gSkyPillar_3F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SKY_PILLAR_5F),
        .mapNum = MAP_NUM(SKY_PILLAR_5F),
        .landMonsInfo = &gSkyPillar_5F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_SOUTHEAST),
        .mapNum = MAP_NUM(SAFARI_ZONE_SOUTHEAST),
        .landMonsInfo = &gSafariZone_Southeast_LandMonsInfo,
        .waterMonsInfo = &gSafariZone_Southeast_WaterMonsInfo,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = &gSafariZone_Southeast_FishingMonsInfo,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_NORTHEAST),
        .mapNum = MAP_NUM(SAFARI_ZONE_NORTHEAST),
        .landMonsInfo = &gSafariZone_Northeast_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = &gSafariZone_Northeast_RockSmashMonsInfo,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_1F),
        .mapNum = MAP_NUM(MAGMA_HIDEOUT_1F),
        .landMonsInfo = &gMagmaHideout_1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_2F_1R),
        .mapNum = MAP_NUM(MAGMA_HIDEOUT_2F_1R),
        .landMonsInfo = &gMagmaHideout_2F_1R_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_2F_2R),
        .mapNum = MAP_NUM(MAGMA_HIDEOUT_2F_2R),
        .landMonsInfo = &gMagmaHideout_2F_2R_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_3F_1R),
        .mapNum = MAP_NUM(MAGMA_HIDEOUT_3F_1R),
        .landMonsInfo = &gMagmaHideout_3F_1R_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_3F_2R),
        .mapNum = MAP_NUM(MAGMA_HIDEOUT_3F_2R),
        .landMonsInfo = &gMagmaHideout_3F_2R_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_4F),
        .mapNum = MAP_NUM(MAGMA_HIDEOUT_4F),
        .landMonsInfo = &gMagmaHideout_4F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_3F_3R),
        .mapNum = MAP_NUM(MAGMA_HIDEOUT_3F_3R),
        .landMonsInfo = &gMagmaHideout_3F_3R_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_2F_3R),
        .mapNum = MAP_NUM(MAGMA_HIDEOUT_2F_3R),
        .landMonsInfo = &gMagmaHideout_2F_3R_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MIRAGE_TOWER_1F),
        .mapNum = MAP_NUM(MIRAGE_TOWER_1F),
        .landMonsInfo = &gMirageTower_1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MIRAGE_TOWER_2F),
        .mapNum = MAP_NUM(MIRAGE_TOWER_2F),
        .landMonsInfo = &gMirageTower_2F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MIRAGE_TOWER_3F),
        .mapNum = MAP_NUM(MIRAGE_TOWER_3F),
        .landMonsInfo = &gMirageTower_3F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MIRAGE_TOWER_4F),
        .mapNum = MAP_NUM(MIRAGE_TOWER_4F),
        .landMonsInfo = &gMirageTower_4F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(DESERT_UNDERPASS),
        .mapNum = MAP_NUM(DESERT_UNDERPASS),
        .landMonsInfo = &gDesertUnderpass_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ARTISAN_CAVE_B1F),
        .mapNum = MAP_NUM(ARTISAN_CAVE_B1F),
        .landMonsInfo = &gArtisanCave_B1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ARTISAN_CAVE_1F),
        .mapNum = MAP_NUM(ARTISAN_CAVE_1F),
        .landMonsInfo = &gArtisanCave_1F_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAVE),
        .mapNum = MAP_NUM(ALTERING_CAVE),
        .landMonsInfo = &gAlteringCave1_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAVE),
        .mapNum = MAP_NUM(ALTERING_CAVE),
        .landMonsInfo = &gAlteringCave2_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAVE),
        .mapNum = MAP_NUM(ALTERING_CAVE),
        .landMonsInfo = &gAlteringCave3_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAVE),
        .mapNum = MAP_NUM(ALTERING_CAVE),
        .landMonsInfo = &gAlteringCave4_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAVE),
        .mapNum = MAP_NUM(ALTERING_CAVE),
        .landMonsInfo = &gAlteringCave5_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAVE),
        .mapNum = MAP_NUM(ALTERING_CAVE),
        .landMonsInfo = &gAlteringCave6_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAVE),
        .mapNum = MAP_NUM(ALTERING_CAVE),
        .landMonsInfo = &gAlteringCave7_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAVE),
        .mapNum = MAP_NUM(ALTERING_CAVE),
        .landMonsInfo = &gAlteringCave8_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAVE),
        .mapNum = MAP_NUM(ALTERING_CAVE),
        .landMonsInfo = &gAlteringCave9_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(METEOR_FALLS_STEVENS_CAVE),
        .mapNum = MAP_NUM(METEOR_FALLS_STEVENS_CAVE),
        .landMonsInfo = &gMeteorFalls_StevensCave_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(OLDALE_TOWN),
        .mapNum = MAP_NUM(OLDALE_TOWN),
        .landMonsInfo = &gOldaleTown0_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(RUSTBORO_CITY),
        .mapNum = MAP_NUM(RUSTBORO_CITY),
        .landMonsInfo = &gRustboroCity0_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MAUVILLE_CITY),
        .mapNum = MAP_NUM(MAUVILLE_CITY),
        .landMonsInfo = &gMauvilleCity0_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(UNDEFINED),
        .mapNum = MAP_NUM(UNDEFINED),
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
};



const struct WildPokemon gBattlePyramid_1_LandMons[] =
{
    { 5, 5, SPECIES_BULBASAUR },
    { 5, 5, SPECIES_BULBASAUR },
    { 5, 5, SPECIES_BULBASAUR },
    { 5, 5, SPECIES_BULBASAUR },
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_CHARMANDER },
};

const struct WildPokemonInfo gBattlePyramid_1_LandMonsInfo = { 4, gBattlePyramid_1_LandMons };
const struct WildPokemon gBattlePyramid_2_LandMons[] =
{
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMANDER },
};

const struct WildPokemonInfo gBattlePyramid_2_LandMonsInfo = { 4, gBattlePyramid_2_LandMons };
const struct WildPokemon gBattlePyramid_3_LandMons[] =
{
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARIZARD },
};

const struct WildPokemonInfo gBattlePyramid_3_LandMonsInfo = { 4, gBattlePyramid_3_LandMons };
const struct WildPokemon gBattlePyramid_4_LandMons[] =
{
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_SQUIRTLE },
};

const struct WildPokemonInfo gBattlePyramid_4_LandMonsInfo = { 4, gBattlePyramid_4_LandMons };
const struct WildPokemon gBattlePyramid_5_LandMons[] =
{
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_WARTORTLE },
};

const struct WildPokemonInfo gBattlePyramid_5_LandMonsInfo = { 4, gBattlePyramid_5_LandMons };
const struct WildPokemon gBattlePyramid_6_LandMons[] =
{
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
};

const struct WildPokemonInfo gBattlePyramid_6_LandMonsInfo = { 4, gBattlePyramid_6_LandMons };
const struct WildPokemon gBattlePyramid_7_LandMons[] =
{
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
};

const struct WildPokemonInfo gBattlePyramid_7_LandMonsInfo = { 8, gBattlePyramid_7_LandMons };

const struct WildPokemonHeader gBattlePyramidWildMonHeaders[] =
{
    {
        .mapGroup = 0,
        .mapNum = 1,
        .landMonsInfo = &gBattlePyramid_1_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 2,
        .landMonsInfo = &gBattlePyramid_2_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 3,
        .landMonsInfo = &gBattlePyramid_3_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 4,
        .landMonsInfo = &gBattlePyramid_4_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 5,
        .landMonsInfo = &gBattlePyramid_5_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 6,
        .landMonsInfo = &gBattlePyramid_6_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 7,
        .landMonsInfo = &gBattlePyramid_7_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(UNDEFINED),
        .mapNum = MAP_NUM(UNDEFINED),
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
};



const struct WildPokemon gBattlePike_1_LandMons[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gBattlePike_1_LandMonsInfo = { 10, gBattlePike_1_LandMons };
const struct WildPokemon gBattlePike_2_LandMons[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gBattlePike_2_LandMonsInfo = { 10, gBattlePike_2_LandMons };
const struct WildPokemon gBattlePike_3_LandMons[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gBattlePike_3_LandMonsInfo = { 10, gBattlePike_3_LandMons };
const struct WildPokemon gBattlePike_4_LandMons[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};

const struct WildPokemonInfo gBattlePike_4_LandMonsInfo = { 10, gBattlePike_4_LandMons };

const struct WildPokemonHeader gBattlePikeWildMonHeaders[] =
{
    {
        .mapGroup = 0,
        .mapNum = 1,
        .landMonsInfo = &gBattlePike_1_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 2,
        .landMonsInfo = &gBattlePike_2_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 3,
        .landMonsInfo = &gBattlePike_3_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 4,
        .landMonsInfo = &gBattlePike_4_LandMonsInfo,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(UNDEFINED),
        .mapNum = MAP_NUM(UNDEFINED),
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
};
