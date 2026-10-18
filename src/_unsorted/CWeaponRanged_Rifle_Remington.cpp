// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102360e0 size=0x1e
#include "CWeaponRanged_Rifle_Remington.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Rifle_Remington::vfunc5
CWeaponRanged_Rifle_Remington *CWeaponRanged_Rifle_Remington::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
