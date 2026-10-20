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

// RTTI .?AV?$CRopePhysics@$09@@, at +8 of CPositionInterpolator_Rope
class CRopePhysics10 : public CRopeSimBase
{
public:
	CRopePhysics10() : CRopeSimBase(m_nodes, 10, m_springs) {}
	virtual void vfunc1();
	char m_nodes[0x168];	// 0x38
	char m_springs[0x48];	// 0x1a0
};

struct CRopeVec
{
	int x, y, z;
};

// RTTI .?AVCRopeDelegate@@, at +0x1f0 of CPositionInterpolator_Rope
class CRopeDelegate
{
public:
	CRopeDelegate() : m_flSlack(0), m_bChanged(0) {}
	virtual void vfunc0();
	CRopeVec m_vecs[2];	// 0x1f4
	int m_flSlack;	// 0x20c
	char m_bChanged;	// 0x210
};

class CPositionInterpolator_Rope : public IPositionInterpolator, public CRopePhysics10, public CRopeDelegate
{
public:
	CPositionInterpolator_Rope();
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual char vfunc4(const char *pKey, const char *pValue);	// KeyValue: "Slack" (value - 100) and "Type" (0 -> 10, 1 -> 4, else 2); returns 1 when handled

	int m_nType;	// 0x214
};
