// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042dda0 size=0x1b
#include "CHangRope.h"
void CHangRope::vfunc0(CRopeNode *pNodes, int iNode, Vector *pAccel)
{
	pAccel->Init(0, 0, -1500);
}
// END FUNCTION

// FUNCTION: 0x1042ddd0 size=0xdc
#include "CHangRope.h"
#include <math.h>

void CHangRope::vfunc1(CRopeNode *pNodes, int nNodes)
{
	sub_100027c5(pNodes, nNodes);
	pNodes[0].m_vPos = m_vecStart;
	pNodes[nNodes - 1].m_vPos = m_vecEnd;
	float flMax = 0.0f;
	for (int i = 0; i < m_nNodes; i++) {
		float flDelta = (float)fabs(m_flRefHeight - m_pNodes[i].m_vPos.z);
		if (flDelta > flMax)
			flMax = flDelta;
	}
	if (flMax < m_flMaxDelta)
		m_flSlack += 1.0f;
	else
		m_flSlack -= 1.0f;
	sub_102493b0((m_flLength + m_flSlack - 100.0f) / (m_nNodes - 1));
}
// END FUNCTION
