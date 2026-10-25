// CThrustController (RTTI .?AVCThrustController@@, vtable 0x1046dcc8, 1 slot): the motion controller callback of a thrust
// (a vphysics IMotionEvent); the two vectors are the force at +0x4 and the torque at +0x10.
#pragma once

#include "IMotionEvent.h"

class CThrustController : public IMotionEvent
{
public:
	int vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular);	// Simulate: copies the force to linear and the torque to angular, returns 1

	Vector m_vecForce;	// 0x04
	Vector m_vecTorque;	// 0x10
};
