// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e5970 size=0x6
#include "CWeaponMelee_ZombieFists.h"
namespace lifted {
extern char g_10941ee8;
}
int CWeaponMelee_ZombieFists::vfunc80()
{
    return (int)&lifted::g_10941ee8;
}
// END FUNCTION

// FUNCTION: 0x103e5990 size=0x3
#include "CWeaponMelee_ZombieFists.h"
int CWeaponMelee_ZombieFists::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e5b40 size=0x6
#include "CWeaponMelee_ZombieFists.h"
namespace lifted {
extern char g_1066bce8;
}
int CWeaponMelee_ZombieFists::vfunc362()
{
    return (int)&lifted::g_1066bce8;
}
// END FUNCTION

// FUNCTION: 0x103e5b60 size=0x6
#include "CWeaponMelee_ZombieFists.h"
int CWeaponMelee_ZombieFists::vfunc363()
{
    return 0xe1;
}
// END FUNCTION

// FUNCTION: 0x103e5bf0 size=0x11
#include "CWeaponMelee_ZombieFists.h"

// TARGET: CWeaponMelee_ZombieFists::vfunc103
void CWeaponMelee_ZombieFists::vfunc103()
{
	sub_100047be();
	m_b871 = 1;
}
// END FUNCTION

// FUNCTION: 0x103e5c20 size=0x6
#include "CWeaponMelee_ZombieFists.h"
int CWeaponMelee_ZombieFists::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecc90 size=0x1e
#include "CWeaponMelee_ZombieFists.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_ZombieFists::vfunc5
CWeaponMelee_ZombieFists *CWeaponMelee_ZombieFists::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
