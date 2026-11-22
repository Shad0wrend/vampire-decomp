// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b2080 size=0x1e
#include "vgui2__Label.h"

// VC6 writes vgui2::Label's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Label *pcd_emit_101b2080() { return new vgui2::Label; }

// TARGET: ??_GLabel@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b2390 size=0xf
#include "vgui2__Label.h"
short vgui2::Label::vfunc120(short a0)
{
    *(short *)((char *)this + 0xac) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b23e0 size=0x8
#include "vgui2__Label.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual int f28(); };
}
int vgui2::Label::vfunc109()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x5c)))->f28();
}
// END FUNCTION

// FUNCTION: 0x101b2950 size=0xf
#include "vgui2__Label.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(); };
}
int vgui2::Label::vfunc111(int a0)
{
    *(int *)((char *)this + 0x58) = a0;
    return ((lifted::V *)this)->f6();
}
// END FUNCTION

// FUNCTION: 0x101b29e0 size=0x8
#include "vgui2__Label.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual int f31(); };
}
int vgui2::Label::vfunc119()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x5c)))->f31();
}
// END FUNCTION

// FUNCTION: 0x101b2a70 size=0xd
#include "vgui2__Label.h"
int vgui2::Label::vfunc113(int a0)
{
    *(int *)((char *)this + 0x90) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b2a80 size=0xd
#include "vgui2__Label.h"
int vgui2::Label::vfunc114(int a0)
{
    *(int *)((char *)this + 0x94) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b2a90 size=0xf
#include "vgui2__Label.h"
int vgui2::Label::vfunc115(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x90);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b2aa0 size=0xf
#include "vgui2__Label.h"
int vgui2::Label::vfunc116(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x94);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b2ab0 size=0x4
#include "vgui2__Label.h"
int vgui2::Label::vfunc127()
{
    return *(int *)((char *)this + 0x5c);
}
// END FUNCTION

// FUNCTION: 0x101b2b40 size=0x8
#include "vgui2__Label.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual int f108(); };
}
int vgui2::Label::vfunc132()
{
    return ((lifted::V *)this)->f108();
}
// END FUNCTION

// FUNCTION: 0x101b2c80 size=0x4
#include "vgui2__Label.h"
int vgui2::Label::vfunc126()
{
    return *(int *)((char *)this + 0x6c);
}
// END FUNCTION

// FUNCTION: 0x101b3290 size=0x23
#include "vgui2__Label.h"
namespace lifted {
extern char g_102d89c8;
extern char g_10679200;
int sub_101ab860();
int sub_101d3192(int, int, int, int);
}
int vgui2::Label::vfunc77()
{
    lifted::sub_101d3192((int)&lifted::g_10679200, 0x400, (int)&lifted::g_102d89c8, lifted::sub_101ab860());
    return (int)&lifted::g_10679200;
}
// END FUNCTION

// FUNCTION: 0x101b33a0 size=0xd
#include "vgui2__Label.h"
int vgui2::Label::vfunc136(int a0)
{
    *(int *)((char *)this + 0xb4) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b33b0 size=0x7
#include "vgui2__Label.h"
int vgui2::Label::vfunc137()
{
    return *(int *)((char *)this + 0xb4);
}
// END FUNCTION

// FUNCTION: 0x101b3470 size=0x6
#include "vgui2__Label.h"
namespace lifted {
extern char g_102d88f0;
}
int vgui2::Label::vfunc102()
{
    return (int)&lifted::g_102d88f0;
}
// END FUNCTION
