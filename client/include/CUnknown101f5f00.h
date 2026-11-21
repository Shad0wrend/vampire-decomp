// CUnknown101f5f00: table of growable pair lists (12-byte records indexed by a key; real name not yet known).
#pragma once

struct CUnknown101f5f00Rec
{
	int m_nCount;
	int *m_pFirst;	// m_nCount values, reallocated one element larger on every append
	int *m_pSecond;	// parallel to m_pFirst
};

class CUnknown101f5f00
{
public:
	CUnknown101f5f00Rec m_aRecs[1];	// indexed by the key, no bounds known

	void sub_10156180(int first, int key, int second);	// appends (first, second) to the record of `key` (ignored for key -1), growing both arrays by one
};
