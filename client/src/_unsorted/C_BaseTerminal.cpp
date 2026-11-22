// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c68a0 size=0x3
#include "C_BaseTerminal.h"
int C_BaseTerminal::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100c6bf0 size=0x1e
#include "C_BaseTerminal.h"

// VC6 writes C_BaseTerminal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseTerminal *pcd_emit_100c6bf0() { return new C_BaseTerminal; }

// TARGET: ??_GC_BaseTerminal@@UAEPAXI@Z
// END FUNCTION
