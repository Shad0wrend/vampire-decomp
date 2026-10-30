// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102e2b10 size=0x3e
#include "vampire.h"
#include "utlvector.h"
#include "CAI_InterestTarget.h"

// TARGET: CUtlVector<CAI_InterestTarget,CUtlMemory<CAI_InterestTarget> >::ShiftElementsLeft
// the inline template member, instantiated alone (a COMDAT like the copy CAI_Motor::vfunc15's Remove emits)
static void (CUtlVector<CAI_InterestTarget, CUtlMemory<CAI_InterestTarget> >::*s_ShiftElementsLeft)(int, int) =
    &CUtlVector<CAI_InterestTarget, CUtlMemory<CAI_InterestTarget> >::ShiftElementsLeft;
// END FUNCTION
