// CPhysHinge: physics hinge constraint. Declared flat (bases not recovered); the vtable head and the members the constraint creation reads.
#pragma once

struct datamap_t;

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

	void sub_100121ac();	// destructor body
	void vfunc103();	// slot 103 (plain member): initialises the hinge parameters: world position = the origin (slot 220), axis = the stored axis minus the origin, normalised and snapped to a main axis when it is close to one (sub_101cf680, 0.01f), no rotation limits / velocity / torque, force / torque limits from the members at +0x464 / +0x468 times a constant, active flag from spawnflag bit 2
	void *vfunc241(void *pGroup, CPhysConstraintObjects *pObjects);	// slot 241 (declared as a plain member): "ERROR: Hinge with bad data!!!" and null when the hinge axis is the zero vector; else fills the hinge parameters (force / torque limits scaled from the members at +0x464 / +0x468, active flag from spawnflag bit 2, hinge friction at +0x4c0 as the axis torque) and asks the physics environment (global 0x10723940, slot 13) to create the hinge constraint
	void vfunc123();	// slot 123 (plain member) "DrawDebugGeometryOverlays": with one of the debug overlay bits 0x2c (+0x224) set draws a green line from the hinge position along the axis (48 units), then CBaseEntity::vfunc123
	void sub_100a0130();	// CBaseEntity::vfunc123 (stub 0x10005880), called directly

	char m_pad0004[0x204 - 4];
	unsigned int m_spawnflags204;	// 0x204
	char m_pad0208[0x224 - 0x208];
	unsigned char m_debugOverlays224;	// 0x224
	char m_pad0225[0x464 - 0x225];
	float m_flForceLimit;	// 0x464
	float m_flTorqueLimit;	// 0x468
	char m_pad046c[0x488 - 0x46c];
	CPhysHingeParams m_hinge;	// 0x488
	float m_flHingeFriction;	// 0x4c0
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysHinge *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	virtual Datamap82 vfunc82();
};
