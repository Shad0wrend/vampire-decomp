// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e8110 size=0x6
#include "CWeaponMelee_Baton.h"
namespace lifted {
extern char g_10940f08;
}
void *CWeaponMelee_Baton::vfunc80()
{
    return (void *)((int)&lifted::g_10940f08);
}
// END FUNCTION

// FUNCTION: 0x103e8130 size=0x3
#include "CWeaponMelee_Baton.h"
int CWeaponMelee_Baton::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e82e0 size=0x6
#include "CWeaponMelee_Baton.h"
namespace lifted {
extern char g_10673b48;
}
CWeaponActivityRecord *CWeaponMelee_Baton::vfunc362()
{
    return (CWeaponActivityRecord *)((int)&lifted::g_10673b48);
}
// END FUNCTION

// FUNCTION: 0x103e8300 size=0x6
#include "CWeaponMelee_Baton.h"
int CWeaponMelee_Baton::vfunc363()
{
    return 0xde;
}
// END FUNCTION

// FUNCTION: 0x103e8390 size=0xb
#include "CWeaponMelee_Baton.h"
namespace lifted {
int sub_100048fe();
}
unsigned int CWeaponMelee_Baton::vfunc360()
{
    return (unsigned int)((lifted::sub_100048fe()) & -1073741825);
}
// END FUNCTION

// FUNCTION: 0x103ece70 size=0x1e
#include "CWeaponMelee_Baton.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Baton::vfunc5
CBaseCombatWeapon *CWeaponMelee_Baton::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
