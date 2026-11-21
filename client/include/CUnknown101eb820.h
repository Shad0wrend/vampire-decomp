// CUnknown101eb820: a damage / effect record that can dump itself as text; real name not yet known.
#pragma once

struct CUnknown101eb820Dmg
{
	int m_nValue;	// -1 when unset
	const char *sub_10159260();	// the name of the damage type (stub 0x1000a286)
};

class CUnknown101eb820
{
public:
	int m_nIndex;	// 0x00
	char pad4[4];
	const char *m_pszName;	// 0x08
	CUnknown101eb820Dmg m_Dmg;	// 0x0c
	char pad10[0x40];
	int m_nAmmoLost;	// 0x50 (-1: clip)
	unsigned int m_nFlags;	// 0x54

	void sub_1014f820();	// prints the record
};
