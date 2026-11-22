// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001ab00 size=0x6
#include "C_ItemGVampyrApocrypha.h"
namespace lifted {
extern char g_102735c0;
}
int C_ItemGVampyrApocrypha::vfunc17()
{
    return (int)&lifted::g_102735c0;
}
// END FUNCTION

// FUNCTION: 0x1001ab90 size=0x1e
#include "C_ItemGVampyrApocrypha.h"

// VC6 writes C_ItemGVampyrApocrypha's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGVampyrApocrypha *pcd_emit_1001ab90() { return new C_ItemGVampyrApocrypha; }

// TARGET: ??_GC_ItemGVampyrApocrypha@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001abb0 size=0x6
#include "C_ItemGVampyrApocrypha.h"
namespace lifted {
extern char g_1027457c;
}
int C_ItemGVampyrApocrypha::vfunc16()
{
    return (int)&lifted::g_1027457c;
}
// END FUNCTION

// FUNCTION: 0x1001abc0 size=0x3
#include "C_ItemGVampyrApocrypha.h"
int C_ItemGVampyrApocrypha::vfunc15()
{
    return 0;
}
// END FUNCTION
