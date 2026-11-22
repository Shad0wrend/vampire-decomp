// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10033140 size=0x1e
#include "C_TEBeamLaser.h"

// VC6 writes C_TEBeamLaser's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBeamLaser *pcd_emit_10033140() { return new C_TEBeamLaser; }

// TARGET: ??_GC_TEBeamLaser@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10033290 size=0x6
#include "C_TEBeamLaser.h"
namespace lifted {
extern char g_1027d838;
}
int C_TEBeamLaser::vfunc9()
{
    return (int)&lifted::g_1027d838;
}
// END FUNCTION

// FUNCTION: 0x100332a0 size=0x3
#include "C_TEBeamLaser.h"
int C_TEBeamLaser::vfunc8()
{
    return 0;
}
// END FUNCTION
