// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10011c80 size=0x6
#include "C_ResearchBook_HG_DODGE.h"
namespace lifted {
extern char g_10272f84;
}
int C_ResearchBook_HG_DODGE::vfunc17()
{
    return (int)&lifted::g_10272f84;
}
// END FUNCTION

// FUNCTION: 0x10011d10 size=0x1e
#include "C_ResearchBook_HG_DODGE.h"

// VC6 writes C_ResearchBook_HG_DODGE's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_HG_DODGE *pcd_emit_10011d10() { return new C_ResearchBook_HG_DODGE; }

// TARGET: ??_GC_ResearchBook_HG_DODGE@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10011d30 size=0x6
#include "C_ResearchBook_HG_DODGE.h"
namespace lifted {
extern char g_10274a54;
}
int C_ResearchBook_HG_DODGE::vfunc16()
{
    return (int)&lifted::g_10274a54;
}
// END FUNCTION

// FUNCTION: 0x10011d40 size=0x3
#include "C_ResearchBook_HG_DODGE.h"
int C_ResearchBook_HG_DODGE::vfunc15()
{
    return 0;
}
// END FUNCTION
