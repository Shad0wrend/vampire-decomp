// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f1410 size=0x1e
#include "CWeaponThrown_Chang_Ghost.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponThrown_Chang_Ghost::vfunc5
CWeaponThrown_Chang_Ghost *CWeaponThrown_Chang_Ghost::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
