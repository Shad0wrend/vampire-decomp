// CConstantForceController (RTTI CConstantForceController : IMotionEvent, vtable 0x104454b8, 1 slot): the motion
// controller callback of a constant force (the 2004 SDK's dlls/phys_controller.cpp class), embedded in CPhysForce at
// +0x464.
#pragma once

#include "Vector.h"
#include "IMotionEvent.h"

typedef Vector CPhysForceVec3;

class CConstantForceController : public IMotionEvent
{
public:
	int vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular);	// slot 0, 0x10026000 Simulate: copies m_vStart to linear and m_vEnd to angular, returns m_n4 (4)
	void sub_10025f00(const CPhysForceVec3 *pStart, const CPhysForceVec3 *pEnd);	// SetConstantForce (stub 0x10015398): copies pStart / pEnd into the two start / end pairs (+8..+0x34)
	void sub_10025f80(float flScale);	// ScaleConstantForce: start = start2 * flScale, end = end2 * flScale

	int m_n4;	// 0x04: m_controlType, the simresult Simulate returns
	CPhysForceVec3 m_vStart;	// 0x08: m_linear
	CPhysForceVec3 m_vEnd;	// 0x14: m_angular
	CPhysForceVec3 m_vStart2;	// 0x20: m_linearSave
	CPhysForceVec3 m_vEnd2;	// 0x2c: m_angularSave
};
