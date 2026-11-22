// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10011780 size=0x6
#include "C_ResearchBook_LG_DODGE.h"
namespace lifted {
extern char g_10272f4c;
}
int C_ResearchBook_LG_DODGE::vfunc17()
{
    return (int)&lifted::g_10272f4c;
}
// END FUNCTION

// FUNCTION: 0x10011810 size=0x1e
#include "C_ResearchBook_LG_DODGE.h"

// VC6 writes C_ResearchBook_LG_DODGE's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_LG_DODGE *pcd_emit_10011810() { return new C_ResearchBook_LG_DODGE; }

// TARGET: ??_GC_ResearchBook_LG_DODGE@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10011830 size=0x6
#include "C_ResearchBook_LG_DODGE.h"
namespace lifted {
extern char g_10274a84;
}
int C_ResearchBook_LG_DODGE::vfunc16()
{
    return (int)&lifted::g_10274a84;
}
// END FUNCTION

// FUNCTION: 0x10011840 size=0x3
#include "C_ResearchBook_LG_DODGE.h"
int C_ResearchBook_LG_DODGE::vfunc15()
{
    return 0;
}
// END FUNCTION
