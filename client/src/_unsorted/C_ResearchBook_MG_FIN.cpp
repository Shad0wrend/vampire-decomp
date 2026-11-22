// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10011090 size=0x1e
#include "C_ResearchBook_MG_FIN.h"

// VC6 writes C_ResearchBook_MG_FIN's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_MG_FIN *pcd_emit_10011090() { return new C_ResearchBook_MG_FIN; }

// TARGET: ??_GC_ResearchBook_MG_FIN@@UAEPAXI@Z
// END FUNCTION
