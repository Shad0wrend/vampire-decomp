// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10010880 size=0x6
#include "C_ResearchBook_LG_COMP.h"
namespace lifted {
extern char g_10272ea4;
}
int C_ResearchBook_LG_COMP::vfunc17()
{
    return (int)&lifted::g_10272ea4;
}
// END FUNCTION

// FUNCTION: 0x10010910 size=0x1e
#include "C_ResearchBook_LG_COMP.h"

// VC6 writes C_ResearchBook_LG_COMP's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_LG_COMP *pcd_emit_10010910() { return new C_ResearchBook_LG_COMP; }

// TARGET: ??_GC_ResearchBook_LG_COMP@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10010930 size=0x6
#include "C_ResearchBook_LG_COMP.h"
namespace lifted {
extern char g_10274b14;
}
int C_ResearchBook_LG_COMP::vfunc16()
{
    return (int)&lifted::g_10274b14;
}
// END FUNCTION

// FUNCTION: 0x10010940 size=0x3
#include "C_ResearchBook_LG_COMP.h"
int C_ResearchBook_LG_COMP::vfunc15()
{
    return 0;
}
// END FUNCTION
