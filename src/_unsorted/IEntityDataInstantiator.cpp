// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1003c920 size=0x20
#include "IEntityDataInstantiator.h"

// VC6 writes IEntityDataInstantiator's scalar deleting destructor where it emits the class's vtable; its inline destructor (it stores the vptr) called in a function
// nothing calls makes it emit both here
void pcd_emit_1003c920(IEntityDataInstantiator *p) { p->IEntityDataInstantiator::~IEntityDataInstantiator(); }

// TARGET: ??_GIEntityDataInstantiator@@UAEPAXI@Z
// END FUNCTION
