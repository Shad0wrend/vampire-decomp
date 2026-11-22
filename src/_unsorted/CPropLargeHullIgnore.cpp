// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101945c0 size=0x1e
#include "CPropLargeHullIgnore.h"

void sub_100aa7b0(void *p);

// TARGET: CPropLargeHullIgnore::vfunc5
CBaseEntity *CPropLargeHullIgnore::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
