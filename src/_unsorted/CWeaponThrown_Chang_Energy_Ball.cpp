// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f13e0 size=0x1e
#include "CWeaponThrown_Chang_Energy_Ball.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponThrown_Chang_Energy_Ball::vfunc5
CWeaponThrown_Chang_Energy_Ball *CWeaponThrown_Chang_Energy_Ball::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
