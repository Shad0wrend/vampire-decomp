// CNPC_VFrenzyShadow: frenzy shadow NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CNPC_VFrenzyShadow
{
public:
	virtual void vfunc601(int unused);

	char sub_10376b70(int unused);	// slot 599: calls slot 1 of a global object, then sets the flag byte at +0x6078
	bool sub_10376ba0(int unused);	// slot 600: sets the flag byte at +0x6078, then calls slot 1 of the global object
	void sub_10376c10();	// resets the counter at +0x6664, then for every entry of the global object list (count at 0x1093ae9c) counts the ones whose object at +0x9c answers slot 404 with 1 and calls slot 544 of this
	int vfunc438();	// slot 438 "CNPC_VFrenzyShadow::SelectSchedule": in state 2 with at most one shadow counted (+0x6664), a squad-less target that slot 167's object accepts (slot 158) and no condition 0x59 / no flag at +0x6668 gives schedule 0x161 (stamping source line 0x133), else the base implementation
	int sub_10015ad2();	// CNPC_VHuman::vfunc438, called directly
	char sub_10014df8(int condition);	// "HasCondition" (stub of 0x10269aa0), called directly

	char m_pad0004[0x6078 - 4];
	char m_b6078;
	CNPC_VFrenzyShadow *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
};
