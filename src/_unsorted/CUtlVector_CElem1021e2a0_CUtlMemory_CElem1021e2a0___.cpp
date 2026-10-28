// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1021e2a0 size=0x55
// TARGET: ?ShiftElementsRight@?$CUtlVector@UCElem1021e2a0@@V?$CUtlMemory@UCElem1021e2a0@@@@@@QAEXHH@Z
#include "utlvector.h"
struct CElem1021e2a0 { char data[0xd4]; };
static void (CUtlVector<CElem1021e2a0>::*s_Shift)(int, int) = &CUtlVector<CElem1021e2a0>::ShiftElementsRight;
// END FUNCTION
