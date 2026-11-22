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

// FUNCTION: 0x1007b650 size=0x27
#include "CWeaponOwner.h"
struct CWeaponOwner;
CWeaponOwner *sub_1007b160();

int __stdcall sub_1007b650(int nIndex)
{
	return *(int *)((char *)sub_1007b160() + 0x2668 + nIndex * 0x1093c);
}
// END FUNCTION

// FUNCTION: 0x1007bbe0 size=0x3
#include "C_BaseCombatWeapon.h"
bool C_BaseCombatWeapon::vfunc175()
{
    return 1;
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

// FUNCTION: 0x1007c0f0 size=0x3
#include "C_BaseCombatWeapon.h"
void C_BaseCombatWeapon::vfunc180(int a0)
{
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

// FUNCTION: 0x1007d860 size=0x8
#include "C_BaseCombatWeapon.h"
int C_BaseCombatWeapon::vfunc35(int a0)
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
