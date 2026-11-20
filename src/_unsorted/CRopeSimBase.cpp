// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102492a0 size=0x7b
#include "CPositionInterpolator_Rope.h"

struct CNodeVec {
	int x, y, z;
	void Init(int a, int b, int c) { x = a; y = b; z = c; }
};
struct CNodeX {
	CNodeVec m_vPos;
	CNodeVec m_vPrevPos;
	CNodeVec m_vPredicted;
};

CBaseRopePhysics::CBaseRopePhysics(void *pNodes, int nNodes, void *pSprings)
	: m_timer()
{
	CNodeX *pNode = (CNodeX *)pNodes;
	m_pLinks = (CRopeLink *)pSprings;
	m_pNodes = (CRopeNode *)pNodes;
	m_flMinDistSq = 1.0f;
	m_flRestLength = 1.0f;
	sub_10249390();
	for (int i = 0; i < nNodes; i++) {
		pNode[i].m_vPos.Init(0, 0, 0);
		pNode[i].m_vPrevPos.Init(0, 0, 0);
		pNode[i].m_vPredicted.Init(0, 0, 0);
	}
	sub_10249340(nNodes);
	m_pNext = 0;
}
// END FUNCTION
