// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10023a10 size=0x1e
#include "C_ItemKEmpireMafiaKey.h"

// VC6 writes C_ItemKEmpireMafiaKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKEmpireMafiaKey *pcd_emit_10023a10() { return new C_ItemKEmpireMafiaKey; }

// TARGET: ??_GC_ItemKEmpireMafiaKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10023a40 size=0x3
#include "C_ItemKEmpireMafiaKey.h"
int C_ItemKEmpireMafiaKey::vfunc15()
{
    return 0;
}
// END FUNCTION
