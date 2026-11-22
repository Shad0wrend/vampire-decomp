// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001e790 size=0x1e
#include "C_ItemGJunkyardBusinesscard.h"

// VC6 writes C_ItemGJunkyardBusinesscard's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGJunkyardBusinesscard *pcd_emit_1001e790() { return new C_ItemGJunkyardBusinesscard; }

// TARGET: ??_GC_ItemGJunkyardBusinesscard@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001e7c0 size=0x3
#include "C_ItemGJunkyardBusinesscard.h"
int C_ItemGJunkyardBusinesscard::vfunc15()
{
    return 0;
}
// END FUNCTION
