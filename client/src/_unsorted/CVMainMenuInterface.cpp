// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10065540 size=0x10
#include "CVMainMenuInterface.h"
namespace lifted {
extern int g_103ef0b4;
struct C10066400 { int sub_10066400(); };
}
void CVMainMenuInterface::vfunc0()
{
    if (lifted::g_103ef0b4 != 0) {
        ((lifted::C10066400 *)lifted::g_103ef0b4)->sub_10066400(); return;
    }
}
// END FUNCTION

// FUNCTION: 0x10065550 size=0x10
#include "CVMainMenuInterface.h"
namespace lifted {
extern int g_103ef0b4;
struct C10066440 { int sub_10066440(); };
}
void CVMainMenuInterface::vfunc1()
{
    if (lifted::g_103ef0b4 != 0) {
        ((lifted::C10066440 *)lifted::g_103ef0b4)->sub_10066440(); return;
    }
}
// END FUNCTION

// FUNCTION: 0x10065560 size=0x10
#include "CVMainMenuInterface.h"
namespace lifted {
extern int g_103ef0b4;
struct C100662d0 { int sub_100662d0(); };
}
void CVMainMenuInterface::vfunc2()
{
    if (lifted::g_103ef0b4 != 0) {
        ((lifted::C100662d0 *)lifted::g_103ef0b4)->sub_100662d0(); return;
    }
}
// END FUNCTION

// FUNCTION: 0x10065570 size=0x1c
#include "CVMainMenuInterface.h"
namespace lifted {
extern int g_103ef0b4;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual int f20(int); };
}
void CVMainMenuInterface::vfunc4()
{
    if (lifted::g_103ef0b4 != 0) {
        ((lifted::V *)lifted::g_103ef0b4)->f20(1);
    }
    lifted::g_103ef0b4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10065590 size=0x3b
#include "CVMainMenuInterface.h"
namespace lifted {
extern int g_103ef0b4;
struct C10065700 { int sub_10065700(int); };
int sub_101ac650(int);
}
void CVMainMenuInterface::vfunc3(int a0)
{
    if (lifted::g_103ef0b4 == 0) {
        int t0 = lifted::sub_101ac650(0x448);
        if (t0 != 0) {
            lifted::g_103ef0b4 = ((lifted::C10065700 *)t0)->sub_10065700(a0);
            return;
        }
        lifted::g_103ef0b4 = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x100655d0 size=0x1d
#include "CVMainMenuInterface.h"
namespace lifted {
extern int g_103ef0b4;
struct C100665d0 { int sub_100665d0(int); };
struct C10067030 { int sub_10067030(); };
}
void CVMainMenuInterface::vfunc5()
{
    if (lifted::g_103ef0b4 != 0) {
        ((lifted::C100665d0 *)lifted::g_103ef0b4)->sub_100665d0(1);
        ((lifted::C10067030 *)lifted::g_103ef0b4)->sub_10067030(); return;
    }
}
// END FUNCTION

// FUNCTION: 0x100655f0 size=0x12
#include "CVMainMenuInterface.h"
namespace lifted {
extern int g_103ef0b4;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual bool f22(); };
}
bool CVMainMenuInterface::vfunc6()
{
    if (lifted::g_103ef0b4 == 0) {
        return 0;
    }
    return ((lifted::V *)lifted::g_103ef0b4)->f22();
}
// END FUNCTION

// FUNCTION: 0x10065610 size=0x12
#include "CVMainMenuInterface.h"
namespace lifted {
extern int g_103ef0b4;
struct C10065d30 { bool sub_10065d30(); };
}
bool CVMainMenuInterface::vfunc7()
{
    if (lifted::g_103ef0b4 == 0) {
        return 0;
    }
    return ((lifted::C10065d30 *)lifted::g_103ef0b4)->sub_10065d30();
}
// END FUNCTION
