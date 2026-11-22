// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001f410 size=0x1e
#include "C_ItemGGarysCD.h"

// VC6 writes C_ItemGGarysCD's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGarysCD *pcd_emit_1001f410() { return new C_ItemGGarysCD; }

// TARGET: ??_GC_ItemGGarysCD@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001f440 size=0x3
#include "C_ItemGGarysCD.h"
int C_ItemGGarysCD::vfunc15()
{
    return 0;
}
// END FUNCTION
