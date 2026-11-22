// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005d850 size=0x6
#include "C_HudTimer.h"
namespace lifted {
extern char g_10286f34;
}
int C_HudTimer::vfunc16()
{
    return (int)&lifted::g_10286f34;
}
// END FUNCTION

// FUNCTION: 0x1005d860 size=0x3
#include "C_HudTimer.h"
int C_HudTimer::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1005d930 size=0x1e
#include "C_HudTimer.h"

// VC6 writes C_HudTimer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_HudTimer *pcd_emit_1005d930() { return new C_HudTimer; }

// TARGET: ??_GC_HudTimer@@UAEPAXI@Z
// END FUNCTION
