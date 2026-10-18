// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
