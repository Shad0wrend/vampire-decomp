// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bd330 size=0x1e
#include "C_PlayerResource.h"

// VC6 writes C_PlayerResource's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_PlayerResource *pcd_emit_100bd330() { return new C_PlayerResource; }

// TARGET: ??_GC_PlayerResource@@UAEPAXI@Z
// END FUNCTION
