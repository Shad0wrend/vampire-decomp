// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001c490 size=0x1e
#include "C_ItemGBadluckTalisman.h"

// VC6 writes C_ItemGBadluckTalisman's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGBadluckTalisman *pcd_emit_1001c490() { return new C_ItemGBadluckTalisman; }

// TARGET: ??_GC_ItemGBadluckTalisman@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001c4c0 size=0x3
#include "C_ItemGBadluckTalisman.h"
int C_ItemGBadluckTalisman::vfunc15()
{
    return 0;
}
// END FUNCTION
