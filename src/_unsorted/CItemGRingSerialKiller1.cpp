// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x104069c0 size=0x6
#include "CItemGRingSerialKiller1.h"
namespace lifted {
extern char g_10945cd0;
}
int CItemGRingSerialKiller1::vfunc80()
{
    return (int)&lifted::g_10945cd0;
}
// END FUNCTION

// FUNCTION: 0x104069e0 size=0x3
#include "CItemGRingSerialKiller1.h"
int CItemGRingSerialKiller1::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040ac60 size=0x1e
#include "CItemGRingSerialKiller1.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGRingSerialKiller1::vfunc5
CItemGRingSerialKiller1 *CItemGRingSerialKiller1::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
