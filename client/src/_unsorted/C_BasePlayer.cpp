// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100a54a0 size=0x1e
#include "C_BasePlayer.h"

// VC6 writes C_BasePlayer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BasePlayer *pcd_emit_100a54a0() { return new C_BasePlayer; }

// TARGET: ??_GC_BasePlayer@@UAEPAXI@Z
// END FUNCTION
