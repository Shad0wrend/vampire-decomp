// CUnknown100ed030: table of animation stance sequences (global at 0x10924980); real name not yet known.
#pragma once

class CBaseAnimating;

struct CUnknown100ed030Stance	// 0x44 byte record of sequence numbers
{
	int m_i00;
	int m_i04;
	int m_idle[3];	// 0x08
	int m_fidget[3];	// 0x14
	int m_pad20[9];
};

class CUnknown100ed030
{
public:
	char m_pad00[8];
	char *m_pNames;	// 0x08: count names of 0x264 bytes each
	char m_pad0c[0x14 - 0xc];
	int m_nNames;	// 0x14
	char m_pad18[4];
	CUnknown100ed030Stance *m_pStances;	// 0x1c
	char m_pad20[0x30 - 0x20];
	int *m_pTemplates;	// 0x30: 0x104 byte templates, each a list of stance indices

	void sub_100ed030(CBaseAnimating *pEnt);	// prints "Sequences for: %s" and the three stances (idle / fidget sequence names) of the template picked by the field at +0x64e8 of pEnt
};
