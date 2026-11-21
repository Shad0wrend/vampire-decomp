// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10026990 size=0x1e
#include "C_ItemKMuseumOfficeKey.h"

// VC6 writes C_ItemKMuseumOfficeKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKMuseumOfficeKey *pcd_emit_10026990() { return new C_ItemKMuseumOfficeKey; }

// TARGET: ??_GC_ItemKMuseumOfficeKey@@UAEPAXI@Z
// END FUNCTION
