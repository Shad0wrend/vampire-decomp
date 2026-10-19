// bf_read: engine bit buffer reader (data pointer at +0, size in bytes at +4, size in bits at +8, current bit at +0xc,
// overflow flag at +0x10).
#pragma once

class bf_read
{
public:
	unsigned long *m_pData;	// 0x00
	int m_nDataBytes;	// 0x04
	int m_nDataBits;	// 0x08
	int m_iCurBit;	// 0x0c
	bool m_bOverflow;	// 0x10

	float sub_100be3d0(int numbits);	// "ReadBitAngle": ReadUBitLong(numbits) scaled to 360 degrees
};
