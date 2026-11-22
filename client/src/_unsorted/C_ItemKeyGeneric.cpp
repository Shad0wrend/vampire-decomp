// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10003ba0 size=0x1e
#include "C_ItemKeyGeneric.h"

// VC6 writes C_ItemKeyGeneric's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKeyGeneric *pcd_emit_10003ba0() { return new C_ItemKeyGeneric; }

// TARGET: ??_GC_ItemKeyGeneric@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10003bc0 size=0x7
#include "C_ItemKeyGeneric.h"
char * C_ItemKeyGeneric::vfunc114()
{
    return (char *)this + 0x978;
}
// END FUNCTION
