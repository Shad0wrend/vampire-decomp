// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10012210 size=0x1e
#include "C_ResearchBook_LG_STEALTH.h"

// VC6 writes C_ResearchBook_LG_STEALTH's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_LG_STEALTH *pcd_emit_10012210() { return new C_ResearchBook_LG_STEALTH; }

// TARGET: ??_GC_ResearchBook_LG_STEALTH@@UAEPAXI@Z
// END FUNCTION
