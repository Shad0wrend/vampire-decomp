// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e4540 size=0x6
#include "CWeaponMelee_BushHook.h"
namespace lifted {
extern char g_109424fc;
}
int CWeaponMelee_BushHook::vfunc80()
{
    return (int)&lifted::g_109424fc;
}
// END FUNCTION

// FUNCTION: 0x103e4560 size=0x3
#include "CWeaponMelee_BushHook.h"
int CWeaponMelee_BushHook::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e4710 size=0x6
#include "CWeaponMelee_BushHook.h"
namespace lifted {
extern char g_10667858;
}
int CWeaponMelee_BushHook::vfunc362()
{
    return (int)&lifted::g_10667858;
}
// END FUNCTION

// FUNCTION: 0x103e4730 size=0x6
#include "CWeaponMelee_BushHook.h"
int CWeaponMelee_BushHook::vfunc363()
{
    return 0x14d;
}
// END FUNCTION

// FUNCTION: 0x103e47c0 size=0x11
#include "CWeaponMelee_BushHook.h"

// TARGET: CWeaponMelee_BushHook::vfunc103
void CWeaponMelee_BushHook::vfunc103()
{
	sub_100047be();
	m_b871 = 0;
}
// END FUNCTION

// FUNCTION: 0x103ecb70 size=0x1e
#include "CWeaponMelee_BushHook.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_BushHook::vfunc5
CWeaponMelee_BushHook *CWeaponMelee_BushHook::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
