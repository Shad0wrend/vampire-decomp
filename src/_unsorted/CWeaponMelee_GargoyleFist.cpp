// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103eafd0 size=0x3
#include "CWeaponMelee_GargoyleFist.h"
int CWeaponMelee_GargoyleFist::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103eb230 size=0x4
#include "CWeaponMelee_GargoyleFist.h"
int CWeaponMelee_GargoyleFist::vfunc373()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x103ecf90 size=0x1e
#include "CWeaponMelee_GargoyleFist.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_GargoyleFist::vfunc5
CWeaponMelee_GargoyleFist *CWeaponMelee_GargoyleFist::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
