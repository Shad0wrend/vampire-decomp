// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10406710 size=0x6
#include "CItemGBertramsCD.h"
namespace lifted {
extern char g_10945f00;
}
int CItemGBertramsCD::vfunc80()
{
    return (int)&lifted::g_10945f00;
}
// END FUNCTION

// FUNCTION: 0x10406730 size=0x3
#include "CItemGBertramsCD.h"
int CItemGBertramsCD::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040ac30 size=0x1e
#include "CItemGBertramsCD.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGBertramsCD::vfunc5
CItemGBertramsCD *CItemGBertramsCD::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
