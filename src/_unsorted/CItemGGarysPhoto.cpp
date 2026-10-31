// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x104061b0 size=0x6
#include "CItemGGarysPhoto.h"
namespace lifted {
extern char g_109473d8;
}
int CItemGGarysPhoto::vfunc80()
{
    return (int)&lifted::g_109473d8;
}
// END FUNCTION

// FUNCTION: 0x104061d0 size=0x3
#include "CItemGGarysPhoto.h"
int CItemGGarysPhoto::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040abd0 size=0x1e
#include "CItemGGarysPhoto.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGGarysPhoto::vfunc5
CItemGGarysPhoto *CItemGGarysPhoto::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
