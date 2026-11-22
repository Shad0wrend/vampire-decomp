// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10125770 size=0x1e
#include "C_ServerRagdoll.h"

// VC6 writes C_ServerRagdoll's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ServerRagdoll *pcd_emit_10125770() { return new C_ServerRagdoll; }

// TARGET: ??_GC_ServerRagdoll@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10125e50 size=0x6
#include "C_ServerRagdoll.h"
namespace lifted {
extern char g_102c2ea0;
}
int C_ServerRagdoll::vfunc16()
{
    return (int)&lifted::g_102c2ea0;
}
// END FUNCTION

// FUNCTION: 0x10125e60 size=0x3
#include "C_ServerRagdoll.h"
int C_ServerRagdoll::vfunc15()
{
    return 0;
}
// END FUNCTION
