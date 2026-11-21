// CUnknown1042d9a0: object whose word at +2 holds a 12-bit field (CRT/library area); real name not yet known.
#pragma once

class CUnknown1042d9a0
{
public:
	short m_unk0;
	unsigned short m_unk2;

	unsigned short sub_10120980();
	char sub_10120a10(CUnknown1042d9a0 *other);	// equality: compares the bit fields one by one
};
