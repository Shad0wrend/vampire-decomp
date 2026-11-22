// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100509b0 size=0x68
#include "CBroadcastRecipientFilter.h"

// VC6 writes CBroadcastRecipientFilter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CBroadcastRecipientFilter *pcd_emit_100509b0() { return new CBroadcastRecipientFilter; }

// TARGET: ??_GCBroadcastRecipientFilter@@UAEPAXI@Z
// END FUNCTION
