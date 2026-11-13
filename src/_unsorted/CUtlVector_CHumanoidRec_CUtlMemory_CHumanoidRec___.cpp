// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10260930 size=0x3e
#include "utlrbtree.h"
#include "utlvector.h"
#include "CHumanoidRec.h"
// TARGET: ?ShiftElementsRight@?$CUtlVector@UCHumanoidRec@@V?$CUtlMemory@UCHumanoidRec@@@@@@QAEXHH@Z
// one member, not a definition of its own: utlvector.h's inline ShiftElementsRight, so every block's copy is the same COMDAT
static void (CUtlVector<CHumanoidRec, CUtlMemory<CHumanoidRec> >::*s_ShiftElementsRight)(int, int) = &CUtlVector<CHumanoidRec, CUtlMemory<CHumanoidRec> >::ShiftElementsRight;
// END FUNCTION
