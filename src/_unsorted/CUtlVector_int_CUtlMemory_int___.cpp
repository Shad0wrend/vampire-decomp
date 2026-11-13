// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b4790 size=0x3d
#include "utlrbtree.h"
#include "utlvector.h"
// TARGET: ?Purge@?$CUtlVector@HV?$CUtlMemory@H@@@@QAEXXZ
// one member, not a definition of its own: utlvector.h's inline Purge, so every block's copy is the same COMDAT
static void (CUtlVector<int, CUtlMemory<int> >::*s_Purge)() = &CUtlVector<int, CUtlMemory<int> >::Purge;
// END FUNCTION

// FUNCTION: 0x101850b0 size=0x35
#include "utlrbtree.h"
#include "utlvector.h"
// TARGET: ShiftElementsLeft
void CUtlVector<int>::ShiftElementsLeft(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if ((numToMove > 0) && (num > 0))
		memmove(&Element(elem), &Element(elem + num), numToMove * sizeof(int));
}
// END FUNCTION
