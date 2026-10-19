// CUnknown101882d0: a list of 0x784-byte records sorted by a leading float (descending); the record array pointer is
// at +0xc and the record count at +0x18. Real name not yet known.
#pragma once

struct CUnknown101882d0Record
{
	float m_flTime;	// 0x0000
	char m_pad0004[0x784 - 4];
};

class CUnknown101882d0
{
public:
	char m_pad0000[0xc];
	CUnknown101882d0Record *m_pRecords;	// 0x0c
	char m_pad0010[0x18 - 0x10];
	int m_nRecords;	// 0x18

	bool sub_101882d0(float time, int *pFirst, int *pSecond);	// finds the pair of neighbouring records that brackets the time; false with fewer than two records
};
