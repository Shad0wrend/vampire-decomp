// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10013580 size=0x6
#include "C_OccultStrength.h"
namespace lifted {
extern char g_1027309c;
}
int C_OccultStrength::vfunc17()
{
    return (int)&lifted::g_1027309c;
}
// END FUNCTION

// FUNCTION: 0x10013610 size=0x1e
#include "C_OccultStrength.h"

// VC6 writes C_OccultStrength's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultStrength *pcd_emit_10013610() { return new C_OccultStrength; }

// TARGET: ??_GC_OccultStrength@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10013630 size=0x6
#include "C_OccultStrength.h"
namespace lifted {
extern char g_10274980;
}
int C_OccultStrength::vfunc16()
{
    return (int)&lifted::g_10274980;
}
// END FUNCTION

// FUNCTION: 0x10013640 size=0x3
#include "C_OccultStrength.h"
int C_OccultStrength::vfunc15()
{
    return 0;
}
// END FUNCTION
