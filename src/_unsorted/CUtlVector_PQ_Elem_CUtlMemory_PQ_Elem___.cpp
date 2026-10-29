// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10047200 size=0x52
#include "utlvector.h"
struct PQ_Elem { char data[0x38]; };
static void (CUtlVector<PQ_Elem>::*s_ShiftElementsRight)(int, int) = &CUtlVector<PQ_Elem>::ShiftElementsRight;
// END FUNCTION
