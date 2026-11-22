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
