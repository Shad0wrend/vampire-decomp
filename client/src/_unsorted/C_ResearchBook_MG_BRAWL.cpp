// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10011500 size=0x6
#include "C_ResearchBook_MG_BRAWL.h"
namespace lifted {
extern char g_10272f30;
}
int C_ResearchBook_MG_BRAWL::vfunc17()
{
    return (int)&lifted::g_10272f30;
}
// END FUNCTION

// FUNCTION: 0x10011590 size=0x1e
#include "C_ResearchBook_MG_BRAWL.h"

// VC6 writes C_ResearchBook_MG_BRAWL's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ResearchBook_MG_BRAWL *pcd_emit_10011590() { return new C_ResearchBook_MG_BRAWL; }

// TARGET: ??_GC_ResearchBook_MG_BRAWL@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100115c0 size=0x3
#include "C_ResearchBook_MG_BRAWL.h"
int C_ResearchBook_MG_BRAWL::vfunc15()
{
    return 0;
}
// END FUNCTION
