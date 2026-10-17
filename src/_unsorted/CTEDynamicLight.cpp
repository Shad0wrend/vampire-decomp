// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10060bb0 size=0x1e
#include "CTEDynamicLight.h"

// TARGET: CTEDynamicLight::vfunc2
CTEDynamicLight *CTEDynamicLight::vfunc2(unsigned int flags)
{
	sub_10005f51();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
