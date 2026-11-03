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

// FUNCTION: 0x102debe0 size=0x1f7
#include <math.h>
#include "CAI_LocalNavigator.h"
#include "CAI_Motor.h"
#include "CAI_BaseNPC.h"
#include "CVProfile.h"

struct CycleSampleV {
	unsigned __int64 m_Int64;
	void Sample() {
		unsigned int *p = (unsigned int *)this;
		__asm {
			mov ecx, p
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End() {
		CycleSampleV now;
		now.m_Int64 = 0;
		now.Sample();
		m_Int64 = now.m_Int64 - m_Int64;
	}
	CycleSampleV &operator+=(const CycleSampleV &other) {
		m_Int64 += other.m_Int64;
		return *this;
	}
};

struct CAILocalMoveGoalV {
	char m_pad[0x18];
	Vector m_vec18;
};

inline float AngleModV(float a)
{
	return (360.0f / 65536.0f) * (float)((int)(a * (65536.0f / 360.0f)) & 0xffff);
}

struct LocalNavVtbl {
	virtual int s0();
	virtual int s1();
	virtual int s2();
	virtual int s3(const void *pGoal, bool bOnlyCheck, int *pBlocker);
	virtual int s4(const void *pGoal, bool bOnlyCheck, int *pBlocker);
};

float sub_101d2c70(const Vector *pVec);
float sub_1013d580(float a, float b);
float sub_102e1d10(float a, float b, float c, float d);
Vector sub_101d2f40(float flYaw);

int CAI_LocalNavigator::vfunc3(const void *pGoal, bool bOnlyCheck, int *pBlocker)
{
	g_109f3648->EnterScope("CAI_LocalNavigator_MoveCalc", 0, "Unaccounted", false);
	CAILocalMoveGoalV *pMoveGoal = (CAILocalMoveGoalV *)pGoal;
	int result = ((LocalNavVtbl *)this)->s4(pGoal, bOnlyCheck, pBlocker);
	if (!result && !bOnlyCheck)
	{
		CAI_BaseNPC *pOuter = (CAI_BaseNPC *)m_pOuter;
		CAI_Motor *pMotor = *(CAI_Motor **)((char *)pOuter + 0x5d44);
		float flSpeed = pMotor->m_30;
		float flYaw = AngleModV(pOuter->vfunc221()[1]);
		float flGoalYaw = sub_101d2c70(&pMoveGoal->m_vec18);
		float flDelta = fabs(sub_1013d580(flGoalYaw, flYaw));
		if (flDelta > 15.0f)
		{
			float flNewYaw = sub_102e1d10(flDelta * 4.0, flYaw, flGoalYaw, flSpeed);
			if (flNewYaw != flGoalYaw)
				pMoveGoal->m_vec18 = sub_101d2f40(flNewYaw);
		}
	}
	CVProfile *pProfile = g_109f3648;
	if (!pProfile->m_bAtRoot || pProfile->m_enabled)
	{
		CVProfNode *pNode = pProfile->m_pCurNode;
		if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0)
		{
			((CycleSampleV *)&pNode->m_CurFrameTime)->End();
			*(CycleSampleV *)&pNode->m_TotalTime += *(CycleSampleV *)&pNode->m_CurFrameTime;
			CVProfile *pProfile2 = g_109f3648;
			int nDepth = --pProfile2->m_nGroupStackDepth;
			int nNew = pProfile2->m_GroupIDStack[nDepth];
			int nOld = pProfile2->m_GroupIDStack[nDepth + 1];
			if (nNew != nOld && pProfile2->m_bVTuneGroupsEnabled && nOld == pProfile2->m_nVTuneGroupID)
				vtune(false);
		}
		if (pNode->m_nRecursions == 0)
			pProfile->m_pCurNode = pProfile->m_pCurNode->m_pParent;
		pProfile->m_bAtRoot = (pProfile->m_pCurNode == pProfile->m_pRoot);
	}
	return result;
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
