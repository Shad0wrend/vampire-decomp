// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100a38c0 size=0x1e
#include "C_BaseNetworkable.h"

// VC6 writes C_BaseNetworkable's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseNetworkable *pcd_emit_100a38c0() { return new C_BaseNetworkable; }

// TARGET: ??_GC_BaseNetworkable@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100a3af0 size=0x3
#include "C_BaseNetworkable.h"
ICollideable * C_BaseNetworkable::GetClientCollideable()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a3b10 size=0x3
#include "C_BaseNetworkable.h"
IClientRenderable * C_BaseNetworkable::GetClientRenderable()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a3b20 size=0x3
#include "C_BaseNetworkable.h"
IClientEntity * C_BaseNetworkable::GetIClientEntity()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a3b30 size=0x3
#include "C_BaseNetworkable.h"
C_BaseEntity * C_BaseNetworkable::GetBaseEntity()
{
    return 0;
}
// END FUNCTION
