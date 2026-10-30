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
	void vfunc130(int a);	// slot 130 \"OnRestore\": looks up the "npc_VAndreiBlood" boss (g_10938040), then the Troika version (sub_102998c0)
	void sub_102998c0(int a);	// CAI_BaseNPCTroika::vfunc130 (stub 0x10002b99), called directly
	void vfunc103();	// slot 103 "Spawn": like CNPCMaker::vfunc103, with the Fleshpile think functions
	void vfunc104();	// slot 104 "Precache": precaches the model name of slot 9 (when it has one) through the engine (slot 13), the base precache and the maker's template (+0x665c); without a model name warns "<name> at (x y z) missing model" and removes the entity
	void sub_1027bb50();	// CAI_BaseNPC::vfunc104 (stub 0x1000eaf7), called directly
	const char *sub_100ab4f0();	// the entity's name text for messages (stub 0x1000b5cd)
public:
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc619(int);
	virtual void vfunc620(int);
public:
	virtual bool vfunc362(int);
	virtual bool vfunc363(int);
	virtual bool vfunc364(int);
	virtual bool vfunc365(int);
};
