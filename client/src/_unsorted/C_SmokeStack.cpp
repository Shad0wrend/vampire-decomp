// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1002fcf0 size=0x1e
#include "C_SmokeStack.h"

// VC6 writes C_SmokeStack's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_SmokeStack *pcd_emit_1002fcf0() { return new C_SmokeStack; }

// TARGET: ??_GC_SmokeStack@@UAEPAXI@Z
// END FUNCTION
