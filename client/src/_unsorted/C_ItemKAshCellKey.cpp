// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10026c10 size=0x1e
#include "C_ItemKAshCellKey.h"

// VC6 writes C_ItemKAshCellKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKAshCellKey *pcd_emit_10026c10() { return new C_ItemKAshCellKey; }

// TARGET: ??_GC_ItemKAshCellKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10026c40 size=0x3
#include "C_ItemKAshCellKey.h"
int C_ItemKAshCellKey::vfunc15()
{
    return 0;
}
// END FUNCTION
