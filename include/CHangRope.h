// CHangRope (RTTI .?AVCHangRope@@, bases CRopePhysics<512> -> CBaseRopePhysics -> CSimplePhysics::IHelper; vtable
// 0x10516cc4): a rope that hangs between a start and an end point.
#pragma once

#include "CBaseRopePhysics.h"

class CHangRope : public CRopePhysics<512>
{
public:
	virtual void vfunc0(CRopeNode *pNodes, int iNode, Vector *pAccel);	// GetNodeForces: gravity (0, 0, -1500)
	virtual void vfunc1(CRopeNode *pNodes, int nNodes);	// ApplyConstraints: base constraints, pins the first node to the start and the last one to the end point, then nudges the slack (+0x5850) by one unit towards keeping the largest height difference to the reference (+0x5858) under the limit (+0x5854) and hands the resulting spring length to sub_102493b0
	void sub_102493b0(float flLength);	// stub 0x100144d4, called directly

	Vector m_vecStart;	// 0x5830
	Vector m_vecEnd;	// 0x583c
	char m_pad5848[4];
	float m_flLength;	// 0x584c
	float m_flSlack;	// 0x5850
	float m_flMaxDelta;	// 0x5854
	float m_flRefHeight;	// 0x5858
};
