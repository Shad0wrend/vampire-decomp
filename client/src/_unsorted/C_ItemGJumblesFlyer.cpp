// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10019c90 size=0x1e
#include "C_ItemGJumblesFlyer.h"

// VC6 writes C_ItemGJumblesFlyer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGJumblesFlyer *pcd_emit_10019c90() { return new C_ItemGJumblesFlyer; }

// TARGET: ??_GC_ItemGJumblesFlyer@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10019cc0 size=0x3
#include "C_ItemGJumblesFlyer.h"
int C_ItemGJumblesFlyer::vfunc15()
{
    return 0;
}
// END FUNCTION
