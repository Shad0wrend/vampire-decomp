// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100015b0 size=0x7
#include "C_BaseEntity.h"
ICollideable * C_BaseEntity::GetClientCollideable()
{
    return (ICollideable *)((char *)this + 0x190);
}
// END FUNCTION

// FUNCTION: 0x100015e0 size=0x3
#include "C_BaseEntity.h"
IClientEntity * C_BaseEntity::GetIClientEntity()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x100015f0 size=0x3
#include "C_BaseEntity.h"
C_BaseEntity * C_BaseEntity::GetBaseEntity()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x1009dda0 size=0x1e
#include "C_BaseEntity.h"

// VC6 writes C_BaseEntity's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseEntity *pcd_emit_1009dda0() { return new C_BaseEntity; }

// TARGET: ??_GC_BaseEntity@@UAEPAXI@Z
// END FUNCTION
