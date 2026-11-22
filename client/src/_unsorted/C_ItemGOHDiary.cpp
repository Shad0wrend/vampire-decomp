// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001a690 size=0x1e
#include "C_ItemGOHDiary.h"

// VC6 writes C_ItemGOHDiary's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGOHDiary *pcd_emit_1001a690() { return new C_ItemGOHDiary; }

// TARGET: ??_GC_ItemGOHDiary@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001a6c0 size=0x3
#include "C_ItemGOHDiary.h"
int C_ItemGOHDiary::vfunc15()
{
    return 0;
}
// END FUNCTION
