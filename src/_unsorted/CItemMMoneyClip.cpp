// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f5bf0 size=0x6
#include "CItemMMoneyClip.h"
namespace lifted {
extern char g_109483e8;
}
int CItemMMoneyClip::vfunc80()
{
    return (int)&lifted::g_109483e8;
}
// END FUNCTION

// FUNCTION: 0x103f5c10 size=0x3
#include "CItemMMoneyClip.h"
int CItemMMoneyClip::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10409b50 size=0x1e
#include "CItemMMoneyClip.h"

void sub_100aa7b0(void *p);

// TARGET: CItemMMoneyClip::vfunc5
CItemMMoneyClip *CItemMMoneyClip::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
