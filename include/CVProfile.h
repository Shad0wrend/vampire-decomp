// CVProfile / CVProfNode: tier0's profiler as the game's code uses it (VPROF_ENTER_SCOPE / VPROF_EXIT_SCOPE are inlined
// around the imported EnterScope / CVProfNode::ExitScope). The profile object is reached through the pointer at 0x109f3648.
#pragma once

class CVProfNode
{
public:
	__declspec(dllimport) bool ExitScope();	// true when the node was left for good (the caller then steps to the parent)

	char m_pad0000[0x48];
	CVProfNode *m_pParent;	// 0x48
};

class CVProfile
{
public:
	__declspec(dllimport) void EnterScope(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted);

	char m_pad0000[0x100c];
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
};

extern CVProfile *g_109f3648;	// g_VProfCurrentProfile
