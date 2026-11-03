// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e97f0 size=0x6
#include "CWeaponMelee_AVampBlade.h"
namespace lifted {
extern char g_10942578;
}
int CWeaponMelee_AVampBlade::vfunc80()
{
    return (int)&lifted::g_10942578;
}
// END FUNCTION

// FUNCTION: 0x103e9810 size=0x3
#include "CWeaponMelee_AVampBlade.h"
int CWeaponMelee_AVampBlade::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e99c0 size=0x6
#include "CWeaponMelee_AVampBlade.h"
namespace lifted {
extern char g_10677020;
}
int CWeaponMelee_AVampBlade::vfunc362()
{
    return (int)&lifted::g_10677020;
}
// END FUNCTION

// FUNCTION: 0x103e99e0 size=0x6
#include "CWeaponMelee_AVampBlade.h"
int CWeaponMelee_AVampBlade::vfunc363()
{
    return 0x14d;
}
// END FUNCTION

// FUNCTION: 0x103e9a70 size=0x11
#include "CWeaponMelee_AVampBlade.h"

// TARGET: CWeaponMelee_AVampBlade::vfunc103
void CWeaponMelee_AVampBlade::vfunc103()
{
	sub_100047be();
	m_b871 = 1;
}
// END FUNCTION

// FUNCTION: 0x103e9aa0 size=0x6
#include "CWeaponMelee_AVampBlade.h"
int CWeaponMelee_AVampBlade::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecf60 size=0x1e
#include "CWeaponMelee_AVampBlade.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_AVampBlade::vfunc5
CWeaponMelee_AVampBlade *CWeaponMelee_AVampBlade::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
