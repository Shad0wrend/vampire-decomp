// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100f1420 size=0x1e
#include "CHudChatLine.h"

// VC6 writes CHudChatLine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudChatLine *pcd_emit_100f1420() { return new CHudChatLine; }

// TARGET: ??_GCHudChatLine@@UAEPAXI@Z
// END FUNCTION
