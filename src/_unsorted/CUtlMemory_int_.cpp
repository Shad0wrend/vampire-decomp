// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002cca0 size=0x3
#include "Vector.h"
// TARGET: ?Base@?$CUtlMemory@H@@QAEPAHXZ
#include "utlmemory.h"
// one member, not a definition of its own: utlmemory.h's inline Base, so every block's copy is the same COMDAT
static int *(CUtlMemory<int>::*s_Base)() = &CUtlMemory<int>::Base;
// END FUNCTION
