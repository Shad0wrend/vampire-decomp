// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f41f0 size=0x1e
#include "CWeaponIArmor_Hvy_Cloth.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIArmor_Hvy_Cloth::vfunc5
CWeaponIArmor_Hvy_Cloth *CWeaponIArmor_Hvy_Cloth::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
