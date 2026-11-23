// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10032190 size=0x30
#include "C_TEMetalSparks.h"
C_TEMetalSparks::C_TEMetalSparks()
{
	m_vecOrigin.Init(0, 0, 0);
	m_vecDir.Init(0, 0, 0);
	m_unk28 = 0;
}
// END FUNCTION

// FUNCTION: 0x100321c0 size=0x1e
#include "C_TEMetalSparks.h"

// VC6 writes C_TEMetalSparks's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEMetalSparks *pcd_emit_100321c0(const C_TEMetalSparks &other) { return new C_TEMetalSparks(other); }

// TARGET: ??_GC_TEMetalSparks@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10032200 size=0x1
#include "C_TEMetalSparks.h"
void C_TEMetalSparks::vfunc13()
{
}
// END FUNCTION

// FUNCTION: 0x10032290 size=0x6
#include "C_TEMetalSparks.h"
namespace lifted {
extern char g_1027d078;
}
int C_TEMetalSparks::vfunc9()
{
    return (int)&lifted::g_1027d078;
}
// END FUNCTION

// FUNCTION: 0x100322a0 size=0x3
#include "C_TEMetalSparks.h"
int C_TEMetalSparks::vfunc8()
{
    return 0;
}
// END FUNCTION
