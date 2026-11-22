// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001f600 size=0x6
#include "C_ItemGGarysFilm.h"
namespace lifted {
extern char g_10273908;
}
int C_ItemGGarysFilm::vfunc17()
{
    return (int)&lifted::g_10273908;
}
// END FUNCTION

// FUNCTION: 0x1001f690 size=0x1e
#include "C_ItemGGarysFilm.h"

// VC6 writes C_ItemGGarysFilm's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGarysFilm *pcd_emit_1001f690() { return new C_ItemGGarysFilm; }

// TARGET: ??_GC_ItemGGarysFilm@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001f6c0 size=0x3
#include "C_ItemGGarysFilm.h"
int C_ItemGGarysFilm::vfunc15()
{
    return 0;
}
// END FUNCTION
