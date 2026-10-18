// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10262400 size=0x1e
#include "CAI_HumanoidMotor.h"

// TARGET: CAI_HumanoidMotor::vfunc0
CAI_HumanoidMotor *CAI_HumanoidMotor::vfunc0(unsigned int flags)
{
	sub_10014b32();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
