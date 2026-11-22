// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10023290 size=0x1e
#include "C_ItemKMuseumStorageKey.h"

// VC6 writes C_ItemKMuseumStorageKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKMuseumStorageKey *pcd_emit_10023290() { return new C_ItemKMuseumStorageKey; }

// TARGET: ??_GC_ItemKMuseumStorageKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100232c0 size=0x3
#include "C_ItemKMuseumStorageKey.h"
int C_ItemKMuseumStorageKey::vfunc15()
{
    return 0;
}
// END FUNCTION
