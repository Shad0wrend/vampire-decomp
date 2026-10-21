// CNPC_VCombatman: declared by pcdecomp transplant for 0x1036fb50 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VCombatmanTarget
{
public:
	int sub_100037e2();	// returns a state code (8 = ready)
};

class CNPC_VCombatman : public CBaseEntity
{
public:
	CNPC_VCombatman *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VCombatman *sub_1036fad0();	// as in CKeepUpright (transplant)
	int vfunc438();	// slot 438 (TranslateSchedule-like): see the body
	int sub_10015ad2();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), tail called
	char sub_1001482b(int a);	// condition test, called with 0x10 / 0x11 / 0x13
};
