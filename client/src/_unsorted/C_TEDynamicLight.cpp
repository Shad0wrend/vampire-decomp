// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10036100 size=0x1e
#include "C_TEDynamicLight.h"

// VC6 writes C_TEDynamicLight's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEDynamicLight *pcd_emit_10036100() { return new C_TEDynamicLight; }

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
