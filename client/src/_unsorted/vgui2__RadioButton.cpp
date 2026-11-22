// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c5d30 size=0x1e
#include "vgui2__RadioButton.h"

// VC6 writes vgui2::RadioButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::RadioButton *pcd_emit_101c5d30() { return new vgui2::RadioButton; }

// TARGET: ??_GRadioButton@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c5eb0 size=0x5
#include "vgui2__RadioButton.h"
int vgui2::RadioButton::vfunc164(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101c5ec0 size=0x7
#include "vgui2__RadioButton.h"
int vgui2::RadioButton::vfunc166()
{
    return *(int *)((char *)this + 0x100);
}
// END FUNCTION

// FUNCTION: 0x101c5ed0 size=0xd
#include "vgui2__RadioButton.h"
int vgui2::RadioButton::vfunc167(int a0)
{
    *(int *)((char *)this + 0x100) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101c5ee0 size=0x7
#include "vgui2__RadioButton.h"
int vgui2::RadioButton::vfunc168()
{
    return *(int *)((char *)this + 0xf8);
}
// END FUNCTION

// FUNCTION: 0x101c6180 size=0x26
#include "vgui2__RadioButton.h"
namespace lifted {
extern char g_102da864;
struct C101b4100 { int sub_101b4100(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual int f15(int, int); };
}
int vgui2::RadioButton::vfunc76(int a0)
{
    ((lifted::C101b4100 *)this)->sub_101b4100(a0);
    return ((lifted::V *)a0)->f15((int)&lifted::g_102da864, *(int *)((char *)this + 0x100));
}
// END FUNCTION

// FUNCTION: 0x101c61b0 size=0x23
#include "vgui2__RadioButton.h"
namespace lifted {
extern char g_102da874;
extern char g_1067bca0;
int sub_101b41b0();
int sub_101d3192(int, int, int, int);
}
int vgui2::RadioButton::vfunc77()
{
    lifted::sub_101d3192((int)&lifted::g_1067bca0, 0x400, (int)&lifted::g_102da874, lifted::sub_101b41b0());
    return (int)&lifted::g_1067bca0;
}
// END FUNCTION

// FUNCTION: 0x101c64f0 size=0x6
#include "vgui2__RadioButton.h"
namespace lifted {
extern char g_102da808;
}
int vgui2::RadioButton::vfunc102()
{
    return (int)&lifted::g_102da808;
}
// END FUNCTION
