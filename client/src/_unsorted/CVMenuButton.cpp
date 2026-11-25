// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10065300 size=0x88
#include "CVMenuButton.h"
struct CVMenuButtonView { char pad[0x30]; char b30; char pad2[4]; char b35; };
// TARGET: ??0CVMenuButton@@QAE@HHH@Z
CVMenuButton::CVMenuButton(int a, int b, int c) : vgui2::Button(a, b, c)
{
    m_b0ed = 0;
    vfunc64(1);
    vfunc63(0);
    vfunc62(0);
    sub_101aaaa0(1);
    vfunc49();
    vfunc111(4);
    vfunc136(2);
    ((CVMenuButtonView *)vfunc127())->b30 = 1;
    ((CVMenuButtonView *)vfunc127())->b35 = 0;
    sub_101aa0a0(1);
}
// END FUNCTION

// FUNCTION: 0x10065390 size=0x1e
#include "CVMenuButton.h"

// VC6 writes CVMenuButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVMenuButton *pcd_emit_10065390(const CVMenuButton &other) { return new CVMenuButton(other); }

// TARGET: ??_GCVMenuButton@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10065440 size=0x25
#include "CVMenuButton.h"
namespace lifted {
extern int g_103ef0b4;
struct C100675e0 { int sub_100675e0(int); };
struct C101b4250 { int sub_101b4250(int); };
}
void CVMenuButton::vfunc87(int a0)
{
    ((lifted::C100675e0 *)lifted::g_103ef0b4)->sub_100675e0(*(int *)((char *)this + 0xf0));
    ((lifted::C101b4250 *)this)->sub_101b4250(a0);
}
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

// FUNCTION: 0x10065490 size=0x17
#include "CVMenuButton.h"
namespace lifted {
extern int g_103ef0b4;
struct C10067950 { int sub_10067950(int); };
struct C101b4230 { int sub_101b4230(); };
}
void CVMenuButton::vfunc86()
{
    ((lifted::C10067950 *)lifted::g_103ef0b4)->sub_10067950((int)this);
    ((lifted::C101b4230 *)this)->sub_101b4230();
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
