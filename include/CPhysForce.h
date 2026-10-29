// CPhysForce: physics force entity (CBaseEntity subclass; the intermediate bases are not recovered).
#pragma once

#include "CBaseEntity.h"

typedef Vector CPhysForceVec3;

// The motion record embedded at +0x464 (class not known): two points, each stored twice.
struct CPhysForceMotion
{
	void sub_10025f00(const CPhysForceVec3 *pStart, const CPhysForceVec3 *pEnd);	// stub 0x10015398: copies pStart / pEnd into the two start / end pairs (+8..+0x34)

	void sub_10025f80(float flScale);	// start = start2 * flScale, end = end2 * flScale

	char m_pad0000[8];
	CPhysForceVec3 m_vStart;	// 0x08
	CPhysForceVec3 m_vEnd;	// 0x14
	CPhysForceVec3 m_vStart2;	// 0x20
	CPhysForceVec3 m_vEnd2;	// 0x2c
};

// The controller object whose pointer sits at +0x450 of CPhysForce (class not known): its slot 1 takes the motion record.
class CPhysForceController
{
public:
	virtual void vfunc0();
	virtual void vfunc1(CPhysForceMotion *pMotion);
};

class CPhysForce : public CBaseEntity
{
public:
	CPhysForce *vfunc5(unsigned int flags);	// scalar deleting destructor
	void vfunc130(int a);	// slot 130: CBaseEntity::vfunc130(a), then the controller's slot 1 with the motion record

	void sub_10014470();	// destructor body
	void sub_100a0bc0();	// CBaseEntity::vfunc113 (stub 0x10001226), called directly
	void sub_100278e0();	// without a controller: attaches the force (sub_10027960) and, with a non-zero timeout (+0x45c), sets the next think to curtime + timeout and the think function to the stub at 0x10001a9b
	void sub_10027960();	// attaches the force to the physics object of the attached entity (handle at +0x460): the object's current points are stored in the motion record at +0x464, the environment (global 0x10723940, slot 39) creates the controller for it (+0x450) and the object is added to it
	void sub_1000b5d2();	// stub 0x1000b5d2, the tail target of vfunc103 (the force's base work for flag bit 0)
	virtual void vfunc113();	// slot 113: base work, then looks up the attached entity by name (+0x454) when its handle (+0x460) is stale, slot 242, and attaches the force (sub_10027960) when a controller exists
	void vfunc103();	// slot 103: sets the motion state at +0x468 from the flags at +0x204 (1 with bit 3, else 3), then sub_1000b5d2 when bit 0 is set

	char m_pad03e0[0x450 - 0x3e0];
	void *m_pController;	// 0x450
	const char *m_pszAttachName;	// 0x454: name of the entity to attach to
	char m_pad0458[0x45c - 0x458];
	float m_flTimeout;	// 0x45c
	unsigned int m_hAttached;	// 0x460: handle of the attached entity
	CPhysForceMotion m_Motion;	// 0x464
public:
    virtual datamap_t * vfunc82();
};
