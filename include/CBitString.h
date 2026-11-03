// CBitString: a growable bit string (bit count at +0, dword count at +2, one inline dword at +4, pointer to the
// dwords at +8; the pointer is the inline dword's address while a single dword is used).
#pragma once

#include <string.h>	// memset

class CBitString
{
public:
	unsigned short m_nBits;	// 0x0000
	unsigned short m_nDwords;	// 0x0002
	int m_nInline;	// 0x0004
	int *m_pData;	// 0x0008

	CBitString() {}
	CBitString(int nBits)
	{
		m_pData = 0;
		m_nBits = nBits;
		m_nDwords = (nBits + 31) / 32;
		sub_100bf5b0(m_nDwords);
		if (m_pData)
			memset(m_pData, 0, m_nDwords * 4);
	}

	CBitString *sub_102fc910(int nBits);	// out-of-line copy of the constructor: sets the counts, allocates and clears the dwords, returns this
	CBitString *sub_102fe9a0(int nBits);	// the constructor's first part without the clearing: sets the bit and dword counts, zeroes the data pointer and allocates through sub_100bf5b0 (stub 0x1000be6a), returns this
	void sub_100bf5b0(int numDwords);	// allocates the dword storage (stub 0x1000be6a)
	void sub_100bf600(int numDwords);	// resizes the dword storage to numDwords (0 frees it); switches between the inline dword and heap memory
	void sub_100bf6a0();	// releases the dword storage
	void sub_100bf480(int nBits);	// "CBitString::Resize": sets the bit count; reallocates when the dword count changes (new dwords cleared; when growing the stale bits above the old bit count in the last old dword are cleared with the mask table at 0x1055b298)
};

void __fastcall sub_10307890(CBitString *pBits);	// 0x10307890: zeroes the m_nDwords dwords at m_pData (+0x08 / +0x02)
