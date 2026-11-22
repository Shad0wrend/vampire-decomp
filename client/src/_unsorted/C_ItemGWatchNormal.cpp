// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10018890 size=0x1e
#include "C_ItemGWatchNormal.h"

// VC6 writes C_ItemGWatchNormal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWatchNormal *pcd_emit_10018890() { return new C_ItemGWatchNormal; }

// TARGET: ??_GC_ItemGWatchNormal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100188c0 size=0x3
#include "C_ItemGWatchNormal.h"
int C_ItemGWatchNormal::vfunc15()
{
    return 0;
}
// END FUNCTION
