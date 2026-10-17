// CUnknown1042d9a0: object whose word at +2 holds a 12-bit field (CRT/library area); real name not yet known.
#pragma once

class CUnknown1042d9a0
{
public:
	short m_unk0;
	unsigned short m_unk2;

	unsigned short sub_1042d9a0();
	bool sub_1042daa0(CUnknown1042d9a0 *other);	// equality: compares the bit fields one by one
};
