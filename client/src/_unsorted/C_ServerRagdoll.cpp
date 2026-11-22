// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10125770 size=0x1e
#include "C_ServerRagdoll.h"

// VC6 writes C_ServerRagdoll's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ServerRagdoll *pcd_emit_10125770() { return new C_ServerRagdoll; }

// TARGET: ??_GC_ServerRagdoll@@UAEPAXI@Z
// END FUNCTION
