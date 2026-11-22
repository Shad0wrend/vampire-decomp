// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10034670 size=0x1e
#include "C_TEBloodStream.h"

// VC6 writes C_TEBloodStream's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBloodStream *pcd_emit_10034670() { return new C_TEBloodStream; }

// TARGET: ??_GC_TEBloodStream@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10034c10 size=0x6
#include "C_TEBloodStream.h"
namespace lifted {
extern char g_1027e354;
}
int C_TEBloodStream::vfunc9()
{
    return (int)&lifted::g_1027e354;
}
// END FUNCTION

// FUNCTION: 0x10034c20 size=0x3
#include "C_TEBloodStream.h"
int C_TEBloodStream::vfunc8()
{
    return 0;
}
// END FUNCTION
