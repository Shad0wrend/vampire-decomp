// CNPC_VAndreiBlood (RTTI .?AVCNPC_VAndreiBlood@@): base CNPC_VHuman (CNPC_VHuman.h).
#pragma once

#include "CNPC_VHuman.h"

class CNPC_VAndreiBlood : public CNPC_VHuman
{
public:
	virtual void vfunc104();
	void vfunc431();	// slot 431 "CNPC_VAndreiBlood::NPCThink": scope trace, the CNPC_VVampireBoss version (0x100052d6), trace depth back
	void vfunc619(int arg);	// slot 619, not modelled as virtual yet
	void sub_1000c27a(int arg);
	int vfunc127(int arg);	// slot 127 (overrides CBaseEntity's)
	int sub_1000b28f(int arg);
	void vfunc433();	// slot 433 (overrides CAI_BaseNPC's)
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433, called directly
	void sub_10015839(int a);	// slot 616 implementation shared with CAI_BaseNPCTroika
	virtual CAI_BaseNPC *vfunc5(unsigned int flags);	// as in CPhysForce (transplant); VC6 has no covariant returns
	void sub_10004110();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc420();	// "CNPC_VAndreiBlood::NPCInit": scope trace, the CNPC_VVampireBoss version, then copies the global vector at 0x1070d1b0 to +0x66c0
	void sub_103c5840();	// CNPC_VVampireBoss::vfunc420, called directly
	void sub_1035e5f0();	// "CNPC_VAndreiBlood::FacePlayerAdvance": scope trace (no entity name), when the entity behind the handle at +0x628c resolves, hands slot 217 of it (with the global at 0x104a6f80) to the object at +0x5d44 (sub_102e20b0, stub 0x10007248)
	virtual int vfunc438();	// slot 438 "CNPC_VAndreiBlood::SelectSchedule": scope trace (no entity name), sets +0x1b2c = 4, then schedule 0x15b without the byte at +0x66cc, 0x15e with the byte at +0x66cd, 0x15d / 0x15c (by sub_1035e920) while the byte at +0x66d4 is clear and the count at +0x66d8 is below +0x66dc, else 0x15a
	bool sub_1035e920();	// stub 0x1000eba6
};
