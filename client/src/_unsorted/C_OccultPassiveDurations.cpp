// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10014200 size=0x6
#include "C_OccultPassiveDurations.h"
namespace lifted {
extern char g_10273128;
}
int C_OccultPassiveDurations::vfunc17()
{
    return (int)&lifted::g_10273128;
}
// END FUNCTION

// FUNCTION: 0x10014290 size=0x1e
#include "C_OccultPassiveDurations.h"

// VC6 writes C_OccultPassiveDurations's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultPassiveDurations *pcd_emit_10014290() { return new C_OccultPassiveDurations; }

// TARGET: ??_GC_OccultPassiveDurations@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100142b0 size=0x6
#include "C_OccultPassiveDurations.h"
namespace lifted {
extern char g_10274918;
}
int C_OccultPassiveDurations::vfunc16()
{
    return (int)&lifted::g_10274918;
}
// END FUNCTION

// FUNCTION: 0x100142c0 size=0x3
#include "C_OccultPassiveDurations.h"
int C_OccultPassiveDurations::vfunc15()
{
    return 0;
}
// END FUNCTION
