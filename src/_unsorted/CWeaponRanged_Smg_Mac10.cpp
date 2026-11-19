// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10235920 size=0x6
#include "CWeaponRanged_Smg_Mac10.h"
namespace lifted {
extern char g_107524c4;
}
int CWeaponRanged_Smg_Mac10::vfunc80()
{
    return (int)&lifted::g_107524c4;
}
// END FUNCTION

// FUNCTION: 0x10235940 size=0x3
#include "CWeaponRanged_Smg_Mac10.h"
int CWeaponRanged_Smg_Mac10::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10235af0 size=0x6
#include "CWeaponRanged_Smg_Mac10.h"
namespace lifted {
extern char g_105bb210;
}
CWeaponActivityRecord *CWeaponRanged_Smg_Mac10::vfunc362()
{
    return (CWeaponActivityRecord *)&lifted::g_105bb210;
}
// END FUNCTION

// FUNCTION: 0x10235b10 size=0x6
#include "CWeaponRanged_Smg_Mac10.h"
int CWeaponRanged_Smg_Mac10::vfunc363()
{
    return 0x8a;
}
// END FUNCTION

// FUNCTION: 0x1023a440 size=0x1e
#include "CWeaponRanged_Smg_Mac10.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Smg_Mac10::vfunc5
CBaseEntity  *CWeaponRanged_Smg_Mac10::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION
