// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10033b90 size=0x1e
#include "C_TEBeamRingPoint.h"

// VC6 writes C_TEBeamRingPoint's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBeamRingPoint *pcd_emit_10033b90() { return new C_TEBeamRingPoint; }

// TARGET: ??_GC_TEBeamRingPoint@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10033ce0 size=0x6
#include "C_TEBeamRingPoint.h"
namespace lifted {
extern char g_1027dd0c;
}
int C_TEBeamRingPoint::vfunc9()
{
    return (int)&lifted::g_1027dd0c;
}
// END FUNCTION

// FUNCTION: 0x10033cf0 size=0x3
#include "C_TEBeamRingPoint.h"
int C_TEBeamRingPoint::vfunc8()
{
    return 0;
}
// END FUNCTION
