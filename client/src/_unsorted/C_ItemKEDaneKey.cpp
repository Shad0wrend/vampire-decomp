// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10023700 size=0x6
#include "C_ItemKEDaneKey.h"
namespace lifted {
extern char g_10273be0;
}
int C_ItemKEDaneKey::vfunc17()
{
    return (int)&lifted::g_10273be0;
}
// END FUNCTION

// FUNCTION: 0x10023790 size=0x1e
#include "C_ItemKEDaneKey.h"

// VC6 writes C_ItemKEDaneKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKEDaneKey *pcd_emit_10023790() { return new C_ItemKEDaneKey; }

// TARGET: ??_GC_ItemKEDaneKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100237c0 size=0x3
#include "C_ItemKEDaneKey.h"
int C_ItemKEDaneKey::vfunc15()
{
    return 0;
}
// END FUNCTION
