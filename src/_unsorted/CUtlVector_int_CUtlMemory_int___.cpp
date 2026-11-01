// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b4790 size=0x3d
#include "utlvector.h"

void CUtlVector<int,CUtlMemory<int> >::Purge()
{
	RemoveAll();
	m_Memory.Purge();
	ResetDbgInfo();
}
// END FUNCTION

// FUNCTION: 0x101850b0 size=0x35
#include "utlvector.h"
// TARGET: ShiftElementsLeft
void CUtlVector<int>::ShiftElementsLeft(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if ((numToMove > 0) && (num > 0))
		memmove(&Element(elem), &Element(elem + num), numToMove * sizeof(int));
}
// END FUNCTION
