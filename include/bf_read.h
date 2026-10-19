// bf_read: engine bit buffer reader (data pointer at +0, size in bytes at +4, size in bits at +8, current bit at +0xc,
// overflow flag at +0x10).
#pragma once

extern unsigned long g_106d1910[];

class bf_read
{
public:
	unsigned long *m_pData;	// 0x00
	int m_nDataBytes;	// 0x04
	int m_nDataBits;	// 0x08
	int m_iCurBit;	// 0x0c
	bool m_bOverflow;	// 0x10

	int ReadUBitLong(int numbits)
	{
		int iEnd = m_iCurBit + numbits;
		if (iEnd > m_nDataBits)
		{
			m_iCurBit = m_nDataBits;
			m_bOverflow = true;
			return 0;
		}
		int idx = m_iCurBit >> 5;
		unsigned int startbit = m_iCurBit & 31;
		unsigned int dw1 = m_pData[idx];
		m_iCurBit = iEnd;
		dw1 >>= startbit;
		if (((iEnd - 1) >> 5) == idx)
		{
			if (numbits != 32)
				dw1 &= g_106d1910[numbits];
			return dw1;
		}
		unsigned int extra = iEnd & 31;
		unsigned int dw2 = m_pData[idx + 1] & g_106d1910[extra];
		return (dw2 << (numbits - extra)) | dw1;
	}

	float sub_100be3d0(int numbits);	// "ReadBitAngle": ReadUBitLong(numbits) scaled to 360 degrees
};
