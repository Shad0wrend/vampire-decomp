// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10037830 size=0x6
#include "C_TEFootprintDecal.h"
namespace lifted {
extern char g_1027f704;
}
int C_TEFootprintDecal::vfunc9()
{
    return (int)&lifted::g_1027f704;
}
// END FUNCTION

// FUNCTION: 0x10037ab0 size=0x1e
#include "C_TEFootprintDecal.h"

// VC6 writes C_TEFootprintDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEFootprintDecal *pcd_emit_10037ab0() { return new C_TEFootprintDecal; }

// TARGET: ??_GC_TEFootprintDecal@@UAEPAXI@Z
// END FUNCTION
