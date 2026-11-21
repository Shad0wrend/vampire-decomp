// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10011310 size=0x1e
#include "C_ResearchBook_HG_FIRE.h"

// VC6 writes C_ResearchBook_HG_FIRE's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_HG_FIRE *pcd_emit_10011310() { return new C_ResearchBook_HG_FIRE; }

// TARGET: ??_GC_ResearchBook_HG_FIRE@@UAEPAXI@Z
// END FUNCTION
