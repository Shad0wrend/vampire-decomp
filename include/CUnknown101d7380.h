// CUnknown101d7380: vector of pointers to named entries (count at +4, data at +8); real name not yet known.
#pragma once

struct CUnknown101d7380Entry
{
	int m_unk0;
	int m_unk4;
	int m_unk8;
	int m_unkc;
	int m_unk10;
	const char *m_p;	// 0x0014
};

class CUnknown101d7380
{
public:
	int m_unk0;
	int m_count;	// 0x0004
	CUnknown101d7380Entry **m_pData;	// 0x0008

	int sub_101d7380(const char *name, int start);
	bool sub_101d70d0(const char *name, int *pIndex);	// opens the data file `name`, walks its "LevelingTemplate" nodes against the entries from *pIndex
	void sub_101d6ef0();	// counts the "vdata_system/LevelingTemplate*.txt" files, then loads each LevelingTemplate%03d.txt (Msg when one cannot be opened)
};
