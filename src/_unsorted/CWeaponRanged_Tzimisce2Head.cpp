// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102372f0 size=0x6
#include "CWeaponRanged_Tzimisce2Head.h"
namespace lifted {
extern char g_1075273c;
}
int CWeaponRanged_Tzimisce2Head::vfunc80()
{
    return (int)&lifted::g_1075273c;
}
// END FUNCTION

// FUNCTION: 0x10237310 size=0x3
#include "CWeaponRanged_Tzimisce2Head.h"
int CWeaponRanged_Tzimisce2Head::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1023a560 size=0x1e
#include "CWeaponRanged_Tzimisce2Head.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Tzimisce2Head::vfunc5
CWeaponRanged_Tzimisce2Head *CWeaponRanged_Tzimisce2Head::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
