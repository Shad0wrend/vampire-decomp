// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10021e90 size=0x1e
#include "C_ItemKClinicStairsKey.h"

// VC6 writes C_ItemKClinicStairsKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKClinicStairsKey *pcd_emit_10021e90() { return new C_ItemKClinicStairsKey; }

// TARGET: ??_GC_ItemKClinicStairsKey@@UAEPAXI@Z
// END FUNCTION
