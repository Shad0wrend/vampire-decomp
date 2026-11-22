// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8530 size=0x1e
#include "CTextConsoleProxy.h"

// VC6 writes CTextConsoleProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTextConsoleProxy *pcd_emit_100c8530() { return new CTextConsoleProxy; }

// TARGET: ??_GCTextConsoleProxy@@UAEPAXI@Z
// END FUNCTION
