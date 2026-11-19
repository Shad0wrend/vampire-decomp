// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f2ff0 size=0x6
#include "CWeaponIArmor_Lt_Cloth.h"
namespace lifted {
extern char g_109434a0;
}
int CWeaponIArmor_Lt_Cloth::vfunc80()
{
    return (int)&lifted::g_109434a0;
}
// END FUNCTION

// FUNCTION: 0x103f3010 size=0x3
#include "CWeaponIArmor_Lt_Cloth.h"
int CWeaponIArmor_Lt_Cloth::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f31c0 size=0x6
#include "CWeaponIArmor_Lt_Cloth.h"
namespace lifted {
extern char g_1067ea2c;
}
CWeaponActivityRecord *CWeaponIArmor_Lt_Cloth::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_1067ea2c);
}
// END FUNCTION

// FUNCTION: 0x103f31e0 size=0x6
#include "CWeaponIArmor_Lt_Cloth.h"
int CWeaponIArmor_Lt_Cloth::vfunc363()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103f41c0 size=0x1e
#include "CWeaponIArmor_Lt_Cloth.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIArmor_Lt_Cloth::vfunc5
CBaseEntity  *CWeaponIArmor_Lt_Cloth::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
