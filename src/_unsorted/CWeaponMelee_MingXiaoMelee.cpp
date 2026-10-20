// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ec320 size=0x1e
#include "CWeaponMelee_MingXiaoMelee.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_MingXiaoMelee::vfunc5
CBaseCombatWeapon *CWeaponMelee_MingXiaoMelee::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103ec460 size=0x18
#include "CWeaponMelee_MingXiaoMelee.h"
void CWeaponMelee_MingXiaoMelee::vfunc370(CWeaponMeleeEvent *pEvent, int b)
{
	if (pEvent->m_type != 0xbbb)
		CWeaponMelee::sub_103ea5b0(pEvent, b);
}
// END FUNCTION
