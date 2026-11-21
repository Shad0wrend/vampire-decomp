// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10020f90 size=0x1e
#include "C_ItemKLillyKey.h"

// VC6 writes C_ItemKLillyKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKLillyKey *pcd_emit_10020f90() { return new C_ItemKLillyKey; }

// TARGET: ??_GC_ItemKLillyKey@@UAEPAXI@Z
// END FUNCTION
