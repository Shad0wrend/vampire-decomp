// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10403c10 size=0x6
#include "CItemGHattersScreenplay.h"
namespace lifted {
extern char g_1094757c;
}
int CItemGHattersScreenplay::vfunc80()
{
    return (int)&lifted::g_1094757c;
}
// END FUNCTION

// FUNCTION: 0x10403c30 size=0x3
#include "CItemGHattersScreenplay.h"
int CItemGHattersScreenplay::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a930 size=0x1e
#include "CItemGHattersScreenplay.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGHattersScreenplay::vfunc5
CItemGHattersScreenplay *CItemGHattersScreenplay::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
