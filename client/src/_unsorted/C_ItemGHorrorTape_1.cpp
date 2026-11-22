// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001a100 size=0x6
#include "C_ItemGHorrorTape_1.h"
namespace lifted {
extern char g_10273550;
}
int C_ItemGHorrorTape_1::vfunc17()
{
    return (int)&lifted::g_10273550;
}
// END FUNCTION

// FUNCTION: 0x1001a190 size=0x1e
#include "C_ItemGHorrorTape_1.h"

// VC6 writes C_ItemGHorrorTape_1's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGHorrorTape_1 *pcd_emit_1001a190() { return new C_ItemGHorrorTape_1; }

// TARGET: ??_GC_ItemGHorrorTape_1@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001a1b0 size=0x6
#include "C_ItemGHorrorTape_1.h"
namespace lifted {
extern char g_102745cc;
}
int C_ItemGHorrorTape_1::vfunc16()
{
    return (int)&lifted::g_102745cc;
}
// END FUNCTION

// FUNCTION: 0x1001a1c0 size=0x3
#include "C_ItemGHorrorTape_1.h"
int C_ItemGHorrorTape_1::vfunc15()
{
    return 0;
}
// END FUNCTION
