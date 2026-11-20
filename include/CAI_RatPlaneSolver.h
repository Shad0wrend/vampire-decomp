// CAI_RatPlaneSolver: declared by pcdecomp transplant for 0x103ad180 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once
#include "CAI_PlaneSolver.h"

class CAI_RatPlaneSolver : public CAI_PlaneSolver
{
public:
	CAI_RatPlaneSolver(int owner);	// 0x103ad140: the CAI_PlaneSolver constructor, then zeroes +0x70 and copies the float at +0xc of the global at 0x1070b228 to +0x74
	virtual CAI_RatPlaneSolver *vfunc1(unsigned int flags);	// its own new slot 1 (0x103ad180)
	int vfunc0(float *pVec, int *pEnt, float a, float b, float c, int d);	// slot 0 override (0x103ad270): forwards to CAI_PlaneSolver::vfunc0 as (pVec, pEnt, a, b, b, d), then appends a steering result
	void sub_100011ef();
	void sub_103ad1b0();

	char m_pad64[0x70 - 0x64];
	float m_n70;	// 0x70: a yaw angle (the matched constructor zeroes it; read as float by slot 0)
	float m_f74;	// 0x74: the next recompute time
};
