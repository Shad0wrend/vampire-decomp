// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e6400 size=0x6
#include "CWeaponMelee_Knife.h"
namespace lifted {
extern char g_10941804;
}
void *CWeaponMelee_Knife::vfunc80()
{
    return (void *)((int)&lifted::g_10941804);
}
// END FUNCTION

// FUNCTION: 0x103e6420 size=0x3
#include "CWeaponMelee_Knife.h"
int CWeaponMelee_Knife::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e65d0 size=0x6
#include "CWeaponMelee_Knife.h"
namespace lifted {
extern char g_1066e6e8;
}
CWeaponActivityRecord *CWeaponMelee_Knife::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_1066e6e8);
}
// END FUNCTION

// FUNCTION: 0x103e65f0 size=0x6
#include "CWeaponMelee_Knife.h"
int CWeaponMelee_Knife::vfunc363()
{
    return 0xde;
}
// END FUNCTION

// FUNCTION: 0x103e6680 size=0xb
#include "CWeaponMelee_Knife.h"
namespace lifted {
int sub_100048fe();
}
unsigned int CWeaponMelee_Knife::vfunc360()
{
    return (unsigned int)((lifted::sub_100048fe()) & -1073741825);
}
// END FUNCTION

// FUNCTION: 0x103ecd20 size=0x1e
#include "CWeaponMelee_Knife.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Knife::vfunc5
CBaseCombatWeapon *CWeaponMelee_Knife::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
