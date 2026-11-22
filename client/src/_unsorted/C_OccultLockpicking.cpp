// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10012b80 size=0x6
#include "C_OccultLockpicking.h"
namespace lifted {
extern char g_1027302c;
}
int C_OccultLockpicking::vfunc17()
{
    return (int)&lifted::g_1027302c;
}
// END FUNCTION

// FUNCTION: 0x10012c10 size=0x1e
#include "C_OccultLockpicking.h"

// VC6 writes C_OccultLockpicking's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultLockpicking *pcd_emit_10012c10() { return new C_OccultLockpicking; }

// TARGET: ??_GC_OccultLockpicking@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10012c40 size=0x3
#include "C_OccultLockpicking.h"
int C_OccultLockpicking::vfunc15()
{
    return 0;
}
// END FUNCTION
