// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007f6f0 size=0x1e
#include "C_BaseViewModel.h"

// VC6 writes C_BaseViewModel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseViewModel *pcd_emit_1007f6f0() { return new C_BaseViewModel; }

// TARGET: ??_GC_BaseViewModel@@UAEPAXI@Z
// END FUNCTION
