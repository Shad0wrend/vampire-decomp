// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10351360 size=0x1b
#include "CPhysicsPlayerCallback.h"

// TARGET: CPhysicsPlayerCallback::vfunc0
int CPhysicsPlayerCallback::vfunc0(IPhysicsObject *pObject, const Vector &position)
{
	char b = *((char *)pObject->vfunc6() + 0x2128);
	return b == 0;
}
// END FUNCTION
