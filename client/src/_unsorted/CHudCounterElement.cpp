// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bbe00 size=0x1e
#include "CHudCounterElement.h"

// VC6 writes CHudCounterElement's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudCounterElement *pcd_emit_100bbe00() { return new CHudCounterElement; }

// TARGET: ??_GCHudCounterElement@@UAEPAXI@Z
// END FUNCTION
