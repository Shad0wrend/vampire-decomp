// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10010600 size=0x6
#include "C_ItemMMoneyEnvelope.h"
namespace lifted {
extern char g_10272e88;
}
int C_ItemMMoneyEnvelope::vfunc17()
{
    return (int)&lifted::g_10272e88;
}
// END FUNCTION

// FUNCTION: 0x10010690 size=0x1e
#include "C_ItemMMoneyEnvelope.h"

// VC6 writes C_ItemMMoneyEnvelope's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemMMoneyEnvelope *pcd_emit_10010690() { return new C_ItemMMoneyEnvelope; }

// TARGET: ??_GC_ItemMMoneyEnvelope@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100106c0 size=0x3
#include "C_ItemMMoneyEnvelope.h"
int C_ItemMMoneyEnvelope::vfunc15()
{
    return 0;
}
// END FUNCTION
