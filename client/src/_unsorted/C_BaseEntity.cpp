// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100015a0 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc24()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100015b0 size=0x7
#include "C_BaseEntity.h"
ICollideable * C_BaseEntity::GetClientCollideable()
{
    return (ICollideable *)((char *)this + 0x190);
}
// END FUNCTION

// FUNCTION: 0x100015e0 size=0x3
#include "C_BaseEntity.h"
IClientEntity * C_BaseEntity::GetIClientEntity()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x100015f0 size=0x3
#include "C_BaseEntity.h"
C_BaseEntity * C_BaseEntity::GetBaseEntity()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x10001610 size=0x5
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc25(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10001620 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc26()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10001660 size=0x7
#include "C_BaseEntity.h"
char * C_BaseEntity::vfunc54()
{
    return (char *)this + 0x1f4;
}
// END FUNCTION

// FUNCTION: 0x100016a0 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc58()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100016b0 size=0x6
#include "C_BaseEntity.h"
namespace lifted {
extern char g_102de300;
}
int C_BaseEntity::vfunc59()
{
    return (int)&lifted::g_102de300;
}
// END FUNCTION

// FUNCTION: 0x100016c0 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc63()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100016d0 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc84()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100016e0 size=0x6
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc85()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100016f0 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc94()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10001720 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc106()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10001890 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc112()
{
}
// END FUNCTION

// FUNCTION: 0x100018a0 size=0x5
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc117(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007dc10 size=0x5
#include "C_BaseEntity.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual int f10(); };
}
int C_BaseEntity::vfunc108()
{
    return ((lifted::V *)this)->f10();
}
// END FUNCTION

// FUNCTION: 0x1007dc20 size=0x8
#include "C_BaseEntity.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual int f41(); };
}
char * C_BaseEntity::vfunc109()
{
    return (char *)(((lifted::V *)this)->f41());
}
// END FUNCTION

// FUNCTION: 0x1007de10 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc92(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1007de20 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc93(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x1007de70 size=0x7
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc30()
{
    return *(int *)((char *)this + 0x184);
}
// END FUNCTION

// FUNCTION: 0x1007de80 size=0xd
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc31(int a0)
{
    *(int *)((char *)this + 0x184) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1007df70 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc87()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007e030 size=0x7
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc115()
{
    return *(bool *)((char *)this + 0x40d);
}
// END FUNCTION

// FUNCTION: 0x1009d3e0 size=0x6
#include "C_BaseEntity.h"
namespace lifted {
extern char g_102afc00;
}
int C_BaseEntity::vfunc16()
{
    return (int)&lifted::g_102afc00;
}
// END FUNCTION

// FUNCTION: 0x1009d3f0 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009dda0 size=0x1e
#include "C_BaseEntity.h"

// VC6 writes C_BaseEntity's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseEntity *pcd_emit_1009dda0() { return new C_BaseEntity; }

// TARGET: ??_GC_BaseEntity@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1009e040 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc19()
{
}
// END FUNCTION

// FUNCTION: 0x1009e050 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc20()
{
}
// END FUNCTION

// FUNCTION: 0x1009e060 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc21()
{
}
// END FUNCTION

// FUNCTION: 0x1009f050 size=0xf
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc0(int a0)
{
    *(int *)((char *)this + 0xe4) = *(int *)((char *)a0);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1009f060 size=0x7
#include "C_BaseEntity.h"
unsigned int * C_BaseEntity::vfunc1()
{
    return (unsigned int *)((char *)this + 0xe4);
}
// END FUNCTION

// FUNCTION: 0x1009f2c0 size=0x5
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc27(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009f2d0 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc38(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1009f640 size=0x5
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc116(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009f650 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc118(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1009f660 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc119(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1009fba0 size=0x7
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc51()
{
    return *(int *)((char *)this + 0x80);
}
// END FUNCTION

// FUNCTION: 0x1009fce0 size=0x7
#include "C_BaseEntity.h"
CMouthInfo * C_BaseEntity::GetMouth()
{
    return (CMouthInfo *)((char *)this + 0xfc);
}
// END FUNCTION

// FUNCTION: 0x100a06e0 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc67()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100a08e0 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc71()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100a0bb0 size=0xb
#include "C_BaseEntity.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual int f112(); };
}
int C_BaseEntity::vfunc72()
{
    ((lifted::V *)this)->f112();
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a0bc0 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc74()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a11e0 size=0x7
#include "C_BaseEntity.h"
namespace lifted {
extern float g_101e34f0;
}
float C_BaseEntity::vfunc81()
{
    return lifted::g_101e34f0;
}
// END FUNCTION

// FUNCTION: 0x100a11f0 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc82()
{
}
// END FUNCTION

// FUNCTION: 0x100a1210 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc61()
{
}
// END FUNCTION

// FUNCTION: 0x100a1220 size=0x8
#include "C_BaseEntity.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual int f37(); };
}
int C_BaseEntity::vfunc62()
{
    return ((lifted::V *)this)->f37();
}
// END FUNCTION

// FUNCTION: 0x100a2350 size=0x7
#include "C_BaseEntity.h"
char * C_BaseEntity::vfunc43()
{
    return (char *)this + 0x254;
}
// END FUNCTION

// FUNCTION: 0x100a2390 size=0x7
#include "C_BaseEntity.h"
char * C_BaseEntity::vfunc45()
{
    return (char *)this + 0x260;
}
// END FUNCTION

// FUNCTION: 0x100a23d0 size=0xd
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc47(int a0)
{
    *(int *)((char *)this + 0x264) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x100a23e0 size=0xd
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc48(int a0)
{
    *(int *)((char *)this + 0x24c) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x100a2470 size=0x7
#include "C_BaseEntity.h"
char * C_BaseEntity::vfunc39()
{
    return (char *)this + 0x254;
}
// END FUNCTION

// FUNCTION: 0x100a24f0 size=0x7
#include "C_BaseEntity.h"
char * C_BaseEntity::vfunc41()
{
    return (char *)this + 0x260;
}
// END FUNCTION

// FUNCTION: 0x100a2840 size=0x6
#include "C_BaseEntity.h"
namespace lifted {
extern char g_102afb7c;
}
int C_BaseEntity::vfunc17()
{
    return (int)&lifted::g_102afb7c;
}
// END FUNCTION

// FUNCTION: 0x100a2e10 size=0xd
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc49(int a0)
{
    *(int *)((char *)this + 0x18c) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x100a2e20 size=0xf
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc50(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x18c);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x100a2e30 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc90()
{
}
// END FUNCTION

// FUNCTION: 0x100a2e70 size=0x7
#include "C_BaseEntity.h"
namespace lifted {
extern float g_101e34ec;
}
float C_BaseEntity::vfunc28()
{
    return lifted::g_101e34ec;
}
// END FUNCTION

// FUNCTION: 0x100a32d0 size=0x6
#include "C_BaseEntity.h"
namespace lifted {
extern char g_102afbe8;
}
int C_BaseEntity::vfunc14()
{
    return (int)&lifted::g_102afbe8;
}
// END FUNCTION

// FUNCTION: 0x100a3330 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc33()
{
}
// END FUNCTION

// FUNCTION: 0x100a33c0 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc34()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1011a940 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc96(int a0, int a1, int a2, int a3)
{
}
// END FUNCTION

// FUNCTION: 0x1011ac20 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc99(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1011ac50 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc101(int a0)
{
}
// END FUNCTION
