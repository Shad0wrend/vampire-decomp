// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e6aa0 size=0x6
#include "CWeaponMelee_Sheriff_Sword.h"
namespace lifted {
extern char g_10940d20;
}
void *CWeaponMelee_Sheriff_Sword::vfunc80()
{
    return (void *)((int)&lifted::g_10940d20);
}
// END FUNCTION

// FUNCTION: 0x103e6ac0 size=0x3
#include "CWeaponMelee_Sheriff_Sword.h"
int CWeaponMelee_Sheriff_Sword::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e6c70 size=0x6
#include "CWeaponMelee_Sheriff_Sword.h"
namespace lifted {
extern char g_10670110;
}
CWeaponActivityRecord *CWeaponMelee_Sheriff_Sword::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_10670110);
}
// END FUNCTION

// FUNCTION: 0x103e6c90 size=0x6
#include "CWeaponMelee_Sheriff_Sword.h"
int CWeaponMelee_Sheriff_Sword::vfunc363()
{
    return 0x6f;
}
// END FUNCTION

// FUNCTION: 0x103ecd80 size=0x1e
#include "CWeaponMelee_Sheriff_Sword.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Sheriff_Sword::vfunc5
CBaseCombatWeapon *CWeaponMelee_Sheriff_Sword::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
