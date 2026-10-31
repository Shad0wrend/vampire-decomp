// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10260f90 size=0x23
#include "CAI_ProxyMovementSink.h"

struct CAIMovementSinkValue {
	virtual float vfunc0();
};

// TARGET: CAI_ProxyMovementSink::vfunc0
float CAI_ProxyMovementSink::vfunc0()
{
	float r;
	if (m_pTarget == 0 || (r = ((CAIMovementSinkValue *)m_pTarget)->vfunc0()) == -1.0) {
		return -1.0f;
	}
	return r;
}
// END FUNCTION

// FUNCTION: 0x10261b10 size=0x233
#include "CAI_ProxyMovementSink.h"
#include "CVProfile.h"

__declspec(dllimport) void vtune(bool bEnable);

struct CProxyCycleCount
{
	unsigned __int64 m_Int64;
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
		CProxyCycleCount cnt;
		cnt.m_Int64 = 0;
		cnt.Sample();
		m_Int64 = cnt.m_Int64 - m_Int64;
	}
	void operator+=(CProxyCycleCount &other)
	{
		m_Int64 += other.m_Int64;
	}
};

struct CProxyGroupView
{
	bool m_bVTune;
	char m_pad0001[3];
	int m_nVTuneGroupID;
	int m_GroupIDStack[0x400];
	int m_nGroupStackPtr;
};

struct CProxyTargetView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual bool vfunc6(int a);
};

// TARGET: CAI_ProxyMovementSink::vfunc6
bool CAI_ProxyMovementSink::vfunc6(int a)
{
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot) {
		if (p->m_pCurNode->m_pszName != "CAI_ProxyMSink_OnMoveStalled")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CAI_ProxyMSink_OnMoveStalled", 0, "Unaccounted");
		CVProfNode *n = p->m_pCurNode;
		n->m_nCurFrameCalls++;
		if (n->m_nRecursions++ == 0) {
			((CProxyCycleCount *)&n->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(n->m_nBudgetGroupID);
		}
		p->m_bAtRoot = false;
	}
	if (m_pTarget && ((CProxyTargetView *)m_pTarget)->vfunc6(a)) {
		g_109f3648->ExitScopeInlined();
		return true;
	}
	CVProfile *q = g_109f3648;
	if (!q->m_bAtRoot || q->m_enabled) {
		CVProfNode *n = q->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			((CProxyCycleCount *)&n->m_CurFrameTime)->End();
			*(CProxyCycleCount *)&n->m_TotalTime += *(CProxyCycleCount *)&n->m_CurFrameTime;
			CProxyGroupView *g = (CProxyGroupView *)g_109f3648;
			g->m_nGroupStackPtr--;
			if (g->m_GroupIDStack[g->m_nGroupStackPtr] != g->m_GroupIDStack[g->m_nGroupStackPtr + 1]
				&& g->m_bVTune
				&& g->m_GroupIDStack[g->m_nGroupStackPtr + 1] == g->m_nVTuneGroupID)
				vtune(false);
		}
		if (n->m_nRecursions == 0)
			q->m_pCurNode = q->m_pCurNode->m_pParent;
		q->m_bAtRoot = (q->m_pCurNode == q->m_pRoot);
	}
	return false;
}
// END FUNCTION
