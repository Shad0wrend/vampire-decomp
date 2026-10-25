// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1014fa70 size=0x32
#include "CThrustController.h"

// TARGET: CThrustController::vfunc0
int CThrustController::vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular)
{
    VectorCopy(m_vecTorque, angular);
    VectorCopy(m_vecForce, linear);
    return 1;
}
// END FUNCTION
