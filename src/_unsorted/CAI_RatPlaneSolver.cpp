// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ad180 size=0x1e
#include "CAI_RatPlaneSolver.h"

// TARGET: CAI_RatPlaneSolver::vfunc1
CAI_RatPlaneSolver *CAI_RatPlaneSolver::vfunc1(unsigned int flags)
{
	sub_100011ef();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
