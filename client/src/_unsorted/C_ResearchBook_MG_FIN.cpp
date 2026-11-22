// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10011000 size=0x6
#include "C_ResearchBook_MG_FIN.h"
namespace lifted {
extern char g_10272ef8;
}
int C_ResearchBook_MG_FIN::vfunc17()
{
    return (int)&lifted::g_10272ef8;
}
// END FUNCTION

// FUNCTION: 0x10011090 size=0x1e
#include "C_ResearchBook_MG_FIN.h"

// VC6 writes C_ResearchBook_MG_FIN's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_MG_FIN *pcd_emit_10011090() { return new C_ResearchBook_MG_FIN; }

// TARGET: ??_GC_ResearchBook_MG_FIN@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100110b0 size=0x6
#include "C_ResearchBook_MG_FIN.h"
namespace lifted {
extern char g_10274acc;
}
int C_ResearchBook_MG_FIN::vfunc16()
{
    return (int)&lifted::g_10274acc;
}
// END FUNCTION

// FUNCTION: 0x100110c0 size=0x3
#include "C_ResearchBook_MG_FIN.h"
int C_ResearchBook_MG_FIN::vfunc15()
{
    return 0;
}
// END FUNCTION
