// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10405460 size=0x3
#include "CItemGIdolCrane.h"
int CItemGIdolCrane::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040aae0 size=0x1e
#include "CItemGIdolCrane.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGIdolCrane::vfunc5
CItemGIdolCrane *CItemGIdolCrane::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
