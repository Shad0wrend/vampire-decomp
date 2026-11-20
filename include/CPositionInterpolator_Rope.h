// CPositionInterpolator_Rope (RTTI .?AVCPositionInterpolator_Rope@@): rope position interpolator, base IPositionInterpolator.
#pragma once
#include "PcdVirtual.h"	// PCD_PURE: the interpolator globals' classes are not abstract in the initializer units
#include "CBaseRopePhysics.h"	// CRopePhysics<10>, CSimplePhysics::IHelper

class IPositionInterpolator
{
public:
	virtual void vfunc0() PCD_PURE;
	virtual void vfunc1(char **outName, int *outMinKeyReq, int *outMaxKeyReq) PCD_PURE;	// Source's GetDetails: the interpolator's name and how many keys it needs
	virtual void vfunc2(int index, const Vector *pPos) PCD_PURE;	// stores the end point (0 or 1)
	virtual void vfunc3(float t, Vector *pOut) PCD_PURE;	// the position at t (0..1) along the rope
	virtual bool vfunc4(const char *pName, const char *pValue) PCD_PURE;	// Source's ProcessKey: true when the key was handled
	int m_unk0004;
};

// RTTI .?AVCRopeDelegate@@ (base CSimplePhysics::IHelper, vtable 0x10464d34), the member at +0x1f0 of
// CPositionInterpolator_Rope (just a vtable pointer)
class CRopeDelegate : public CSimplePhysics::IHelper
{
public:
	CRopeDelegate() {}
	virtual void vfunc0(CRopeNode *pNodes, int iNode, Vector *pAccel);	// GetNodeForces: gravity (0, 0, -1500)
	virtual void vfunc1(CRopeNode *pNodes, int nNodes);	// ApplyConstraints: copies the first two of the delegate's 9-dword records (at +4..+0x18) to pOut and the last one to pOut + (count * 9 - 9) dwords; does nothing for count < 2
};

struct CRopeVec
{
	int x, y, z;
};

class CPositionInterpolator_Rope : public IPositionInterpolator
{
public:
	CPositionInterpolator_Rope();
	virtual void vfunc0();
	virtual void vfunc1(char **outName, int *outMinKeyReq, int *outMaxKeyReq);	// GetDetails
	virtual void vfunc2(int index, const Vector *pPos);	// stores the end point (0 or 1) and flags the rope as changed when it moved
	virtual void vfunc3(float t, Vector *pOut);	// when the rope changed: re-links it for the type, puts every node at the first end point, sizes the segments from the end point distance plus the slack; then the lerp of the two nodes around t
	virtual bool vfunc4(const char *pKey, const char *pValue);	// KeyValue: "Slack" (value - 100) and "Type" (0 -> 10, 1 -> 4, else 2); returns 1 when handled

	CRopePhysics<10> m_rope;	// 0x08
	CRopeDelegate m_delegate;	// 0x1f0
	CRopeVec m_vecs[2];	// 0x1f4
	float m_flSlack;	// 0x20c
	char m_bChanged;	// 0x210
	int m_nType;	// 0x214
};
