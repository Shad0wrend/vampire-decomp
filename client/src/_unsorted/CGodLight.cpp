// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004a000 size=0x1e
#include "CGodLight.h"

// VC6 writes CGodLight's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CGodLight *pcd_emit_1004a000() { return new CGodLight; }

// TARGET: ??_GCGodLight@@UAEPAXI@Z
// END FUNCTION
