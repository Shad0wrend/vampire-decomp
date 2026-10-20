// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e8a30 size=0x37
#include "CWeaponMelee_TzimisceMelee.h"
CWeaponMelee_TzimisceMelee::CWeaponMelee_TzimisceMelee()
{
	m_n08b8 = 0;
	m_n08bc = 0;
	m_f08c0 = 108.0f;
	m_f08c4 = 108.0f;
	m_n0910 = 0;
}
// END FUNCTION

// FUNCTION: 0x103e8aa0 size=0x1e
#include "CWeaponMelee_TzimisceMelee.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_TzimisceMelee::vfunc5
CBaseCombatWeapon *CWeaponMelee_TzimisceMelee::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
