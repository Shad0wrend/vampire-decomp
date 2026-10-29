// CPhysicsSpring: physics spring. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "inputdata_t.h"
#include "Vector.h"

struct IPhysicsSpringStub
{
	virtual void vfunc0();
	virtual void GetEndPoints(Vector *pStart, Vector *pEnd);
	virtual void SetSpringConstant(float flSpringConstant);
};

class CPhysicsSpring
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysicsSpring *vfunc5(unsigned int flags);	// scalar deleting destructor

	CPhysicsSpring *sub_1004d060();	// constructor body (phys_spring): base constructor (stub 0x100090fc), vtable, spring constant 150.0f, length 0, damping 2.0f, relative damping 0.01f
	void sub_10013840();	// destructor body
	void sub_1004d100();	// destructor body (the function behind the stub above)
	void sub_1004d140(inputdata_t *inputdata);	// input: spring constant
	void sub_1004d6a0(const char *pszName1, const char *pszName2, void **ppObj1, void **ppObj2);	// looks up the physics objects of the two named entities (stub 0x1000e755); registers each with the global at 0x1056645c, or stores the other one (and the global at 0x10723938) when only one was found
	int vfunc124();	// slot 124 "CPhysicsSpring::DrawDebugTextOverlays": the base's line offset, plus three lines (constant, length, damping) when the text overlay bit is set
	int sub_100018cf();	// CBaseEntity::vfunc124 (stub 0x100018cf), called directly
	void vfunc103();	// slot 103 (called directly): SetSolid(0) on the collision property, copies the origin to m_vecStart and recomputes the length when it is positive-or-zero
	void vfunc123();	// slot 123 "CPhysicsSpring::DrawDebugGeometryOverlays": with the overlay bit 4 draws the spring (start to the point at the length along the line, blue; from there to the end, red), then the base's
	void sub_10005880();	// CBaseEntity::vfunc123 (stub 0x10005880), called directly
	void vfunc113();	// slot 113 (called directly): the base's slot 113, then looks up the two named entities' physics objects (sub_1004d6a0), orders the end points by their distance to the first object and creates the spring (slot 11 of the physics environment); with no object, or the same one twice, prints \"ERROR: Can't init spring from %s to %s\" and removes the entity
	void sub_10001226();	// CBaseEntity::vfunc113 (stub 0x10001226), called directly
	const char *sub_100ab4f0();	// stub 0x1000b5cd: the entity's name text for a warning

	char m_pad0004[0x224 - 4];
	unsigned char m_fTextOverlayFlags;	// 0x224: bit 0 = text overlay shown, bit 2 = geometry overlay shown
	char m_pad0225[0x26c - 0x225];
	const char *m_name26c;	// 0x26c
	char m_pad0270[0x2e0 - 0x270];
	int m_pEdict;	// 0x2e0
	char m_pad02e4[0x450 - 0x2e4];
	IPhysicsSpringStub *m_pSpring;	// 0x450: IPhysicsSpring, destroyed with the environment
	char m_bStartEndFixed;	// 0x454
	char m_pad0455[3];
	float m_flSpringConstant;	// 0x458
	float m_flLength;	// 0x45c
	float m_flDamping;	// 0x460
	float m_flRelativeDamping;	// 0x464
	const char *m_pszStartName;	// 0x468
	const char *m_pszEndName;	// 0x46c
	Vector m_vecStart;	// 0x470
	Vector m_vecEnd;	// 0x47c
	int m_nLastFrame488;	// 0x488: engine counter value of the last call of vfunc182
};
