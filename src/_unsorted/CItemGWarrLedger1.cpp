// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10404420 size=0x6
#include "CItemGWarrLedger1.h"
namespace lifted {
extern char g_10946510;
}
int CItemGWarrLedger1::vfunc80()
{
    return (int)&lifted::g_10946510;
}
// END FUNCTION

// FUNCTION: 0x10404440 size=0x3
#include "CItemGWarrLedger1.h"
int CItemGWarrLedger1::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a9c0 size=0x1e
#include "CItemGWarrLedger1.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGWarrLedger1::vfunc5
CItemGWarrLedger1 *CItemGWarrLedger1::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
