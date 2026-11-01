// CVProfile / CVProfNode: tier0's profiler as the game's code uses it (VPROF_ENTER_SCOPE / VPROF_EXIT_SCOPE are inlined
// around the imported EnterScope / CVProfNode::ExitScope). The profile object is reached through the pointer at 0x109f3648.
// Some units inline CVProfNode::ExitScope as well (ExitScopeInlined: the timer's End, the 64 bit total, PopGroup).
#pragma once

struct CUnknownCycle100335e0	// a CCycleCount: the 64 bit tick counter
{
	unsigned __int64 m_Int64;
};

void __fastcall sub_100335e0(CUnknownCycle100335e0 *pCycle);	// CCycleCount::End: duration = rdtsc - start, in place

class CVProfNode
{
public:
	__declspec(dllimport) bool ExitScope();	// true when the node was left for good (the caller then steps to the parent)
	__declspec(dllimport) CVProfNode *GetSubNode(const char *pszName, int detailLevel, const char *pBudgetGroupName);	// the child scope of that name (made when missing); VPROF_ENTER_SCOPE inlines the name test around it

	__declspec(dllimport) void EnterScope();	// VPROF_ENTER_SCOPE's second half: counts the call and starts the timer

	const char *m_pszName;	// 0x00: the scope name (VPROF_ENTER_SCOPE compares it by address)
	char m_pad0004[4];
	CUnknownCycle100335e0 m_CurFrameTime;	// 0x08
	int m_nRecursions;	// 0x10
	int m_nCurFrameCalls;	// 0x14
	unsigned __int64 m_TotalTime;	// 0x18
	char m_pad0020[0x48 - 0x20];
	CVProfNode *m_pParent;	// 0x48
	char m_pad004c[0x54 - 0x4c];
	int m_nBudgetGroupID;	// 0x54: the group PushGroup is told about when the node is entered

	bool ExitScopeInlined();
};

class CVProfile
{
public:
	__declspec(dllimport) void EnterScope(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted);
	__declspec(dllimport) void PopGroup();
	__declspec(dllimport) void PushGroup(int nGroupID);
	__declspec(dllimport) void ExitScopeCall();	// the imported CVProfile::ExitScope (0x109f365c), called by units that do not inline it

	char m_bVTuneGroupsEnabled;	// 0x0000
	char m_pad0001[3];
	int m_nVTuneGroupID;	// 0x0004
	int m_GroupIDStack[1024];	// 0x0008
	int m_nGroupStackDepth;	// 0x1008
	int m_enabled;	// 0x100c
	bool m_bAtRoot;	// 0x1010
	char m_pad1011[3];
	CVProfNode *m_pCurNode;	// 0x1014
	CVProfNode *m_pRoot;	// 0x1018

	void ExitScope()
	{
		if (!m_bAtRoot || m_enabled) {
			if (m_pCurNode->ExitScope())
				m_pCurNode = m_pCurNode->m_pParent;
			m_bAtRoot = (m_pCurNode == m_pRoot);
		}
	}

	void ExitScopeInlined()
	{
		if (!m_bAtRoot || m_enabled) {
			if (m_pCurNode->ExitScopeInlined())
				m_pCurNode = m_pCurNode->m_pParent;
			m_bAtRoot = (m_pCurNode == m_pRoot);
		}
	}
};

extern CVProfile *g_109f3648;	// g_VProfCurrentProfile

inline bool CVProfNode::ExitScopeInlined()
{
	if (--m_nRecursions == 0 && m_nCurFrameCalls != 0) {
		sub_100335e0(&m_CurFrameTime);
		m_TotalTime += m_CurFrameTime.m_Int64;
		g_109f3648->PopGroup();
	}
	return m_nRecursions == 0;
}
