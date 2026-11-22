// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001a380 size=0x6
#include "C_ItemGHorrorTape_2.h"
namespace lifted {
extern char g_1027356c;
}
int C_ItemGHorrorTape_2::vfunc17()
{
    return (int)&lifted::g_1027356c;
}
// END FUNCTION

// FUNCTION: 0x1001a410 size=0x1e
#include "C_ItemGHorrorTape_2.h"

// VC6 writes C_ItemGHorrorTape_2's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGHorrorTape_2 *pcd_emit_1001a410() { return new C_ItemGHorrorTape_2; }

// TARGET: ??_GC_ItemGHorrorTape_2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001a430 size=0x6
#include "C_ItemGHorrorTape_2.h"
namespace lifted {
extern char g_102745b8;
}
int C_ItemGHorrorTape_2::vfunc16()
{
    return (int)&lifted::g_102745b8;
}
// END FUNCTION

// FUNCTION: 0x1001a440 size=0x3
#include "C_ItemGHorrorTape_2.h"
int C_ItemGHorrorTape_2::vfunc15()
{
    return 0;
}
// END FUNCTION
