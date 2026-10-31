// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042dda0 size=0x1b
#include "CHangRope.h"
int CHangRope::vfunc0(int a0, int a1, int a2)
{
    *(int *)((char *)a2) = 0;
    *(int *)((char *)a2 + 4) = 0;
    *(int *)((char *)a2 + 8) = -994344960;
    return a2;
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
