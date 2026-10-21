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
	virtual void vfunc103();	// slot 103 "Spawn": slot 104, the bat model (slot 105), clears the fields at +0x1568 / +0x156c, solid type 2 (inlined SetSolid scope trace), move type 4, +0x1570 = 0xf7, +0x19c = 0, health from the global cvar object at 0x1093a284 (0 while its slot 1 holds), +0x1574 = 0.2f, +0x5cc0 = 0, then slot 420
};
