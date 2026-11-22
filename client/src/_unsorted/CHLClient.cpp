// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100cb590 size=0x10
#include "CHLClient.h"
namespace lifted {
int sub_10192880(int);
}
int CHLClient::vfunc41(int a0)
{
    return lifted::sub_10192880(a0);
}
// END FUNCTION

// FUNCTION: 0x100cba20 size=0x1a
#include "CHLClient.h"
namespace lifted {
extern int g_102bc800;
extern char g_104cfe38;
struct C100f0cf0 { int sub_100f0cf0(); };
struct V { virtual int f0(); };
}
int CHLClient::vfunc6()
{
    ((lifted::V *)lifted::g_102bc800)->f0();
    ((lifted::C100f0cf0 *)((int)&lifted::g_104cfe38))->sub_100f0cf0();
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100cba40 size=0x1d
#include "CHLClient.h"
namespace lifted {
extern int g_105f99d8;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(int, int); };
}
int CHLClient::vfunc7(int a0, int a1)
{
    ((lifted::V *)lifted::g_105f99d8)->f6(a0, a1);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100cba60 size=0x1e
#include "CHLClient.h"
namespace lifted {
extern int g_1027ba58;
extern int g_105f99d8;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual int f8(float); virtual void u9(); virtual void u10(); virtual void u11(); virtual int f12(); };
}
int CHLClient::vfunc8(float a0)
{
    ((lifted::V *)lifted::g_1027ba58)->f12();
    return ((lifted::V *)lifted::g_105f99d8)->f8(a0);
}
// END FUNCTION

// FUNCTION: 0x100cbad0 size=0xf
#include "CHLClient.h"
namespace lifted {
extern char g_104cfe38;
struct C100f0cf0 { int sub_100f0cf0(); };
int sub_10118dd0();
}
int CHLClient::vfunc10()
{
    ((lifted::C100f0cf0 *)((int)&lifted::g_104cfe38))->sub_100f0cf0();
    return lifted::sub_10118dd0();
}
// END FUNCTION

// FUNCTION: 0x100cbae0 size=0x6
#include "CHLClient.h"
namespace lifted {
extern int g_104a6d20;
}
int CHLClient::vfunc5()
{
    return lifted::g_104a6d20;
}
// END FUNCTION

// FUNCTION: 0x100cbaf0 size=0xf
#include "CHLClient.h"
int CHLClient::vfunc11(int a0, int a1, int a2, int a3)
{
    *(int *)((char *)a3) = 0;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100cbb00 size=0x3
#include "CHLClient.h"
void CHLClient::vfunc12(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100cbb10 size=0x19
#include "CHLClient.h"
namespace lifted {
extern int g_1027ba58;
extern int g_102ccd98;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual int f16(); };
}
int CHLClient::vfunc13()
{
    ((lifted::V *)lifted::g_1027ba58)->f16();
    return ((lifted::V *)lifted::g_102ccd98)->f4(1);
}
// END FUNCTION

// FUNCTION: 0x100cbb30 size=0x19
#include "CHLClient.h"
namespace lifted {
extern int g_1027ba58;
extern int g_102ccd98;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual int f17(); };
}
int CHLClient::vfunc14()
{
    ((lifted::V *)lifted::g_1027ba58)->f17();
    return ((lifted::V *)lifted::g_102ccd98)->f4(0);
}
// END FUNCTION

// FUNCTION: 0x100cbb50 size=0xb
#include "CHLClient.h"
namespace lifted {
extern int g_1027ba58;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual int f18(); };
}
int CHLClient::vfunc44()
{
    return ((lifted::V *)lifted::g_1027ba58)->f18();
}
// END FUNCTION

// FUNCTION: 0x100cbb60 size=0x13
#include "CHLClient.h"
namespace lifted {
extern int g_1027ba58;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual int f15(int, float); };
}
int CHLClient::vfunc15(int a0, float a1)
{
    return ((lifted::V *)lifted::g_1027ba58)->f15(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x100cbb80 size=0xb
#include "CHLClient.h"
namespace lifted {
extern int g_1027ba58;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual int f14(); };
}
int CHLClient::vfunc16()
{
    return ((lifted::V *)lifted::g_1027ba58)->f14();
}
// END FUNCTION

// FUNCTION: 0x100cbb90 size=0xb
#include "CHLClient.h"
namespace lifted {
extern int g_1027ba58;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual int f19(); };
}
int CHLClient::vfunc17()
{
    return ((lifted::V *)lifted::g_1027ba58)->f19();
}
// END FUNCTION

// FUNCTION: 0x100cbba0 size=0xb
#include "CHLClient.h"
namespace lifted {
extern int g_1027ba58;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual int f11(); };
}
int CHLClient::vfunc18()
{
    return ((lifted::V *)lifted::g_1027ba58)->f11();
}
// END FUNCTION

// FUNCTION: 0x100cbbb0 size=0xb
#include "CHLClient.h"
namespace lifted {
extern int g_1027ba58;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual int f10(); };
}
int CHLClient::vfunc19()
{
    return ((lifted::V *)lifted::g_1027ba58)->f10();
}
// END FUNCTION

// FUNCTION: 0x100cbc40 size=0x13
#include "CHLClient.h"
namespace lifted {
extern int g_1027ba58;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int, int, int, float); };
}
int CHLClient::vfunc21(int a0, int a1, int a2, float a3)
{
    return ((lifted::V *)lifted::g_1027ba58)->f4(a0, a1, a2, a3);
}
// END FUNCTION

// FUNCTION: 0x100cbce0 size=0x17
#include "CHLClient.h"
namespace lifted {
extern int g_102d5238;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int, int, int); };
}
int CHLClient::vfunc25(int a0)
{
    return ((lifted::V *)lifted::g_102d5238)->f4(0, 0, a0);
}
// END FUNCTION

// FUNCTION: 0x100cbe50 size=0x1a
#include "CHLClient.h"
namespace lifted {
extern int g_102d43d8;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual int f5(int, int, int); };
}
int CHLClient::vfunc23(int a0, int a1)
{
    return ((lifted::V *)lifted::g_102d43d8)->f5(a0, a1, 0);
}
// END FUNCTION

// FUNCTION: 0x100cbe80 size=0xb
#include "CHLClient.h"
namespace lifted {
extern int g_102bc800;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual int f17(); };
}
int CHLClient::vfunc26()
{
    return ((lifted::V *)lifted::g_102bc800)->f17();
}
// END FUNCTION

// FUNCTION: 0x100cbec0 size=0x6
#include "CHLClient.h"
int CHLClient::vfunc29()
{
    return 0x38;
}
// END FUNCTION

// FUNCTION: 0x100cbed0 size=0x3
#include "CHLClient.h"
void CHLClient::vfunc30(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x100cc700 size=0x10
#include "CHLClient.h"
namespace lifted {
int sub_1012b830(int);
}
int CHLClient::vfunc33(int a0)
{
    return lifted::sub_1012b830(a0);
}
// END FUNCTION

// FUNCTION: 0x100cc830 size=0xb
#include "CHLClient.h"
namespace lifted {
extern int g_102c37a0;
struct V { virtual void u0(); virtual int f1(); };
}
int CHLClient::vfunc36()
{
    return ((lifted::V *)lifted::g_102c37a0)->f1();
}
// END FUNCTION
