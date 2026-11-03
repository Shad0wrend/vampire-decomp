// IGameMovement: abstract interface (RTTI .?AVIGameMovement@@, vtable 0x104628f8, 5 slots).
// Slot 0 is the scalar deleting destructor (0x1011e220, the real body behind the stub 0x100021b2);
// slots 1..4 are pure. The concrete implementation is CGameMovement (see CGameMovement.h).
#pragma once

class IGameMovement
{
public:
	virtual ~IGameMovement() {}	// slot 0, scalar deleting destructor
	virtual void vfunc1() = 0;
	virtual void vfunc2() = 0;
	virtual void vfunc3() = 0;
	virtual void vfunc4() = 0;
};
