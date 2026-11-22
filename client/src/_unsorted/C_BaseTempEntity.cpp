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
