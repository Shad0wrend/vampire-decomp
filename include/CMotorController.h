// CMotorController (RTTI .?AVCMotorController@@, vtable 0x104462a8, 1 slot): the vphysics motion controller
// callback (an IMotionEvent) of the physics motor. Simulate applies an angular torque along the local axis at
// +0x0c so that the object spins at m_flSpeed.
#pragma once

#include "IMotionEvent.h"

class CMotorController : public IMotionEvent
{
public:
	int vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular);	// Simulate: vec3_origin into both;

	float m_flSpeed;	// 0x04: target speed along the axis; 0 -> returns 0 without applying anything
	float m_flMaxValue;	// 0x08: the value applied is clamped to +-this (0 = no clamp)
	Vector m_vecAxis;	// 0x0c: the axis in the object's local space (transformed by its position matrix)
	float m_flGain;	// 0x18: gain on (m_flSpeed - the axial speed) * the axial inertia
	float m_flLastAxial;	// 0x1c: the axial speed measured by the last call (stored back)
	float m_flLastApplied;	// 0x20: the applied value divided by the axial inertia (stored back)
	float m_flLastValue;	// 0x24: the value applied by the last call (also a damping coefficient)
	float m_flDamping;	// 0x28: gain of the limit-braking term
};
