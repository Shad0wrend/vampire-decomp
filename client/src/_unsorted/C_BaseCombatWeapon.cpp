// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10003000 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc143()
{
}
// END FUNCTION

// FUNCTION: 0x10003010 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc144()
{
}
// END FUNCTION

// FUNCTION: 0x10003020 size=0x7
#include "C_BaseCombatWeapon.h"
namespace lifted {
extern float g_101e4408;
}
float C_BaseCombatWeapon::vfunc151()
{
    return lifted::g_101e4408;
}
// END FUNCTION

// FUNCTION: 0x10003030 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc154()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10003040 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc155()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10003050 size=0x5
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc156(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10003090 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc158()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100030a0 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc159()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100030b0 size=0x4
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc161()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x100030c0 size=0x6
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc162()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100030d0 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc164(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100030e0 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc168()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100030f0 size=0x7
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc169()
{
    return *(int *)((char *)this + 0x950);
}
// END FUNCTION

// FUNCTION: 0x10003100 size=0xd
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc170(int a0)
{
    *(int *)((char *)this + 0x950) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x10003110 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc186()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10003120 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc187()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10003130 size=0x3
#include "C_BaseCombatWeapon.h"
void * C_BaseCombatWeapon::vfunc190()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x10003140 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc208()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10003150 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc209()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10003160 size=0x9
#include "C_BaseCombatWeapon.h"
namespace lifted {
extern float g_101e34f0;
}
float C_BaseCombatWeapon::vfunc210(int a0, int a1)
{
    return lifted::g_101e34f0;
}
// END FUNCTION

// FUNCTION: 0x10003170 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc243()
{
}
// END FUNCTION

// FUNCTION: 0x10003180 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc244(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10003190 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc245(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x100031a0 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc247()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100031b0 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc248(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x100031c0 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc249(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
}
// END FUNCTION

// FUNCTION: 0x10003c80 size=0x8
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc246(int a0, int a1, int a2)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1007ab20 size=0x1e
#include "C_BaseCombatWeapon.h"

// VC6 writes C_BaseCombatWeapon's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseCombatWeapon *pcd_emit_1007ab20() { return new C_BaseCombatWeapon; }

// TARGET: ??_GC_BaseCombatWeapon@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1007b5f0 size=0xd
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc215(int a0)
{
    return (lifted::sub_1007b160()) + 0x2188;
}
// END FUNCTION

// FUNCTION: 0x1007b600 size=0xb
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc216()
{
    return (lifted::sub_1007b160()) + 0x2208;
}
// END FUNCTION

// FUNCTION: 0x1007b610 size=0xb
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc145()
{
    return (lifted::sub_1007b160()) + 0x2288;
}
// END FUNCTION

// FUNCTION: 0x1007b620 size=0xb
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc146()
{
    return (lifted::sub_1007b160()) + 0x2308;
}
// END FUNCTION

// FUNCTION: 0x1007b630 size=0xb
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc147()
{
    return (lifted::sub_1007b160()) + 0x2388;
}
// END FUNCTION

// FUNCTION: 0x1007b640 size=0xb
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc217()
{
    return (lifted::sub_1007b160()) + 0x2408;
}
// END FUNCTION

// FUNCTION: 0x1007b650 size=0x27
#include "CWeaponOwner.h"
struct CWeaponOwner;
CWeaponOwner *sub_1007b160();

int __stdcall sub_1007b650(int nIndex)
{
	return *(int *)((char *)sub_1007b160() + 0x2668 + nIndex * 0x1093c);
}
// END FUNCTION

// FUNCTION: 0x1007b6d0 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc218()
{
    return *(int *)((char *)(lifted::sub_1007b160()) + 0x2424);
}
// END FUNCTION

// FUNCTION: 0x1007b6e0 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc219()
{
    return *(int *)((char *)(lifted::sub_1007b160()) + 0x2428);
}
// END FUNCTION

// FUNCTION: 0x1007b6f0 size=0x9
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc223()
{
    return (lifted::sub_1007b160()) + 8;
}
// END FUNCTION

// FUNCTION: 0x1007b920 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc226()
{
    return *(int *)((char *)(lifted::sub_1007b160()) + 0x5ebd0);
}
// END FUNCTION

// FUNCTION: 0x1007b930 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc227()
{
    return *(int *)((char *)(lifted::sub_1007b160()) + 0x5ebd4);
}
// END FUNCTION

// FUNCTION: 0x1007b940 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc228()
{
    return *(int *)((char *)(lifted::sub_1007b160()) + 0x5ebd8);
}
// END FUNCTION

// FUNCTION: 0x1007b950 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc229()
{
    return *(int *)((char *)(lifted::sub_1007b160()) + 0x5ebdc);
}
// END FUNCTION

// FUNCTION: 0x1007b960 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc230()
{
    return *(int *)((char *)(lifted::sub_1007b160()) + 0x5ebe0);
}
// END FUNCTION

// FUNCTION: 0x1007b970 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc231()
{
    return *(int *)((char *)(lifted::sub_1007b160()) + 0x5ebe4);
}
// END FUNCTION

// FUNCTION: 0x1007b980 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc232()
{
    return *(int *)((char *)(lifted::sub_1007b160()) + 0x5ebe8);
}
// END FUNCTION

// FUNCTION: 0x1007b990 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b160();
}
int C_BaseCombatWeapon::vfunc233()
{
    return *(int *)((char *)(lifted::sub_1007b160()) + 0x5ebec);
}
// END FUNCTION

// FUNCTION: 0x1007bbe0 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc175()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1007bdf0 size=0xd
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc183(int a0)
{
    *(int *)((char *)this + 0x918) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1007be00 size=0x7
#include "C_BaseCombatWeapon.h"
float C_BaseCombatWeapon::vfunc184()
{
    return *(float *)((char *)this + 0x918);
}
// END FUNCTION

// FUNCTION: 0x1007bee0 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc173()
{
}
// END FUNCTION

// FUNCTION: 0x1007bef0 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc172(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1007bf00 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc214(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1007bf20 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc178()
{
}
// END FUNCTION

// FUNCTION: 0x1007bf30 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc171(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1007c000 size=0x8
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc174(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1007c010 size=0xd
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc179(int a0)
{
    *(int *)((char *)this + 0x914) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1007c0f0 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc180(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1007c1d0 size=0xd
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1005fa40(int);
}
bool C_BaseCombatWeapon::vfunc188()
{
    lifted::sub_1005fa40(0);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1007c1e0 size=0x5
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc189(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1007c1f0 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc191()
{
}
// END FUNCTION

// FUNCTION: 0x1007c200 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc192()
{
}
// END FUNCTION

// FUNCTION: 0x1007c210 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc193()
{
}
// END FUNCTION

// FUNCTION: 0x1007c220 size=0x3
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc203()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007c290 size=0xc
#include "C_BaseCombatWeapon.h"
namespace lifted {
int sub_1007b180();
}
float C_BaseCombatWeapon::vfunc205()
{
    return *(float *)((char *)(lifted::sub_1007b180()) + 0x260);
}
// END FUNCTION

// FUNCTION: 0x1007c8f0 size=0xb
#include "C_BaseCombatWeapon.h"
namespace lifted {
int __stdcall sub_1007c8d0(int);
}
int C_BaseCombatWeapon::vfunc198()
{
    return lifted::sub_1007c8d0(0xc2);
}
// END FUNCTION

// FUNCTION: 0x1007c900 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc194()
{
}
// END FUNCTION

// FUNCTION: 0x1007c910 size=0x6
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc201()
{
    return 0xbc;
}
// END FUNCTION

// FUNCTION: 0x1007c920 size=0x6
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc202()
{
    return 0xc0;
}
// END FUNCTION

// FUNCTION: 0x1007c930 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc212()
{
}
// END FUNCTION

// FUNCTION: 0x1007c940 size=0x6
#include "C_BaseCombatWeapon.h"
namespace lifted {
extern char g_102ac0bc;
}
int C_BaseCombatWeapon::vfunc213()
{
    return (int)&lifted::g_102ac0bc;
}
// END FUNCTION

// FUNCTION: 0x1007c950 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc195()
{
}
// END FUNCTION

// FUNCTION: 0x1007ca90 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc200()
{
}
// END FUNCTION

// FUNCTION: 0x1007cde0 size=0x6
#include "C_BaseCombatWeapon.h"
namespace lifted {
extern char g_102abc88;
}
int C_BaseCombatWeapon::vfunc17()
{
    return (int)&lifted::g_102abc88;
}
// END FUNCTION

// FUNCTION: 0x1007cdf0 size=0x6
#include "C_BaseCombatWeapon.h"
namespace lifted {
extern char g_102abd10;
}
int C_BaseCombatWeapon::vfunc16()
{
    return (int)&lifted::g_102abd10;
}
// END FUNCTION

// FUNCTION: 0x1007ce00 size=0x3
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007d800 size=0x8
#include "C_BaseCombatWeapon.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual void u132(); virtual void u133(); virtual void u134(); virtual void u135(); virtual void u136(); virtual void u137(); virtual void u138(); virtual void u139(); virtual void u140(); virtual void u141(); virtual void u142(); virtual void u143(); virtual void u144(); virtual void u145(); virtual void u146(); virtual void u147(); virtual void u148(); virtual void u149(); virtual void u150(); virtual void u151(); virtual void u152(); virtual void u153(); virtual void u154(); virtual void u155(); virtual void u156(); virtual void u157(); virtual void u158(); virtual void u159(); virtual void u160(); virtual void u161(); virtual void u162(); virtual void u163(); virtual void u164(); virtual void u165(); virtual void u166(); virtual void u167(); virtual void u168(); virtual void u169(); virtual void u170(); virtual void u171(); virtual void u172(); virtual void u173(); virtual void u174(); virtual void u175(); virtual void u176(); virtual void u177(); virtual void u178(); virtual void u179(); virtual void u180(); virtual void u181(); virtual void u182(); virtual void u183(); virtual void u184(); virtual void u185(); virtual void u186(); virtual void u187(); virtual void u188(); virtual void u189(); virtual void u190(); virtual void u191(); virtual void u192(); virtual void u193(); virtual void u194(); virtual void u195(); virtual void u196(); virtual void u197(); virtual void u198(); virtual void u199(); virtual void u200(); virtual void u201(); virtual void u202(); virtual void u203(); virtual void u204(); virtual void u205(); virtual void u206(); virtual void u207(); virtual void u208(); virtual void u209(); virtual void u210(); virtual void u211(); virtual void u212(); virtual void u213(); virtual void u214(); virtual void u215(); virtual void u216(); virtual void u217(); virtual void u218(); virtual void u219(); virtual void u220(); virtual void u221(); virtual void u222(); virtual void u223(); virtual int f224(); };
}
int C_BaseCombatWeapon::vfunc160()
{
    return ((lifted::V *)this)->f224();
}
// END FUNCTION

// FUNCTION: 0x1007d860 size=0x8
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc35(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1007d870 size=0x8
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc36(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1007d880 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc165(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1007d8d0 size=0x3
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc166()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007d8e0 size=0x1
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc167()
{
}
// END FUNCTION

// FUNCTION: 0x1009b990 size=0x3
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc86()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009bd80 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc238(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1009bd90 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc236(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1009c060 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc242()
{
    return 1;
}
// END FUNCTION
