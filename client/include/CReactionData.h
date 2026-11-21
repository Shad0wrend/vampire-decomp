// CReactionData: the reaction table loaded from vdata\system\Reaction.txt (loader 0x101f14a0).
#pragma once

class CReactionData
{
public:
	int m_n00;
	int m_nEntries;	// 0x04: number of owned strings in m_ppEntries
	char **m_ppEntries;	// 0x08: heap array of heap strings
	char pad_0c[0x14 - 0x0c];
	int m_n14;
	void *m_p18;	// 0x18: heap block
	void sub_10152f20();	// frees every entry string and the array, clears the counters and the block at +0x18
};
