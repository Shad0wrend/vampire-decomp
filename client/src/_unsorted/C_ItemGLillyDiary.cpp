// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10019010 size=0x1e
#include "C_ItemGLillyDiary.h"

// VC6 writes C_ItemGLillyDiary's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGLillyDiary *pcd_emit_10019010() { return new C_ItemGLillyDiary; }

// TARGET: ??_GC_ItemGLillyDiary@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10019040 size=0x3
#include "C_ItemGLillyDiary.h"
int C_ItemGLillyDiary::vfunc15()
{
    return 0;
}
// END FUNCTION
