// CUnknown1017ce70: class not known yet (reached through the dword at +0xa8 of the object sub_101193b0 returns);
// owns an array of 0x40 byte entries at +0x1d68 (count at +0x1d74) that name quests by index.
#pragma once

struct CUnknown1017ce70Entry
{
	char m_pad0000[0x30];
	int m_nQuest30;	// 0x30: quest index
	char m_pad0034[8];
	char m_bActive3c;	// 0x3c
	char m_pad003d[3];
};

class CUnknown1017ce70
{
public:
	void sub_1017ce70(int nId);	// stores nId at +0x1dac and clears the flag at +0x3c of every entry whose quest record has id nId at +8

	char m_pad0000[0x1d68];
	CUnknown1017ce70Entry *m_pEntries;	// 0x1d68
	char m_pad1d6c[8];
	int m_nEntries;	// 0x1d74
	char m_pad1d78[0x1dac - 0x1d78];
	int m_nId;	// 0x1dac
};
