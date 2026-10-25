// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102e2b10 size=0x3e
#include "vampire.h"
#include "utlvector.h"
#include "CAI_InterestTarget.h"

// TARGET: CUtlVector<CAI_InterestTarget,CUtlMemory<CAI_InterestTarget> >::ShiftElementsLeft
void CUtlVector<CAI_InterestTarget, CUtlMemory<CAI_InterestTarget> >::ShiftElementsLeft(int elem, int num)
{
    int numToMove = m_Size - elem - num;
    if (numToMove > 0 && num > 0)
    {
        memmove(&Element(elem), &Element(elem + num), numToMove * sizeof(CAI_InterestTarget));
    }
}
// END FUNCTION
