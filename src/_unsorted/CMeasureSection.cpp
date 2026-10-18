// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10247710 size=0x1e
#include "CMeasureSection.h"

// TARGET: CMeasureSection::vfunc0
CMeasureSection *CMeasureSection::vfunc0(unsigned int flags)
{
	sub_1000881e();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
