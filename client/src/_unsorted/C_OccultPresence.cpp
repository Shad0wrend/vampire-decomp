// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10012e00 size=0x6
#include "C_OccultPresence.h"
namespace lifted {
extern char g_10273048;
}
int C_OccultPresence::vfunc17()
{
    return (int)&lifted::g_10273048;
}
// END FUNCTION

// FUNCTION: 0x10012e90 size=0x1e
#include "C_OccultPresence.h"

// VC6 writes C_OccultPresence's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultPresence *pcd_emit_10012e90() { return new C_OccultPresence; }

// TARGET: ??_GC_OccultPresence@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10012eb0 size=0x6
#include "C_OccultPresence.h"
namespace lifted {
extern char g_102749bc;
}
int C_OccultPresence::vfunc16()
{
    return (int)&lifted::g_102749bc;
}
// END FUNCTION

// FUNCTION: 0x10012ec0 size=0x3
#include "C_OccultPresence.h"
int C_OccultPresence::vfunc15()
{
    return 0;
}
// END FUNCTION
