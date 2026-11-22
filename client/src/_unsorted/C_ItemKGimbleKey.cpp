// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10022610 size=0x1e
#include "C_ItemKGimbleKey.h"

// VC6 writes C_ItemKGimbleKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKGimbleKey *pcd_emit_10022610() { return new C_ItemKGimbleKey; }

// TARGET: ??_GC_ItemKGimbleKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10022640 size=0x3
#include "C_ItemKGimbleKey.h"
int C_ItemKGimbleKey::vfunc15()
{
    return 0;
}
// END FUNCTION
