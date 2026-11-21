// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10021210 size=0x1e
#include "C_ItemKMuriettaKey.h"

// VC6 writes C_ItemKMuriettaKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKMuriettaKey *pcd_emit_10021210() { return new C_ItemKMuriettaKey; }

// TARGET: ??_GC_ItemKMuriettaKey@@UAEPAXI@Z
// END FUNCTION
