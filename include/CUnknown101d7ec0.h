// CUnknown101d7ec0: the global clan string table at 0x10739140 (real name not yet known).
#pragma once

class CBaseCombatCharacter;

struct CUnknown101d7ec0_Entry	// 12 bytes: the entries of the table at +4
{
	int m_n0;
	int m_n4;
	int m_nType;	// 0x08: 0 compares the character's stat index, 1 its byte flag, 2 always matches
};

struct CUnknown101d7ec0_Check	// 12 bytes: one condition tested by sub_101d7fb0
{
	int m_iEntry;	// 0x00: index into the table
	int m_nValue;	// 0x04
	unsigned char m_nFlags;	// 0x08: bit 0 inverts the comparison
};

class CUnknown101d7ec0
{
public:
	int m_n0;
	CUnknown101d7ec0_Entry *m_pEntries;	// 0x04

	int sub_101d7ec0(const char *pszName, int *pOut);	// stub 0x1000dd37: the id of the entry of that name (case-insensitive) and, through pOut, its sub id (-1 for a direct hit); -1 when there is none
	char sub_101d7e90(int iEntry);	// stub 0x1000461f
	char sub_101d7fb0(CBaseCombatCharacter *pChar, const CUnknown101d7ec0_Check *pCheck);	// stub 0x10001631: whether the character passes the condition
};

extern CUnknown101d7ec0 g_10739140;
