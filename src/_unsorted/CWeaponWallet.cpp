// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f61f0 size=0x6
#include "CWeaponWallet.h"
namespace lifted {
extern char g_10945b28;
}
int CWeaponWallet::vfunc80()
{
    return (int)&lifted::g_10945b28;
}
// END FUNCTION

// FUNCTION: 0x103f6210 size=0x3
#include "CWeaponWallet.h"
int CWeaponWallet::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f63c0 size=0x6
#include "CWeaponWallet.h"
namespace lifted {
extern char g_1067f268;
}
int CWeaponWallet::vfunc362()
{
    return (int)&lifted::g_1067f268;
}
// END FUNCTION

// FUNCTION: 0x103f63e0 size=0x6
#include "CWeaponWallet.h"
int CWeaponWallet::vfunc363()
{
    return 0xa;
}
// END FUNCTION

// FUNCTION: 0x10409bb0 size=0x1e
#include "CWeaponWallet.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponWallet::vfunc5
CWeaponWallet *CWeaponWallet::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
