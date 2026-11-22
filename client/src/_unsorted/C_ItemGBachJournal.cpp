// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001a910 size=0x1e
#include "C_ItemGBachJournal.h"

// VC6 writes C_ItemGBachJournal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGBachJournal *pcd_emit_1001a910() { return new C_ItemGBachJournal; }

// TARGET: ??_GC_ItemGBachJournal@@UAEPAXI@Z
// END FUNCTION
