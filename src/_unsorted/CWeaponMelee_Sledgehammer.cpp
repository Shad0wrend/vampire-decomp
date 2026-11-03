// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e6d90 size=0x6
#include "CWeaponMelee_Sledgehammer.h"
namespace lifted {
extern char g_109424b4;
}
int CWeaponMelee_Sledgehammer::vfunc80()
{
    return (int)&lifted::g_109424b4;
}
// END FUNCTION

// FUNCTION: 0x103e6db0 size=0x3
#include "CWeaponMelee_Sledgehammer.h"
int CWeaponMelee_Sledgehammer::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e6f60 size=0x6
#include "CWeaponMelee_Sledgehammer.h"
namespace lifted {
extern char g_10670658;
}
int CWeaponMelee_Sledgehammer::vfunc362()
{
    return (int)&lifted::g_10670658;
}
// END FUNCTION

// FUNCTION: 0x103e6f80 size=0x6
#include "CWeaponMelee_Sledgehammer.h"
int CWeaponMelee_Sledgehammer::vfunc363()
{
    return 0x14d;
}
// END FUNCTION

// FUNCTION: 0x103e7010 size=0x11
#include "CWeaponMelee_Sledgehammer.h"

// TARGET: CWeaponMelee_Sledgehammer::vfunc103
void CWeaponMelee_Sledgehammer::vfunc103()
{
	sub_100047be();
	m_b871 = 0;
}
// END FUNCTION

// FUNCTION: 0x103ecdb0 size=0x1e
#include "CWeaponMelee_Sledgehammer.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Sledgehammer::vfunc5
CWeaponMelee_Sledgehammer *CWeaponMelee_Sledgehammer::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
