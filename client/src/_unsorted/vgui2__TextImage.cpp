// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b9c30 size=0x1e
#include "vgui2__TextImage.h"

// VC6 writes vgui2::TextImage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TextImage *pcd_emit_101b9c30() { return new vgui2::TextImage; }

// TARGET: ??_GTextImage@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b9df0 size=0x21
#include "vgui2__TextImage.h"
namespace lifted {
int sub_101ac920();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual int f8(int, int, int); };
}
int vgui2::TextImage::vfunc28(int a0, int a1)
{
    return ((lifted::V *)(lifted::sub_101ac920()))->f8(*(int *)((char *)this + 0x1c), a0, a1);
}
// END FUNCTION

// FUNCTION: 0x101b9ec0 size=0x4
#include "vgui2__TextImage.h"
int vgui2::TextImage::vfunc31()
{
    return *(int *)((char *)this + 0x24);
}
// END FUNCTION

// FUNCTION: 0x101ba7f0 size=0x19
#include "vgui2__TextImage.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual int f33(int, int, int); };
}
int vgui2::TextImage::vfunc32(int a0, int a1)
{
    return ((lifted::V *)this)->f33(a0, a1, *(int *)((char *)this + 0x1c));
}
// END FUNCTION
