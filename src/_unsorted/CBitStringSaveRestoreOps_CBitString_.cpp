// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
