// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ece40 size=0x1e
#include "CWeaponMelee_TireIron.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_TireIron::vfunc5
CWeaponMelee_TireIron *CWeaponMelee_TireIron::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
