// CUnknown1073dc00: the global sound table object at 0x1073dc00 (only what decompiled code needs).
// +0x14 is the number of named entries, +0x18 the entry pointer array (the vector the radio searches by name).
#pragma once

class CBaseEntity;

struct CUnknown1073dc00_Entry
{
	int m_nValue;	// 0x00
	const char *m_pszName;	// 0x04
};

class CUnknown1073dc00
{
public:
	char m_pad0000[0x14];
	int m_nEntries;	// 0x14
	CUnknown1073dc00_Entry **m_pEntries;	// 0x18

	int sub_101f55a0(CBaseEntity *pEntity, const char *pszName, int bFemale);	// the table index of the sound set (stub 0x10009331)
	void sub_101f5950(CBaseEntity *pEntity, int sound, int channel, float volume, float pitch);	// plays a sound of the table on an entity (stub 0x100119fa)
};
