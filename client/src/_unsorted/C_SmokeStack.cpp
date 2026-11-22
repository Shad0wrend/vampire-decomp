// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1002f780 size=0x6
#include "C_SmokeStack.h"
namespace lifted {
extern char g_1027cbe0;
}
int C_SmokeStack::vfunc16()
{
    return (int)&lifted::g_1027cbe0;
}
// END FUNCTION

// FUNCTION: 0x1002f790 size=0x3
#include "C_SmokeStack.h"
int C_SmokeStack::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1002fcf0 size=0x1e
#include "C_SmokeStack.h"

// VC6 writes C_SmokeStack's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_SmokeStack *pcd_emit_1002fcf0() { return new C_SmokeStack; }

// TARGET: ??_GC_SmokeStack@@UAEPAXI@Z
// END FUNCTION
