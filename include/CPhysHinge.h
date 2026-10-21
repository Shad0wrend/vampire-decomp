// CPhysHinge: physics hinge constraint. Declared flat (bases not recovered); the vtable head and the members the constraint creation reads.
#pragma once

#include "Vector.h"

struct CPhysBreakableParams	// the engine's constraint_breakableparams_t of this version: strength, force / torque limit and an active flag
{
	float strength;	// 0x00
	float forceLimit;	// 0x04
	float torqueLimit;	// 0x08
	bool isActive;	// 0x0c

	void Defaults()
	{
		forceLimit = 0.0f;
		torqueLimit = 0.0f;
		strength = 1.0f;
		isActive = true;
	}
};

struct CPhysHingeParams	// the engine's constraint_hingeparams_t (0x38 bytes)
{
	Vector worldPosition;	// 0x00
	Vector worldAxisDirection;	// 0x0c
	float minRotation;	// 0x18
	float maxRotation;	// 0x1c
	float angularVelocity;	// 0x20
	float torque;	// 0x24
	CPhysBreakableParams constraint;	// 0x28
};

struct CPhysConstraintObjects	// the two physics objects a constraint joins
{
	void *m_pReference;
	void *m_pAttached;
};

class CPhysHinge
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysHinge *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_100121ac();	// destructor body
	void *vfunc241(void *pGroup, CPhysConstraintObjects *pObjects);	// slot 241 (declared as a plain member): "ERROR: Hinge with bad data!!!" and null when the hinge axis is the zero vector; else fills the hinge parameters (force / torque limits scaled from the members at +0x464 / +0x468, active flag from spawnflag bit 2, hinge friction at +0x4c0 as the axis torque) and asks the physics environment (global 0x10723940, slot 13) to create the hinge constraint

	char m_pad0004[0x204 - 4];
	unsigned int m_spawnflags204;	// 0x204
	char m_pad0208[0x464 - 0x208];
	float m_flForceLimit;	// 0x464
	float m_flTorqueLimit;	// 0x468
	char m_pad046c[0x488 - 0x46c];
	CPhysHingeParams m_hinge;	// 0x488
	float m_flHingeFriction;	// 0x4c0
};
