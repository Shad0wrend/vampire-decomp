// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007e210 size=0x6
#include "C_BaseGrenade.h"
namespace lifted {
extern char g_102ac710;
}
int C_BaseGrenade::vfunc16()
{
    return (int)&lifted::g_102ac710;
}
// END FUNCTION

// FUNCTION: 0x1007e220 size=0x3
#include "C_BaseGrenade.h"
int C_BaseGrenade::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007e4d0 size=0x6
#include "C_BaseGrenade.h"
namespace lifted {
extern char g_102ac6b4;
}
int C_BaseGrenade::vfunc17()
{
    return (int)&lifted::g_102ac6b4;
}
// END FUNCTION

// FUNCTION: 0x1007e4e0 size=0x3
#include "C_BaseGrenade.h"
void C_BaseGrenade::vfunc149(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1007e690 size=0xb
#include "C_BaseGrenade.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual void u143(); virtual void u144(); virtual void u145(); virtual void u146(); virtual void u147(); virtual void u148(); virtual void u149(); virtual int f150(); };
}
int C_BaseGrenade::vfunc153(int a0)
{
    return ((lifted::V *)this)->f150();
}
// END FUNCTION

// FUNCTION: 0x1007f160 size=0x4
#include "C_BaseGrenade.h"
int C_BaseGrenade::vfunc152()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1007f170 size=0x7
#include "C_BaseGrenade.h"
namespace lifted {
extern float g_1022671c;
}
float C_BaseGrenade::vfunc154()
{
    return lifted::g_1022671c;
}
// END FUNCTION

// FUNCTION: 0x1007f180 size=0x7
#include "C_BaseGrenade.h"
namespace lifted {
extern float g_1022c2d0;
}
float C_BaseGrenade::vfunc155()
{
    return lifted::g_1022c2d0;
}
// END FUNCTION

// FUNCTION: 0x1007f190 size=0x5
#include "C_BaseGrenade.h"
bool C_BaseGrenade::vfunc156(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007f1a0 size=0x7
#include "C_BaseGrenade.h"
float C_BaseGrenade::vfunc157()
{
    return *(float *)((char *)this + 0x10f0);
}
// END FUNCTION

// FUNCTION: 0x1007f1b0 size=0x7
#include "C_BaseGrenade.h"
float C_BaseGrenade::vfunc158()
{
    return *(float *)((char *)this + 0x10e8);
}
// END FUNCTION

// FUNCTION: 0x1007f1c0 size=0xd
#include "C_BaseGrenade.h"
int C_BaseGrenade::vfunc159(int a0)
{
    *(int *)((char *)this + 0x10f0) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1007f1d0 size=0xd
#include "C_BaseGrenade.h"
int C_BaseGrenade::vfunc160(int a0)
{
    *(int *)((char *)this + 0x10e8) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1007f1e0 size=0x1e
#include "C_BaseGrenade.h"

// VC6 writes C_BaseGrenade's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseGrenade *pcd_emit_1007f1e0() { return new C_BaseGrenade; }

// TARGET: ??_GC_BaseGrenade@@UAEPAXI@Z
// END FUNCTION
