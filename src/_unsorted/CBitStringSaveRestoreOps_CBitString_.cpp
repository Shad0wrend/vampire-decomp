// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10045770 size=0x5
// TARGET: sub_10045770
bool __stdcall sub_10045770(int a, int b)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x10316c70 size=0x3a
#include "CBitStringSaveRestoreOps.h"
#include "CSave.h"
// TARGET: CBitStringSaveRestoreOps<CBitString>::vfunc0
void CBitStringSaveRestoreOps<CBitString>::vfunc0(CBitString **ppBits, CSave *pSave)
{
	CBitString *pBits = *ppBits;
	int nBits = pBits->m_nBits;
	pSave->vfunc10(&nBits, 1);
	pSave->vfunc10(pBits->m_pData, pBits->m_nDwords);
}
// END FUNCTION

// FUNCTION: 0x10316d10 size=0x2b
#include "CBitStringSaveRestoreOps.h"

// TARGET: CBitStringSaveRestoreOps<CBitString>::vfunc3
void CBitStringSaveRestoreOps<CBitString>::vfunc3(CBitString **ppBits)
{
	CBitString *p = *ppBits;
	if (p->m_pData)
		memset(p->m_pData, 0, p->m_nDwords * 4);
}
// END FUNCTION

// FUNCTION: 0x10316d50 size=0x5c
#include "CBitStringSaveRestoreOps.h"

extern unsigned int g_1055b298[32];

bool CBitStringSaveRestoreOps<CBitString>::vfunc2(CBitString **ppBits)
{
	CBitString *p = *ppBits;
	p->m_pData[p->m_nDwords - 1] &= ~g_1055b298[p->m_nBits % 32];
	for (int i = p->m_nDwords - 1; i >= 0; i--)
	{
		if (p->m_pData[i])
			return false;
	}
	return true;
}
// END FUNCTION
