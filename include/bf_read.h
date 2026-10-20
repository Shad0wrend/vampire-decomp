// bf_read: engine bit buffer reader (data pointer at +0, size in bytes at +4, size in bits at +8, current bit at +0xc,
// overflow flag at +0x10, debug name at +0x14).
#pragma once

#include "Vector.h"

extern unsigned long g_106d1910[];

class bf_read
{
public:
	unsigned long *m_pData;	// 0x00
	int m_nDataBytes;	// 0x04
	int m_nDataBits;	// 0x08
	int m_iCurBit;	// 0x0c
	bool m_bOverflow;	// 0x10
	const char *m_pDebugName;	// 0x14

	unsigned int ReadUBitLong(int numbits)
	{
		if ((m_iCurBit + numbits) > m_nDataBits)
		{
			m_iCurBit = m_nDataBits;
			m_bOverflow = true;
			return 0;
		}

		int idword1 = m_iCurBit >> 5;
		unsigned int dword1 = m_pData[idword1];
		dword1 >>= (m_iCurBit & 31);

		m_iCurBit += numbits;
		unsigned int ret = dword1;

		if ((m_iCurBit - 1) >> 5 == idword1)
		{
			if (numbits != 32)
				ret &= g_106d1910[numbits];
		}
		else
		{
			int nExtraBits = m_iCurBit & 31;
			unsigned int dword2 = m_pData[idword1 + 1];
			dword2 &= g_106d1910[nExtraBits];
			ret |= (dword2 << (numbits - nExtraBits));
		}
		return ret;
	}

	int ReadOneBit()
	{
		if ((m_iCurBit + 1) > m_nDataBits)
			m_bOverflow = true;
		if (!m_bOverflow)
		{
			int value = ((unsigned char *)m_pData)[m_iCurBit >> 3] & (1 << (m_iCurBit & 7));
			++m_iCurBit;
			return value != 0;
		}
		return 0;
	}

	float sub_100be3d0(int numbits);	// "ReadBitAngle": ReadUBitLong(numbits) scaled to 360 degrees
	float sub_100beba0();	// "ReadBitNormal": sign bit, then 11 fractional bits scaled by 1/2047
	int sub_100be590(int numbits);	// "ReadSBitLong": ReadUBitLong(numbits - 1), minus 1 << (numbits - 1) when the sign bit is set
	unsigned int sub_100be6b0(int numbits, bool bSigned);	// "ReadBitLong": ReadSBitLong(numbits) when bSigned, else ReadUBitLong(numbits)
	void sub_100bdee0();	// default constructor body (called through the stub at 0x1000a0ec)
	unsigned int sub_100be4b0(int numbits);	// "PeekUBitLong": reads numbits bits one at a time from a saved copy of the reader, restores the reader, returns the value
	float sub_100be770();	// "ReadBitCoord" (stub 0x10006d1b): the float in ST0
	void sub_100bea10(Vector &fa);	// "ReadBitVec3Coord": clears fa, reads the three presence flags, then ReadBitCoord for each component whose flag is set
};
