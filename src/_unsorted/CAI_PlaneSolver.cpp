// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10307e30 size=0x81
#include "CAI_PlaneSolver.h"

CAI_PlaneSolver::CAI_PlaneSolver(int owner) : m_owner(owner), m_f08(3.402823466e+38F), m_f0c(3.402823466e+38F), m_f10(3.402823466e+38F), m_b14(0), m_i18(0), m_f28(3.402823466e+38F), m_f2c(3.402823466e+38F), m_b30(0), m_timer(g_1049df80 - g_10445e08)
{
}
// END FUNCTION

// FUNCTION: 0x103097c0 size=0x521
#include "utlrbtree.h"
#include "utlvector.h"
#include "Elem280_t.h"
#include "CAI_PlaneSolver.h"
#include "globalvars.h"
#include "Tier1.h"
#include <math.h>

float sub_101d2c70(const Vector &v);
extern float g_104454c4;

struct PlaneGoalV	// AI_MoveSolverGoal-like: origin, direction
{
	Vector m_vecOrigin;
	Vector m_vecDir;
};

struct PlaneTraceV	// AIMoveTrace_t: fStatus first, the distance at +0x24
{
	int m_n[9];
	float m_f24;
	int m_n2[4];
};

struct CAI_PlaneSolverV : CAI_PlaneSolver
{
	CUtlVector<Elem280_t> &Suggestions() { return *(CUtlVector<Elem280_t> *)&m_lists.m_pBuf50; }
	void sub_10309230(const PlaneGoalV &goal, float probeDist);
	char sub_1030a7f0(float probeDist);
	int sub_10309650(const PlaneGoalV &goal, float yaw, float probeDist, float step, int i);
	void sub_10309120(float yaw, float step, int i, float *pYawTest, float *pYawCenter);
	void sub_10308540(const PlaneGoalV &goal, const PlaneTraceV &trace, float probeDist, float arcCenter, float arcSpan);

};

void sub_1030b250(Elem280_t *pMemory, const Elem280_t &src);	// CopyConstruct<Elem280_t>
struct ElemCopyV { void sub_1030b2a0(const Elem280_t &src); };	// Elem280_t copy ctor
struct SuggV : CUtlVector<Elem280_t>
{
	void sub_1030b100(int num);			// GrowVector
	void sub_1030b1d0(int elem, int num);	// ShiftElementsRight
	int AddLoop(const Elem280_t &src)
	{
		int elem = m_Size;
		if (m_Size + 1 > m_Memory.NumAllocated())
			m_Memory.Grow(m_Size + 1 - m_Memory.NumAllocated());
		m_Size += 1;
		ResetDbgInfo();
		sub_1030b1d0(elem, 1);
		sub_1030b250(&Element(elem), src);
		return elem;
	}
	int AddFinal(const Elem280_t &src)
	{
		int elem = m_Size;
		sub_1030b100(1);
		sub_1030b1d0(elem, 1);
		Elem280_t *p = &Element(elem);
		if (p)
			((ElemCopyV *)p)->sub_1030b2a0(src);
		return elem;
	}
};

struct SimTimerV : CAI_PlaneSolverTimer	// CSimTimer
{
	void Force() { m_next = -1; }
	bool Expired() const { return ( gpGlobals->curtime - m_next > -0.001 ); }
	void Reset() { m_next = gpGlobals->curtime + m_interval; }
};
#define TIMER ((SimTimerV *)&m_timer)

namespace block_103097c0 {
#pragma auto_inline(off)
struct PSView : CAI_PlaneSolver
{
	void sub_10309120(float flAngle, float flStep, int nCount, float *pFirst, float *pLast);
};
void PSView::sub_10309120(float flAngle, float flStep, int nCount, float *pFirst, float *pLast)
{
	if (nCount != 0) {
		float flSign = (float)(nCount > 0 ? 1 : -1);
		flAngle = nCount * flStep + flAngle;
		*pLast = flAngle;
		if (flAngle < g_104454c4)
			*pLast = flAngle + 360.0f;
		else if (flAngle >= 360.0f)
			*pLast = flAngle - 360.0f;
		float flStart = *pLast - flSign * flStep * 0.5;
		*pFirst = flStart;
		if (flStart < g_104454c4)
			*pFirst = flStart + 360.0f;
		else if (flStart >= 360.0f)
			*pFirst = flStart - 360.0f;
	} else {
		*pFirst = flAngle;
		*pLast = flAngle;
	}
}
#pragma auto_inline(on)
}

// TARGET: CAI_PlaneSolver::vfunc0
int CAI_PlaneSolver::vfunc0(float *pVec, int *pEnt, float distClear, float probeDist, float degreesToProbe, int nProbes)
{
#define V ((CAI_PlaneSolverV *)this)
	const PlaneGoalV &goal = *(const PlaneGoalV *)pVec;
	const PlaneTraceV &directTrace = *(const PlaneTraceV *)pEnt;
	float yaw;
	int result = 0;
	if (!m_b14 || *(Vector *)&m_f08 != goal.m_vecOrigin)
		TIMER->Force();
	if (g_1049df80 == 0.0 || TIMER->Expired()) {
		V->Suggestions().RemoveAll();
		V->sub_10309230(goal, probeDist);
		if (V->sub_1030a7f0(probeDist))
			result = 1;
		float step = degreesToProbe / (float)nProbes;
		int half = (nProbes - 1) / 2;
		yaw = sub_101d2c70(goal.m_vecDir);
		if (fabs(probeDist - (distClear + directTrace.m_f24)) < 0.1 && directTrace.m_n[0] != -3) {
			if (directTrace.m_n[0] != 0) {
				result = 1;
				V->sub_10308540(goal, directTrace, probeDist, yaw, step);
			}
		} else {
			if (V->sub_10309650(goal, yaw, probeDist, step, 0) == 1)
				result = 1;
		}
		bool bBlocked = false;
		int i;
		for (i = 1; i <= half; i++) {
			if (!bBlocked) {
				if (V->sub_10309650(goal, yaw, probeDist, step, i) == 1)
					result = 1;
				else
					bBlocked = true;
			} else {
				float yawTest, yawCenter;
				((block_103097c0::PSView *)this)->sub_10309120(yaw, step, i, &yawTest, &yawCenter);
				((SuggV *)&V->Suggestions())->AddLoop(Elem280_t(5, 1.0f, yawCenter, step));
			}
		}
		bBlocked = false;
		for (i = -1; i >= -half; i--) {
			if (!bBlocked) {
				if (V->sub_10309650(goal, yaw, probeDist, step, i) == 1)
					result = 1;
				else
					bBlocked = true;
			} else {
				float yawTest, yawCenter;
				((block_103097c0::PSView *)this)->sub_10309120(yaw, step, i, &yawTest, &yawCenter);
				((SuggV *)&V->Suggestions())->AddLoop(Elem280_t(5, 1.0f, yawCenter, step));
			}
		}
		if (result == 1) {
			float flBack = yaw - 180.0f;
			if (flBack < g_104454c4)
				flBack += 360.0f;
			((SuggV *)&V->Suggestions())->AddFinal(Elem280_t(5, 1.0f, flBack, 360.0f - degreesToProbe));
		}
		TIMER->Reset();
	}
	else if (V->Suggestions().Count() > 0)
		result = 1;
	return result;
#undef V
}
// END FUNCTION
