// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10021c10 size=0x1e
#include "C_ItemKClinicMaintenanceKey.h"

// VC6 writes C_ItemKClinicMaintenanceKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKClinicMaintenanceKey *pcd_emit_10021c10() { return new C_ItemKClinicMaintenanceKey; }

// TARGET: ??_GC_ItemKClinicMaintenanceKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10021c40 size=0x3
#include "C_ItemKClinicMaintenanceKey.h"
int C_ItemKClinicMaintenanceKey::vfunc15()
{
    return 0;
}
// END FUNCTION
