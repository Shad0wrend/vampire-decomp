// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c65a0 size=0x6
#include "C_VampireProjectile_MingXiaoSpit.h"
namespace lifted {
extern char g_102b6da4;
}
int C_VampireProjectile_MingXiaoSpit::vfunc16()
{
    return (int)&lifted::g_102b6da4;
}
// END FUNCTION

// FUNCTION: 0x100c65b0 size=0x3
#include "C_VampireProjectile_MingXiaoSpit.h"
int C_VampireProjectile_MingXiaoSpit::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100c6680 size=0x1e
#include "C_VampireProjectile_MingXiaoSpit.h"

// VC6 writes C_VampireProjectile_MingXiaoSpit's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_VampireProjectile_MingXiaoSpit *pcd_emit_100c6680() { return new C_VampireProjectile_MingXiaoSpit; }

// TARGET: ??_GC_VampireProjectile_MingXiaoSpit@@UAEPAXI@Z
// END FUNCTION
