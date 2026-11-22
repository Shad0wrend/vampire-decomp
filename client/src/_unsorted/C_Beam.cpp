// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007fce0 size=0x6
#include "C_Beam.h"
namespace lifted {
extern char g_102acf94;
}
int C_Beam::vfunc16()
{
    return (int)&lifted::g_102acf94;
}
// END FUNCTION

// FUNCTION: 0x1007fcf0 size=0x3
#include "C_Beam.h"
int C_Beam::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10080300 size=0x1e
#include "C_Beam.h"

// VC6 writes C_Beam's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_Beam *pcd_emit_10080300() { return new C_Beam; }

// TARGET: ??_GC_Beam@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10080e40 size=0x3
#include "C_Beam.h"
int C_Beam::vfunc121()
{
    return 0;
}
// END FUNCTION
