// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10035230 size=0x2d
#include "C_TEBSPDecal.h"
C_TEBSPDecal::C_TEBSPDecal()
{
	m_vecOrigin.Init(0, 0, 0);
	m_vecEnd.Init(0, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x10035260 size=0x1e
#include "C_TEBSPDecal.h"

// VC6 writes C_TEBSPDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBSPDecal *pcd_emit_10035260(const C_TEBSPDecal &other) { return new C_TEBSPDecal(other); }

// TARGET: ??_GC_TEBSPDecal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100352a0 size=0x18
#include "C_TEBSPDecal.h"
namespace lifted {
extern char g_1027e718;
extern int g_104a57e0;
struct V { virtual void u0(); virtual void u1(); virtual int f2(int); };
}
void C_TEBSPDecal::vfunc13()
{
    int t0 = ((lifted::V *)lifted::g_104a57e0)->f2((int)&lifted::g_1027e718);
    *(int *)((char *)this + 0x24) = t0;
}
// END FUNCTION

// FUNCTION: 0x10035400 size=0x6
#include "C_TEBSPDecal.h"
namespace lifted {
extern char g_1027e738;
}
int C_TEBSPDecal::vfunc9()
{
    return (int)&lifted::g_1027e738;
}
// END FUNCTION

// FUNCTION: 0x10035410 size=0x3
#include "C_TEBSPDecal.h"
int C_TEBSPDecal::vfunc8()
{
    return 0;
}
// END FUNCTION
