// CUnknown102f7970: object with a flag word at +8 and a pointer to a vector of flagged nodes at +0x14;
// real name not yet known.
#pragma once

struct CUnknown102f7970Node
{
	char pad0[0x74];
	unsigned int m_flags74;
};

struct CUnknown102f7970Vec
{
	int m_count;
	CUnknown102f7970Node **m_pData;
};

class CUnknown102f7970
{
public:
	int m_nNodeIds;	// 0x00: one past the highest world-editor id stored in m_pIds (CNodeEnt::vfunc103 raises it)
	float (*m_pPositions)[3];	// 0x04: the node positions, 12 bytes per node index (null until the engine asks for them)
	unsigned int m_flags;	// 0x08
	int *m_pIds;	// 0x0c: the world-editor id of each node index (null until allocated)
	int m_n10;	// 0x10
	CUnknown102f7970Vec *m_pVec;	// 0x14

	void sub_102f7970();
	unsigned int sub_102f9950();
	void sub_102f7a90();
};
