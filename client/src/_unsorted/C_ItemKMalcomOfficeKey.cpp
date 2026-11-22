// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10022300 size=0x6
#include "C_ItemKMalcomOfficeKey.h"
namespace lifted {
extern char g_10273b00;
}
int C_ItemKMalcomOfficeKey::vfunc17()
{
    return (int)&lifted::g_10273b00;
}
// END FUNCTION

// FUNCTION: 0x10022390 size=0x1e
#include "C_ItemKMalcomOfficeKey.h"

// VC6 writes C_ItemKMalcomOfficeKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKMalcomOfficeKey *pcd_emit_10022390() { return new C_ItemKMalcomOfficeKey; }

// TARGET: ??_GC_ItemKMalcomOfficeKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100223c0 size=0x3
#include "C_ItemKMalcomOfficeKey.h"
int C_ItemKMalcomOfficeKey::vfunc15()
{
    return 0;
}
// END FUNCTION
