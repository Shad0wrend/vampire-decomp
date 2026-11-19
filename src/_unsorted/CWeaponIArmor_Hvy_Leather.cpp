// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f3970 size=0x6
#include "CWeaponIArmor_Hvy_Leather.h"
namespace lifted {
extern char g_10943488;
}
int CWeaponIArmor_Hvy_Leather::vfunc80()
{
    return (int)&lifted::g_10943488;
}
// END FUNCTION

// FUNCTION: 0x103f3990 size=0x3
#include "CWeaponIArmor_Hvy_Leather.h"
int CWeaponIArmor_Hvy_Leather::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f4250 size=0x1e
#include "CWeaponIArmor_Hvy_Leather.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIArmor_Hvy_Leather::vfunc5
CBaseEntity  *CWeaponIArmor_Hvy_Leather::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
