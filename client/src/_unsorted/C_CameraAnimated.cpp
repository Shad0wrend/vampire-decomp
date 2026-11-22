// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100025b0 size=0x3
#include "C_CameraAnimated.h"
int C_CameraAnimated::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100026b0 size=0x1e
#include "C_CameraAnimated.h"

// VC6 writes C_CameraAnimated's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_CameraAnimated *pcd_emit_100026b0() { return new C_CameraAnimated; }

// TARGET: ??_GC_CameraAnimated@@UAEPAXI@Z
// END FUNCTION
