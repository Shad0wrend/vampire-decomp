// CUnknown10074070: object with an array of 20-byte records at +0x20, first dword read through an index getter; real name not yet known.
#pragma once

struct CUnknown10074070_Record
{
	int m_value;
	char m_pad4[16];
};

struct CUnknown10074070_Range	// the object at +0x4c: a time range
{
	char sub_10075f30();	// stub 0x1000695b: whether the range is usable
	float sub_10075e70();	// stub 0x100154e7: the start time
	float sub_10075f10();	// stub 0x10003fc6: the end time
};

class CUnknown10074070
{
public:
	char pad0[0xc];
	float m_f0c;
	float m_f10;
	char pad14[0x20 - 0x14];
	CUnknown10074070_Record m_records[1];
	char pad34[0x4c - 0x34];
	CUnknown10074070_Range *m_pRange;	// 0x4c

	int sub_10074070(int index);
	float sub_10074110(int index);	// stub 0x10008db9, returns a float in st0
	float *sub_10074090(int index, int b);	// stub 0x100016f9, returns a pointer to a result pair of floats
	float *sub_10074160(int index, int b);	// two floats from the helpers (the first of the record, the second of the object at +0x4c); a negative index returns the global pair 0x106c855c, an index past the record count the pair 0x106c83f0, else sub_10074090
	float sub_100741f0(float flTime, int index);	// the curve value at flTime: the start value of sub_10074110, replaced while the time lies inside the range of the object at +0x4c by sub_100742b0(flTime - start, index), scaled between the floats at +0xc and +0x10 when they differ
	float sub_100742b0(float flTime, int index);	// stub 0x1000f385
};
