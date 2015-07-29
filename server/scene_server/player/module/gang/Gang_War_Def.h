/*
 * Gang_War_Def.h
 *
 *  Created on: 2014年8月8日
 *      Author: Linqiyou
 */

#ifndef GANG_WAR_DEF_H_
#define GANG_WAR_DEF_H_

namespace Gang_War_Def {
	enum Tower_Index {
		RED_ONE		= 101,
		RED_TWO 	= 102,
		RED_THREE 	= 103,
//		RED_FOUR 	= 104,
//		RED_FIVE 	= 105,
//		RED_SIX 	= 106,
		BLACK_ONE 	= 107,
//		BLUE_ONE 	= 108,
//		BLUE_TWO 	= 109,
//		BLUE_THREE 	= 110,
		BLUE_FOUR 	= 111,
		BLUE_FIVE 	= 112,
		BLUE_SIX 	= 113,
	};
}
enum Gang_War_Notice{
	GANG_WAR_NOTICE_KILL    = 1,
	GANG_WAR_NOTICE_REDUCE  = 2,
	GANG_WAR_NOTICE_BE_KILL = 3,
	GANG_WAR_NOTICE_WIN		 = 4,
	GANG_WAR_NOTICE_LOSE    = 5,
	GANG_WAR_NOTICE_ASSISTS = 6,
};

enum Gang_War_Announce{
	GANG_WAR_ANNOUNCE_WAR_WIN  	   	= 1302,
	GANG_WAR_ANNOUNCE_WAR_START  	= 1303,
	GANG_WAR_ANNOUNCE_ATTACK		= 1304,
	GANG_WAR_ANNOUNCE_BE_ATTACK		= 1305,
	GANG_WAR_ANNOUNCE_HOLD			= 1306,
	GANG_WAR_ANNOUNCE_HOLD_FRIEND		= 1310,
	GANG_WAR_ANNOUNCE_DUEL_REQ			= 1307,
	GANG_WAR_ANNOUNCE_DUEL_REOBJECT		= 1308,
	GANG_WAR_ANNOUNCE_DUEL_WIN			= 1309,
	GANG_WAR_ANN_ATTACK_EMPTY_TOWER = 1311,
	GANG_WAR_ANN_ATTACK_EMPTY_TOWER_SELF = 1312,
	GANG_WAR_ANN_DEFEND				= 1313,
	GANG_WAR_ANN_DEFEND_SELF		= 1314,

	GANG_WAR_WILL_WIN_SELF				= 1358,
	GANG_WAR_WILL_WIN			= 1359,
};

enum Gang_War_Stage {
	GANG_WAR_STAGE_16	= 16,
	GANG_WAR_STAGE_8	= 8,
	GANG_WAR_STAGE_4	= 4,
	GANG_WAR_STAGE_2	= 2,
};
#endif /* GANG_WAR_DEF_H_ */