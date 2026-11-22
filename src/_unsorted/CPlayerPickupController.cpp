// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10411b50 size=0x2b
#include "CPlayerPickupController.h"

struct CGargoyleMemberUnit {
	void sub_10011a77();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CPlayerPickupController::vfunc5
CBaseEntity *CPlayerPickupController::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x450))->sub_10011a77();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
