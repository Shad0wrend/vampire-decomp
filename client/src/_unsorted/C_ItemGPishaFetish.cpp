// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001ad80 size=0x6
#include "C_ItemGPishaFetish.h"
namespace lifted {
extern char g_102735dc;
}
int C_ItemGPishaFetish::vfunc17()
{
    return (int)&lifted::g_102735dc;
}
// END FUNCTION

// FUNCTION: 0x1001ae10 size=0x1e
#include "C_ItemGPishaFetish.h"

// VC6 writes C_ItemGPishaFetish's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGPishaFetish *pcd_emit_1001ae10() { return new C_ItemGPishaFetish; }

// TARGET: ??_GC_ItemGPishaFetish@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001ae30 size=0x6
#include "C_ItemGPishaFetish.h"
namespace lifted {
extern char g_10274568;
}
int C_ItemGPishaFetish::vfunc16()
{
    return (int)&lifted::g_10274568;
}
// END FUNCTION

// FUNCTION: 0x1001ae40 size=0x3
#include "C_ItemGPishaFetish.h"
int C_ItemGPishaFetish::vfunc15()
{
    return 0;
}
// END FUNCTION
