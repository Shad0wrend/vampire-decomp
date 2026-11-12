// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102f40f0 size=0x3a
#include "CNodeNPCFilter.h"
#include "CAI_BaseNPC.h"

enum NodeType_e { NODE_ANY, NODE_DELETED, NODE_GROUND, NODE_AIR, NODE_CLIMB, NODE_WATER };
struct CNodeNPCFilter_Node
{
	int m_unk[0x70 / 4];
	NodeType_e m_eNodeType;
	NodeType_e GetType() const { return m_eNodeType; }
};

// TARGET: CNodeNPCFilter::vfunc0
bool CNodeNPCFilter::vfunc0(void *pEnt)
{
	CNodeNPCFilter_Node *pNode = (CNodeNPCFilter_Node *)pEnt;
	if ((pNode->GetType() == NODE_AIR && !(m_flags0c & 4)) ||
		(pNode->GetType() == NODE_GROUND && !(m_flags0c & 1)))
		return false;
	if (((CAI_BaseNPC *)m_pObj8)->vfunc527((CAI_NavProvider *)pEnt))
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x102f4140 size=0x46
#include "CNodeNPCFilter.h"
float CNodeNPCFilter::vfunc1(CNodeNPCFilterNode *pNode)
{
	Vector tmp;
	return (*pNode->sub_102fb0d0(&tmp, m_nHull10) - *m_pVec4).LengthSqr();
}
// END FUNCTION
