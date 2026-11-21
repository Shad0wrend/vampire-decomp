// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001e290 size=0x1e
#include "C_ItemGMercurioJournal.h"

// VC6 writes C_ItemGMercurioJournal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGMercurioJournal *pcd_emit_1001e290() { return new C_ItemGMercurioJournal; }

// TARGET: ??_GC_ItemGMercurioJournal@@UAEPAXI@Z
// END FUNCTION
