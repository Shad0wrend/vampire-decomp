// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10011a00 size=0x6
#include "C_ResearchBook_HG_MELEE.h"
namespace lifted {
extern char g_10272f68;
}
int C_ResearchBook_HG_MELEE::vfunc17()
{
    return (int)&lifted::g_10272f68;
}
// END FUNCTION

// FUNCTION: 0x10011a90 size=0x1e
#include "C_ResearchBook_HG_MELEE.h"

// VC6 writes C_ResearchBook_HG_MELEE's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_HG_MELEE *pcd_emit_10011a90() { return new C_ResearchBook_HG_MELEE; }

// TARGET: ??_GC_ResearchBook_HG_MELEE@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10011ab0 size=0x6
#include "C_ResearchBook_HG_MELEE.h"
namespace lifted {
extern char g_10274a6c;
}
int C_ResearchBook_HG_MELEE::vfunc16()
{
    return (int)&lifted::g_10274a6c;
}
// END FUNCTION

// FUNCTION: 0x10011ac0 size=0x3
#include "C_ResearchBook_HG_MELEE.h"
int C_ResearchBook_HG_MELEE::vfunc15()
{
    return 0;
}
// END FUNCTION
