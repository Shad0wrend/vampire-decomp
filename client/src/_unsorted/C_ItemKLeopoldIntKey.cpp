// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10022b10 size=0x1e
#include "C_ItemKLeopoldIntKey.h"

// VC6 writes C_ItemKLeopoldIntKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKLeopoldIntKey *pcd_emit_10022b10() { return new C_ItemKLeopoldIntKey; }

// TARGET: ??_GC_ItemKLeopoldIntKey@@UAEPAXI@Z
// END FUNCTION
