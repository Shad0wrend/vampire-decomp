// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102f4140 size=0x46
#include "CNodeNPCFilter.h"
float CNodeNPCFilter::vfunc1(CNodeNPCFilterNode *pNode)
{
	Vector tmp;
	return (*pNode->sub_102fb0d0(&tmp, m_nHull10) - *m_pVec4).LengthSqr();
}
// END FUNCTION
