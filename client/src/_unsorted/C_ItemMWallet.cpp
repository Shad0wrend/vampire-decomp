// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10010190 size=0x1e
#include "C_ItemMWallet.h"

// VC6 writes C_ItemMWallet's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemMWallet *pcd_emit_10010190() { return new C_ItemMWallet; }

// TARGET: ??_GC_ItemMWallet@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100101c0 size=0x3
#include "C_ItemMWallet.h"
int C_ItemMWallet::vfunc15()
{
    return 0;
}
// END FUNCTION
