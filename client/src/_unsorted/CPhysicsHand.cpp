// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005f6e0 size=0x1e
#include "CPhysicsHand.h"

// VC6 writes CPhysicsHand's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPhysicsHand *pcd_emit_1005f6e0() { return new CPhysicsHand; }

// TARGET: ??_GCPhysicsHand@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005fa30 size=0x1
#include "CPhysicsHand.h"
void CPhysicsHand::vfunc97()
{
}
// END FUNCTION
