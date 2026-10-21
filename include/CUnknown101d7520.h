// CUnknown101d7520: the "Auto-Level Manager" list (count at +4, array of entry pointers at +8); real name not yet known.
#pragma once

struct CUnknown101d7520Entry
{
	int m_unk0;
	char m_pad0004[0x10 - 4];
	const char *m_pName;	// 0x0010

	void sub_101d6af0();	// dumps the entry (stub 0x10015dca)
};

class CUnknown101d7520
{
public:
	int m_unk0;
	int m_nCount;	// 0x0004
	CUnknown101d7520Entry **m_ppEntries;	// 0x0008

	int sub_101d7520_find(const char *name);	// stub 0x1000f759: index of the entry named `name`, -1 when none
	void sub_101d7520(const char *name);	// "Auto-Level Manager" dump: all entries (name null), one entry, or "ALL" entries
};
