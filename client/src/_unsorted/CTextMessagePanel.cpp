// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016a770 size=0x1e
#include "CTextMessagePanel.h"

// VC6 writes CTextMessagePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTextMessagePanel *pcd_emit_1016a770() { return new CTextMessagePanel; }

// TARGET: ??_GCTextMessagePanel@@UAEPAXI@Z
// END FUNCTION
