// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f5140 size=0x3
#include "CWeaponUnarmed.h"
int CWeaponUnarmed::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f5430 size=0x1e
#include "CWeaponUnarmed.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponUnarmed::vfunc5
CWeaponUnarmed *CWeaponUnarmed::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
