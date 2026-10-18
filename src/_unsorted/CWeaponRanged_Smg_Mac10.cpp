// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1023a440 size=0x1e
#include "CWeaponRanged_Smg_Mac10.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Smg_Mac10::vfunc5
CWeaponRanged_Smg_Mac10 *CWeaponRanged_Smg_Mac10::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
