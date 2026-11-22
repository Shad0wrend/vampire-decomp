// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100a36f0 size=0x6
#include "C_BaseNetworkable.h"
namespace lifted {
extern char g_102b0204;
}
int C_BaseNetworkable::vfunc9()
{
    return (int)&lifted::g_102b0204;
}
// END FUNCTION

// FUNCTION: 0x100a38c0 size=0x1e
#include "C_BaseNetworkable.h"

// VC6 writes C_BaseNetworkable's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseNetworkable *pcd_emit_100a38c0() { return new C_BaseNetworkable; }

// TARGET: ??_GC_BaseNetworkable@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100a3ac0 size=0xc
#include "C_BaseNetworkable.h"
int C_BaseNetworkable::vfunc0(int a0)
{
    *(int *)((char *)this + 0x14) = *(int *)((char *)a0);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x100a3ad0 size=0x4
#include "C_BaseNetworkable.h"
unsigned int * C_BaseNetworkable::vfunc1()
{
    return (unsigned int *)((char *)this + 0x14);
}
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
