// CUnknown101d5bd0: vector of pointers to named entries (count at +4, data at +8); real name not yet known.
#pragma once

struct CUnknown101d5bd0Entry
{
	int m_unk0;
	int m_unk4;
	const char *m_p;	// 0x0008

	void sub_101e05e0();	// the entry's destructor body (called through the stub at 0x10009da4)
};

class CUnknown101d5bd0
{
public:
	int m_unk0;
	int m_count;	// 0x0004
	CUnknown101d5bd0Entry **m_pData;	// 0x0008
	char m_pad000c[0x18 - 0xc];
	char m_bFlag18;	// 0x0018

	int sub_101d5bd0(const char *name);
	int sub_101d5d20(const char *name, int start);
	int sub_101e1440(const char *name, int start);	// same as sub_101d5d20 (another instance)
	void sub_101d6de0();	// purges the list, then loads the "LevelingTemplate" data files (vdata/system) one by one
	void sub_101e0df0();	// provisional, like sub_101d6de0 (transplant)
	void sub_101e0d60();	// deletes every entry and the pointer array, then clears the count and the first field and sets the flag byte at +0x18
};
