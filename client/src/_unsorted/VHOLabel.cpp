// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017d220 size=0x1e
#include "VHOLabel.h"

// VC6 writes VHOLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VHOLabel *pcd_emit_1017d220() { return new VHOLabel; }

// TARGET: ??_GVHOLabel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017d3f0 size=0xe
#include "VHOLabel.h"
namespace lifted {
extern int g_105fb6e4;
struct C10182100 { int sub_10182100(int); };
}
void VHOLabel::vfunc86()
{
    ((lifted::C10182100 *)lifted::g_105fb6e4)->sub_10182100(0);
}
// END FUNCTION
