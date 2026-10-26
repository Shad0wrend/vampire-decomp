// CAI_RatPlaneSolver: declared by pcdecomp transplant for 0x103ad180 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once
#include "CAI_PlaneSolver.h"

class CAI_RatPlaneSolver : public CAI_PlaneSolver
{
public:
	CAI_RatPlaneSolver(int owner);	// 0x103ad140: the CAI_PlaneSolver constructor, then zeroes +0x70 and copies the float at +0xc of the global at 0x1070b228 to +0x74
	CAI_RatPlaneSolver *vfunc1(unsigned int flags);
	void sub_100011ef();
	void sub_103ad1b0();

	int m_n70;	// 0x70
	float m_f74;	// 0x74
};
