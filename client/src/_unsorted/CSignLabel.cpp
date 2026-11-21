// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10060730 size=0x1e
#include "CSignLabel.h"

// VC6 writes CSignLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSignLabel *pcd_emit_10060730() { return new CSignLabel; }

// TARGET: ??_GCSignLabel@@UAEPAXI@Z
// END FUNCTION
