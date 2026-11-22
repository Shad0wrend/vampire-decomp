// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001ab90 size=0x1e
#include "C_ItemGVampyrApocrypha.h"

// VC6 writes C_ItemGVampyrApocrypha's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGVampyrApocrypha *pcd_emit_1001ab90() { return new C_ItemGVampyrApocrypha; }

// TARGET: ??_GC_ItemGVampyrApocrypha@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001abc0 size=0x3
#include "C_ItemGVampyrApocrypha.h"
int C_ItemGVampyrApocrypha::vfunc15()
{
    return 0;
}
// END FUNCTION
