// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101f2010 size=0x20
#include "vampire_all.h"
#include "IKeyCacheable.h"

// VC6 writes IKeyCacheable's scalar deleting destructor where it emits the class's vtable; its inline destructor (it stores the vptr) called in a function
// nothing calls makes it emit both here
void pcd_emit_101f2010(IKeyCacheable *p) { p->IKeyCacheable::~IKeyCacheable(); }

// TARGET: ??_GIKeyCacheable@@UAEPAXI@Z
// END FUNCTION
