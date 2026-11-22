// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10012900 size=0x6
#include "C_OccultFrenzy.h"
namespace lifted {
extern char g_10273010;
}
int C_OccultFrenzy::vfunc17()
{
    return (int)&lifted::g_10273010;
}
// END FUNCTION

// FUNCTION: 0x10012990 size=0x1e
#include "C_OccultFrenzy.h"

// VC6 writes C_OccultFrenzy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultFrenzy *pcd_emit_10012990() { return new C_OccultFrenzy; }

// TARGET: ??_GC_OccultFrenzy@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100129c0 size=0x3
#include "C_OccultFrenzy.h"
int C_OccultFrenzy::vfunc15()
{
    return 0;
}
// END FUNCTION
