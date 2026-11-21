// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10011d10 size=0x1e
#include "C_ResearchBook_HG_DODGE.h"

// VC6 writes C_ResearchBook_HG_DODGE's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_HG_DODGE *pcd_emit_10011d10() { return new C_ResearchBook_HG_DODGE; }

// TARGET: ??_GC_ResearchBook_HG_DODGE@@UAEPAXI@Z
// END FUNCTION
