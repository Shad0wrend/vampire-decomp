// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100360c0 size=0x39
#include "C_TEDynamicLight.h"
C_TEDynamicLight::C_TEDynamicLight()
{
	m_vecOrigin.Init(); m_unk20 = 0; m_unk24 = 0; m_unk28 = 0; m_unk2c = 0; m_unk1c = 0; m_unk30 = 0; m_unk34 = 0;
}
// END FUNCTION

// FUNCTION: 0x10036100 size=0x1e
#include "C_TEDynamicLight.h"

// VC6 writes C_TEDynamicLight's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEDynamicLight *pcd_emit_10036100(const C_TEDynamicLight &other) { return new C_TEDynamicLight(other); }

// TARGET: ??_GC_TEDynamicLight@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10036270 size=0x6
#include "C_TEDynamicLight.h"
namespace lifted {
extern char g_1027edfc;
}
int C_TEDynamicLight::vfunc9()
{
    return (int)&lifted::g_1027edfc;
}
// END FUNCTION

// FUNCTION: 0x10036280 size=0x3
#include "C_TEDynamicLight.h"
int C_TEDynamicLight::vfunc8()
{
    return 0;
}
// END FUNCTION
