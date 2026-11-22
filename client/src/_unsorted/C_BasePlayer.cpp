// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10002b00 size=0x7
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc84()
{
    return *(int *)((char *)this + 0x1990);
}
// END FUNCTION

// FUNCTION: 0x10002b70 size=0x5
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc175(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10002b80 size=0x7
#include "C_BasePlayer.h"
namespace lifted {
extern float g_101e34ec;
}
float C_BasePlayer::vfunc176()
{
    return lifted::g_101e34ec;
}
// END FUNCTION

// FUNCTION: 0x1002a3b0 size=0x7
#include "C_BasePlayer.h"
char * C_BasePlayer::vfunc109()
{
    return (char *)this + 0x1888;
}
// END FUNCTION

// FUNCTION: 0x100a49f0 size=0x6
#include "C_BasePlayer.h"
namespace lifted {
extern char g_102b0be8;
}
int C_BasePlayer::vfunc16()
{
    return (int)&lifted::g_102b0be8;
}
// END FUNCTION

// FUNCTION: 0x100a4a00 size=0x3
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a5220 size=0x6
#include "C_BasePlayer.h"
namespace lifted {
extern char g_102b0bd0;
}
int C_BasePlayer::vfunc17()
{
    return (int)&lifted::g_102b0bd0;
}
// END FUNCTION

// FUNCTION: 0x100a54a0 size=0x1e
#include "C_BasePlayer.h"

// VC6 writes C_BasePlayer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BasePlayer *pcd_emit_100a54a0() { return new C_BasePlayer; }

// TARGET: ??_GC_BasePlayer@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100a6e50 size=0x3
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc154(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100a8030 size=0x8
#include "C_BasePlayer.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual void u143(); virtual void u144(); virtual void u145(); virtual void u146(); virtual void u147(); virtual int f148(); };
}
int C_BasePlayer::vfunc171()
{
    return ((lifted::V *)this)->f148();
}
// END FUNCTION

// FUNCTION: 0x100a99f0 size=0x3
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc189(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100a9bd0 size=0x3
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc151(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
}
// END FUNCTION

// FUNCTION: 0x100a9df0 size=0x1
#include "C_BasePlayer.h"
void C_BasePlayer::vfunc184()
{
}
// END FUNCTION

// FUNCTION: 0x100aa240 size=0x7
#include "C_BasePlayer.h"
char * C_BasePlayer::vfunc195()
{
    return (char *)this + 0x1888;
}
// END FUNCTION

// FUNCTION: 0x100aa250 size=0x21
#include "C_BasePlayer.h"
int C_BasePlayer::vfunc196(int a0, int a1, int a2)
{
    *(int *)((char *)this + 0x1888) = a0;
    *(int *)((char *)this + 0x188c) = a1;
    *(int *)((char *)this + 0x1890) = a2;
    return a2;
}
// END FUNCTION
