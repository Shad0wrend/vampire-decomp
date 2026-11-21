// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007f1e0 size=0x1e
#include "C_BaseGrenade.h"

// VC6 writes C_BaseGrenade's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseGrenade *pcd_emit_1007f1e0() { return new C_BaseGrenade; }

// TARGET: ??_GC_BaseGrenade@@UAEPAXI@Z
// END FUNCTION
