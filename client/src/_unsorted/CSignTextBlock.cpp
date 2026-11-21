// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10060400 size=0x1e
#include "CSignTextBlock.h"

// VC6 writes CSignTextBlock's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSignTextBlock *pcd_emit_10060400() { return new CSignTextBlock; }

// TARGET: ??_GCSignTextBlock@@UAEPAXI@Z
// END FUNCTION
