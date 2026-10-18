// CUnknown101d5bd0: vector of pointers to named entries (count at +4, data at +8); real name not yet known.
#pragma once

struct CUnknown101d5bd0Name
{
	const char *m_p;
};

inline const char *CUnknown101d5bd0Get(const CUnknown101d5bd0Name &n) { return n.m_p; }

struct CUnknown101d5bd0Entry
{
	int m_unk0;
	int m_unk4;
	CUnknown101d5bd0Name m_name;	// 0x0008
};

class CUnknown101d5bd0
{
public:
	int m_unk0;
	int m_count;	// 0x0004
	CUnknown101d5bd0Entry **m_pData;	// 0x0008

	int sub_101d5bd0(const char *name);
};
