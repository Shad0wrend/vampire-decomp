// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ad140 size=0x2c
#include "CAI_RatPlaneSolver.h"

struct CUnkGlobal103ad140
{
	char m_pad00[0xc];
	float m_fl0c;
};

extern CUnkGlobal103ad140 *g_1070b228;

// TARGET: CAI_RatPlaneSolver::CAI_RatPlaneSolver
CAI_RatPlaneSolver::CAI_RatPlaneSolver(int owner) : CAI_PlaneSolver(owner)
{
	m_n70 = 0;
	m_f74 = g_1070b228->m_fl0c;
}
// END FUNCTION

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
