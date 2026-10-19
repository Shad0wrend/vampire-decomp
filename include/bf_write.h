// bf_write: engine bit buffer writer.
#pragma once

class bf_write
{
public:
	unsigned long *m_pData;	// 0x00
	int m_nDataBytes;		// 0x04
	int m_nDataBits;		// 0x08
	int m_iCurBit;			// 0x0c
	bool m_bOverflow;		// 0x10

	void sub_100bd450(unsigned int curData, int numbits, bool bCheckRange);	// "WriteUBitLong": sets the overflow flag when numbits do not fit, else masks and ors curData into the dword(s) at the current bit
	void sub_100bd540(unsigned int curData);	// writes a full 32-bit value ("WriteUBitLong" with numbits == 32)
	void sub_100bdc20(unsigned int curData);	// writes an 8-bit value (same shape with numbits == 8)
	void sub_100bdd20(unsigned int curData);	// same family (another width)
};
