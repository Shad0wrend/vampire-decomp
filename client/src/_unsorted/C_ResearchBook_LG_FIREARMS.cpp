// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10012400 size=0x6
#include "C_ResearchBook_LG_FIREARMS.h"
namespace lifted {
extern char g_10272fd8;
}
int C_ResearchBook_LG_FIREARMS::vfunc17()
{
    return (int)&lifted::g_10272fd8;
}
// END FUNCTION

// FUNCTION: 0x10012490 size=0x1e
#include "C_ResearchBook_LG_FIREARMS.h"

// VC6 writes C_ResearchBook_LG_FIREARMS's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_LG_FIREARMS *pcd_emit_10012490() { return new C_ResearchBook_LG_FIREARMS; }

// TARGET: ??_GC_ResearchBook_LG_FIREARMS@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100124b0 size=0x6
#include "C_ResearchBook_LG_FIREARMS.h"
namespace lifted {
extern char g_10274a04;
}
int C_ResearchBook_LG_FIREARMS::vfunc16()
{
    return (int)&lifted::g_10274a04;
}
// END FUNCTION

// FUNCTION: 0x100124c0 size=0x3
#include "C_ResearchBook_LG_FIREARMS.h"
int C_ResearchBook_LG_FIREARMS::vfunc15()
{
    return 0;
}
// END FUNCTION
