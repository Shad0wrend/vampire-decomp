// CUnknown101e4150: a table of named entries (count at +4, entry pointers at +8; name at +8 and a value at +0xc of each
// entry) of the vampire discipline data, the global object at 0x10739a4c; real name not yet known.
#pragma once

struct CUnknown101e4150Char	// the part of a character the update touches
{
	char m_pad0000[0xfb0];
	int m_nSalvoCount;	// 0x0fb0
	char m_pad0fb4[0xfcc - 0xfb4];
	float m_flSalvoStart;	// 0x0fcc: the time the salvo started (0 when none)
};

class CUnknown101e4150
{
public:
	int m_unk0;
	int m_count;	// 0x0004
	void **m_pEntries;	// 0x0008

	int sub_101e1590(const char *pszName);	// the value (+0xc) of the entry with that name (case-insensitive), 0 when none (stub 0x1000418d)
	void sub_101e4150(CUnknown101e4150Char *pChar);	// once the salvo has run longer than the tuning limit, ends it (clears its start time) and counts it
};
