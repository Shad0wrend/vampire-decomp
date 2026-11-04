// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f3670 size=0x6
#include "CWeaponIArmor_Lt_Leather.h"
namespace lifted {
extern char g_10943368;
}
void *CWeaponIArmor_Lt_Leather::vfunc80()
{
    return (void *)((int)&lifted::g_10943368);
}
// END FUNCTION

// FUNCTION: 0x103f3690 size=0x3
#include "CWeaponIArmor_Lt_Leather.h"
int CWeaponIArmor_Lt_Leather::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f4220 size=0x1e
#include "CWeaponIArmor_Lt_Leather.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIArmor_Lt_Leather::vfunc5
CBaseCombatWeapon *CWeaponIArmor_Lt_Leather::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
