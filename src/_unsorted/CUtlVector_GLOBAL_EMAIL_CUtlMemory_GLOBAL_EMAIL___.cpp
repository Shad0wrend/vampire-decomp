// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101856e0 size=0x42
// TARGET: ?ShiftElementsRight@?$CUtlVector@UGLOBAL_EMAIL@@V?$CUtlMemory@UGLOBAL_EMAIL@@@@@@QAEXHH@Z
#include "utlrbtree.h"
#include "utlvector.h"
#include "CGlobalEmailRec.h"
// one member, not a definition of its own: utlvector.h's inline ShiftElementsRight, so every block's copy is the same COMDAT
static void (CUtlVector<GLOBAL_EMAIL, CUtlMemory<GLOBAL_EMAIL> >::*s_ShiftElementsRight)(int, int) = &CUtlVector<GLOBAL_EMAIL, CUtlMemory<GLOBAL_EMAIL> >::ShiftElementsRight;
// END FUNCTION
