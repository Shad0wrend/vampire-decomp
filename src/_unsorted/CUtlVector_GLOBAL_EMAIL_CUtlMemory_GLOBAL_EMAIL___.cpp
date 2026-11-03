// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101856e0 size=0x42
#include "utlvector.h"
#include "CGlobalEmailRec.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

template <>
void CUtlVector<GLOBAL_EMAIL, CUtlMemory<GLOBAL_EMAIL> >::ShiftElementsRight(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&Element(elem + num), &Element(elem), numToMove * sizeof(GLOBAL_EMAIL));
}
// END FUNCTION
