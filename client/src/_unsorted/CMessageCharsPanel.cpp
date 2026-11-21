// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10168200 size=0x1e
#include "CMessageCharsPanel.h"

// VC6 writes CMessageCharsPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CMessageCharsPanel *pcd_emit_10168200() { return new CMessageCharsPanel; }

// TARGET: ??_GCMessageCharsPanel@@UAEPAXI@Z
// END FUNCTION
