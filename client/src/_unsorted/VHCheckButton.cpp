// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017d170 size=0x1e
#include "VHCheckButton.h"

// VC6 writes VHCheckButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VHCheckButton *pcd_emit_1017d170(const VHCheckButton &other) { return new VHCheckButton(other); }

// TARGET: ??_GVHCheckButton@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017d1a0 size=0x12
#include "VHCheckButton.h"
namespace lifted {
extern int g_105fb6e4;
struct C10181ad0 { int sub_10181ad0(int); };
}
void VHCheckButton::vfunc85()
{
    if (lifted::g_105fb6e4 != 0) {
        ((lifted::C10181ad0 *)lifted::g_105fb6e4)->sub_10181ad0(0x20);
    }
}
// END FUNCTION
