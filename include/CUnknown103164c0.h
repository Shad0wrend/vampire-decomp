// CUnknown103164c0: an NPC squad (0x78 bytes; name at the start, up to 16 member entity handles at +0x1c, their count
// at +0x5c); real name not yet known.
#pragma once

class CUnknown103164c0
{
public:
	char m_pad00[0x1c];
	unsigned int m_hMembers[16];	// 0x1c
	int m_nMembers;	// 0x5c
	char m_pad60[0x78 - 0x60];

	CUnknown103164c0(const char *pszName);	// 0x103164c0 (stub 0x10002856): returns this
};
