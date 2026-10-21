// CUnknown10074070: object with an array of 20-byte records at +0x20, first dword read through an index getter; real name not yet known.
#pragma once

struct CUnknown10074070_Record
{
	int m_value;
	char m_pad4[16];
};

class CUnknown10074070
{
public:
	char pad0[0x20];
	CUnknown10074070_Record m_records[1];

	int sub_10074070(int index);
	float sub_10074110(int index);	// stub 0x10008db9, returns a float in st0
	float *sub_10074090(int index, int b);	// stub 0x100016f9, returns a pointer to a result pair of floats
	float *sub_10074160(int index, int b);	// two floats from the helpers (the first of the record, the second of the object at +0x4c); a negative index returns the global pair 0x106c855c, an index past the record count the pair 0x106c83f0, else sub_10074090
};
