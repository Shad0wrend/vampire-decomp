// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102ddb00 size=0x1e
#include "CAI_LocalNavigator.h"

// TARGET: CAI_LocalNavigator::vfunc0
CAI_LocalNavigator *CAI_LocalNavigator::vfunc0(unsigned int flags)
{
	sub_10012d73();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102dee60 size=0x22
#include "CAI_PlaneSolver.h"

// TARGET: sub_102dee60
CAI_PlaneSolver *__fastcall sub_102dee60(char *pThis)
{
    return new CAI_PlaneSolver(*(int *)(pThis + 4));
}
// END FUNCTION
