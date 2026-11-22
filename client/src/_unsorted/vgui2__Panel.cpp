// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10029520 size=0x4
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc0()
{
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x10029530 size=0x3
#include "vgui2__Panel.h"
void * vgui2::Panel::vfunc1()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x101a9460 size=0x1e
#include "vgui2__Panel.h"

// VC6 writes vgui2::Panel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Panel *pcd_emit_101a9460() { return new vgui2::Panel; }

// TARGET: ??_GPanel@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101a9a20 size=0x1e
#include "vgui2__Panel.h"
namespace lifted {
int sub_101ac900();
struct V { virtual int f0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual int f14(int); };
}
int vgui2::Panel::vfunc22()
{
    return ((lifted::V *)(lifted::sub_101ac900()))->f14(((lifted::V *)this)->f0());
}
// END FUNCTION

// FUNCTION: 0x101a9a40 size=0x1e
#include "vgui2__Panel.h"
namespace lifted {
int sub_101ac900();
struct V { virtual int f0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(int); };
}
int vgui2::Panel::vfunc48()
{
    return ((lifted::V *)(lifted::sub_101ac900()))->f21(((lifted::V *)this)->f0());
}
// END FUNCTION

// FUNCTION: 0x101a9e80 size=0x17
#include "vgui2__Panel.h"
namespace lifted {
struct V { virtual int f0(); virtual void u1(); virtual int f2(int); };
}
int vgui2::Panel::vfunc99()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x14)))->f2(((lifted::V *)this)->f0());
}
// END FUNCTION

// FUNCTION: 0x101a9f00 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc98()
{
}
// END FUNCTION

// FUNCTION: 0x101a9f10 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc103()
{
}
// END FUNCTION

// FUNCTION: 0x101aa080 size=0x3
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc10(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101aa090 size=0x3
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc11(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x101aa0d0 size=0x1e
#include "vgui2__Panel.h"
namespace lifted {
int sub_101ac900();
struct V { virtual int f0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual int f19(int); };
}
int vgui2::Panel::vfunc49()
{
    return ((lifted::V *)(lifted::sub_101ac900()))->f19(((lifted::V *)this)->f0());
}
// END FUNCTION

// FUNCTION: 0x101aa200 size=0xa
#include "vgui2__Panel.h"
bool vgui2::Panel::vfunc39(char a0)
{
    *(char *)((char *)this + 0x32) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101aa210 size=0x4
#include "vgui2__Panel.h"
bool vgui2::Panel::vfunc40()
{
    return *(bool *)((char *)this + 0x32);
}
// END FUNCTION

// FUNCTION: 0x101aa250 size=0x5
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aa620 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc83()
{
}
// END FUNCTION

// FUNCTION: 0x101aa630 size=0x3
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc84(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x101aa640 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc85()
{
}
// END FUNCTION

// FUNCTION: 0x101aa650 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc86()
{
}
// END FUNCTION

// FUNCTION: 0x101aa660 size=0x3
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc87(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101aa670 size=0x3
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc88(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101aa680 size=0x3
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc89(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101aaad0 size=0xa
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc54(int a0)
{
    *(int *)((char *)this + 0xc) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101aaae0 size=0x4
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc55()
{
    return *(int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x101aacc0 size=0xc
#include "vgui2__Panel.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual int f105(int); };
}
int vgui2::Panel::vfunc15(int a0)
{
    a0 = (int)this;
    return ((lifted::V *)this)->f105(a0);
}
// END FUNCTION

// FUNCTION: 0x101aad00 size=0x3
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc17()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aad40 size=0xa
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc29(int a0)
{
    *(int *)((char *)this + 0x34) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101aad50 size=0x4
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc30()
{
    return *(int *)((char *)this + 0x34);
}
// END FUNCTION

// FUNCTION: 0x101aad60 size=0x3
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc13(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101aad70 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc79()
{
}
// END FUNCTION

// FUNCTION: 0x101ab040 size=0x4
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc61()
{
    return *(int *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x101ab050 size=0xa
#include "vgui2__Panel.h"
bool vgui2::Panel::vfunc62(char a0)
{
    *(char *)((char *)this + 0x28) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101ab060 size=0xa
#include "vgui2__Panel.h"
bool vgui2::Panel::vfunc63(char a0)
{
    *(char *)((char *)this + 0x29) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101ab070 size=0xa
#include "vgui2__Panel.h"
bool vgui2::Panel::vfunc64(char a0)
{
    *(char *)((char *)this + 0x2a) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101ab080 size=0xa
#include "vgui2__Panel.h"
bool vgui2::Panel::vfunc104(char a0)
{
    *(char *)((char *)this + 0x54) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101ab210 size=0x4
#include "vgui2__Panel.h"
bool vgui2::Panel::vfunc47()
{
    return *(bool *)((char *)this + 0x19);
}
// END FUNCTION

// FUNCTION: 0x101ab290 size=0xa
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc50(int a0)
{
    *(int *)((char *)this + 0x24) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101ab2a0 size=0xa
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc51(int a0)
{
    *(int *)((char *)this + 0x20) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101ab2b0 size=0xc
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc52(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x24);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101ab2c0 size=0xc
#include "vgui2__Panel.h"
int vgui2::Panel::vfunc53(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x20);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101ab2f0 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc101()
{
}
// END FUNCTION

// FUNCTION: 0x101ab3d0 size=0x3
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc78(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101ab3e0 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc80()
{
}
// END FUNCTION

// FUNCTION: 0x101ab3f0 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc81()
{
}
// END FUNCTION

// FUNCTION: 0x101ab860 size=0x6
#include "vgui2__Panel.h"
namespace lifted {
extern int g_102d7be0;
}
int vgui2::Panel::vfunc77()
{
    return lifted::g_102d7be0;
}
// END FUNCTION

// FUNCTION: 0x101abf60 size=0x6
#include "vgui2__Panel.h"
namespace lifted {
extern char g_102d8128;
}
int vgui2::Panel::vfunc102()
{
    return (int)&lifted::g_102d8128;
}
// END FUNCTION
