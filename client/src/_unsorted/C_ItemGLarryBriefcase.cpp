// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10019e80 size=0x6
#include "C_ItemGLarryBriefcase.h"
namespace lifted {
extern char g_10273534;
}
int C_ItemGLarryBriefcase::vfunc17()
{
    return (int)&lifted::g_10273534;
}
// END FUNCTION

// FUNCTION: 0x10019f10 size=0x1e
#include "C_ItemGLarryBriefcase.h"

// VC6 writes C_ItemGLarryBriefcase's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGLarryBriefcase *pcd_emit_10019f10() { return new C_ItemGLarryBriefcase; }

// TARGET: ??_GC_ItemGLarryBriefcase@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10019f40 size=0x3
#include "C_ItemGLarryBriefcase.h"
int C_ItemGLarryBriefcase::vfunc15()
{
    return 0;
}
// END FUNCTION
