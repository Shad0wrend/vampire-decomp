// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b85b0 size=0x1e
#include "vgui2__Frame.h"

// VC6 writes vgui2::Frame's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Frame *pcd_emit_101b85b0() { return new vgui2::Frame; }

// TARGET: ??_GFrame@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b8e30 size=0x12
#include "vgui2__Frame.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual int f118(int, int); };
}
int vgui2::Frame::vfunc142(int a0)
{
    return ((lifted::V *)this)->f118(a0, 1);
}
// END FUNCTION

// FUNCTION: 0x101b8e50 size=0xd
#include "vgui2__Frame.h"
bool vgui2::Frame::vfunc119(char a0)
{
    *(char *)((char *)this + 0x8d) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101b8e80 size=0x7
#include "vgui2__Frame.h"
bool vgui2::Frame::vfunc120()
{
    return *(bool *)((char *)this + 0x8d);
}
// END FUNCTION

// FUNCTION: 0x101b8e90 size=0x7
#include "vgui2__Frame.h"
bool vgui2::Frame::vfunc122()
{
    return *(bool *)((char *)this + 0x8c);
}
// END FUNCTION

// FUNCTION: 0x101b9120 size=0x7
#include "vgui2__Frame.h"
int vgui2::Frame::vfunc138()
{
    return *(int *)((char *)this + 0x88);
}
// END FUNCTION

// FUNCTION: 0x101b9130 size=0x7
#include "vgui2__Frame.h"
bool vgui2::Frame::vfunc139()
{
    return *(bool *)((char *)this + 0xd1);
}
// END FUNCTION

// FUNCTION: 0x101b9140 size=0xd
#include "vgui2__Frame.h"
bool vgui2::Frame::vfunc140(char a0)
{
    *(char *)((char *)this + 0xd1) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101b9260 size=0x8
#include "vgui2__Frame.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(int); };
}
int vgui2::Frame::vfunc130()
{
    return ((lifted::V *)this)->f21(0);
}
// END FUNCTION

// FUNCTION: 0x101b9470 size=0x8
#include "vgui2__Frame.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual int f130(); };
}
int vgui2::Frame::vfunc129()
{
    return ((lifted::V *)this)->f130();
}
// END FUNCTION

// FUNCTION: 0x101b9540 size=0x13
#include "vgui2__Frame.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(float); };
}
int vgui2::Frame::vfunc123(float a0)
{
    return ((lifted::V *)(*(int *)((char *)this + 0xc0)))->f21(a0);
}
// END FUNCTION

// FUNCTION: 0x101b9580 size=0x13
#include "vgui2__Frame.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(float); };
}
int vgui2::Frame::vfunc126(float a0)
{
    return ((lifted::V *)(*(int *)((char *)this + 0xb4)))->f21(a0);
}
// END FUNCTION

// FUNCTION: 0x101b95e0 size=0x3
#include "vgui2__Frame.h"
void vgui2::Frame::vfunc91(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101b95f0 size=0x3
#include "vgui2__Frame.h"
void vgui2::Frame::vfunc94(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101b9600 size=0x1
#include "vgui2__Frame.h"
void vgui2::Frame::vfunc95()
{
}
// END FUNCTION

// FUNCTION: 0x101b9970 size=0x3
#include "vgui2__Frame.h"
void vgui2::Frame::vfunc93(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101b9ac0 size=0x6
#include "vgui2__Frame.h"
namespace lifted {
extern char g_102d8ee8;
}
int vgui2::Frame::vfunc102()
{
    return (int)&lifted::g_102d8ee8;
}
// END FUNCTION

// FUNCTION: 0x101b9b50 size=0x2b
#include "vgui2__Frame.h"
int vgui2::Frame::vfunc137(int a0, int a1, int a2, int a3)
{
    *(int *)((char *)this + 0xd4) = a0;
    *(int *)((char *)this + 0xd8) = a1;
    *(int *)((char *)this + 0xdc) = a2;
    *(int *)((char *)this + 0xe0) = a3;
    return a2;
}
// END FUNCTION
