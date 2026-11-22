// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10020780 size=0x6
#include "C_ItemGVVPhoto.h"
namespace lifted {
extern char g_102739cc;
}
int C_ItemGVVPhoto::vfunc17()
{
    return (int)&lifted::g_102739cc;
}
// END FUNCTION

// FUNCTION: 0x10020810 size=0x1e
#include "C_ItemGVVPhoto.h"

// VC6 writes C_ItemGVVPhoto's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGVVPhoto *pcd_emit_10020810() { return new C_ItemGVVPhoto; }

// TARGET: ??_GC_ItemGVVPhoto@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10020840 size=0x3
#include "C_ItemGVVPhoto.h"
int C_ItemGVVPhoto::vfunc15()
{
    return 0;
}
// END FUNCTION
