// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007270 size=0x3
#include "C_BaseTempEntity.h"
unsigned int * C_BaseTempEntity::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10007290 size=0x3
#include "C_BaseTempEntity.h"
ICollideable * C_BaseTempEntity::GetClientCollideable()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100072b0 size=0x3
#include "C_BaseTempEntity.h"
IClientRenderable * C_BaseTempEntity::GetClientRenderable()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100072c0 size=0x3
#include "C_BaseTempEntity.h"
IClientEntity * C_BaseTempEntity::GetIClientEntity()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100072d0 size=0x3
#include "C_BaseTempEntity.h"
C_BaseEntity * C_BaseTempEntity::GetBaseEntity()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100072e0 size=0x3
#include "C_BaseTempEntity.h"
IClientThinkable * C_BaseTempEntity::GetClientThinkable()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100072f0 size=0x3
#include "C_BaseTempEntity.h"
bool C_BaseTempEntity::vfunc14()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10007300 size=0x3
#include "C_BaseTempEntity.h"
bool C_BaseTempEntity::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1002c1a0 size=0x6
#include "C_BaseTempEntity.h"
namespace lifted {
extern char g_1027c4ec;
}
int C_BaseTempEntity::vfunc9()
{
    return (int)&lifted::g_1027c4ec;
}
// END FUNCTION

// FUNCTION: 0x1002c1b0 size=0x3
#include "C_BaseTempEntity.h"
int C_BaseTempEntity::vfunc8()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1002c370 size=0x1e
#include "C_BaseTempEntity.h"

// VC6 writes C_BaseTempEntity's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseTempEntity *pcd_emit_1002c370() { return new C_BaseTempEntity; }

// TARGET: ??_GC_BaseTempEntity@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1002c3c0 size=0x1
#include "C_BaseTempEntity.h"
void C_BaseTempEntity::vfunc13()
{
}
// END FUNCTION

// FUNCTION: 0x1002c480 size=0x13
#include "C_BaseTempEntity.h"
namespace lifted {
extern int g_102ead70;
}
bool C_BaseTempEntity::vfunc12(int a0, int a1)
{
    *(int *)((char *)this + 0xc) = lifted::g_102ead70;
    lifted::g_102ead70 = (int)this;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1002c510 size=0x3
#include "C_BaseTempEntity.h"
void C_BaseTempEntity::vfunc11(int a0)
{
}
// END FUNCTION
