// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003a190 size=0x1e
#include "C_TEInspectionFX.h"

// VC6 writes C_TEInspectionFX's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEInspectionFX *pcd_emit_1003a190() { return new C_TEInspectionFX; }

// TARGET: ??_GC_TEInspectionFX@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003a1d0 size=0x1
#include "C_TEInspectionFX.h"
void C_TEInspectionFX::vfunc13()
{
}
// END FUNCTION

// FUNCTION: 0x1003a1f0 size=0x6
#include "C_TEInspectionFX.h"
namespace lifted {
extern char g_102803cc;
}
int C_TEInspectionFX::vfunc9()
{
    return (int)&lifted::g_102803cc;
}
// END FUNCTION

// FUNCTION: 0x1003a200 size=0x3
#include "C_TEInspectionFX.h"
int C_TEInspectionFX::vfunc8()
{
    return 0;
}
// END FUNCTION
