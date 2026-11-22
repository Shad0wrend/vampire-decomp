// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10019200 size=0x6
#include "C_ItemGLillyPurse.h"
namespace lifted {
extern char g_102734a8;
}
int C_ItemGLillyPurse::vfunc17()
{
    return (int)&lifted::g_102734a8;
}
// END FUNCTION

// FUNCTION: 0x10019290 size=0x1e
#include "C_ItemGLillyPurse.h"

// VC6 writes C_ItemGLillyPurse's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGLillyPurse *pcd_emit_10019290() { return new C_ItemGLillyPurse; }

// TARGET: ??_GC_ItemGLillyPurse@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100192b0 size=0x6
#include "C_ItemGLillyPurse.h"
namespace lifted {
extern char g_10274658;
}
int C_ItemGLillyPurse::vfunc16()
{
    return (int)&lifted::g_10274658;
}
// END FUNCTION

// FUNCTION: 0x100192c0 size=0x3
#include "C_ItemGLillyPurse.h"
int C_ItemGLillyPurse::vfunc15()
{
    return 0;
}
// END FUNCTION
