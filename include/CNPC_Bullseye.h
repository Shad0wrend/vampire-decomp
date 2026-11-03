// CNPC_Bullseye: declared by pcdecomp transplant for 0x10356740 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"
#include "datamap.h"

class CNPC_Bullseye : public CBaseEntity
{
public:
	CNPC_Bullseye *vfunc5(unsigned int flags);
	virtual void vfunc103();	// slot 103 (Spawn): precache, size +-16, solid / flags / think setup
	void sub_10006c26();
	CNPC_Bullseye *sub_103566a0();	// as in CKeepUpright (transplant)
	void vfunc141(void *pInfo, int a, int b);	// "DispatchTraceAttack" override: filters by the attacker's owner, then forwards
	void sub_10015b13(void *pInfo, int a, int b);	// CAI_BaseNPC::vfunc141 (jump stub)
	void vfunc144(int a);	// slot 144 override: CAI_BaseNPC::vfunc144, SetMoveType(0, 0), AddSolidFlags(4) (inlined scope trace), then the worker sub_101cf390(this, zero vector, zero vector)
	void sub_10006f32(int a);	// CAI_BaseNPC::vfunc144 (stub 0x10006f32), called directly
	int vfunc142(void *pInfo);	// slot 142 "OnTakeDamage" override (declared as a plain member): unless the spawn flag 0x40000 is set and the attacker's NPC is not targeting this, passes the damage on to the entity of the handle at +0x5f44 (when it resolves) and then to CAI_BaseNPC::vfunc142 with a copy of the info whose damage dword (+0x30) is cleared
	int sub_10265e90(void *pInfo);	// CAI_BaseNPC::vfunc142 (stub 0x1000f943), called directly
	// Destructor body 0x10356770 (stub 0x10006c26, called by vfunc5): vptr 0x104a374c, second vptr 0x104a371c at +0x19b0
	// (CAI_DefMovementSink), ~COutputEvent (sub_100cd2d0) of the outputs at +0x5f60 then +0x5f48 (0x18 bytes each,
	// no longer in CAI_BaseNPC's range), then the tail jump to CAI_BaseNPC's destructor body (sub_1000c9cd -> 0x1027c820).
	// Real base is CAI_BaseNPC (members up to +0x5f44 are its); declared here by offset until that class is modelled.
	COutputEvent &Output5f48() { return *(COutputEvent *)((char *)this + 0x5f48); }
	COutputEvent &Output5f60() { return *(COutputEvent *)((char *)this + 0x5f60); }
	void sub_1000c9cd();	// CAI_BaseNPC destructor body (stub 0x1000c9cd -> 0x1027c820), tail called
public:
    virtual datamap_t * vfunc82();
	char m_pad03e0[0x5f78 - 0x3e0];
};
