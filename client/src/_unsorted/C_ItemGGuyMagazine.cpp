// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001ba00 size=0x6
#include "C_ItemGGuyMagazine.h"
namespace lifted {
extern char g_10273668;
}
int C_ItemGGuyMagazine::vfunc17()
{
    return (int)&lifted::g_10273668;
}
// END FUNCTION

// FUNCTION: 0x1001ba90 size=0x1e
#include "C_ItemGGuyMagazine.h"

// VC6 writes C_ItemGGuyMagazine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGuyMagazine *pcd_emit_1001ba90() { return new C_ItemGGuyMagazine; }

// TARGET: ??_GC_ItemGGuyMagazine@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001bab0 size=0x6
#include "C_ItemGGuyMagazine.h"
namespace lifted {
extern char g_102744e8;
}
int C_ItemGGuyMagazine::vfunc16()
{
    return (int)&lifted::g_102744e8;
}
// END FUNCTION

// FUNCTION: 0x1001bac0 size=0x3
#include "C_ItemGGuyMagazine.h"
int C_ItemGGuyMagazine::vfunc15()
{
    return 0;
}
// END FUNCTION
