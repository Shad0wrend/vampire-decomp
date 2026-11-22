// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10025f90 size=0x1e
#include "C_ItemKHitmanLuKey.h"

// VC6 writes C_ItemKHitmanLuKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKHitmanLuKey *pcd_emit_10025f90() { return new C_ItemKHitmanLuKey; }

// TARGET: ??_GC_ItemKHitmanLuKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10025fc0 size=0x3
#include "C_ItemKHitmanLuKey.h"
int C_ItemKHitmanLuKey::vfunc15()
{
    return 0;
}
// END FUNCTION
