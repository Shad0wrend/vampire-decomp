// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10052eb0 size=0x1e
#include "CHudDialog.h"

// VC6 writes CHudDialog's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudDialog *pcd_emit_10052eb0() { return new CHudDialog; }

// TARGET: ??_GCHudDialog@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10054440 size=0x1
#include "CHudDialog.h"
void CHudDialog::vfunc97()
{
}
// END FUNCTION

// FUNCTION: 0x10054b50 size=0x7
#include "CHudDialog.h"
bool CHudDialog::vfunc116()
{
    return *(bool *)((char *)this + 0x1b4);
}
// END FUNCTION
