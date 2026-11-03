// CNPC_VCombatman: declared by pcdecomp transplant for 0x1036fb50 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNPC_VCombatmanTarget
{
public:
	int sub_100037e2();	// returns a state code (8 = ready)
};

class CNPC_VCombatman : public CBaseEntity
{
public:
	void vfunc103();	// slot 103: the 0x200000 condition-mask bit, CNPC_VHuman::vfunc103, then GetModelPtr(-1)
	CNPC_VCombatman *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VCombatman *sub_1036fad0();	// as in CKeepUpright (transplant)
	int vfunc438();	// slot 438 (TranslateSchedule-like): see the body
	int vfunc461();	// slot 461 override: the state field at +0x1b38 = 0xb, then CNPC_VHuman's implementation
	int sub_10015ad2();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), tail called
	char sub_1001482b(int a);	// condition test, called with 0x10 / 0x11 / 0x13
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
};
