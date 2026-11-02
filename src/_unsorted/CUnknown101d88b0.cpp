// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d8720 size=0x38
#include "CUnknown101d88b0.h"

CUnknown101d88b0::CUnknown101d88b0(CVDmgSource_t *pFirst, CVDmgBlock16_t *pBlock, int nTotal)
{
	int nDice = pBlock->sub_10204900(pFirst);
	sub_101d88b0(pFirst, 0, pBlock, nDice, nTotal, 0);
}
// END FUNCTION

// FUNCTION: 0x101d8770 size=0x30
#include "CUnknown101d88b0.h"

CUnknown101d88b0::CUnknown101d88b0(CVDmgSource_t *pFirst, const CVDmgBlock16_t *pBlock, int nDice, int nTotal)
{
	sub_101d88b0(pFirst, 0, pBlock, nDice, nTotal, 0);
}
// END FUNCTION

// FUNCTION: 0x101d87b0 size=0x42
#include "CUnknown101d88b0.h"
CUnknown101d88b0::CUnknown101d88b0(CVDmgSource_t *pFirst, CVDmgSource_t *pSecond, int nDice, int nTotal)
{
	CVDmgBlock16_t block;
	sub_101d88b0(pFirst, pSecond, &block, nDice, nTotal, 0);
}
// END FUNCTION
