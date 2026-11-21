// CStatusFlagList: a list of status flag entries (the list at +0x4 / +0x8 of its owner; the real class is not known yet).
#pragma once

struct CStatusFlagEntry
{
	char m_pad0000[0xc];
	unsigned int m_nFlags;	// +0xc
	int m_nKey;	// +0x10
};

struct CStatusTarget;

class CStatusFlagList
{
public:
		// true when the target's status flags (+0xeb4) hit the first mask and, shifted up to five places, the second
	unsigned int sub_1014a020(int nKey);	// the OR of the flags of every entry whose key is nKey (0 when none)
	unsigned int sub_10149f70(int nKey, int nSkip);	// the flags of the entry nSkip places after the first entry with key nKey (0 when none)
	char m_pad0000[0x4];
	int m_nCount;	// +0x4
	CStatusFlagEntry **m_ppEntries;	// +0x8
};
