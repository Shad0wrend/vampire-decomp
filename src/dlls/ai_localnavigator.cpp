// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 10 blocks
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

// FUNCTION: 0x102ddb30 size=0xa0
#include "vampire_all.h"
#include "CAI_LocalNavigator.h"

extern void *vt_1049d76c[];
extern void *vt_1049d740[];
extern void *vt_1049a0f8[];

void CAI_LocalNavigator::sub_102ddb30()
{
    CAI_LocalNavigatorData *p = m_pData;
    *(void ***)this = vt_1049d76c;
    *(void ***)((char *)this + 0x10) = vt_1049d740;
    if (p) {
        CAI_LocalNavigatorVec *v = &p->m_vecB;
        sub_102deea0((int *)v);
        v->sub_102deec0();
        void (*freeFn)(void *) = g_109f3624;
        v->m_pElements = v->m_pMemory;
        if (v->m_growSize != -1) {
            if (v->m_pMemory) {
                freeFn(v->m_pMemory);
                v->m_pMemory = 0;
            }
            v->m_allocationCount = 0;
        }
        v = &p->m_vecA;
        v->m_size = 0;
        v->sub_102def00();
        v->m_pElements = v->m_pMemory;
        if (v->m_growSize != -1) {
            if (v->m_pMemory) {
                freeFn(v->m_pMemory);
                v->m_pMemory = 0;
            }
            v->m_allocationCount = 0;
        }
        delete p;
    }
    *(void ***)this = vt_1049a0f8;
}
// END FUNCTION

// FUNCTION: 0x102ddc00 size=0x22
class CFoo102ddc00
{
public:
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual int vfunc8();

	char *m_pOuter;	// 0x04
	char m_pad08[0x14 - 0x08];
	int m_14;	// 0x14
	int m_18;	// 0x18
	int m_1c;	// 0x1c

	void sub_102ddc00(int a);
};

// TARGET: CFoo102ddc00::sub_102ddc00
void CFoo102ddc00::sub_102ddc00(int a)
{
	m_18 = vfunc8();
	m_14 = a;
	m_1c = *(int *)(m_pOuter + 0x5d40);
}
// END FUNCTION

// FUNCTION: 0x102ddc40 size=0x2a
struct CUnknown102ddc40 {
	char m_pad0000[0x18];
	char *m_pInner;
	void sub_102ddc40();
};

// TARGET: CUnknown102ddc40::sub_102ddc40
void CUnknown102ddc40::sub_102ddc40()
{
	char *p = m_pInner;
	*(float *)(p + 0x34) = -1.0f;
	*(char *)(p + 0x14) = 0;
	*(int *)(p + 8) = 0x7f7fffff;
	*(int *)(p + 0xc) = 0x7f7fffff;
	*(int *)(p + 0x10) = 0x7f7fffff;
	*(int *)(p + 0x18) = 0;
	*(int *)(p + 0x28) = 0x7f7fffff;
	*(int *)(p + 0x2c) = 0x7f7fffff;
	*(char *)(p + 0x30) = 0;
}
// END FUNCTION

// FUNCTION: 0x102ddc80 size=0x394
#include "CEntityVSlots.h"
#include "CAI_LocalNavigator.h"
#include "CVProfile.h"
#include "CBaseEntity.h"

struct CCycleCountL {
	unsigned __int64 m_Int64;
	CCycleCountL() { m_Int64 = 0; }
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
};
struct CFastTimerL {
	CCycleCountL m_Duration;
	void End()
	{
		CCycleCountL cnt;
		cnt.Sample();
		m_Duration.m_Int64 = cnt.m_Int64 - m_Duration.m_Int64;
	}
};
struct MotorV {
	virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
	virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
	virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
	virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
	virtual void m16();
	virtual float m17();
};
struct OuterV : CEntityVSlots {
	char m_pad[0x5d44 - sizeof(CEntityVSlots)];
	MotorV *m_pMotor;
};
struct MoveV {
	char m_pad00[0xc];
	Vector m_vDir;
	char m_pad18[0x24 - 0x18];
	float m_f24;
	float m_f28;
	char m_pad2c[4];
	int m_n30;
	int m_n34;
	unsigned char m_flags;
	char m_pad39[0x44 - 0x39];
	int m_n44;
	char m_pad48[0x68 - 0x48];
	float m_f68;
};
struct NavV {
	float sub_1030a650(float);
};
struct ProbeV {
	char sub_102e6d70(int, const Vector *, Vector *, int, int, float, int, int *, int, int);
	char MoveLimit(int navType, const Vector *pStart, Vector *pEnd, int mask, int pTarget, float pct, int flags, int *pTrace, int a4, int a5)
	{
		return sub_102e6d70(navType, pStart, pEnd, mask, pTarget, pct, flags, pTrace, a4, a5);
	}
};
struct CAI_LocalNavigatorL : CAI_LocalNavigator {
	ProbeV *GetMoveProbe() { return (ProbeV *)m_n1c; }
};

