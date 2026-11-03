// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e8470 size=0x6
#include "CWeaponMelee_WerewolfAttacks.h"
namespace lifted {
extern char g_10941c20;
}
int CWeaponMelee_WerewolfAttacks::vfunc80()
{
    return (int)&lifted::g_10941c20;
}
// END FUNCTION

// FUNCTION: 0x103e8490 size=0x3
#include "CWeaponMelee_WerewolfAttacks.h"
int CWeaponMelee_WerewolfAttacks::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e8640 size=0x6
#include "CWeaponMelee_WerewolfAttacks.h"
namespace lifted {
extern char g_106745c0;
}
int CWeaponMelee_WerewolfAttacks::vfunc362()
{
    return (int)&lifted::g_106745c0;
}
// END FUNCTION

// FUNCTION: 0x103e8660 size=0x6
#include "CWeaponMelee_WerewolfAttacks.h"
int CWeaponMelee_WerewolfAttacks::vfunc363()
{
    return 0x71;
}
// END FUNCTION

// FUNCTION: 0x103e86f0 size=0x11
#include "CWeaponMelee_WerewolfAttacks.h"

// TARGET: CWeaponMelee_WerewolfAttacks::vfunc103
void CWeaponMelee_WerewolfAttacks::vfunc103()
{
	sub_100047be();
	m_b871 = 1;
}
// END FUNCTION

// FUNCTION: 0x103e8720 size=0x6
#include "CWeaponMelee_WerewolfAttacks.h"
int CWeaponMelee_WerewolfAttacks::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecea0 size=0x1e
#include "CWeaponMelee_WerewolfAttacks.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_WerewolfAttacks::vfunc5
CWeaponMelee_WerewolfAttacks *CWeaponMelee_WerewolfAttacks::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
