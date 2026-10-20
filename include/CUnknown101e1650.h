// CUnknown101e1650: vector of pointers to stat records (count at +4, data at +8); real name not yet known.
#pragma once

class CBaseCombatCharacter;

struct CUnknown101e1650Entry
{
	char m_pad0000[0x10];
	int m_nStat;	// 0x0010
	char m_pad0014[0x30 - 0x14];
	char m_bFlag;	// 0x0030
};

class CUnknown101e1650
{
public:
	int m_unk0;
	int m_count;	// 0x0004
	CUnknown101e1650Entry **m_pData;	// 0x0008

	int sub_101e1650(CBaseCombatCharacter *pChar, int stat);	// the number of flagged entries for the stat, limited by the value of the stat in the character's stat list with id 2 (default list when absent)
};
