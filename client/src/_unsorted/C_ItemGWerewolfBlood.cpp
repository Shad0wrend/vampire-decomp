// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10019980 size=0x6
#include "C_ItemGWerewolfBlood.h"
namespace lifted {
extern char g_102734fc;
}
int C_ItemGWerewolfBlood::vfunc17()
{
    return (int)&lifted::g_102734fc;
}
// END FUNCTION

// FUNCTION: 0x10019a10 size=0x1e
#include "C_ItemGWerewolfBlood.h"

// VC6 writes C_ItemGWerewolfBlood's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWerewolfBlood *pcd_emit_10019a10() { return new C_ItemGWerewolfBlood; }

// TARGET: ??_GC_ItemGWerewolfBlood@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10019a40 size=0x3
#include "C_ItemGWerewolfBlood.h"
int C_ItemGWerewolfBlood::vfunc15()
{
    return 0;
}
// END FUNCTION
