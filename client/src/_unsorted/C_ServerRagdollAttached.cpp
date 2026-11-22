// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101260c0 size=0x3
#include "C_ServerRagdollAttached.h"
int C_ServerRagdollAttached::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101265f0 size=0x1e
#include "C_ServerRagdollAttached.h"

// VC6 writes C_ServerRagdollAttached's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ServerRagdollAttached *pcd_emit_101265f0() { return new C_ServerRagdollAttached; }

// TARGET: ??_GC_ServerRagdollAttached@@UAEPAXI@Z
// END FUNCTION
