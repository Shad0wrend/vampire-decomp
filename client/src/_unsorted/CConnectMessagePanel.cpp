// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10165240 size=0x1e
#include "CConnectMessagePanel.h"

// VC6 writes CConnectMessagePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CConnectMessagePanel *pcd_emit_10165240() { return new CConnectMessagePanel; }

// TARGET: ??_GCConnectMessagePanel@@UAEPAXI@Z
// END FUNCTION
