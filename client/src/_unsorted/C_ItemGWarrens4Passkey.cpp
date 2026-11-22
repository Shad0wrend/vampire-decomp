// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001c680 size=0x6
#include "C_ItemGWarrens4Passkey.h"
namespace lifted {
extern char g_102736f4;
}
int C_ItemGWarrens4Passkey::vfunc17()
{
    return (int)&lifted::g_102736f4;
}
// END FUNCTION

// FUNCTION: 0x1001c710 size=0x1e
#include "C_ItemGWarrens4Passkey.h"

// VC6 writes C_ItemGWarrens4Passkey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWarrens4Passkey *pcd_emit_1001c710() { return new C_ItemGWarrens4Passkey; }

// TARGET: ??_GC_ItemGWarrens4Passkey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1001c740 size=0x3
#include "C_ItemGWarrens4Passkey.h"
int C_ItemGWarrens4Passkey::vfunc15()
{
    return 0;
}
// END FUNCTION
