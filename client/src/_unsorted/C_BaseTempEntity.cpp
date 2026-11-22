// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007270 size=0x3
#include "C_BaseTempEntity.h"
unsigned int * C_BaseTempEntity::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1002c370 size=0x1e
#include "C_BaseTempEntity.h"

// VC6 writes C_BaseTempEntity's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseTempEntity *pcd_emit_1002c370() { return new C_BaseTempEntity; }

// TARGET: ??_GC_BaseTempEntity@@UAEPAXI@Z
// END FUNCTION
