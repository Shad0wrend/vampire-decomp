// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ad570 size=0x1e
#include "CAI_RatLocalNavigator.h"

// TARGET: CAI_RatLocalNavigator::vfunc0
CAI_RatLocalNavigator *CAI_RatLocalNavigator::vfunc0(unsigned int flags)
{
	sub_10006988();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
