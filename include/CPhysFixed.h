// CPhysFixed: fixed constraint entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "matrix3x4_t.h"
#include "CPhysHinge.h"

struct CPhysFixedParams	// the engine's constraint_fixedparams_t (0x40 bytes): the attached object's transform in the reference object's space
{
	matrix3x4_t attachedRefXform;	// 0x00: set to identity by sub_10139a90(&xform) (cdecl, stub 0x1000949e), then the concatenation below
	CPhysBreakableParams constraint;	// 0x30
};

class CPhysFixed
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysFixed *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_100121ac();	// destructor body

	// Slot 241 (CreateConstraint, declared as a plain member; ret 8) 0x1002c190: with a 0x40 byte CPhysFixedParams (its own matrix identity,
	// breakable params defaults: strength 1.0f), the reference (pObjects->m_pReference) and attached object's world matrices (their slot 38,
	// into two locals: ref's inverted by sub_10138630(in, out) (cdecl, stub 0x10005394), then sub_10138df0(refInv, attachedMatrix,
	// &params.attachedRefXform) (ConcatTransforms, cdecl, stub 0x1000a01a)), the force / torque limits from the members at +0x464 / +0x468 times
	// 0.45454544f (0x10447ee4), the active flag from spawnflag bit 2 (not (flags >> 2) & 1); when the reference object is the world object
	// (global 0x10723938) the attached object's slot 7 gets (its slot 8 | 2); then the physics environment (global 0x10723940, slot 14)
	// CreateFixedConstraint(reference, attached, pGroup, &params).
	void *vfunc241(void *pGroup, CPhysConstraintObjects *pObjects);

	char m_pad0004[0x204 - 4];
	unsigned int m_spawnflags204;	// 0x204
	char m_pad0208[0x464 - 0x208];
	float m_flForceLimit;	// 0x464
	float m_flTorqueLimit;	// 0x468
};
