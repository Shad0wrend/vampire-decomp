// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10035650 size=0x1e
#include "C_TEBubbles.h"

// VC6 writes C_TEBubbles's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBubbles *pcd_emit_10035650() { return new C_TEBubbles; }

// TARGET: ??_GC_TEBubbles@@UAEPAXI@Z
// END FUNCTION
