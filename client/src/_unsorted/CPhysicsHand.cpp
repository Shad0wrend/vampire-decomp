// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005f6e0 size=0x1e
#include "CPhysicsHand.h"

// VC6 writes CPhysicsHand's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPhysicsHand *pcd_emit_1005f6e0(const CPhysicsHand &other) { return new CPhysicsHand(other); }

// TARGET: ??_GCPhysicsHand@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005f700 size=0x42
#include "CPhysicsHand.h"
// TARGET: ??1CPhysicsHand@@UAE@XZ
CPhysicsHand::~CPhysicsHand()
{
	sub_101a9ff0(0);
	delete m_pChild1;
	delete m_pChild2;
}
// END FUNCTION

// FUNCTION: 0x1005fa30 size=0x1
#include "CPhysicsHand.h"
void CPhysicsHand::vfunc97()
{
}
// END FUNCTION
