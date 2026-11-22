// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10024100 size=0x6
#include "C_ItemKTatooParlorKey.h"
namespace lifted {
extern char g_10273c50;
}
int C_ItemKTatooParlorKey::vfunc17()
{
    return (int)&lifted::g_10273c50;
}
// END FUNCTION

// FUNCTION: 0x10024190 size=0x1e
#include "C_ItemKTatooParlorKey.h"

// VC6 writes C_ItemKTatooParlorKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKTatooParlorKey *pcd_emit_10024190() { return new C_ItemKTatooParlorKey; }

// TARGET: ??_GC_ItemKTatooParlorKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100241c0 size=0x3
#include "C_ItemKTatooParlorKey.h"
int C_ItemKTatooParlorKey::vfunc15()
{
    return 0;
}
// END FUNCTION
