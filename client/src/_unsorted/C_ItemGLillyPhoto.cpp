// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10018d90 size=0x1e
#include "C_ItemGLillyPhoto.h"

// VC6 writes C_ItemGLillyPhoto's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGLillyPhoto *pcd_emit_10018d90() { return new C_ItemGLillyPhoto; }

// TARGET: ??_GC_ItemGLillyPhoto@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10018dc0 size=0x3
#include "C_ItemGLillyPhoto.h"
int C_ItemGLillyPhoto::vfunc15()
{
    return 0;
}
// END FUNCTION
