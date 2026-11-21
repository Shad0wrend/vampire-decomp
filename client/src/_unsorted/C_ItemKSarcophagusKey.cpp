// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10025590 size=0x1e
#include "C_ItemKSarcophagusKey.h"

// VC6 writes C_ItemKSarcophagusKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKSarcophagusKey *pcd_emit_10025590() { return new C_ItemKSarcophagusKey; }

// TARGET: ??_GC_ItemKSarcophagusKey@@UAEPAXI@Z
// END FUNCTION
