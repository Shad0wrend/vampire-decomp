// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002d560 size=0x3
// TARGET: sub_1002d560
void __stdcall sub_1002d560(int a)
{
}
// END FUNCTION

// FUNCTION: 0x1002d580 size=0x17
#include "CObjectEvent.h"
#include "IPhysicsObject.h"

void sub_101cf600(void *pEntity);

void CObjectEvent::vfunc1(IPhysicsObject *pObject)
{
	void *pGameData = pObject->vfunc6();
	if (pGameData)
		sub_101cf600(pGameData);
}
// END FUNCTION
