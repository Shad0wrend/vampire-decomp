// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103eea80 size=0x8
void CWeaponThrown_Grenade_Frag::vfunc266()
{
	m_bFlag918 = true;
}
// END FUNCTION

// FUNCTION: 0x103f13b0 size=0x1e
#include "CWeaponThrown_Grenade_Frag.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponThrown_Grenade_Frag::vfunc5
CWeaponThrown_Grenade_Frag *CWeaponThrown_Grenade_Frag::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
