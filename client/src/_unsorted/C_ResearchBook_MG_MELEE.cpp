// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10011f00 size=0x6
#include "C_ResearchBook_MG_MELEE.h"
namespace lifted {
extern char g_10272fa0;
}
int C_ResearchBook_MG_MELEE::vfunc17()
{
    return (int)&lifted::g_10272fa0;
}
// END FUNCTION

// FUNCTION: 0x10011f90 size=0x1e
#include "C_ResearchBook_MG_MELEE.h"

// VC6 writes C_ResearchBook_MG_MELEE's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_MG_MELEE *pcd_emit_10011f90() { return new C_ResearchBook_MG_MELEE; }

// TARGET: ??_GC_ResearchBook_MG_MELEE@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10011fc0 size=0x3
#include "C_ResearchBook_MG_MELEE.h"
int C_ResearchBook_MG_MELEE::vfunc15()
{
    return 0;
}
// END FUNCTION
