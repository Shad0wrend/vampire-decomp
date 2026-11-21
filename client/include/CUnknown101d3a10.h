// CUnknown101d3a10: a loaded clan record (ClanData section); four per-table arrays at +0xd0..+0xdc.
#pragma once

struct CUnknown101d3a10Sub
{
	int sub_10161510();
};

struct CUnknown101d3a10Item
{
	char m_pad[0x9c];
	CUnknown101d3a10Sub m_sub;
};

struct CUnknown101d3a10Table
{
	int m_unk0;
	int m_count;	// 0x0004
	CUnknown101d3a10Item *sub_1015cfe0(int index);	// the item at index (stub 0x1000ffb0)
};

class CUnknown101d3a10
{
public:
	char m_pad0000[0xd0];
	int *m_pArray0d0;
	int *m_pArray0d4;
	int *m_pArray0d8;
	int *m_pArray0dc;

	void sub_1013e3a0();	// (re)allocates the four arrays: one entry per row of the three global tables (entry = item sub object), the fourth zeroed
};
