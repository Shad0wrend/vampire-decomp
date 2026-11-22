// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ca210 size=0x6
#include "C_World.h"
namespace lifted {
extern char g_102b8030;
}
int C_World::vfunc16()
{
    return (int)&lifted::g_102b8030;
}
// END FUNCTION

// FUNCTION: 0x100ca220 size=0x3
#include "C_World.h"
int C_World::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ca620 size=0x3
#include "C_World.h"
int C_World::vfunc66()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ca630 size=0x1e
#include "C_World.h"

// VC6 writes C_World's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_World *pcd_emit_100ca630() { return new C_World; }

// TARGET: ??_GC_World@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100ca9b0 size=0x5
#include "C_World.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(); };
}
void C_World::vfunc19()
{
    ((lifted::V *)this)->f21();
}
// END FUNCTION
