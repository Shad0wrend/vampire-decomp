// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100561d0 size=0x1e
#include "CHudInfoBar.h"

// VC6 writes CHudInfoBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudInfoBar *pcd_emit_100561d0() { return new CHudInfoBar; }

// TARGET: ??_GCHudInfoBar@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10056b20 size=0x14
#include "CHudInfoBar.h"
namespace lifted {
struct C10056bc0 { int sub_10056bc0(int, int, int); };
}
int CHudInfoBar::vfunc116(int a0, int a1)
{
    return ((lifted::C10056bc0 *)this)->sub_10056bc0(a0, a1, 0);
}
// END FUNCTION

// FUNCTION: 0x10056b40 size=0x14
#include "CHudInfoBar.h"
namespace lifted {
struct C10056bc0 { int sub_10056bc0(int, int, int); };
}
int CHudInfoBar::vfunc115(int a0, int a1)
{
    return ((lifted::C10056bc0 *)this)->sub_10056bc0(a0, 0, a1);
}
// END FUNCTION
