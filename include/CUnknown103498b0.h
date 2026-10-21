// CUnknown103498b0: a small record of three counters at +4 / +8 / +0xc (name provisional); sub_103498b0 classifies
// (total - reserved - used) into one of five levels against four tuning floats.
#pragma once

class CUnknown103498b0
{
public:
	int m_n0;
	int m_nTotal;	// 0x04
	int m_nUsed;	// 0x08
	int m_nReserved;	// 0x0c

	int sub_103498b0();	// level 0..4 of (m_nTotal - m_nReserved - m_nUsed): 0 up to the float at 0x10739fa0, 1 up to 0x10739fa4, 2 up to 0x10739fa8, 3 up to 0x10739fac, else 4
};
