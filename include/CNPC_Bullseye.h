// CNPC_Bullseye: declared by pcdecomp transplant for 0x10356740 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_Bullseye : public CBaseEntity
{
public:
	CNPC_Bullseye *vfunc5(unsigned int flags);
	void sub_10006c26();
	CNPC_Bullseye *sub_103566a0();	// as in CKeepUpright (transplant)
	void vfunc141(void *pInfo, int a, int b);	// "DispatchTraceAttack" override: filters by the attacker's owner, then forwards
	void sub_10015b13(void *pInfo, int a, int b);	// CAI_BaseNPC::vfunc141 (jump stub)
	void vfunc144(int a);	// slot 144 override: CAI_BaseNPC::vfunc144, SetMoveType(0, 0), AddSolidFlags(4) (inlined scope trace), then the worker sub_101cf390(this, zero vector, zero vector)
	void sub_10006f32(int a);	// CAI_BaseNPC::vfunc144 (stub 0x10006f32), called directly
};
