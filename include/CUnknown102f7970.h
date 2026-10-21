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
	char pad0[8];
	unsigned int m_flags;
	char pad1[8];
	CUnknown102f7970Vec *m_pVec;

	void sub_102f7970();
	unsigned int sub_102f9950();
	void sub_102f7a90();
};