struct CVProfNodeL : CVProfNode {
	bool ExitScopeL()
	{
		if (--m_nRecursions == 0 && m_nCurFrameCalls != 0) {
			CFastTimerL *pc = (CFastTimerL *)&m_CurFrameTime;
			pc->End();
			m_TotalTime += pc->m_Duration.m_Int64;
			g_109f3648->PopGroup();
		}
		return m_nRecursions == 0;
	}
};
struct CVProfileL : CVProfile {
	void ExitScopeL()
	{
		if (!m_bAtRoot || m_enabled) {
			if (((CVProfNodeL *)m_pCurNode)->ExitScopeL())
				m_pCurNode = m_pCurNode->m_pParent;
			m_bAtRoot = (m_pCurNode == m_pRoot);
		}
	}
};

#define OUTER ((OuterV *)m_pOuter)

bool CAI_LocalNavigator::sub_102ddc80(MoveV *pMove, float *pOutDist, int *pResult, int a4, int a5)
{
	g_109f3648->EnterScope("CAI_LocalNavigator_MoveCalcDirect", 0, "Unaccounted", false);
	float flMotor = OUTER->m_pMotor->m17();
	float flNav = ((NavV *)m_pData)->sub_1030a650(pMove->m_f24);
	float flSpeed = (flMotor > flNav) ? flMotor : flNav;
	Vector vecDest = pMove->m_vDir * flSpeed + *(Vector *)OUTER->slot220();
	if (pMove->m_f24 != 0.0f) {
		Vector *pOrigin = (Vector *)OUTER->slot220();
		char bHit = ((CAI_LocalNavigatorL *)this)->GetMoveProbe()->MoveLimit(pMove->m_n30, pOrigin, &vecDest, 0x202400b, pMove->m_n34, 100.0f, 0, &pMove->m_n44, a4, a5);
		float flDist = flSpeed - pMove->m_f68;
		if (flDist < 0.001)
			flDist = 0.0f;
		if (bHit) {
			*pResult = 0;
			g_109f3648->ExitScope();
			return true;
		}
		if ((pMove->m_flags & 5) && flDist > pMove->m_f28) {
			*pResult = 0;
			g_109f3648->ExitScope();
			return true;
		}
		*pOutDist = flDist;
		((CVProfileL *)g_109f3648)->ExitScopeL();
		return false;
	}
	*pResult = -4;
	((CVProfileL *)g_109f3648)->ExitScopeL();
	return true;
}
// END FUNCTION

// FUNCTION: 0x102de110 size=0x2cc
#include "CAI_LocalNavigator.h"
#include "CAI_Navigator.h"
#include "CUnknown1030a6e0.h"
#include "CVProfile.h"
#include "Vector.h"

struct CGoalView
{
	char pad0[0xc];
	Vector a;
	Vector b;
};

struct CCycleSample
{
	unsigned __int64 m_Int64;
	void Sample()
	{
		unsigned __int64 *p = &m_Int64;
		__asm {
			mov ecx, p
			rdtsc
			mov [ecx], eax
			mov [ecx+4], edx
		}
	}
};

#define EXIT_INLINED() \
	{ \
		CVProfile *p = g_109f3648; \
		if (!p->m_bAtRoot || p->m_enabled) { \
			CVProfNode *n = p->m_pCurNode; \
			if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) { \
				CCycleSample s; \
				s.m_Int64 = 0; \
				s.Sample(); \
				CUnknownCycle100335e0 *pc = &n->m_CurFrameTime; \
				pc->m_Int64 = s.m_Int64 - pc->m_Int64; \
				n->m_TotalTime += pc->m_Int64; \
				g_109f3648->PopGroup(); \
			} \
			if (n->m_nRecursions == 0) \
				p->m_pCurNode = p->m_pCurNode->m_pParent; \
			p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot); \
		} \
	}

