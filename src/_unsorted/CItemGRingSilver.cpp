// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103fe360 size=0x6
#include "CItemGRingSilver.h"
namespace lifted {
extern char g_10945db8;
}
int CItemGRingSilver::vfunc80()
{
    return (int)&lifted::g_10945db8;
}
// END FUNCTION

// FUNCTION: 0x103fe380 size=0x3
#include "CItemGRingSilver.h"
int CItemGRingSilver::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a300 size=0x1e
#include "CItemGRingSilver.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGRingSilver::vfunc5
CItemGRingSilver *CItemGRingSilver::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
