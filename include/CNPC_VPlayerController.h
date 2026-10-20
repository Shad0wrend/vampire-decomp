// CNPC_VPlayerController: declared by pcdecomp transplant for 0x10376f50 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VPlayerController
{
public:
	CNPC_VPlayerController *vfunc5(unsigned int flags);
	void sub_100123af();
	void vfunc245(int a, int b, int c, int d, int e);	// override: forwards to the base, then to slot 245 of the object at +0xa8 of the owner (slot 97), warning when there is none
	void sub_1000cefa(int a, int b, int c, int d, int e);	// CBaseAnimating::vfunc245 (jump stub)
};
