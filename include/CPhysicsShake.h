// CPhysicsShake: the motion controller callback that shakes a physics object (RTTI .?AVCPhysicsShake@@, IMotionEvent based).
#pragma once

#include "IMotionEvent.h"

class CPhysicsShake : public IMotionEvent
{
public:
	virtual int vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular);	// Simulate: without a contact point nothing (0); else the shake vector scaled by 1 + 0.4 * mass is applied at the contact point as a global force (2)

	Vector m_vecShake;	// 0x04
};
