// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e9b40 size=0x1e
#include "CWeaponMelee_TzimisceMelee.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee::vfunc5
CWeaponMelee *CWeaponMelee::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103eac30 size=0x19
#include "CWeaponMelee_TzimisceMelee.h"

void CWeaponMelee::vfunc367(int a, int b, int c)
{
	sub_103ea7e0(0x4b, a, b, c);
}
// END FUNCTION
