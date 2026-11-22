// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d9140 size=0x1e
#include "CClientSideEffect.h"

// VC6 writes CClientSideEffect's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CClientSideEffect *pcd_emit_100d9140() { return new CClientSideEffect; }

// TARGET: ??_GCClientSideEffect@@UAEPAXI@Z
// END FUNCTION
