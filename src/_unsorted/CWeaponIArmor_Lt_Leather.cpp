// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f4220 size=0x1e
#include "CWeaponIArmor_Lt_Leather.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIArmor_Lt_Leather::vfunc5
CWeaponIArmor_Lt_Leather *CWeaponIArmor_Lt_Leather::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
