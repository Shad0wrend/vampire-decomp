// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10209f90 size=0x1e
#include "CItemContainerOneItemFiltered.h"

void sub_100aa7b0(void *p);

// TARGET: CItemContainerOneItemFiltered::vfunc5
CItemContainerOneItemFiltered *CItemContainerOneItemFiltered::vfunc5(unsigned int flags)
{
	sub_10005718();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10209fc0 size=0x1b
#include "CItemContainerOneItemFiltered.h"

void CItemContainerOneItemFiltered::vfunc103()
{
	sub_10209350();
	sub_100b3b00();
	m_n158c = 5;
}
// END FUNCTION
