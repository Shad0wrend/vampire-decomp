// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10017490 size=0x1e
#include "C_ItemGDrugsDrugBox.h"

// VC6 writes C_ItemGDrugsDrugBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGDrugsDrugBox *pcd_emit_10017490() { return new C_ItemGDrugsDrugBox; }

// TARGET: ??_GC_ItemGDrugsDrugBox@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100174c0 size=0x3
#include "C_ItemGDrugsDrugBox.h"
int C_ItemGDrugsDrugBox::vfunc15()
{
    return 0;
}
// END FUNCTION
