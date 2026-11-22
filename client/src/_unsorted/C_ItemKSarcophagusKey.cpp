// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10025500 size=0x6
#include "C_ItemKSarcophagusKey.h"
namespace lifted {
extern char g_10273d30;
}
int C_ItemKSarcophagusKey::vfunc17()
{
    return (int)&lifted::g_10273d30;
}
// END FUNCTION

// FUNCTION: 0x10025590 size=0x1e
#include "C_ItemKSarcophagusKey.h"

// VC6 writes C_ItemKSarcophagusKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKSarcophagusKey *pcd_emit_10025590() { return new C_ItemKSarcophagusKey; }

// TARGET: ??_GC_ItemKSarcophagusKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100255b0 size=0x6
#include "C_ItemKSarcophagusKey.h"
namespace lifted {
extern char g_10273f40;
}
int C_ItemKSarcophagusKey::vfunc16()
{
    return (int)&lifted::g_10273f40;
}
// END FUNCTION

// FUNCTION: 0x100255c0 size=0x3
#include "C_ItemKSarcophagusKey.h"
int C_ItemKSarcophagusKey::vfunc15()
{
    return 0;
}
// END FUNCTION
