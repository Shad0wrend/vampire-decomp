// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fdd00 size=0x35
#include "CEnvPlayerSurfaceTrigger.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "ehandle.h"
class CEnvPlayerSurfaceTrigger;
// TARGET: ?ShiftElementsLeft@?$CUtlVector@V?$CHandle@VCEnvPlayerSurfaceTrigger@@@@V?$CUtlMemory@V?$CHandle@VCEnvPlayerSurfaceTrigger@@@@@@@@QAEXHH@Z
void CUtlVector< CHandle<CEnvPlayerSurfaceTrigger> >::ShiftElementsLeft(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if ((numToMove > 0) && (num > 0))
		memmove(&Element(elem), &Element(elem + num), numToMove * sizeof(CHandle<CEnvPlayerSurfaceTrigger>));
}
// END FUNCTION
