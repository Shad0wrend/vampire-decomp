// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10026000 size=0x30
#include "CConstantForceController.h"

int CConstantForceController::vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular)
{
	VectorCopy(m_vecForce, linear);
	VectorCopy(m_vecTorque, angular);
	return m_n4;
}
// END FUNCTION
