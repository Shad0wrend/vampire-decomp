// CUnknown1030bc20: object with a pointer at +0x24 to a record holding an int at +0x28; real name not yet known.
#pragma once

struct CUnknown1030bc20_Record
{
	char pad0[0x28];
	int m_unk28;
};

class CUnknown1030bc20
{
public:
	char pad0[0x24];
	CUnknown1030bc20_Record *m_unk24;

	int sub_1030bc20();
};
