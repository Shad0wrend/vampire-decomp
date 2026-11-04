// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10236c70 size=0x6
#include "CWeaponRanged_Smg_Uzi.h"
namespace lifted {
extern char g_107522f8;
}
int CWeaponRanged_Smg_Uzi::vfunc80()
{
    return (int)&lifted::g_107522f8;
}
// END FUNCTION

// FUNCTION: 0x10236c90 size=0x3
#include "CWeaponRanged_Smg_Uzi.h"
int CWeaponRanged_Smg_Uzi::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10236e40 size=0x6
#include "CWeaponRanged_Smg_Uzi.h"
namespace lifted {
extern char g_105be6d8;
}
int CWeaponRanged_Smg_Uzi::vfunc362()
{
    return (int)&lifted::g_105be6d8;
}
// END FUNCTION

// FUNCTION: 0x10236e60 size=0x6
#include "CWeaponRanged_Smg_Uzi.h"
int CWeaponRanged_Smg_Uzi::vfunc363()
{
    return 0x8a;
}
// END FUNCTION

// FUNCTION: 0x1023a500 size=0x1e
#include "CWeaponRanged_Smg_Uzi.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Smg_Uzi::vfunc5
CWeaponRanged *CWeaponRanged_Smg_Uzi::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
