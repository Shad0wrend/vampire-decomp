// CPhysForce (RTTI CPhysForce : CPointEntity, vtable 0x10445024): physics force entity.
#pragma once

#include "CPointEntity.h"

class IPhysicsObject;

#include "CConstantForceController.h"	// CPhysForceVec3 and the motion record's class

// The controller object whose pointer sits at +0x450 of CPhysForce (class not known): its slot 1 takes the motion record.
class CPhysForceController
{
public:
	virtual void vfunc0();
	virtual void vfunc1(CConstantForceController *pMotion);
	virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4(); virtual void vfunc5(); virtual void vfunc6();
	virtual void vfunc7();	// slot 7: run after the motion record has been rescaled by the input handler 0x10027b60
};

class CPhysForce : public CPointEntity
{
public:
	CPhysForce();	// 0x100264e0: CBaseEntity(0), handle -1 (+0x460), the motion record's vftable (+0x464), own vftable, controller null
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor
	void vfunc130(int a);	// slot 130: CBaseEntity::vfunc130(a), then the controller's slot 1 with the motion record

	void sub_10027b60(float flScale);	// input handler body (called by the inputdata_t wrapper 0x10027890 with the float value): attaches the force when there is no controller, scales the motion record (+0x464) by flScale and runs the controller's slot 7
	void sub_10014470();	// destructor body
	void sub_100276c0();	// 0x100276c0: vtable store, DestroySpring of the controller (env slot 40), then the CBaseEntity destructor body (stub 0x1000cb8a)
	void sub_100a0bc0();	// CBaseEntity::vfunc113 (stub 0x10001226), called directly
	void sub_100278e0();	// without a controller: attaches the force (sub_10027960) and, with a non-zero timeout (+0x45c), sets the next think to curtime + timeout and the think function to the stub at 0x10001a9b
	void sub_10027960();	// attaches the force to the physics object of the attached entity (handle at +0x460): the object's current points are stored in the motion record at +0x464, the environment (global 0x10723940, slot 39) creates the controller for it (+0x450) and the object is added to it
	void sub_1000b5d2();	// stub 0x1000b5d2, the tail target of vfunc103 (the force's base work for flag bit 0)
	virtual void vfunc113();	// slot 113: base work, then looks up the attached entity by name (+0x454) when its handle (+0x460) is stale, slot 242, and attaches the force (sub_10027960) when a controller exists
	void vfunc103();	// slot 103: sets the motion state at +0x468 from the flags at +0x204 (1 with bit 3, else 3), then sub_1000b5d2 when bit 0 is set

	void *m_pController;	// 0x450
	const char *m_pszAttachName;	// 0x454: name of the entity to attach to
	float m_force;	// 0x0458
	float m_flTimeout;	// 0x45c
	unsigned int m_hAttached;	// 0x460: handle of the attached entity
	CConstantForceController m_Motion;	// 0x464
public:
    virtual datamap_t * vfunc82();
public:
	// slots 134..240 are CPointEntity's; 241 and 242 are new
	virtual void vfunc241(IPhysicsObject *pPhys, Vector *pLinear, Vector *pAngular) = 0;	// _purecall in this vtable (CPhysThruster's slot 241)
	virtual void vfunc242();	// 0x10027670: empty
};
