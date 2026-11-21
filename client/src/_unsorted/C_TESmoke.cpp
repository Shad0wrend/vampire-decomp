// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003ee40 size=0x1e
#include "C_TESmoke.h"

// VC6 writes C_TESmoke's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TESmoke *pcd_emit_1003ee40() { return new C_TESmoke; }

// TARGET: ??_GC_TESmoke@@UAEPAXI@Z
// END FUNCTION
