// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10065390 size=0x1e
#include "CVMenuButton.h"

// VC6 writes CVMenuButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVMenuButton *pcd_emit_10065390() { return new CVMenuButton; }

// TARGET: ??_GCVMenuButton@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10065470 size=0x17
#include "CVMenuButton.h"
namespace lifted {
extern int g_103ef0b4;
struct C10067920 { int sub_10067920(int); };
struct C101b4210 { int sub_101b4210(); };
}
void CVMenuButton::vfunc85()
{
    ((lifted::C10067920 *)lifted::g_103ef0b4)->sub_10067920((int)this);
    ((lifted::C101b4210 *)this)->sub_101b4210();
}
// END FUNCTION

// FUNCTION: 0x100654b0 size=0x3
#include "CVMenuButton.h"
void CVMenuButton::vfunc91(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100654c0 size=0x3
#include "CVMenuButton.h"
void CVMenuButton::vfunc94(int a0)
{
}
// END FUNCTION
