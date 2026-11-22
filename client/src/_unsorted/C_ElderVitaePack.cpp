// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10014e80 size=0x6
#include "C_ElderVitaePack.h"
namespace lifted {
extern char g_102731b4;
}
int C_ElderVitaePack::vfunc17()
{
    return (int)&lifted::g_102731b4;
}
// END FUNCTION

// FUNCTION: 0x10014f10 size=0x1e
#include "C_ElderVitaePack.h"

// VC6 writes C_ElderVitaePack's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ElderVitaePack *pcd_emit_10014f10() { return new C_ElderVitaePack; }

// TARGET: ??_GC_ElderVitaePack@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10014f40 size=0x3
#include "C_ElderVitaePack.h"
int C_ElderVitaePack::vfunc15()
{
    return 0;
}
// END FUNCTION
