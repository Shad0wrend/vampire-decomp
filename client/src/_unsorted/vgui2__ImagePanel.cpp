// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c5950 size=0x1e
#include "vgui2__ImagePanel.h"

// VC6 writes vgui2::ImagePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ImagePanel *pcd_emit_101c5950() { return new vgui2::ImagePanel; }

// TARGET: ??_GImagePanel@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c59d0 size=0x4
#include "vgui2__ImagePanel.h"
int vgui2::ImagePanel::vfunc108()
{
    return *(int *)((char *)this + 0x58);
}
// END FUNCTION

// FUNCTION: 0x101c59e0 size=0x40
#include "vgui2__ImagePanel.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual int f0(); virtual int f1(int, int); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual int f11(int, int, int, int); };
}
void vgui2::ImagePanel::vfunc97()
{
    if ((*(int *)((char *)this + 0x58)) != 0) {
        ((lifted::V *)(lifted::sub_101ac8d0()))->f11(0xff, 0xff, 0xff, 0xff);
        ((lifted::V *)(*(int *)((char *)this + 0x58)))->f1(0, 0);
        ((lifted::V *)(*(int *)((char *)this + 0x58)))->f0(); return;
    }
}
// END FUNCTION

// FUNCTION: 0x101c5a20 size=0x27
#include "vgui2__ImagePanel.h"
namespace lifted {
extern char g_102da744;
struct C101ab750 { int sub_101ab750(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual int f14(int, int); };
}
int vgui2::ImagePanel::vfunc76(int a0)
{
    int t0 = ((lifted::C101ab750 *)this)->sub_101ab750(a0);
    if ((*(int *)((char *)this + 0x5c)) != 0) {
        return ((lifted::V *)a0)->f14((int)&lifted::g_102da744, *(int *)((char *)this + 0x5c));
    }
    return t0;
}
// END FUNCTION

// FUNCTION: 0x101c5ae0 size=0x23
#include "vgui2__ImagePanel.h"
namespace lifted {
extern char g_102da754;
extern char g_1067b8a0;
int sub_101ab860();
int sub_101d3192(int, int, int, int);
}
int vgui2::ImagePanel::vfunc77()
{
    lifted::sub_101d3192((int)&lifted::g_1067b8a0, 0x400, (int)&lifted::g_102da754, lifted::sub_101ab860());
    return (int)&lifted::g_1067b8a0;
}
// END FUNCTION

// FUNCTION: 0x101c5b60 size=0x6
#include "vgui2__ImagePanel.h"
namespace lifted {
extern char g_102da7a8;
}
int vgui2::ImagePanel::vfunc102()
{
    return (int)&lifted::g_102da7a8;
}
// END FUNCTION
