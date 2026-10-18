// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ecb40 size=0x1e
#include "CWeaponMelee_BaseballBat.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_BaseballBat::vfunc5
CWeaponMelee_BaseballBat *CWeaponMelee_BaseballBat::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
