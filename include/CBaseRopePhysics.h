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

struct CRopeLink	// a pair of positions the constraint pulls together
{
	Vector *m_pA;	// 0x00
	Vector *m_pB;	// 0x04
};

class CBaseRopePhysicsNext	// the next helper the constraints are handed on to (only slot 1 is typed)
{
public:
	virtual void vfunc0(CRopeNode *pNodes, int iNode, Vector *pAccel);
	virtual void vfunc1(CRopeNode *pNodes, int nNodes);
};

class CBaseRopePhysics
{
public:
	virtual void vfunc0(CRopeNode *pNodes, int iNode, Vector *pAccel);	// GetNodeForces
	virtual void vfunc1(CRopeNode *pNodes, int nNodes);	// ApplyConstraints: the global number of times pulls the first count - 1 link pairs back to the rest length (when further apart than the squared limit at +0x18), handing the nodes on to the helper at +4 after every iteration
	void sub_100027c5(CRopeNode *pNodes, int nNodes);	// CBaseRopePhysics::vfunc1 (stub 0x100027c5), called directly by the subclasses

	CBaseRopePhysicsNext *m_pNext;	// 0x04
	CRopeNode *m_pNodes;	// 0x08
	int m_nNodes;	// 0x0c
	CRopeLink *m_pLinks;	// 0x10
	float m_flRestLength;	// 0x14
	float m_flMinDistSq;	// 0x18
};
