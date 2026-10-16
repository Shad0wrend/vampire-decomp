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
};
