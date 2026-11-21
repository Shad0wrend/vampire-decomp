// CUnknown101e8080: global helper object (at 0x10739d08) whose method writes a result code through its first argument; real name not yet known.
#pragma once

class CBaseCombatCharacter;
class CBaseEntity;

struct CFollowerInfo
{
	char m_name[0x20];
	int m_a;	// 0x20
	int m_b;	// 0x24
	int m_c;	// 0x28
};

class CUnknown101e8080
{
public:
	bool sub_1014d860(const char *type, int *a, int *b, int *c);	// follower info lookup by type name (case-insensitive); on a miss warns "Failed to load follower info type" and returns the first record's values with false
	int sub_1014d270(CBaseCombatCharacter *pChar, int nStat, unsigned char flags);	// the stat number the roll of that stat uses: 0xd (0x11 when sub_10337f30() holds) plus the table entry at 0x105a3208[nStat], plus one when bit 5 of flags is set (stub 0x1000db7a); the object itself is not used
		// the dword at +0x368 of the object when pEnt has an object at +0xa8, else the dword at +0x36c (stub 0x1000b2e4)

	char m_pad0000[0x2a8];
	CFollowerInfo *m_pFollowers;	// 0x2a8
	char m_pad02ac[8];
	int m_nFollowers;	// 0x2b4
};
