// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10118800 size=0x1e
#include "CEmberEffect.h"

// VC6 writes CEmberEffect's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CEmberEffect *pcd_emit_10118800() { return new CEmberEffect; }

// TARGET: ??_GCEmberEffect@@UAEPAXI@Z
// END FUNCTION
