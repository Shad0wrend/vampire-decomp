// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e7d80 size=0x6
#include "CWeaponMelee_TireIron.h"
namespace lifted {
extern char g_10940f24;
}
int CWeaponMelee_TireIron::vfunc80()
{
    return (int)&lifted::g_10940f24;
}
// END FUNCTION

// FUNCTION: 0x103e7da0 size=0x3
#include "CWeaponMelee_TireIron.h"
int CWeaponMelee_TireIron::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e7f50 size=0x6
#include "CWeaponMelee_TireIron.h"
namespace lifted {
extern char g_106730d0;
}
int CWeaponMelee_TireIron::vfunc362()
{
    return (int)&lifted::g_106730d0;
}
// END FUNCTION

// FUNCTION: 0x103e7f70 size=0x6
#include "CWeaponMelee_TireIron.h"
int CWeaponMelee_TireIron::vfunc363()
{
    return 0xde;
}
// END FUNCTION

// FUNCTION: 0x103e8000 size=0x11
#include "CWeaponMelee_TireIron.h"

// TARGET: CWeaponMelee_TireIron::vfunc103
void CWeaponMelee_TireIron::vfunc103()
{
	sub_100047be();
	m_b871 = 0;
}
// END FUNCTION

// FUNCTION: 0x103e8030 size=0xb
#include "CWeaponMelee_TireIron.h"
namespace lifted {
int sub_100048fe();
}
int CWeaponMelee_TireIron::vfunc360()
{
    return (lifted::sub_100048fe()) & -1073741825;
}
// END FUNCTION

// FUNCTION: 0x103ece40 size=0x1e
#include "CWeaponMelee_TireIron.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_TireIron::vfunc5
CWeaponMelee_TireIron *CWeaponMelee_TireIron::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
