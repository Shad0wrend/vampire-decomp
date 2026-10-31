// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10403ec0 size=0x6
#include "CItemGStake.h"
namespace lifted {
extern char g_10945034;
}
int CItemGStake::vfunc80()
{
    return (int)&lifted::g_10945034;
}
// END FUNCTION

// FUNCTION: 0x10403ee0 size=0x3
#include "CItemGStake.h"
int CItemGStake::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a960 size=0x1e
#include "CItemGStake.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGStake::vfunc5
CItemGStake *CItemGStake::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
