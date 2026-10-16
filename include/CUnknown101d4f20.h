// CUnknown101d4f20: object with a one-dword record at +0x78 copied out through a pointer argument; real name not yet known.
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

	void sub_101d4f20(CUnknown101d4f20_Value *out);
};
