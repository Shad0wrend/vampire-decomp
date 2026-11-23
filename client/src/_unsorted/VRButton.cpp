// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017b160 size=0x1e
#include "VRButton.h"

// VC6 writes VRButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VRButton *pcd_emit_1017b160(const VRButton &other) { return new VRButton(other); }

// TARGET: ??_GVRButton@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017b2d0 size=0x25
#include "VRButton.h"
namespace lifted {
extern int g_105fb6e4;
struct C10181ad0 { int sub_10181ad0(int); };
struct C101b4210 { int sub_101b4210(); };
}
void VRButton::vfunc85()
{
    int t0 = ((lifted::C101b4210 *)this)->sub_101b4210();
    if ((*(int *)((char *)this + 0xf0)) != -1) {
        if (lifted::g_105fb6e4 != 0) {
            ((lifted::C10181ad0 *)lifted::g_105fb6e4)->sub_10181ad0(*(int *)((char *)this + 0xf0));
        }
    }
}
// END FUNCTION
