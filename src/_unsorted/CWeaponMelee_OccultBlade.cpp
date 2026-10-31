// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e6780 size=0x3
#include "CWeaponMelee_OccultBlade.h"
int CWeaponMelee_OccultBlade::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ecd50 size=0x1e
#include "CWeaponMelee_OccultBlade.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_OccultBlade::vfunc5
CWeaponMelee_OccultBlade *CWeaponMelee_OccultBlade::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
