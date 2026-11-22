// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10025280 size=0x6
#include "C_ItemKKikiKey.h"
namespace lifted {
extern char g_10273d14;
}
int C_ItemKKikiKey::vfunc17()
{
    return (int)&lifted::g_10273d14;
}
// END FUNCTION

// FUNCTION: 0x10025310 size=0x1e
#include "C_ItemKKikiKey.h"

// VC6 writes C_ItemKKikiKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKKikiKey *pcd_emit_10025310() { return new C_ItemKKikiKey; }

// TARGET: ??_GC_ItemKKikiKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10025340 size=0x3
#include "C_ItemKKikiKey.h"
int C_ItemKKikiKey::vfunc15()
{
    return 0;
}
// END FUNCTION
