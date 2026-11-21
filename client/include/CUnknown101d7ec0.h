// CUnknown101d7ec0: the global clan string table at 0x10739140 (real name not yet known).
#pragma once

class CBaseCombatCharacter;

struct CUnknown101d7ec0_Entry	// 12 bytes: the entries of the table at +4
{
	int m_n0;
	int m_n4;
	int m_nType;	// 0x08: 0 compares the character's stat index, 1 its byte flag, 2 always matches

	void *sub_10144d10();	// stub 0x10010ef6: sets the key and the type to -1 and the text to 0
};

struct CUnknown101d7ec0_DefaultEntry : CUnknown101d7ec0_Entry	// the shared "no such entry" record
{
	CUnknown101d7ec0_DefaultEntry() { sub_10144d10(); }
	~CUnknown101d7ec0_DefaultEntry() {}
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

		// the constructor: three entries (keys / types 0..2) whose texts come from the CritterScopes section of vdata\system\reaction.txt
	CUnknown101d7ec0_Entry *sub_10145090(int iKey);	// stub 0x100015af: the entry with that key, else the shared default record at 0x10739148
	int sub_10144f40(const char *pszName, int *pOut);	// stub 0x1000dd37: the id of the entry of that name (case-insensitive) and, through pOut, its sub id (-1 for a direct hit); -1 when there is none
		// stub 0x1000461f
		// stub 0x10001631: whether the character passes the condition
};

extern CUnknown101d7ec0 g_105e7910;
