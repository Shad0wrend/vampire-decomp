// CUnknown100ecd30: a table of 0x264-byte records (pointer at +8, default index at +4, last valid index at +0x14);
// real name not yet known.
#pragma once

struct CUnknown100ecd30_Rec
{
	char m_pad0[0x234];
	int m_n234;
	int m_n238;
	char m_pad23c[0x250 - 0x23c];
	int m_n250;
	int m_n254;
	char m_pad258[0x264 - 0x258];
};

class CUnknown100ecd30
{
public:
	int m_n0;
	int m_nDefault;	// +0x04
	CUnknown100ecd30_Rec *m_pRecords;	// +0x08
	char m_pad0c[8];
	int m_nLast;	// +0x14

	void sub_100ecd30(int index, int *pA, int *pB, int *pC, int *pD);	// reads four fields of record `index` (the default record when out of range) into the non-null outputs
};
