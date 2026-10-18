// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018a5e0 size=0x8
// TARGET: CSkyCamera::vfunc103
void CSkyCamera::vfunc103()
{
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1018bef0 size=0x1e
#include "CSkyCamera.h"

void sub_100aa7b0(void *p);

// TARGET: CSkyCamera::vfunc5
CSkyCamera *CSkyCamera::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
