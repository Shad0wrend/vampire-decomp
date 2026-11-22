// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001ef10 size=0x1e
#include "C_ItemGIdolDragon.h"

// VC6 writes C_ItemGIdolDragon's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGIdolDragon *pcd_emit_1001ef10() { return new C_ItemGIdolDragon; }

// TARGET: ??_GC_ItemGIdolDragon@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001ef40 size=0x3
#include "C_ItemGIdolDragon.h"
int C_ItemGIdolDragon::vfunc15()
{
    return 0;
}
// END FUNCTION
