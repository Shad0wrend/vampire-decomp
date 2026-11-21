// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10022110 size=0x1e
#include "C_ItemKClinicCSKey.h"

// VC6 writes C_ItemKClinicCSKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKClinicCSKey *pcd_emit_10022110() { return new C_ItemKClinicCSKey; }

// TARGET: ??_GC_ItemKClinicCSKey@@UAEPAXI@Z
// END FUNCTION
