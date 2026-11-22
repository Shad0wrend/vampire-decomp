// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10018b10 size=0x1e
#include "C_ItemGWatchFancy.h"

// VC6 writes C_ItemGWatchFancy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWatchFancy *pcd_emit_10018b10() { return new C_ItemGWatchFancy; }

// TARGET: ??_GC_ItemGWatchFancy@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10018b40 size=0x3
#include "C_ItemGWatchFancy.h"
int C_ItemGWatchFancy::vfunc15()
{
    return 0;
}
// END FUNCTION
