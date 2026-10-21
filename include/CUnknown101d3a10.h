// CUnknown101d3a10: a loaded clan record (ClanData section); four per-table arrays at +0xd0..+0xdc.
#pragma once

struct CUnknown101d3a10Pad
{
	char m_pad[0x9c];
};

struct CUnknown101d3a10Sub
{
	void *sub_10205840();
};

struct CUnknown101d3a10Item : CUnknown101d3a10Pad, CUnknown101d3a10Sub	// the sub object sits at +0x9c
{
};

struct CUnknown101d3a10Table
{
	int m_unk0;
	int m_count;	// 0x0004
	CUnknown101d3a10Item *sub_10200370(int index);	// the item at index (stub 0x1000ffb0)
};

class CUnknown101d3a10
{
public:
	char m_pad0000[0xd0];
	void **m_pArray0d0;
	void **m_pArray0d4;
	void **m_pArray0d8;
	void **m_pArray0dc;

	void sub_101d3a10();	// (re)allocates the four arrays: one entry per row of the three global tables (entry = item sub object), the fourth zeroed
};
