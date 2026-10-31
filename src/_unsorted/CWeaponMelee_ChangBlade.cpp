// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e94d0 size=0x3
#include "CWeaponMelee_ChangBlade.h"
int CWeaponMelee_ChangBlade::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ecf30 size=0x1e
#include "CWeaponMelee_ChangBlade.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_ChangBlade::vfunc5
CWeaponMelee_ChangBlade *CWeaponMelee_ChangBlade::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
