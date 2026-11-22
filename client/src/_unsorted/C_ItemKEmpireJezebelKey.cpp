// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10023c00 size=0x6
#include "C_ItemKEmpireJezebelKey.h"
namespace lifted {
extern char g_10273c18;
}
int C_ItemKEmpireJezebelKey::vfunc17()
{
    return (int)&lifted::g_10273c18;
}
// END FUNCTION

// FUNCTION: 0x10023c90 size=0x1e
#include "C_ItemKEmpireJezebelKey.h"

// VC6 writes C_ItemKEmpireJezebelKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKEmpireJezebelKey *pcd_emit_10023c90() { return new C_ItemKEmpireJezebelKey; }

// TARGET: ??_GC_ItemKEmpireJezebelKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10023cc0 size=0x3
#include "C_ItemKEmpireJezebelKey.h"
int C_ItemKEmpireJezebelKey::vfunc15()
{
    return 0;
}
// END FUNCTION
