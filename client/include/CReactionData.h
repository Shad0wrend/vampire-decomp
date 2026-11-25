// CReactionData: the reaction table loaded from vdata\system\Reaction.txt (loader 0x101f14a0).
#pragma once

#include "string_t.h"

class CReactionData
{
public:
	int m_n00;
	int m_nEntries;	// 0x04: number of owned strings in m_ppEntries
	char **m_ppEntries;	// 0x08: heap array of heap strings
	string_t m_iszInternalName;	// 0x0c
	string_t m_isz10;	// 0x10
	int m_n14;
	void *m_p18;	// 0x18: heap block
	string_t m_ModifierNames[6];	// 0x1c
	int m_ModifierNameLens[6];	// 0x34
	void sub_10152f20();	// frees every entry string and the array, clears the counters and the block at +0x18
	bool sub_10153180(const char *pszFile);
	void sub_101532e0();
};
