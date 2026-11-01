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
	bool m_bAssertOnOverflow;	// 0x11
	char m_pad12[2];
	const char *m_pDebugName;	// 0x14

	void sub_100bd450(unsigned int curData, int numbits, bool bCheckRange);	// \"WriteUBitLong\": sets the overflow flag when numbits do not fit, else masks and ors curData into the dword(s) at the current bit
	void sub_100bd540(unsigned int curData);	// writes a full 32-bit value (\"WriteUBitLong\" with numbits == 32)
	void sub_100bdc20(unsigned int curData);	// writes an 8-bit value (same shape with numbits == 8)
	void sub_100bdd20(unsigned int curData);	// same family (another width)
	void sub_100bc600(unsigned int curData, int numbits);	// range checked variant, called through the stub at 0x10001ef1
	void sub_100bc860(unsigned int curData, int numbits, bool bCheckRange);	// \"WriteUBitLong\" (older copy): with bCheckRange forwards to sub_100bc600, else as sub_100bd450
	void sub_100bd090(float fAngle, int numbits);	// \"WriteBitAngle\": writes (int)((1 << numbits) * fAngle) / 360 masked to numbits bits
	void sub_100bd620(const Vector &fa);	// "WriteBitVec3Coord": a flag bit each for x, y, z (|v| >= 1/16), then WriteBitCoord of the flagged components
	void sub_100bd1d0(float f);	// "WriteBitCoord" (stub 0x1000740f)
	void sub_100bd9b0(const Vector &fa);	// "WriteBitVec3Normal": a flag bit each for x and y (|v| >= 1/2047), the sign bit of z, then WriteBitNormal of x and y when flagged
	void sub_100bd840(float f);	// \"WriteBitNormal\": a sign bit (f <= -1/2047), then |(int)(f * 2047)| clamped to 2047 in 11 bits (WriteOneBit and WriteUBitLong inlined)
	void sub_100bc460();	// default constructor body (stub 0x1000cd24): data 0, sizes 0, bits -1, current bit 0, no overflow, assert on overflow, no name
	void sub_100bc510(void *pData, int nBytes, int iStartBit, int nBits);	// \"StartWriting\" (stub 0x10001a28): nBits -1 means nBytes * 8
	bf_write *sub_100bc490(const char *pDebugName, void *pData, int nBytes, int nBits);	// constructor with a debug name: sets the name and assert-on-overflow, then StartWriting(pData, nBytes, 0, nBits); returns this
	bf_write *sub_100bc4d0(void *pData, int nBytes, int nBits);	// constructor without a name: assert-on-overflow set, then StartWriting(pData, nBytes, 0, nBits); returns this
	bf_write *sub_100bdf10(void *pData, int nBytes, int nBits);	// same as sub_100bc4d0 (another copy: StartWriting at sub_100bdf90)
	void sub_100bdf90(void *pData, int nBytes, int iStartBit, int nBits);	// StartWriting: the copy at 0x100bdf90 (called from sub_100bdf10)

	void WriteOneBit(int nValue)	// the byte-wise bit write of the 2003 SDK
	{
		if ((m_iCurBit + 1) > m_nDataBits)
			m_bOverflow = true;
		if (!m_bOverflow) {
			if (nValue)
				((unsigned char *)m_pData)[m_iCurBit >> 3] |= (1 << (m_iCurBit & 7));
			else
				((unsigned char *)m_pData)[m_iCurBit >> 3] &= ~(1 << (m_iCurBit & 7));
			++m_iCurBit;
		}
	}
	void WriteUBitLongInline(unsigned int curData, int numbits)	// the unchecked WriteUBitLong body, as inlined by WriteSBitLong
	{
		if (m_iCurBit + numbits > m_nDataBits) {
			m_iCurBit = m_nDataBits;
			m_bOverflow = true;
		} else {
			int iCurBitMasked = m_iCurBit & 31;
			int iDWord = m_iCurBit >> 5;
			unsigned long *pOut = m_pData + iDWord;
			*pOut &= g_106d1990[iCurBitMasked][numbits];
			m_pData[iDWord] |= curData << iCurBitMasked;
			int nBitsWritten = 32 - iCurBitMasked;
			if (nBitsWritten < numbits) {
				iCurBitMasked = (m_iCurBit + nBitsWritten) & 31;
				pOut = m_pData + iDWord + 1;
				*pOut &= g_106d1990[iCurBitMasked][numbits - nBitsWritten];
				m_pData[iDWord + 1] |= (curData >> nBitsWritten) << iCurBitMasked;
			}
			m_iCurBit += numbits;
		}
	}
	void WriteUBitLongUnchecked(unsigned int curData, int numbits)	// the 2003 SDK WriteUBitLong body (dword at a time), as WriteBitsFromBuffer inlines it
	{
		if (m_iCurBit + numbits > m_nDataBits) {
			m_iCurBit = m_nDataBits;
			m_bOverflow = true;
		} else {
			int iDWord = m_iCurBit >> 5;
			int iCurBitMasked = m_iCurBit & 31;
			unsigned long *pOut = &m_pData[iDWord];
			*pOut &= g_106d1990[iCurBitMasked][numbits];
			m_pData[iDWord] |= curData << iCurBitMasked;
			int nBitsWritten = 32 - iCurBitMasked;
			if (nBitsWritten < numbits) {
				iCurBitMasked = (m_iCurBit + nBitsWritten) & 31;
				pOut = &m_pData[iDWord + 1];
				*pOut &= g_106d1990[iCurBitMasked][numbits - nBitsWritten];
				m_pData[iDWord + 1] |= (curData >> nBitsWritten) << iCurBitMasked;
			}
			m_iCurBit += numbits;
		}
	}
	bool sub_100bcd70(class bf_read *pIn, int nBits);	// "WriteBitsFromBuffer": copies nBits bits from pIn, 32 at a time; true unless either side overflowed
	bf_write *sub_100bdf50(const char *pDebugName, void *pData, int nBytes, int nBits);	// provisional, like sub_100bc490 (transplant)
};
