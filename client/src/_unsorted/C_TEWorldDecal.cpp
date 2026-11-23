// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100410e0 size=0x1e
#include "C_TEWorldDecal.h"

// VC6 writes C_TEWorldDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEWorldDecal *pcd_emit_100410e0(const C_TEWorldDecal &other) { return new C_TEWorldDecal(other); }

// TARGET: ??_GC_TEWorldDecal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10041120 size=0x18
#include "C_TEWorldDecal.h"
namespace lifted {
extern char g_1027e718;
extern int g_104a57e0;
struct V { virtual void u0(); virtual void u1(); virtual int f2(int); };
}
void C_TEWorldDecal::vfunc13()
{
    int t0 = ((lifted::V *)lifted::g_104a57e0)->f2((int)&lifted::g_1027e718);
    *(int *)((char *)this + 0x20) = t0;
}
// END FUNCTION

// FUNCTION: 0x10041250 size=0x6
#include "C_TEWorldDecal.h"
namespace lifted {
extern char g_102825c4;
}
int C_TEWorldDecal::vfunc9()
{
    return (int)&lifted::g_102825c4;
}
// END FUNCTION

// FUNCTION: 0x10041260 size=0x3
#include "C_TEWorldDecal.h"
int C_TEWorldDecal::vfunc8()
{
    return 0;
}
// END FUNCTION
