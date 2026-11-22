// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001e480 size=0x6
#include "C_ItemGHannahsApptBook.h"
namespace lifted {
extern char g_10273844;
}
int C_ItemGHannahsApptBook::vfunc17()
{
    return (int)&lifted::g_10273844;
}
// END FUNCTION

// FUNCTION: 0x1001e510 size=0x1e
#include "C_ItemGHannahsApptBook.h"

// VC6 writes C_ItemGHannahsApptBook's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGHannahsApptBook *pcd_emit_1001e510() { return new C_ItemGHannahsApptBook; }

// TARGET: ??_GC_ItemGHannahsApptBook@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001e540 size=0x3
#include "C_ItemGHannahsApptBook.h"
int C_ItemGHannahsApptBook::vfunc15()
{
    return 0;
}
// END FUNCTION
