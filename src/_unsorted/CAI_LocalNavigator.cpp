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

// FUNCTION: 0x102de4a0 size=0x267
#include "CAI_LocalNavigator.h"
#include "CVProfile.h"

__declspec(dllimport) void vtune(bool bEnable);

struct CycleCount
{
	unsigned __int64 m_Int64;
	CycleCount() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End()
	{
		CycleCount now;
		now.Sample();
		m_Int64 = now.m_Int64 - m_Int64;
	}
	void Add(const CycleCount &other) { m_Int64 += other.m_Int64; }
};

struct CVProfScope
{
	CVProfScope(const char *pszName)
	{
		CVProfile *prof = g_109f3648;
		if (prof->m_enabled || !prof->m_bAtRoot) {
			if (prof->m_pCurNode->m_pszName != pszName)
				prof->m_pCurNode = prof->m_pCurNode->GetSubNode(pszName, 0, "Unaccounted");
			CVProfNode *node = prof->m_pCurNode;
			node->m_nCurFrameCalls++;
			if (node->m_nRecursions++ == 0) {
				((CycleCount *)&node->m_CurFrameTime)->Sample();
				CVProfile *p = g_109f3648;
				int id = node->m_nBudgetGroupID;
				p->m_GroupIDStack[p->m_nGroupStackDepth] = id;
				int depth = ++p->m_nGroupStackDepth;
				if (p->m_GroupIDStack[depth - 2] != id && p->m_bVTuneGroupsEnabled && id == p->m_nVTuneGroupID)
					vtune(true);
			}
			prof->m_bAtRoot = false;
		}
	}
	~CVProfScope()
	{
		CVProfile *prof = g_109f3648;
		if (!prof->m_bAtRoot || prof->m_enabled) {
			CVProfNode *node = prof->m_pCurNode;
			if (--node->m_nRecursions == 0 && node->m_nCurFrameCalls != 0) {
				((CycleCount *)&node->m_CurFrameTime)->End();
				((CycleCount *)&node->m_TotalTime)->Add(*(CycleCount *)&node->m_CurFrameTime);
				g_109f3648->PopGroup();
			}
			if (node->m_nRecursions == 0)
				prof->m_pCurNode = prof->m_pCurNode->m_pParent;
			prof->m_bAtRoot = (prof->m_pCurNode == prof->m_pRoot);
		}
	}
};

// TARGET: CAI_LocalNavigator::vfunc7
bool CAI_LocalNavigator::vfunc7(CAI_LocalNavigatorStopState *pState, float flDist, int *pResult, int unused)
{
	CVProfScope scope("CAI_LocalNavigator_MoveCalcStop");
	if (flDist < pState->m_flStop28) {
		if (flDist < 0.1)
			*pResult = -4;
		else {
			pState->m_flStop28 = flDist;
			*pResult = 0;
		}
		return true;
	}
	*pResult = 0;
	return true;
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
