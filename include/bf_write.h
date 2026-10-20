// bf_write: engine bit buffer writer.
#pragma once

extern unsigned long g_106d1990[32][33];	// bit write masks: [first bit in the dword][number of bits]

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
	void sub_100bc600(unsigned int curData, int numbits);	// range checked variant, called through the stub at 0x10001ef1
	void sub_100bc860(unsigned int curData, int numbits, bool bCheckRange);	// "WriteUBitLong" (older copy): with bCheckRange forwards to sub_100bc600, else as sub_100bd450
	void sub_100bd090(float fAngle, int numbits);	// "WriteBitAngle": writes (int)((1 << numbits) * fAngle) / 360 masked to numbits bits
	void sub_100bd840(float f);	// "WriteBitNormal": a sign bit (f <= -1/2047), then |(int)(f * 2047)| clamped to 2047 in 11 bits (WriteOneBit and WriteUBitLong inlined)
};
