// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012fca0 size=0x72
#include "CPositionInterpolator_Rope.h"

CPositionInterpolator_Rope::CPositionInterpolator_Rope() : m_flSlack(0), m_bChanged(0)
{
    m_nType = 5;
    int *p = &m_vecs[0].z;
    for (int i = 2; i; i--) {
        p[-2] = 0x6753c21c;
        p[-1] = 0x6753c21c;
        p[0] = 0x6753c21c;
        p += 3;
    }
}
// END FUNCTION

// FUNCTION: 0x1012fd40 size=0x8
#include "CPositionInterpolator_Rope.h"
namespace lifted {
int sub_10430964(int);
}
void CPositionInterpolator_Rope::vfunc0()
{
    lifted::sub_10430964((int)this);
}
// END FUNCTION

// FUNCTION: 0x1012fd60 size=0x17
extern char g_105753a0[];

// TARGET: sub_1012fd60
void __stdcall sub_1012fd60(void **pObj, int *pFlag, int unused)
{
	*pObj = g_105753a0;
	*pFlag = 1;
}
// END FUNCTION

// FUNCTION: 0x1012fd90 size=0x61
#include "CPositionInterpolator_Rope.h"
// TARGET: CPositionInterpolator_Rope::vfunc2
void CPositionInterpolator_Rope::vfunc2(int index, const Vector *pPos)
{
	if (index == 0 || index == 1) {
		Vector *pVec = (Vector *)&m_vecs[index];
		if (*pPos != *pVec)
			m_bChanged = 1;
		*pVec = *pPos;
	}
}
// END FUNCTION

// FUNCTION: 0x1012fe20 size=0x162
#include "CPositionInterpolator_Rope.h"

void CPositionInterpolator_Rope::vfunc3(float t, Vector *pOut)
{
	if (m_bChanged)
	{
		m_rope.sub_10249340(m_nType);
		for (int i = 0; i < m_rope.m_nNodes; i++)
		{
			m_rope.m_pNodes[i].m_vPos = m_rope.m_pNodes[i].m_vPrevPos = *(const Vector *)&m_vecs[0];
		}
		const Vector &vecA = *(const Vector *)&m_vecs[0];
		const Vector &vecB = *(const Vector *)&m_vecs[1];
		float dx = vecA.x - vecB.x;
		float dy = vecA.y - vecB.y;
		float dz = vecA.z - vecB.z;
		float flLength = FastSqrt(dz * dz + dy * dy + dx * dx) + m_flSlack;
		m_rope.sub_10249390();
		m_rope.sub_10249420(flLength / (m_rope.m_nNodes - 1), &m_delegate);
		m_rope.sub_10249470(5.0f);
		m_bChanged = 0;
	}
	float flPos = (m_rope.m_nNodes - 1) * t;
	int iNode = (int)flPos;
	float flFrac = flPos - iNode;
	CRopeNode *pNode = &m_rope.m_pNodes[iNode];
	VectorLerp(pNode[0].m_vPredicted, pNode[1].m_vPredicted, flFrac, *pOut);
}
// END FUNCTION

// FUNCTION: 0x1012fff0 size=0xb5
#include "CPositionInterpolator_Rope.h"
extern "C" {
int _strcmpi(const char *, const char *);
double atof(const char *);
int atoi(const char *);
}

bool CPositionInterpolator_Rope::vfunc4(const char *pKey, const char *pValue)
{
	if (!_strcmpi(pKey, "Slack")) {
		float t0 = atof(pValue) - 100.0;
		m_bChanged = 1;
		m_flSlack = (t0);
		return 1;
	}
	if (!_strcmpi(pKey, "Type")) {
		unsigned int type = atoi(pValue);
		if (type == 0)
			m_nType = 10;
		else if ((int)type == 1)
			m_nType = 4;
		else
			m_nType = 2;
		m_bChanged = 1;
		return 1;
	}
	return 0;
}
// END FUNCTION
