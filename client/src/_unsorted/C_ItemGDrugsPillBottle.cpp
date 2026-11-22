// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10017210 size=0x1e
#include "C_ItemGDrugsPillBottle.h"

// VC6 writes C_ItemGDrugsPillBottle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGDrugsPillBottle *pcd_emit_10017210() { return new C_ItemGDrugsPillBottle; }

// TARGET: ??_GC_ItemGDrugsPillBottle@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10017240 size=0x3
#include "C_ItemGDrugsPillBottle.h"
int C_ItemGDrugsPillBottle::vfunc15()
{
    return 0;
}
// END FUNCTION
