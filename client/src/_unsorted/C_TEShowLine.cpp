// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003ea90 size=0x1e
#include "C_TEShowLine.h"

// VC6 writes C_TEShowLine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEShowLine *pcd_emit_1003ea90() { return new C_TEShowLine; }

// TARGET: ??_GC_TEShowLine@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003ebf0 size=0x6
#include "C_TEShowLine.h"
namespace lifted {
extern char g_102814d4;
}
int C_TEShowLine::vfunc9()
{
    return (int)&lifted::g_102814d4;
}
// END FUNCTION
