// CNPC_VCombatman: declared by pcdecomp transplant for 0x1036fb50 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VCombatman : public CBaseEntity
{
public:
	CNPC_VCombatman *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VCombatman *sub_1036fad0();	// as in CKeepUpright (transplant)
	int vfunc438();	// slot 438 (TranslateSchedule-like): see the body
};
