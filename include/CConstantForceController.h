// CConstantForceController (RTTI .?AVCConstantForceController@@, vtable 0x104454b8, 1 slot): the motion
// controller callback of a constant force (a vphysics IMotionEvent). The force is at +0x04? no: the flag
// at +0x04, the force at +0x08 and the torque at +0x14.
#pragma once

#include "IMotionEvent.h"

class CConstantForceController : public IMotionEvent
{
public:
	int vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular);	// Simulate: copies the force to linear and the torque to angular, returns the flag at +0x04

	int m_n4;	// 0x04: returned by Simulate
	Vector m_vecForce;	// 0x08
	Vector m_vecTorque;	// 0x14
};
