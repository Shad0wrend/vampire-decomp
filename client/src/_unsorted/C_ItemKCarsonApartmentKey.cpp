// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10023f10 size=0x1e
#include "C_ItemKCarsonApartmentKey.h"

// VC6 writes C_ItemKCarsonApartmentKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKCarsonApartmentKey *pcd_emit_10023f10() { return new C_ItemKCarsonApartmentKey; }

// TARGET: ??_GC_ItemKCarsonApartmentKey@@UAEPAXI@Z
// END FUNCTION
