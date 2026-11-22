// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101882a0 size=0x1e
#include "VQTextEntry.h"

// VC6 writes VQTextEntry's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VQTextEntry *pcd_emit_101882a0() { return new VQTextEntry; }

// TARGET: ??_GVQTextEntry@@UAEPAXI@Z
// END FUNCTION
