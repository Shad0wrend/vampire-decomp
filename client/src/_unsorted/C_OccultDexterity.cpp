// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10013300 size=0x6
#include "C_OccultDexterity.h"
namespace lifted {
extern char g_10273080;
}
int C_OccultDexterity::vfunc17()
{
    return (int)&lifted::g_10273080;
}
// END FUNCTION

// FUNCTION: 0x10013390 size=0x1e
#include "C_OccultDexterity.h"

// VC6 writes C_OccultDexterity's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultDexterity *pcd_emit_10013390() { return new C_OccultDexterity; }

// TARGET: ??_GC_OccultDexterity@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100133c0 size=0x3
#include "C_OccultDexterity.h"
int C_OccultDexterity::vfunc15()
{
    return 0;
}
// END FUNCTION
