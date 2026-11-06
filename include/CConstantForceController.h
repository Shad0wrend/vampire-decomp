// CConstantForceController (RTTI .?AVCConstantForceController@@, vtable 0x104454b8, 1 slot): the motion
// controller callback of a constant force (a vphysics IMotionEvent), embedded in CPhysForce at +0x464. One
// definition (link audit F): the record's layout below, Simulate a plain member as the game's slot 0 is matched.
#pragma once

#include "Vector.h"

typedef Vector CPhysForceVec3;

// The motion record embedded at +0x464 (class not known): two points, each stored twice.
struct CPhysForceMotion
{
	void sub_10025f00(const CPhysForceVec3 *pStart, const CPhysForceVec3 *pEnd);	// stub 0x10015398: copies pStart / pEnd into the two start / end pairs (+8..+0x34)

	void sub_10025f80(float flScale);	// start = start2 * flScale, end = end2 * flScale

	virtual void vfunc0();	// the CConstantForceController vftable (0x104454b8) is stored by the CPhysForce constructor
	int m_n4;	// 0x04: the simresult Simulate returns
	CPhysForceVec3 m_vStart;	// 0x08
	CPhysForceVec3 m_vEnd;	// 0x14
	CPhysForceVec3 m_vStart2;	// 0x20
	CPhysForceVec3 m_vEnd2;	// 0x2c
};

// The real class of the record at +0x464 (RTTI .?AVCConstantForceController@@, vftable 0x104454b8).
struct CConstantForceController : public CPhysForceMotion
{
	int vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular);	// 0x10026000 Simulate: copies m_vStart to linear and m_vEnd to angular, returns m_n4 (4)
};
