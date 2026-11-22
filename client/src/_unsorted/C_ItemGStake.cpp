// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001d800 size=0x6
#include "C_ItemGStake.h"
namespace lifted {
extern char g_102737b8;
}
int C_ItemGStake::vfunc17()
{
    return (int)&lifted::g_102737b8;
}
// END FUNCTION

// FUNCTION: 0x1001d890 size=0x1e
#include "C_ItemGStake.h"

// VC6 writes C_ItemGStake's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGStake *pcd_emit_1001d890() { return new C_ItemGStake; }

// TARGET: ??_GC_ItemGStake@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001d8b0 size=0x6
#include "C_ItemGStake.h"
namespace lifted {
extern char g_102743d4;
}
int C_ItemGStake::vfunc16()
{
    return (int)&lifted::g_102743d4;
}
// END FUNCTION

// FUNCTION: 0x1001d8c0 size=0x3
#include "C_ItemGStake.h"
int C_ItemGStake::vfunc15()
{
    return 0;
}
// END FUNCTION
