// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10167430 size=0x1e
#include "CLoadingDiscPanel.h"

// VC6 writes CLoadingDiscPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CLoadingDiscPanel *pcd_emit_10167430() { return new CLoadingDiscPanel; }

// TARGET: ??_GCLoadingDiscPanel@@UAEPAXI@Z
// END FUNCTION
