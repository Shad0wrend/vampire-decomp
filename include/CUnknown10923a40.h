// CUnknown10923a40.h: the 0x38 byte elements of the global array 0x10923a40 (10 of them); the constructor zeroes the
// first twelve dwords. Nothing else in the sources names it; only the initializer units see it.
#pragma once
#ifdef PCD_INITIALIZERS
struct CUnknown10923a40
{
	CUnknown10923a40()
	{
		m_n00 = 0; m_n04 = 0; m_n08 = 0; m_n0c = 0; m_n10 = 0; m_n14 = 0;
		m_n18 = 0; m_n1c = 0; m_n20 = 0; m_n24 = 0; m_n28 = 0; m_n2c = 0;
	}
	int m_n00, m_n04, m_n08, m_n0c, m_n10, m_n14, m_n18, m_n1c, m_n20, m_n24, m_n28, m_n2c;
	char m_pad0030[8];
};
#endif
