// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b36f0 size=0x1e
#include "vgui2__Button.h"

// VC6 writes vgui2::Button's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Button *pcd_emit_101b36f0() { return new vgui2::Button; }

// TARGET: ??_GButton@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b3840 size=0xd
#include "vgui2__Button.h"
bool vgui2::Button::vfunc145(char a0)
{
    *(char *)((char *)this + 0xbd) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101b3850 size=0x7
#include "vgui2__Button.h"
bool vgui2::Button::vfunc146()
{
    return *(bool *)((char *)this + 0xbd);
}
// END FUNCTION

// FUNCTION: 0x101b38a0 size=0x7
#include "vgui2__Button.h"
bool vgui2::Button::vfunc139()
{
    return *(bool *)((char *)this + 0xb8);
}
// END FUNCTION

// FUNCTION: 0x101b38e0 size=0x7
#include "vgui2__Button.h"
bool vgui2::Button::vfunc144()
{
    return *(bool *)((char *)this + 0xba);
}
// END FUNCTION

// FUNCTION: 0x101b38f0 size=0x7
#include "vgui2__Button.h"
bool vgui2::Button::vfunc140()
{
    return *(bool *)((char *)this + 0xb9);
}
// END FUNCTION

// FUNCTION: 0x101b3b00 size=0x17
#include "vgui2__Button.h"
namespace lifted {
struct C101ab3e0 { int sub_101ab3e0(); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
void vgui2::Button::vfunc80()
{
    ((lifted::V *)this)->f57(0, 0);
    ((lifted::C101ab3e0 *)this)->sub_101ab3e0();
}
// END FUNCTION

// FUNCTION: 0x101b3b20 size=0x17
#include "vgui2__Button.h"
namespace lifted {
struct C101ab3f0 { int sub_101ab3f0(); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
void vgui2::Button::vfunc81()
{
    ((lifted::V *)this)->f57(0, 0);
    ((lifted::C101ab3f0 *)this)->sub_101ab3f0();
}
// END FUNCTION

// FUNCTION: 0x101b3dc0 size=0x19
#include "vgui2__Button.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
int vgui2::Button::vfunc158(int a0)
{
    *(int *)((char *)this + 0xc8) = a0;
    return ((lifted::V *)this)->f57(0, 0);
}
// END FUNCTION

// FUNCTION: 0x101b3de0 size=0x19
#include "vgui2__Button.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
int vgui2::Button::vfunc159(int a0)
{
    *(int *)((char *)this + 0xcc) = a0;
    return ((lifted::V *)this)->f57(0, 0);
}
// END FUNCTION

// FUNCTION: 0x101b3e00 size=0x19
#include "vgui2__Button.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
int vgui2::Button::vfunc160(int a0)
{
    *(int *)((char *)this + 0xd0) = a0;
    return ((lifted::V *)this)->f57(0, 0);
}
// END FUNCTION

// FUNCTION: 0x101b41b0 size=0x23
#include "vgui2__Button.h"
namespace lifted {
extern char g_102d8c04;
extern char g_10679600;
int sub_101b3290();
int sub_101d3192(int, int, int, int);
}
int vgui2::Button::vfunc77()
{
    lifted::sub_101d3192((int)&lifted::g_10679600, 0x400, (int)&lifted::g_102d8c04, lifted::sub_101b3290());
    return (int)&lifted::g_10679600;
}
// END FUNCTION

// FUNCTION: 0x101b4620 size=0x6
#include "vgui2__Button.h"
namespace lifted {
extern char g_102d8b28;
}
int vgui2::Button::vfunc102()
{
    return (int)&lifted::g_102d8b28;
}
// END FUNCTION
