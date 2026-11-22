// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10262480 size=0x1e
#include "CAI_HumanoidNavigator.h"

// TARGET: CAI_HumanoidNavigator::vfunc0
CAI_HumanoidNavigator *CAI_HumanoidNavigator::vfunc0(unsigned int flags)
{
	sub_10011c98();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
