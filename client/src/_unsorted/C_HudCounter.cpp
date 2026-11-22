// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bbe20 size=0x6
#include "C_HudCounter.h"
namespace lifted {
extern char g_102b4ca4;
}
int C_HudCounter::vfunc16()
{
    return (int)&lifted::g_102b4ca4;
}
// END FUNCTION

// FUNCTION: 0x100bbe30 size=0x3
#include "C_HudCounter.h"
int C_HudCounter::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100bc0b0 size=0x1e
#include "C_HudCounter.h"

// VC6 writes C_HudCounter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_HudCounter *pcd_emit_100bc0b0() { return new C_HudCounter; }

// TARGET: ??_GC_HudCounter@@UAEPAXI@Z
// END FUNCTION
