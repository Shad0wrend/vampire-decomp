// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10041740 size=0x1e
#include "C_TestTraceline.h"

// VC6 writes C_TestTraceline's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TestTraceline *pcd_emit_10041740() { return new C_TestTraceline; }

// TARGET: ??_GC_TestTraceline@@UAEPAXI@Z
// END FUNCTION
