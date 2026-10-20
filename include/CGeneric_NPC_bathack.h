// CGeneric_NPC_bathack: declared by pcdecomp transplant for 0x1035adb0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CGeneric_NPC_bathack : public CBaseEntity
{
public:
	CGeneric_NPC_bathack *vfunc5(unsigned int flags);
	void sub_1000c9cd();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	float vfunc516();	// as in CGeneric_NPC (transplant)
	CGeneric_NPC_bathack *sub_1035ad10();	// as in CKeepUpright (transplant)
	void vfunc104();	// slot 104 (Precache): the bat model and the metropolice / citizen sounds, then the base class
	void sub_1027bb50();	// CAI_BaseNPC::vfunc104, called directly
};
