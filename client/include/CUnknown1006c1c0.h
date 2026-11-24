// CUnknown1006c1c0: a pixel buffer reader (only what matched code needs; the real class is not known yet).
#pragma once

class CUnknown1006c1c0
{
public:
	void sub_1013cbe0(int mode, int n);	// mode 0: set the position at +0xc to n; 1: advance by n; 2: position = end(+4) - n
	unsigned char *m_pData;	// +0x0
	int m_n4;	// +0x4: the end
	int m_n8;
	int m_nC;	// +0xc: the position
};

struct CUnknownImgInfo
{
	char m_pad0[0xc];
	unsigned short m_nCount;	// +0xc
};
