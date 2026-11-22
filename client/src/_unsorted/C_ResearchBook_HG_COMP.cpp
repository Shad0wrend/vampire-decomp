// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10010b90 size=0x1e
#include "C_ResearchBook_HG_COMP.h"

// VC6 writes C_ResearchBook_HG_COMP's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_HG_COMP *pcd_emit_10010b90() { return new C_ResearchBook_HG_COMP; }

// TARGET: ??_GC_ResearchBook_HG_COMP@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10010bc0 size=0x3
#include "C_ResearchBook_HG_COMP.h"
int C_ResearchBook_HG_COMP::vfunc15()
{
    return 0;
}
// END FUNCTION
