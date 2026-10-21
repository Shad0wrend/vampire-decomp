// CPhysTorque: physics torque entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "Vector.h"

class CPhysObjSlots;

class CPhysTorque
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysTorque *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_10014470();	// destructor body
	void sub_100282e0(CPhysObjSlots *pObject, float flTime, Vector *pAngular);	// slot 241 "CPhysTorque::vfunc241" (plain member): zeroes the object's first three dwords, rotates the vector at +0x49c by the object's matrix and scales it by the float at +0x458

	char m_pad0004[0x458 - 4];
	float m_flScale;	// 0x458
	char m_pad045c[0x49c - 0x45c];
	Vector m_vecAxis;	// 0x49c
};
