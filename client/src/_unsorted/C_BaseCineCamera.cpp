// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100011c0 size=0x6
#include "C_BaseCineCamera.h"
namespace lifted {
extern char g_10270a8c;
}
int C_BaseCineCamera::vfunc16()
{
    return (int)&lifted::g_10270a8c;
}
// END FUNCTION

// FUNCTION: 0x100011d0 size=0x3
#include "C_BaseCineCamera.h"
int C_BaseCineCamera::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10001900 size=0x1e
#include "C_BaseCineCamera.h"

// VC6 writes C_BaseCineCamera's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseCineCamera *pcd_emit_10001900() { return new C_BaseCineCamera; }

// TARGET: ??_GC_BaseCineCamera@@UAEPAXI@Z
// END FUNCTION
