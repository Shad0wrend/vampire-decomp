// CPositionInterpolator_Rope (RTTI .?AVCPositionInterpolator_Rope@@): rope position interpolator, base IPositionInterpolator.
#pragma once
#include "PcdVirtual.h"	// PCD_PURE: the interpolator globals' classes are not abstract in the initializer units
#include "CUnknown102496a0.h"
#include "CBaseRopePhysics.h"	// CRopeNode

class CRopeDelegate;

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

// RTTI .?AVCSimplePhysics@@ with its nested helper interface (vtable 0x10497520): the first base of the rope simulation.
class CSimplePhysics
{
public:
	class IHelper
	{
	public:
		virtual void vfunc0() = 0;
	};
};

// base of CRopePhysics<10>, constructed out of line (0x100136b0): nodes, node count, springs
// (RTTI name CBaseRopePhysics, vtable 0x10497510)
class CRopeSimBase : public CSimplePhysics::IHelper
{
public:
	CRopeSimBase(void *pNodes, int nNodes, void *pSprings);
	virtual void vfunc0();
	int m_n04;
	CRopeNode *m_pNodes;	// 0x08
	int m_nNodes;	// 0x0c
	void **m_pSprings;	// 0x10
	float m_f14;
	float m_f18;
	char m_pad001c[4];
	CUnknown102496a0 m_timer;	// 0x20

	void sub_10249390();	// sets the timer's interval to 0.02 s
	void sub_10249340(int nNodes);	// links the nodes into springs
	void sub_10249420(float flSegment, CRopeDelegate *pDelegate);	// stub 0x100142d6: the rest length of one segment, and the delegate that supplies the end points
	void sub_10249470(float flValue);	// stub 0x100060c3
};

// RTTI .?AV?$CRopePhysics@$09@@, the member at +8 of CPositionInterpolator_Rope
template<int N>
class CRopePhysics : public CRopeSimBase
{
public:
	CRopePhysics() : CRopeSimBase(m_nodes, N, m_springs) {}
	virtual void vfunc1();
	char m_nodes[0x168];	// 0x38
	char m_springs[0x48];	// 0x1a0
};

// RTTI .?AVCRopeDelegate@@, the member at +0x1f0 of CPositionInterpolator_Rope (just a vtable pointer)
class CRopeDelegate
{
public:
	CRopeDelegate() {}
	virtual int vfunc0(int, int, int);
	virtual void vfunc1(int *pOut, int count);	// slot 1: copies the first two of the delegate's 9-dword records (at +4..+0x18) to pOut and the last one to pOut + (count * 9 - 9) dwords; does nothing for count < 2
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
