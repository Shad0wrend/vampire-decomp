// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004bb70 size=0x1
#include "CManagedHudElement.h"
void CManagedHudElement::vfunc113()
{
}
// END FUNCTION

// FUNCTION: 0x1005f110 size=0x1e
#include "CManagedHudElement.h"

// VC6 writes CManagedHudElement's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CManagedHudElement *pcd_emit_1005f110() { return new CManagedHudElement; }

// TARGET: ??_GCManagedHudElement@@UAEPAXI@Z
// END FUNCTION
