// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e4560 size=0x3
#include "CWeaponMelee_BushHook.h"
int CWeaponMelee_BushHook::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ecb70 size=0x1e
#include "CWeaponMelee_BushHook.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_BushHook::vfunc5
CWeaponMelee_BushHook *CWeaponMelee_BushHook::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
