// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10067660 size=0x1e
#include "CTESparks.h"

// TARGET: CTESparks::vfunc2
CTESparks *CTESparks::vfunc2(unsigned int flags)
{
	sub_1000dc10();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
