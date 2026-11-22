// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10022080 size=0x6
#include "C_ItemKClinicCSKey.h"
namespace lifted {
extern char g_10273ae4;
}
int C_ItemKClinicCSKey::vfunc17()
{
    return (int)&lifted::g_10273ae4;
}
// END FUNCTION

// FUNCTION: 0x10022110 size=0x1e
#include "C_ItemKClinicCSKey.h"

// VC6 writes C_ItemKClinicCSKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKClinicCSKey *pcd_emit_10022110() { return new C_ItemKClinicCSKey; }

// TARGET: ??_GC_ItemKClinicCSKey@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10022140 size=0x3
#include "C_ItemKClinicCSKey.h"
int C_ItemKClinicCSKey::vfunc15()
{
    return 0;
}
// END FUNCTION
