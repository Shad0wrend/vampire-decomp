// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ba960 size=0x1e
#include "C_Func_Dust.h"

// VC6 writes C_Func_Dust's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_Func_Dust *pcd_emit_100ba960() { return new C_Func_Dust; }

// TARGET: ??_GC_Func_Dust@@UAEPAXI@Z
// END FUNCTION
