// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102466d0 size=0x1e
#include "SendProp.h"

// TARGET: SendProp::vfunc0
SendProp *SendProp::vfunc0(unsigned int flags)
{
	sub_1000648d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
