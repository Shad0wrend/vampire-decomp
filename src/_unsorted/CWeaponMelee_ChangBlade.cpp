// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e94b0 size=0x6
#include "CWeaponMelee_ChangBlade.h"
namespace lifted {
extern char g_10940fb0;
}
int CWeaponMelee_ChangBlade::vfunc80()
{
    return (int)&lifted::g_10940fb0;
}
// END FUNCTION

// FUNCTION: 0x103e94d0 size=0x3
#include "CWeaponMelee_ChangBlade.h"
int CWeaponMelee_ChangBlade::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e9680 size=0x6
#include "CWeaponMelee_ChangBlade.h"
namespace lifted {
extern char g_10675b40;
}
int CWeaponMelee_ChangBlade::vfunc362()
{
    return (int)&lifted::g_10675b40;
}
// END FUNCTION

// FUNCTION: 0x103e96a0 size=0x6
#include "CWeaponMelee_ChangBlade.h"
int CWeaponMelee_ChangBlade::vfunc363()
{
    return 0x1bc;
}
// END FUNCTION

// FUNCTION: 0x103e9730 size=0x11
#include "CWeaponMelee_ChangBlade.h"

// TARGET: CWeaponMelee_ChangBlade::vfunc103
void CWeaponMelee_ChangBlade::vfunc103()
{
	sub_100047be();
	m_b871 = 1;
}
// END FUNCTION

// FUNCTION: 0x103e9760 size=0x6
#include "CWeaponMelee_ChangBlade.h"
int CWeaponMelee_ChangBlade::vfunc373()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ecf30 size=0x1e
#include "CWeaponMelee_ChangBlade.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_ChangBlade::vfunc5
CWeaponMelee_ChangBlade *CWeaponMelee_ChangBlade::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
