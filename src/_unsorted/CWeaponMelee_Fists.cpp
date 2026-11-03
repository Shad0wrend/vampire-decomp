// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e55e0 size=0x6
#include "CWeaponMelee_Fists.h"
namespace lifted {
extern char g_10941f20;
}
int CWeaponMelee_Fists::vfunc80()
{
    return (int)&lifted::g_10941f20;
}
// END FUNCTION

// FUNCTION: 0x103e5600 size=0x3
#include "CWeaponMelee_Fists.h"
int CWeaponMelee_Fists::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e57b0 size=0x6
#include "CWeaponMelee_Fists.h"
namespace lifted {
extern char g_1066b248;
}
int CWeaponMelee_Fists::vfunc362()
{
    return (int)&lifted::g_1066b248;
}
// END FUNCTION

// FUNCTION: 0x103e57d0 size=0x6
#include "CWeaponMelee_Fists.h"
int CWeaponMelee_Fists::vfunc363()
{
    return 0xe1;
}
// END FUNCTION

// FUNCTION: 0x103e5860 size=0x11
#include "CWeaponMelee_Fists.h"

// TARGET: CWeaponMelee_Fists::vfunc103
void CWeaponMelee_Fists::vfunc103()
{
	sub_100047be();
	m_b871 = 0;
}
// END FUNCTION

// FUNCTION: 0x103e5890 size=0x6
#include "CWeaponMelee_Fists.h"
int CWeaponMelee_Fists::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecc60 size=0x1e
#include "CWeaponMelee_Fists.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Fists::vfunc5
CWeaponMelee_Fists *CWeaponMelee_Fists::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
