// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10056b70 size=0x1e
#include "CDynamicLight.h"

void sub_100aa7b0(void *p);

// TARGET: CDynamicLight::vfunc5
CDynamicLight *CDynamicLight::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
