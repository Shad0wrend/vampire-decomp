// CNPC_VGuard1: declared by pcdecomp transplant for 0x1037c6a0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CEntityVSlots;

class CNPC_VGuard1 : public CBaseEntity
{
public:
	CNPC_VGuard1 *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VGuard1 *sub_1037c620();	// as in CKeepUpright (transplant)
	void vfunc463(int a, int b);	// slot 463 override: slot 167()'s object at +0xa8 set -> sub_1037e2d0(); on b == 1 calls slot 66 of sub_1032e7b0()'s object, on b == 2, 3 or 11 slot 67; then CNPC_VHuman::vfunc463(a, b)
	void sub_1037e2d0();	// stub 0x1000b73f, called directly
	CEntityVSlots *sub_1032e7b0();	// stub 0x10007e19, called directly: an entity (0 when none)
};
