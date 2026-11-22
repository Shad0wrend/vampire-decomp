// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10013110 size=0x1e
#include "C_OccultObfuscate.h"

// VC6 writes C_OccultObfuscate's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultObfuscate *pcd_emit_10013110() { return new C_OccultObfuscate; }

// TARGET: ??_GC_OccultObfuscate@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10013140 size=0x3
#include "C_OccultObfuscate.h"
int C_OccultObfuscate::vfunc15()
{
    return 0;
}
// END FUNCTION
