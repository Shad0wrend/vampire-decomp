// CAmmoDef: the ammo type table the game rules hand out (CGameRules slot 55): a count at +0 and 0x24 byte records from +4.
#pragma once

struct CAmmoDefType
{
	const char *pszName;
	char m_pad0004[0x20];
};

class CAmmoDef
{
public:
	int sub_104274b0(const char *psz);	// probably "CAmmoDef::Index": the index of the ammo type of that name (case-insensitive, records 1 and up), -1 when unknown or null (stub 0x1000df3f)

	int m_nAmmoIndex;	// 0x00: the number of ammo types
	CAmmoDefType m_AmmoType[1];	// 0x04
};
