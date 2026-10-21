// CBaseRopePhysics (RTTI .?AVCBaseRopePhysics@@, base CSimplePhysics::IHelper which is not modelled):
// the rope simulation helper, primary vtable 0x10497510 with the two IHelper slots.
#pragma once

#include "Vector.h"

struct CRopeNode	// CSimplePhysics::CNode, 36 bytes
{
	Vector m_vPos;	// 0x00
	Vector m_vPrevPos;	// 0x0c
	Vector m_vPredicted;	// 0x18
};

class CBaseRopePhysics
{
public:
	virtual void vfunc0(CRopeNode *pNodes, int iNode, Vector *pAccel);	// GetNodeForces
	virtual void vfunc1(CRopeNode *pNodes, int nNodes);	// ApplyConstraints

	int m_n04;
	CRopeNode *m_pNodes;	// 0x08
	int m_nNodes;	// 0x0c
};
