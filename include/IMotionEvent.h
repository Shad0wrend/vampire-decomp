// IMotionEvent: the vphysics motion controller callback interface (RTTI .?AVIMotionEvent@@, one slot).
#pragma once

#include "Vector.h"

class IMotionEvent
{
public:
	virtual int vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular) = 0;	// Simulate: returns the simresult (4); pObject is the IPhysicsObject pointer
};
