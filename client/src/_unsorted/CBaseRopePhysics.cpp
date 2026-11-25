// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10128a10 size=0x7b
#include "CBaseRopePhysics.h"

struct RopeHelperView
{
	int sub_10128ad0();
	void sub_10128a90(int nNodes);
};

CBaseRopePhysics::CBaseRopePhysics(void *pNodes, int nNodes, void *pSprings)
{
	m_pLinks = (CRopeLink *)pSprings;
	m_pNodes = (CRopeNode *)pNodes;
	m_flMinDistSq = 1.0f;
	m_flRestLength = 1.0f;

	((RopeHelperView *)this)->sub_10128ad0();

	CRopeNode *pNode = (CRopeNode *)pNodes;
	for (int i = 0; i < nNodes; i++)
	{
		pNode[i].m_vPos.Init();
		pNode[i].m_vPrevPos.Init();
		pNode[i].m_vPredicted.Init();
	}

	((RopeHelperView *)this)->sub_10128a90(nNodes);

	m_pNext = 0;
}
// END FUNCTION

// FUNCTION: 0x10128b80 size=0x1c
#include "CBaseRopePhysics.h"

// TARGET: CBaseRopePhysics::vfunc0
void CBaseRopePhysics::vfunc0(CRopeNode *pNodes, int iNode, Vector *pAccel)
{
	if (m_pNext)
		m_pNext->vfunc0(pNodes, iNode, pAccel);
	else {
		pAccel->x = 0.0f;
		pAccel->y = 0.0f;
		pAccel->z = 0.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x10128ba0 size=0x164
#include "CBaseRopePhysics.h"
#include <math.h>

extern int g_102c336c;

void CBaseRopePhysics::vfunc1(CRopeNode *pNodes, int nNodes)
{
	for (int iIteration = 0; iIteration < g_102c336c; iIteration++)
	{
		for (int i = 0; i < m_nNodes - 1; i++)
		{
			CRopeLink *s = &m_pLinks[i];
			Vector vTo = *s->m_pA - *s->m_pB;
			float flDistSqr = vTo.LengthSqr();
			if (flDistSqr > m_flMinDistSq)
			{
				float flDist = (float)sqrt(flDistSqr);
				vTo *= 1 - (m_flRestLength / flDist);
				*s->m_pA -= vTo * 0.5f;
				*s->m_pB += vTo * 0.5f;
			}
		}
		if (m_pNext)
			m_pNext->vfunc1(pNodes, nNodes);
	}
}
// END FUNCTION
