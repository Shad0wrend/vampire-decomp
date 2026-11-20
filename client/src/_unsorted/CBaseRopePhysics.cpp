// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

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
