// CUnknown1006c180: the owner of 0x1006c180 (only what matched code needs; the real class is not known yet).
#pragma once

class CUnknown1006c180
{
public:
	bool sub_1013cbb0(int nAdd);	// while the state byte at +0x14 is 0: true when the count at +0xc plus nAdd does not pass the limit at +0x4; else the state becomes 2 and the answer is false
	char m_pad0000[0x4];
	int m_n4;	// +0x4: the limit
	char m_pad0008[0x4];
	int m_nC;	// +0xc: the count
	char m_pad0010[0x4];
	char m_b14;	// +0x14: the state
};
