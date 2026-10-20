// CUnknown10076da0: object holding a vector of 0x88 byte named entries (memory at +0x2bc, count at +0x2c8);
// real name not yet known.
#pragma once

struct CUnknown10076da0Entry
{
	char m_pad[0x88];

	const char *sub_100738a0();	// returns the entry's name (the entry itself)
};

class CUnknown10076da0
{
public:
	char m_pad0000[0x2bc];
	CUnknown10076da0Entry *m_pEntries;	// 0x02bc
	int m_nAlloc;	// 0x02c0
	int m_nGrow;	// 0x02c4
	int m_nEntries;	// 0x02c8

	void sub_10076da0(const char *name);	// removes the first entry whose name equals `name` (case-insensitive)
	CUnknown10076da0Entry *sub_10076e70(const char *name);	// the first entry whose name equals `name` (case-insensitive), else null
};
