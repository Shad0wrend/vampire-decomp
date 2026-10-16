// CUnknown101d4f20: object with one-dword records at +0x78 and +0x7c copied out through pointer arguments; real name not yet known.
#pragma once

struct CUnknown101d4f20_Value
{
	int m_value;
};

class CUnknown101d4f20
{
public:
	char pad0[0x78];
	CUnknown101d4f20_Value m_unk78;
	CUnknown101d4f20_Value m_unk7c;

	void sub_101d4f20(CUnknown101d4f20_Value *out);
	void sub_101d4f40(CUnknown101d4f20_Value *out);
};
