// CUnknown100bc0f0: entity-like object with an input handler storing an int at +0x4c8; real name not yet known.
#pragma once

struct CInputData100bc0f0
{
	char pad0[8];
	int m_value;	// 0x08
	char pad1[0xc];
	int m_type;		// 0x18
};

class CUnknown100bc0f0
{
public:
	char pad0[0x4c8];
	int m_unk4c8;

	void sub_100bc0f0(CInputData100bc0f0 *data);
};
