// CPositionInterpolator_Rope (RTTI .?AVCPositionInterpolator_Rope@@): rope position interpolator, base IPositionInterpolator.
#pragma once

class IPositionInterpolator
{
public:
	virtual void vfunc0() = 0;
	virtual void vfunc1() = 0;
	virtual void vfunc2() = 0;
	virtual void vfunc3() = 0;
	virtual char vfunc4(const char *pKey, const char *pValue) = 0;
	int m_unk0004;
};

// base of CRopePhysics<10>, constructed out of line (0x100136b0): nodes, node count, springs
class CRopeSimBase
{
public:
	CRopeSimBase(void *pNodes, int nNodes, void *pSprings);
	virtual void vfunc0();
	char m_pad0004[0x34];
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
	virtual void vfunc0();
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
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual char vfunc4(const char *pKey, const char *pValue);	// KeyValue: "Slack" (value - 100) and "Type" (0 -> 10, 1 -> 4, else 2); returns 1 when handled

	CRopePhysics<10> m_rope;	// 0x08
	CRopeDelegate m_delegate;	// 0x1f0
	CRopeVec m_vecs[2];	// 0x1f4
	int m_flSlack;	// 0x20c
	char m_bChanged;	// 0x210
	int m_nType;	// 0x214
};
