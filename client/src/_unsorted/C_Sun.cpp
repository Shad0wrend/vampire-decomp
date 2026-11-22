// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c4f00 size=0x1e
#include "C_Sun.h"

// VC6 writes C_Sun's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_Sun *pcd_emit_100c4f00() { return new C_Sun; }

// TARGET: ??_GC_Sun@@UAEPAXI@Z
// END FUNCTION
