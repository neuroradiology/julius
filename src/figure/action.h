#ifndef FIGURE_ACTION_H
#define FIGURE_ACTION_H

enum {
    FIGURE_ACTION_1_IMMIGRANT_CREATED = 1,
    FIGURE_ACTION_2_IMMIGRANT_ARRIVING = 2,
    FIGURE_ACTION_3_IMMIGRANT_ENTERING_HOUSE = 3,
    FIGURE_ACTION_4_EMIGRANT_CREATED = 4,
    FIGURE_ACTION_5_EMIGRANT_EXITING_HOUSE = 5,
    FIGURE_ACTION_6_EMIGRANT_LEAVING = 6,
    FIGURE_ACTION_7_HOMELESS_CREATED = 7,
    FIGURE_ACTION_8_HOMELESS_GOING_TO_HOUSE = 8,
    FIGURE_ACTION_9_HOMELESS_ENTERING_HOUSE = 9,
    FIGURE_ACTION_10_HOMELESS_LEAVING = 10,
    FigureActionState_20_CartpusherInitial = 20,
    FigureActionState_21_CartpusherDeliveringToWarehouse = 21,
    FigureActionState_22_CartpusherDeliveringToGranary = 22,
    FigureActionState_23_CartpusherDeliveringToWorkshop = 23,
    FigureActionState_24_CartpusherAtWarehouse = 24,
    FigureActionState_25_CartpusherAtGranary = 25,
    FigureActionState_26_CartpusherAtWorkshop = 26,
    FigureActionState_27_CartpusherReturning = 27,
    FigureActionState_40_TaxCollectorCreated = 40,
    FigureActionState_41_TaxCollectorEnteringExiting = 41,
    FigureActionState_42_TaxCollectorRoaming = 42,
    FigureActionState_43_TaxCollectorReturning = 43,
    FigureActionState_50_WarehousemanCreated = 50,
    FigureActionState_51_WarehousemanDeliveringResource = 51,
    FigureActionState_52_WarehousemanAtDeliveryBuilding = 52,
    FigureActionState_53_WarehousemanReturningEmpty = 53,
    FigureActionState_54_WarehousemanGettingFood = 54,
    FigureActionState_55_WarehousemanAtGranaryGettingFood = 55,
    FigureActionState_56_WarehousemanReturningWithFood = 56,
    FigureActionState_57_WarehousemanGettingResource = 57,
    FigureActionState_58_WarehousemanAtWarehouseGettingResource = 58,
    FigureActionState_59_WarehousemanReturningWithResource = 59,
    FigureActionState_60_EngineerCreated = 60,
    FigureActionState_61_EngineerEnteringExiting = 61,
    FigureActionState_62_EngineerRoaming = 62,
    FigureActionState_63_EngineerReturning = 63,
    FigureActionState_70_PrefectCreated = 70,
    FigureActionState_71_PrefectEnteringExiting = 71,
    FigureActionState_72_PrefectRoaming = 72,
    FigureActionState_73_PrefectReturning = 73,
    FigureActionState_74_PrefectGoingToFire = 74,
    FigureActionState_75_PrefectAtFire = 75,
    FigureActionState_76_PrefectGoingToEnemy = 76,
    FigureActionState_77_PrefectAtEnemy = 77,
    FigureActionState_80_SoldierAtRest = 80,
    FigureActionState_81_SoldierGoingToFort = 81,
    FigureActionState_82_SoldierReturningToBarracks = 82,
    FigureActionState_83_SoldierGoingToStandard = 83,
    FigureActionState_84_SoldierAtStandard = 84,
    FigureActionState_85_SoldierGoingToMilitaryAcademy = 85,
    FigureActionState_86_SoldierMoppingUp = 86,
    FigureActionState_87_SoldierGoingToDistantBattle = 87,
    FigureActionState_88_SoldierReturningFromDistantBattle = 88,
    FigureActionState_89_SoldierAtDistantBattle = 89,
    FIGURE_ACTION_90_ENTERTAINER_AT_SCHOOL_CREATED = 90,
    FIGURE_ACTION_91_ENTERTAINER_EXITING_SCHOOL = 91,
    FIGURE_ACTION_92_ENTERTAINER_GOING_TO_VENUE = 92,
    FIGURE_ACTION_94_ENTERTAINER_ROAMING = 94,
    FIGURE_ACTION_95_ENTERTAINER_RETURNING = 95,
    FigureActionState_100_TradeCaravanCreated = 100,
    FigureActionState_101_TradeCaravanArriving = 101,
    FigureActionState_102_TradeCaravanTrading = 102,
    FigureActionState_103_TradeCaravanLeaving = 103,
    FigureActionState_110_TradeShipCreated = 110,
    FigureActionState_111_TradeShipGoingToDock = 111,
    FigureActionState_112_TradeShipMoored = 112,
    FigureActionState_113_TradeShipGoingToDockQueue = 113,
    FigureActionState_114_TradeShipAnchored = 114,
    FigureActionState_115_TradeShipLeaving = 115,
    FigureActionState_120_RioterCreated = 120,
    FigureActionState_121_RioterMoving = 121,
    FigureActionState_125_Roaming = 125,
    FigureActionState_126_RoamerReturning = 126,
    FIGURE_ACTION_128_FLOTSAM_CREATED = 128,
    FIGURE_ACTION_129_FLOTSAM_FLOATING = 129,
    FIGURE_ACTION_130_FLOTSAM_OFF_MAP = 130,
    FigureActionState_132_DockerIdling = 132,
    FigureActionState_133_DockerImportQueue = 133,
    FigureActionState_134_DockerExportQueue = 134,
    FigureActionState_135_DockerImportGoingToWarehouse = 135,
    FigureActionState_136_DockerExportGoingToWarehouse = 136,
    FigureActionState_137_DockerExportReturning = 137,
    FigureActionState_138_DockerImportReturning = 138,
    FigureActionState_139_DockerImportAtWarehouse = 139,
    FigureActionState_140_DockerExportAtWarehouse = 140,
    FigureActionState_145_MarketBuyerGoingToStorage = 145,
    FigureActionState_146_MarketBuyerReturning = 146,
    FigureActionState_148_Fleeing = 148,
    FigureActionState_149_Corpse = 149,
    FigureActionState_150_Attack = 150,
    FigureActionState_151_EnemyInitial = 151,
    FigureActionState_152_EnemyWaiting = 152,
    FigureActionState_153_EnemyMarching = 153,
    FigureActionState_154_EnemyFighting = 154,
    FigureActionState_156_NativeGoingToMeetingCenter = 156,
    FigureActionState_157_NativeReturningFromMeetingCenter = 157,
    FigureActionState_158_NativeCreated = 158,
    FigureActionState_159_NativeAttacking = 159,
    FigureActionState_160_NativeTraderGoingToWarehouse = 160,
    FigureActionState_161_NativeTraderReturning = 161,
    FigureActionState_162_NativeTraderCreated = 162,
    FigureActionState_163_NativeTraderAtWarehouse = 163,
    FigureActionState_170_TowerSentryAtRest = 170,
    FigureActionState_171_TowerSentryPatrolling = 171,
    FigureActionState_172_TowerSentryFiring = 172,
    FigureActionState_173_TowerSentryReturning = 173,
    FigureActionState_174_TowerSentryGoingToTower = 174,
    FigureActionState_180_BallistaCreated = 180,
    FigureActionState_181_BallistaFiring = 181,
    FIGURE_ACTION_190_FISHING_BOAT_CREATED = 190,
    FIGURE_ACTION_191_FISHING_BOAT_GOING_TO_FISH = 191,
    FIGURE_ACTION_192_FISHING_BOAT_FISHING = 192,
    FIGURE_ACTION_193_FISHING_BOAT_GOING_TO_WHARF = 193,
    FIGURE_ACTION_194_FISHING_BOAT_AT_WHARF = 194,
    FIGURE_ACTION_195_FISHING_BOAT_RETURNING_WITH_FISH = 195,
    FIGURE_ACTION_196_HERD_ANIMAL_AT_REST = 196,
    FIGURE_ACTION_197_HERD_ANIMAL_MOVING = 197,
    FIGURE_ACTION_199_WOLF_ATTACKING = 199,
    FIGURE_ACTION_200_HIPPODROME_HORSE_CREATED = 200,
    FIGURE_ACTION_201_HIPPODROME_HORSE_RACING = 201,
    FIGURE_ACTION_202_HIPPODROME_HORSE_DONE = 202,
};


#endif // FIGURE_ACTION_H
