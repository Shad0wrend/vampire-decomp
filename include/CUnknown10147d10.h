// CUnknown10147d10: entity-like object with an input handler storing a value at +0x20c; real name not yet known.
#pragma once

struct CInputData10147d10
{
	char pad0[8];
	int m_value;	// 0x08
	char pad1[0xc];
	int m_type;		// 0x18
};

class CUnknown10147d10
{
public:
	char pad0[0x20c];
	int m_unk20c;

	void sub_10147d10(CInputData10147d10 *data);
};
