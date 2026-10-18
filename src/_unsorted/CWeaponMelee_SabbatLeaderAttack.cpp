// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103eced0 size=0x1e
#include "CWeaponMelee_SabbatLeaderAttack.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_SabbatLeaderAttack::vfunc5
CWeaponMelee_SabbatLeaderAttack *CWeaponMelee_SabbatLeaderAttack::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
