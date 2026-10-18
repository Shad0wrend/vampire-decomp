// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fd560 size=0x1e
#include "CInspectionBrush.h"

void sub_100aa7b0(void *p);

// TARGET: CInspectionBrush::vfunc5
CInspectionBrush *CInspectionBrush::vfunc5(unsigned int flags)
{
	sub_10011ac7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
