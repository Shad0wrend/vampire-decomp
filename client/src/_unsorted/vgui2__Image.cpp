// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10164480 size=0x5
#include "vgui2__Image.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual int f11(); };
}
int vgui2::Image::vfunc7()
{
    return ((lifted::V *)this)->f11();
}
// END FUNCTION

// FUNCTION: 0x10164490 size=0xa
#include "vgui2__Image.h"
bool vgui2::Image::vfunc4(char a0)
{
    *(char *)((char *)this + 0x18) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101b68e0 size=0x1e
#include "vgui2__Image.h"

// VC6 writes vgui2::Image's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Image *pcd_emit_101b68e0() { return new vgui2::Image; }

// TARGET: ??_GImage@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b6910 size=0x11
#include "vgui2__Image.h"
int vgui2::Image::vfunc1(int a0, int a1)
{
    *(int *)((char *)this + 4) = a0;
    *(int *)((char *)this + 8) = a1;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b6990 size=0x11
#include "vgui2__Image.h"
int vgui2::Image::vfunc9(int a0, int a1)
{
    *(int *)((char *)this + 0xc) = a0;
    *(int *)((char *)this + 0x10) = a1;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b69f0 size=0xc
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual int f11(); };
}
int vgui2::Image::vfunc10()
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f11();
}
// END FUNCTION

// FUNCTION: 0x101b6b10 size=0xc
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual int f17(); };
}
int vgui2::Image::vfunc16()
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f17();
}
// END FUNCTION

// FUNCTION: 0x101b6b60 size=0xc
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual int f19(); };
}
int vgui2::Image::vfunc17()
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f19();
}
// END FUNCTION

// FUNCTION: 0x101b6ba0 size=0xc
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(); };
}
int vgui2::Image::vfunc21()
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f21();
}
// END FUNCTION

// FUNCTION: 0x101b6c90 size=0xc
#include "vgui2__Image.h"
int vgui2::Image::vfunc8(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x14);
    return a0;
}
// END FUNCTION
