// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f3c70 size=0x6
#include "CWeaponIArmor_Body_Armor.h"
namespace lifted {
extern char g_10943238;
}
void *CWeaponIArmor_Body_Armor::vfunc80()
{
    return (void *)((int)&lifted::g_10943238);
}
// END FUNCTION

// FUNCTION: 0x103f3c90 size=0x3
#include "CWeaponIArmor_Body_Armor.h"
int CWeaponIArmor_Body_Armor::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f4280 size=0x1e
#include "CWeaponIArmor_Body_Armor.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponIArmor_Body_Armor::vfunc5
CBaseCombatWeapon *CWeaponIArmor_Body_Armor::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
