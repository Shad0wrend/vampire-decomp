// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10102b20 size=0x99
#include "CPhysicsShake.h"
#include "IPhysicsObject.h"

int CPhysicsShake::vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular)
{
	IPhysicsObject *pPhys = (IPhysicsObject *)pObject;
	Vector vecContact;
	if (!pPhys->vfunc44(&vecContact, 0))
		return 0;
	float flScale = pPhys->vfunc12() * 0.4f + 1.0f;
	Vector vecForce = m_vecShake * flScale;
	pPhys->vfunc32(&vecForce, &vecContact, &linear, &angular);
	return 2;
}
// END FUNCTION
