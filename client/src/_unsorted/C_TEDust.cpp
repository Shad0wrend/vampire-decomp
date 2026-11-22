// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bb150 size=0x6
#include "C_TEDust.h"
namespace lifted {
extern char g_102b45fc;
}
int C_TEDust::vfunc9()
{
    return (int)&lifted::g_102b45fc;
}
// END FUNCTION

// FUNCTION: 0x100bb380 size=0x3
#include "C_TEDust.h"
bool C_TEDust::vfunc16()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100bb390 size=0x1e
#include "C_TEDust.h"

// VC6 writes C_TEDust's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEDust *pcd_emit_100bb390() { return new C_TEDust; }

// TARGET: ??_GC_TEDust@@UAEPAXI@Z
// END FUNCTION
