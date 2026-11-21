// bf_read: engine bit buffer reader (data pointer at +0, size in bytes at +4, size in bits at +8, current bit at +0xc,
// overflow flag at +0x10, debug name at +0x14).
#pragma once

#include "Vector.h"

extern unsigned long g_10487130[];

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
				ret &= g_10487130[numbits];
		}
		else
		{
			int nExtraBits = m_iCurBit & 31;
			unsigned int dword2 = m_pData[idword1 + 1];
			dword2 &= g_10487130[nExtraBits];
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

	// ReadOneBit as ReadBitVec3Normal inlines it: the bit read itself is the out-of-line sub_100bedf0.
	int ReadOneBitCall()
	{
		if ((m_iCurBit + 1) > m_nDataBits)
			m_bOverflow = true;
		if (!m_bOverflow)
			return sub_100885e0();
		return 0;
	}

	bool sub_10087bb0(void *pOutData, int nBits);	// \"ReadBits\": whole bytes up to a dword boundary of the output, then dwords, then the remaining bytes and bits; true unless the reader overflowed
		// "ReadBitAngle": ReadUBitLong(numbits) scaled to 360 degrees
	float sub_10088410();	// "ReadBitNormal": sign bit, then 11 fractional bits scaled by 1/2047
		// "ReadSBitLong": ReadUBitLong(numbits - 1), minus 1 << (numbits - 1) when the sign bit is set
		// "ReadBitLong": ReadSBitLong(numbits) when bSigned, else ReadUBitLong(numbits)
		// default constructor body (called through the stub at 0x1000a0ec)
		// "PeekUBitLong": reads numbits bits one at a time from a saved copy of the reader, restores the reader, returns the value
		// "ReadBitCoord" (stub 0x10006d1b): the float in ST0
		// "ReadBitVec3Coord": clears fa, reads the three presence flags, then ReadBitCoord for each component whose flag is set
		// 0x100bee40: ReadBitVec3Coord into a temporary, then copied into fa
		// "Seek" (stub 0x1001477c): sets the current bit; out of range (negative or past the end) sets the overflow flag, parks at the end and answers false
		// removes nBits bits at iStart: the bits behind them are moved down through a bf_write at iStart, then the size shrinks by nBits and the position goes back to iStart
	int sub_100885e0();	// the unchecked single bit read (stub 0x10013791), called by the checked reads of ReadBitVec3Normal
	void sub_100884f0(Vector &fa);	// "ReadBitVec3Normal": x / y flag bits, ReadBitNormal for each set one (else 0), the z sign bit, z = sqrt(1 - x*x - y*y) (0 when the sum reaches 1), negated by the sign bit
};
