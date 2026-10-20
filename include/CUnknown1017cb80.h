// CUnknown1017cb80: object with an array of 0x40-byte records at +0x1d68 (count at +0x1d74); real name not yet known.
#pragma once

struct CUnknown1017cb80_Rec
{
	char pad0[0x30];
	int m_quest;
	int m_index;
	char pad38[8];
};

class CUnknown1017cb80
{
public:
	char pad0[0x1d68];
	CUnknown1017cb80_Rec *m_pRecs;
	char pad1d6c[8];
	int m_nRecs;

	int sub_1017cb80(const char *name);
};
