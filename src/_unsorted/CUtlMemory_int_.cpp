// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002cca0 size=0x3
#include "Vector.h"
// TARGET: ?Base@?$CUtlMemory@H@@QAEPAHXZ
#include "utlmemory.h"
// one member, not a definition of its own: utlmemory.h's inline Base, so every block's copy is the same COMDAT
typedef int *(CUtlMemory<int>::*BasePtr_t)();
// taken in a function nothing calls (a global taking it would be a dynamic initializer the game does not have): VC6 emits the inline member here
BasePtr_t pcd_emit_1002cca0() { return &CUtlMemory<int>::Base; }
// END FUNCTION
