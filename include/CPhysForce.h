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
	void sub_100276c0();	// 0x100276c0: vtable store, DestroySpring of the controller (env slot 40), then the CBaseEntity destructor body (stub 0x1000cb8a)
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
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
	virtual void vfunc139();
	virtual void vfunc140_slot();
	virtual void vfunc141();
	virtual void vfunc142();
	virtual void vfunc143_slot();
	virtual void vfunc144();
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual void vfunc153_slot();
	virtual void vfunc154();
	virtual void vfunc155();
	virtual void vfunc156();
	virtual void vfunc157();
	virtual void vfunc158_slot();
	virtual void vfunc159();
	virtual void vfunc160();
	virtual void vfunc161_slot();
	virtual void vfunc162();
	virtual void vfunc163();
	virtual void vfunc164();
	virtual void vfunc165();
	virtual void vfunc166();
	virtual void vfunc167();
	virtual void vfunc168_slot();
	virtual void vfunc169();
	virtual void vfunc170();
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173();
	virtual void vfunc174_slot();
	virtual void vfunc175_slot();
	virtual void vfunc176_slot();
	virtual void vfunc177();
	virtual void vfunc178_slot();
	virtual void vfunc179();
	virtual void vfunc180_slot();
	virtual void vfunc181();
	virtual void vfunc182();
	virtual void vfunc183();
	virtual void vfunc184();
	virtual void vfunc185();
	virtual void vfunc186();
	virtual void vfunc187();
	virtual void vfunc188();
	virtual void vfunc189();
	virtual void vfunc190();
	virtual void vfunc191();
	virtual void vfunc192();
	virtual void vfunc193();
	virtual void vfunc194_slot();
	virtual void vfunc195_slot();
	virtual void vfunc196_slot();
	virtual void vfunc197_slot();
	virtual void vfunc198();
	virtual void vfunc199();
	virtual void vfunc200();
	virtual void vfunc201();
	virtual void vfunc202_slot();
	virtual void vfunc203();
	virtual void vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual void vfunc207_slot();
	virtual void vfunc208_slot();
	virtual void vfunc209();
	virtual void vfunc210();
	virtual void vfunc211();
	virtual void vfunc212_slot();
	virtual void vfunc213_slot();
	virtual void vfunc214_slot();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual void vfunc217_slot();
	virtual void vfunc218_slot();
	virtual void vfunc219_slot();
	virtual void vfunc220_slot();
	virtual void vfunc221_slot();
	virtual void vfunc222_slot();
	virtual void vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226_slot();
	virtual void vfunc227();
	virtual void vfunc228_slot();
	virtual void vfunc229();
	virtual void vfunc230();
	virtual void vfunc231();
	virtual void vfunc232_slot();
	virtual void vfunc233_slot();
	virtual void vfunc234();
	virtual void vfunc235();
	virtual void vfunc236();
	virtual void vfunc237_slot();
	virtual void vfunc238_slot();
	virtual void vfunc239();
	virtual void vfunc240();
	virtual void vfunc241();
	virtual void vfunc242();
};
