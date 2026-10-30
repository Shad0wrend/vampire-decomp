// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f3330 size=0x6
#include "CWeaponIArmor_Hvy_Cloth.h"
namespace lifted {
extern char g_10943294;
}
int CWeaponIArmor_Hvy_Cloth::vfunc80()
{
    return (int)&lifted::g_10943294;
}
// END FUNCTION

// FUNCTION: 0x103f3350 size=0x3
#include "CWeaponIArmor_Hvy_Cloth.h"
int CWeaponIArmor_Hvy_Cloth::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f3500 size=0x6
#include "CWeaponIArmor_Hvy_Cloth.h"
namespace lifted {
extern char g_1067ea48;
}
int CWeaponIArmor_Hvy_Cloth::vfunc362()
{
    return (int)&lifted::g_1067ea48;
}
// END FUNCTION

// FUNCTION: 0x103f41f0 size=0x1e
#include "CWeaponIArmor_Hvy_Cloth.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIArmor_Hvy_Cloth::vfunc5
CWeaponIArmor_Hvy_Cloth *CWeaponIArmor_Hvy_Cloth::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
