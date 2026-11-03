// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10260930 size=0x3e
#include "utlrbtree.h"
#include "utlvector.h"
#include "CHumanoidRec.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

template <>
void CUtlVector<CHumanoidRec, CUtlMemory<CHumanoidRec> >::ShiftElementsRight(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&Element(elem + num), &Element(elem), numToMove * sizeof(CHumanoidRec));
}
// END FUNCTION
