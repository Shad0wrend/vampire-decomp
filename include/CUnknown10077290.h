// CUnknown10077290: object holding a vector of 0x8c byte named entries (memory at +0x2d0, count at +0x2dc);
// real name not yet known.
#pragma once

struct CUnknown10077290Entry
{
	char m_pad[0x8c];

	const char *sub_100738a0();	// returns the entry's name (the entry itself)
};

class CUnknown10077290
{
public:
	char m_pad0000[0x2d0];
	CUnknown10077290Entry *m_pEntries;	// 0x02d0
	int m_nAlloc;	// 0x02d4
	int m_nGrow;	// 0x02d8
	int m_nEntries;	// 0x02dc

	void sub_10077290(const char *name);	// removes the first entry whose name equals `name` (case-insensitive)
};
