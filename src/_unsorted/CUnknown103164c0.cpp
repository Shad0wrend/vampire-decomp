// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103164c0 size=0x73
#include "CUnknown103164c0.h"

// TARGET: CUnknown103164c0::CUnknown103164c0
CUnknown103164c0::CUnknown103164c0(const char *pszName)
{
	m_base.sub_102e06f0();
	for (int i = 0; i < 16; i++)
		m_hMembers[i] = 0xffffffff;
	CBitString *pBits = &m_bits;
	pBits->m_nBits = 32;
	pBits->m_nDwords = 1;
	pBits->m_pData = 0;
	pBits->sub_100bf5b0(1);
	if (pBits->m_pData)
		memset(pBits->m_pData, 0, pBits->m_nDwords * 4);
	m_n70 = -1;
	sub_103165f0(pszName);
}
// END FUNCTION
