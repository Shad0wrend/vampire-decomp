// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10235da0 size=0x6
#include "CWeaponRanged_Rifle_Remington.h"
namespace lifted {
extern char g_10752720;
}
int CWeaponRanged_Rifle_Remington::vfunc80()
{
    return (int)&lifted::g_10752720;
}
// END FUNCTION

// FUNCTION: 0x10235dc0 size=0x3
#include "CWeaponRanged_Rifle_Remington.h"
int CWeaponRanged_Rifle_Remington::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10235f70 size=0x6
extern char g_105bb898[];

// TARGET: sub_10235f70
void *sub_10235f70()
{
	return g_105bb898;
}
// END FUNCTION

// FUNCTION: 0x10235f90 size=0x6
int sub_10235f90(void)
{
    return 0xf5;
}
// END FUNCTION

// FUNCTION: 0x102360e0 size=0x1e
#include "CWeaponRanged_Rifle_Remington.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged_Rifle_Remington::vfunc5
CWeaponRanged_Rifle_Remington *CWeaponRanged_Rifle_Remington::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10236110 size=0x10
#include "CWeaponRanged_Rifle_Remington.h"

void __fastcall sub_1001245e(void *pThis);
void __fastcall sub_10253ea0(void *pThis);

// TARGET: CWeaponRanged_Rifle_Remington::vfunc319
void CWeaponRanged_Rifle_Remington::vfunc319()
{
	sub_1001245e(this);
	sub_10253ea0(this);
}
// END FUNCTION
