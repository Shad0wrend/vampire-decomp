// CUnknown101f0e50: small record with seven dwords of which five are cleared by its constructor-like
// initialiser (fields +0x0, +0x4, +0x8, +0x14, +0x18); real name not yet known.
#pragma once

class CUnknown101f0e50
{
public:
	int m_f00;
	int m_f04;	// element count
	int m_f08;
	int m_f0c;
	int m_f10;
	int m_f14;
	int m_f18;

	CUnknown101f0e50 *sub_101f0e50();	// zeroes the fields above and returns this
	bool sub_101f18f0(int index);	// "IsValidIndex": index is not -1 and below the count at +0x4
	bool sub_101f82d0(int index);	// provisional, like sub_101f18f0 (transplant)
};
