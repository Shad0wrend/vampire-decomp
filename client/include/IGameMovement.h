// IGameMovement: abstract interface (RTTI .?AVIGameMovement@@, vtable 0x104628f8, 5 slots).
// Slot 0 is the scalar deleting destructor (0x1011e220, the real body behind the stub 0x100021b2);
// slots 1..4 are pure, declared with the signatures of CGameMovement's overrides (see CGameMovement.h).
#pragma once

class IGameMovement
{
public:
	virtual ~IGameMovement() {}	// slot 0, scalar deleting destructor
	virtual void vfunc1(void *pMove, void *pPlayer) = 0;	// ProcessMovement
	virtual float *vfunc2(char flag, int unused) = 0;
	virtual float *slot3(char bDucked, char b1edc) = 0;
	virtual float *slot4(int which, char flag) = 0;
};
