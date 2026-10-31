// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10406460 size=0x6
#include "CItemGGarysTape.h"
namespace lifted {
extern char g_1094392c;
}
int CItemGGarysTape::vfunc80()
{
    return (int)&lifted::g_1094392c;
}
// END FUNCTION

// FUNCTION: 0x10406480 size=0x3
#include "CItemGGarysTape.h"
int CItemGGarysTape::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040ac00 size=0x1e
#include "CItemGGarysTape.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGGarysTape::vfunc5
CItemGGarysTape *CItemGGarysTape::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
