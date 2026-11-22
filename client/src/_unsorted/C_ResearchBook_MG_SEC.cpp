// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10010e10 size=0x1e
#include "C_ResearchBook_MG_SEC.h"

// VC6 writes C_ResearchBook_MG_SEC's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_MG_SEC *pcd_emit_10010e10() { return new C_ResearchBook_MG_SEC; }

// TARGET: ??_GC_ResearchBook_MG_SEC@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10010e40 size=0x3
#include "C_ResearchBook_MG_SEC.h"
int C_ResearchBook_MG_SEC::vfunc15()
{
    return 0;
}
// END FUNCTION
