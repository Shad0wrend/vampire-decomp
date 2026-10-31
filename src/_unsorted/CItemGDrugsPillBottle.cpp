// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103fdb70 size=0x3
#include "CItemGDrugsPillBottle.h"
int CItemGDrugsPillBottle::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a270 size=0x1e
#include "CItemGDrugsPillBottle.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGDrugsPillBottle::vfunc5
CItemGDrugsPillBottle *CItemGDrugsPillBottle::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
