// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001ec90 size=0x1e
#include "C_ItemGIdolCrane.h"

// VC6 writes C_ItemGIdolCrane's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGIdolCrane *pcd_emit_1001ec90() { return new C_ItemGIdolCrane; }

// TARGET: ??_GC_ItemGIdolCrane@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001ecc0 size=0x3
#include "C_ItemGIdolCrane.h"
int C_ItemGIdolCrane::vfunc15()
{
    return 0;
}
// END FUNCTION
