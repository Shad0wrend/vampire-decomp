// CUnknown101eb1d0: an item-like object (id at +0, name at +8, flags at +0xc: bit 0 wielded, bit 1 worn, key into the
// CEntryY table at +0x10); real name not yet known.
#pragma once

class CUnknown101eb1d0
{
public:
	int m_nId;	// 0x00
	char m_pad0004[4];
	const char *m_pszName;	// 0x08
	unsigned int m_nFlags;	// 0x0c
	int m_nKey;	// 0x10

	void sub_1014f330();	// prints "(<id>): <name>", then "\t\t<g_1073a2d4> [ <entry name> ]" with " IsWielded" / " IsWorn" appended, through sub_10203dd0
};