bool CAI_LocalNavigator::sub_102de110(void *pGoal, float flDist, int *pResult, int unused)
{
	CGoalView *g = (CGoalView *)pGoal;
	if (*(unsigned char *)((char *)pGoal + 0x38) & 8)
		return false;

	g_109f3648->EnterScope("CAI_Motor_MoveCalcSteer", 0, "Unaccounted", false);

	Vector vecLocal;
	if (((CUnknown1030a6e0 *)m_pData)->sub_1030aea0(pGoal, flDist, &vecLocal))
	{
		if (g->a.x != vecLocal.x || g->a.y != vecLocal.y || g->a.z != vecLocal.z)
		{
			if (g->a.x * vecLocal.x + g->a.y * vecLocal.y > 0.966f)
			{
				float flA = ((CAI_Navigator *)m_pData)->sub_1030a650(*(float *)((char *)pGoal + 0x24));
				if (*(float *)((char *)pGoal + 0x28) < flA * 0.33333 && flDist > flA * 0.6666)
				{
					*pResult = 0;
					g_109f3648->ExitScope();
					return true;
				}
			}
			g->a = vecLocal;
			g->b = g->a;
		}
		*pResult = 0;
		EXIT_INLINED();
		return true;
	}

	EXIT_INLINED();
	return false;
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

// FUNCTION: 0x102de7b0 size=0x34b
#include "CAI_LocalNavigator.h"
#include "CVProfile.h"

struct CCycleCountL
{
	unsigned __int64 m_Int64;
	CCycleCountL() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm
		{
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End()
	{
		CCycleCountL cnt;
		cnt.Sample();
		m_Int64 = cnt.m_Int64 - m_Int64;
	}
};

inline void PopGroupL(CVProfile *p)
{
	--p->m_nGroupStackDepth;
	int nOld = p->m_GroupIDStack[p->m_nGroupStackDepth + 1];
	int nNew = p->m_GroupIDStack[p->m_nGroupStackDepth];
	if (nNew != nOld && p->m_bVTuneGroupsEnabled && nOld == p->m_nVTuneGroupID)
		vtune(false);
}

inline bool NodeExitScopeL(CVProfNode *n)
{
	if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0)
	{
		CCycleCountL *pc = (CCycleCountL *)&n->m_CurFrameTime;
		pc->End();
		n->m_TotalTime += pc->m_Int64;
		PopGroupL(g_109f3648);
	}
	return n->m_nRecursions == 0;
}

struct NavSinkV {
	virtual void s0();
	virtual bool s1(CAI_LocalNavigatorStopState *p, float f, int *pRes);
	virtual bool s2(CAI_LocalNavigatorStopState *p, float f, int *pRes);
	virtual bool s3(CAI_LocalNavigatorStopState *p, float f, int *pRes);
	virtual bool s4(CAI_LocalNavigatorStopState *p, float f, int *pRes);
};
struct MotorV {
	virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
	virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
	virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
	virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
	virtual float m16();
};
struct OuterV {
	char m_pad0000[0x5d44];
	MotorV *m_pMotor;
};
struct NavV {
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual void s3();
	virtual void s4();
	virtual bool s5(CAI_LocalNavigatorStopState *p, float *pF, int *pRes, float d, void *a);
	virtual bool s6(CAI_LocalNavigatorStopState *p, float f, int *pRes, float d);
	virtual bool s7(CAI_LocalNavigatorStopState *p, float f, int *pRes, float d);
	OuterV *m_pOuter;
	char m_pad0008[8];
	NavSinkV m_sink;
};

#define EXIT_A { int r = result; g_109f3648->ExitScopeCall(); return r; }

int CAI_LocalNavigator::vfunc4(CAI_LocalNavigatorStopState *pMove, float flDist, void *pArg)
{
	NavV *self = (NavV *)this;
	g_109f3648->EnterScope("CAI_LocalNavigator_MoveCalcRaw", 0, "Unaccounted", false);
	int result = 0;
	float distClear = pMove->m_flStop28;
	if (self->s5(pMove, &distClear, &result, flDist, pArg))
		EXIT_A
	if (self->m_sink.s1(pMove, distClear, &result))
		EXIT_A
	if (self->s6(pMove, distClear, &result, flDist))
		EXIT_A
	if (self->m_sink.s2(pMove, distClear, &result))
		EXIT_A
	if (self->m_sink.s3(pMove, distClear, &result))
		EXIT_A
	if (distClear < self->m_pOuter->m_pMotor->m16())
	{
		if (self->m_sink.s4(pMove, distClear, &result))
		{
			int r = result;
			g_109f3648->ExitScope();
			return r;
		}
		if (self->s7(pMove, distClear, &result, flDist))
		{
			int r = result;
			g_109f3648->ExitScope();
			return r;
		}
	}
	if (distClear > pMove->m_flStop2c)
	{
		g_109f3648->ExitScope();
		return 0;
	}
	CVProfile *prof = g_109f3648;
	if (!prof->m_bAtRoot || prof->m_enabled)
	{
		if (NodeExitScopeL(prof->m_pCurNode))
			prof->m_pCurNode = prof->m_pCurNode->m_pParent;
		prof->m_bAtRoot = (prof->m_pCurNode == prof->m_pRoot);
	}
	return -4;
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
