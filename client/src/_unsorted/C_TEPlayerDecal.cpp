// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003e770 size=0x30
#include "C_TEPlayerDecal.h"
C_TEPlayerDecal::C_TEPlayerDecal()
{
	m_vecOrigin.Init(0, 0, 0);
	m_vecDir.Init(0, 0, 0);
	m_unk28 = 0;
}
// END FUNCTION

// FUNCTION: 0x1003e7a0 size=0x1e
#include "C_TEPlayerDecal.h"

// VC6 writes C_TEPlayerDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEPlayerDecal *pcd_emit_1003e7a0(const C_TEPlayerDecal &other) { return new C_TEPlayerDecal(other); }

// TARGET: ??_GC_TEPlayerDecal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003e7e0 size=0x18
#include "C_TEPlayerDecal.h"
namespace lifted {
extern char g_1027e718;
extern int g_104a57e0;
struct V { virtual void u0(); virtual void u1(); virtual int f2(int); };
}
void C_TEPlayerDecal::vfunc13()
{
    int t0 = ((lifted::V *)lifted::g_104a57e0)->f2((int)&lifted::g_1027e718);
    *(int *)((char *)this + 0x28) = t0;
}
// END FUNCTION

// FUNCTION: 0x1003e840 size=0x6
#include "C_TEPlayerDecal.h"
namespace lifted {
extern char g_1028132c;
}
int C_TEPlayerDecal::vfunc9()
{
    return (int)&lifted::g_1028132c;
}
// END FUNCTION

// FUNCTION: 0x1003e850 size=0x3
#include "C_TEPlayerDecal.h"
int C_TEPlayerDecal::vfunc8()
{
    return 0;
}
// END FUNCTION
