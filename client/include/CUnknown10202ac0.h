// CUnknown10202ac0: index clamp over a table of count (+0xc); flag byte at +0x14 selects the clamping mode; not identified yet.
#pragma once

class CUnknown10202ac0
{
public:
	bool sub_1015ed50(int *pIndex);	// clamps *pIndex into 0..count-1 (flag set) or returns false when out of range (flag clear); true otherwise

	int m_pad0000[3];
	int m_nCount;	// 0x0c
	int m_pad0010;
	char m_bClamp;	// 0x14
};
