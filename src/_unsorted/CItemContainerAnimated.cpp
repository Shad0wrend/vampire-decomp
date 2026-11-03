// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10209d70 size=0x1e
#include "CItemContainerAnimated.h"

void sub_100aa7b0(void *p);

// TARGET: CItemContainerAnimated::vfunc5
CItemContainerAnimated *CItemContainerAnimated::vfunc5(unsigned int flags)
{
	sub_10005718();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10209df0 size=0xb
#include "CItemContainerAnimated.h"

void CItemContainerAnimated::vfunc406()
{
	sub_10209e30("open");
}
// END FUNCTION

// FUNCTION: 0x10209e10 size=0xb
#include "CItemContainerAnimated.h"

void CItemContainerAnimated::vfunc407()
{
	sub_10209e30("close");
}
// END FUNCTION
