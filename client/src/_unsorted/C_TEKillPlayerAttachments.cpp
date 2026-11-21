// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003a3d0 size=0x1e
#include "C_TEKillPlayerAttachments.h"

// VC6 writes C_TEKillPlayerAttachments's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEKillPlayerAttachments *pcd_emit_1003a3d0() { return new C_TEKillPlayerAttachments; }

// TARGET: ??_GC_TEKillPlayerAttachments@@UAEPAXI@Z
// END FUNCTION
