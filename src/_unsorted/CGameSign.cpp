// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10212620 size=0x1e
#include "CGameSign.h"

void sub_100aa7b0(void *p);

// TARGET: CGameSign::vfunc5
CGameSign *CGameSign::vfunc5(unsigned int flags)
{
	sub_1000726b();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
