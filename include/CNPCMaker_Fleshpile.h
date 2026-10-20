// CNPCMaker_Fleshpile: declared by pcdecomp transplant for 0x1034bd50 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNPCMaker_Fleshpile : public CBaseEntity
{
public:
	CNPCMaker_Fleshpile *sub_1034be50();
	void vfunc139(CBaseEntity *pEnt);	// counts a spawned Tzimisce runner once on the boss (+0x66b8 down, +0x66bc up by 1), then the base maker's slot 139
	void sub_10009c41(CBaseEntity *pEnt);	// CNPCMaker::vfunc139 (jump stub)
	void vfunc103();	// slot 103 "Spawn": like CNPCMaker::vfunc103, with the Fleshpile think functions
};
