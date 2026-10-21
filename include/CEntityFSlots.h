// CEntityFSlots: a view of the CBaseEntity virtual table up to slot 242, where slot 242 answers a float
// (CEntityVSlots keeps slot 242 as a void slot because a matched caller ignores its result).
#pragma once

#include "CEntityVSlots.h"

class CEntityFSlots
{
public:
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23)
	EVS(240) EVS(241)
	virtual float slot242();	// a float answer (the animal NPC's speed)
};
