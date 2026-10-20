// CVStatValue_t: a 0x14 byte stat value record (type at +0, payload at +4). Type 0 is a constant, 1 an expression,
// 2 a lookup in the global stat owner, 3 a function pointer. Only what decompiled code needs.
#pragma once

class CVStatValue_t
{
public:
	int m_nType;	// 0x0000
	int m_nValue;	// 0x0004

	int sub_10205730(int arg);	// evaluates the value for arg (-1 for unknown types)
};
