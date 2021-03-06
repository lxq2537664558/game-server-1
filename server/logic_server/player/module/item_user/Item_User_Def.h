/*
 * Item_User_Def.h
 *
 *  Created on: 2014年3月26日
 *      Author: root
 */

#ifndef ITEM_USER_DEF_H_
#define ITEM_USER_DEF_H_

enum Item_Effect_Type {
	ITEM_EFFECT_T_NORMAL 		= 0,
	ITEM_EFFECT_T_TASK			= 1,
	ITEM_EFFECT_T_LOTTERY 		= 2,	// 礼包
	ITEM_EFFECT_T_FLOWER 		= 3,
	ITEM_EFFECT_T_DRUG		 	= 4,
	ITEM_EFFECT_T_MATERIAL		= 5,
	ITEM_EFFECT_T_CARD			= 6,
	ITEM_EFFECT_T_CARD_VIP		= 601,
	ITEM_EFFECT_T_CARD_BUFF		= 602,
	ITEM_EFFECT_T_CARD_OTHER	= 603,
	ITEM_EFFECT_T_CARD_HERO		= 611,
	ITEM_EFFECT_T_RESOURCE		= 7,
	ITEM_EFFECT_T_CONSUME_TOOL	= 8,
	ITEM_EFFECT_T_EQUIP			= 9,
	ITEM_EFFECT_T_EXCHANGE		= 10,
	ITEM_EFFECT_T_ACHIEVEMENT	= 11,
	ITEM_EFFECT_T_MOUNT			= 12,
	ITEM_EFFECT_T_GEM_COMPOSE	= 17,
	ITEM_EFFECT_T_LITTLE_FUN    = 90,

	ITEM_EFFECT_T_END
};

// 为use_time_的index，与size，增删请同步修改VEC_SIZE
enum CD_Type {
	CD_T_ALL		= 0,
//	CD_T_BLOOD 		= 1,
//	CD_T_MAGIC 		= 2,
//	CD_T_BLOOD_STATUS = 3,
//	CD_T_MAGIC_STATUS = 4,
//	CD_T_BLOOD_PET	= 5,
//	CD_T_BLOOD_STATUS_PET = 6,

	CD_T_VEC_SIZE 	= 1,
};

enum Item_Target {
	ITEM_TARGET_PLAYER 		= 3,
	ITEM_TARGET_PET 		= 5,
	ITEM_TARGET__UNKNOWN 	= 0
};

enum Item_Use_Type {
	ITEM_USE_TYPE_START = 0,
	ITEM_USE_DRUG		= 1,
	ITEM_USE_EXP		= 2,
	ITEM_USE_BUFF		= 3,
	ITEM_USE_TYPE_END
};
enum Item_Use_Drug_Type {
	ITEM_USE_DRUG_BLOOD_POOL = 0,
	ITEM_USE_DRUG_STRENGTH	= 1,
};

enum Item_Lottery_Cost_Type {
	WING_LV			= 1, // 翅膀达到X阶
};
enum Item_Little_Use_Type {
	FUN_MODIFY_GENDER = 1,
	FUN_SENCE_TRAN = 2,
};

#endif /* ITEM_USER_DEF_H_ */
