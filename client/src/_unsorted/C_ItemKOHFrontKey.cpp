// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10025810 size=0x1e
#include "C_ItemKOHFrontKey.h"

// VC6 writes C_ItemKOHFrontKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKOHFrontKey *pcd_emit_10025810() { return new C_ItemKOHFrontKey; }

// TARGET: ??_GC_ItemKOHFrontKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10025840 size=0x3
#include "C_ItemKOHFrontKey.h"
int C_ItemKOHFrontKey::vfunc15()
{
    return 0;
}
// END FUNCTION
