// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101644a0 size=0x1e
#include "BitmapImage.h"

// VC6 writes BitmapImage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
BitmapImage *pcd_emit_101644a0() { return new BitmapImage; }

// TARGET: ??_GBitmapImage@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10164960 size=0x11
#include "BitmapImage.h"
namespace lifted {
int __stdcall sub_10164900(int, int, int);
}
int BitmapImage::vfunc0()
{
    return lifted::sub_10164900(*(int *)((char *)this + 0x34), 0, 0x3f800000);
}
// END FUNCTION

// FUNCTION: 0x10164990 size=0xc
#include "BitmapImage.h"
int BitmapImage::vfunc8(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x20);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101649d0 size=0x24
#include "BitmapImage.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual int f32(int, int, int); };
}
int BitmapImage::vfunc2(int a0, int a1)
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f32(*(int *)((char *)this + 0x1c), a0, a1);
}
// END FUNCTION

// FUNCTION: 0x10164a00 size=0x11
#include "BitmapImage.h"
int BitmapImage::vfunc1(int a0, int a1)
{
    *(int *)((char *)this + 0x24) = a0;
    *(int *)((char *)this + 0x28) = a1;
    return a0;
}
// END FUNCTION
