// CUnknown10076da0: object holding a vector of 0x88 byte named entries (memory at +0x2bc, count at +0x2c8);
// real name not yet known.
#pragma once

struct CUnknown10076da0;

struct CUnknown10076da0Entry
{
	char m_pad[0x88];

	const char *sub_100738a0();	// returns the entry's name (the entry itself)
	void sub_10073810(CUnknown10076da0 *pOwner, int a, int b);	// constructor body (stub 0x100095b6)
	void sub_10073850(const CUnknown10076da0Entry *pSrc);	// copy constructor body (stub 0x10009070)
};

class CUnknown10076da0
{
public:
	char m_pad0000[0x2bc];
	CUnknown10076da0Entry *m_pEntries;	// 0x02bc
	int m_nAlloc;	// 0x02c0
	int m_nGrow;	// 0x02c4
	int m_nEntries;	// 0x02c8
	CUnknown10076da0Entry *m_pElements;	// 0x02cc

	void sub_10076da0(const char *name);	// removes the first entry whose name equals `name` (case-insensitive)
	CUnknown10076da0Entry *sub_10076e70(const char *name);	// the first entry whose name equals `name` (case-insensitive), else null
	void sub_10076c30(int a, int b);	// builds an entry from (this, a, b) and appends it to the vector (CUtlVector::InsertBefore at the end, grow inlined)
};
