// CPhysicsWind: the wind motion controller callback (base IMotionEvent).
#pragma once

#include "IMotionEvent.h"

class CPhysicsWind : public IMotionEvent
{
public:
	virtual int vfunc0(void *pController, void *pObject, float deltaTime, Vector &linear, Vector &angular);	// Simulate: a gust that sways with the time and the object's address

	int m_nBaseYaw;	// 0x04
	float m_flScale;	// 0x08
};
