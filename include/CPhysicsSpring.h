// CPhysicsSpring: physics spring. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

struct datamap_t;

#include "inputdata_t.h"
#include "Vector.h"

struct IPhysicsSpringStub
{
	virtual void vfunc0();
	virtual void GetEndPoints(Vector *pStart, Vector *pEnd);
	virtual void SetSpringConstant(float flSpringConstant);
	virtual void SetSpringDamping(float flDamping);
};

class CPhysicsSpring
{
public:

	CPhysicsSpring *sub_1004d060();	// constructor body (phys_spring): base constructor (stub 0x100090fc), vtable, spring constant 150.0f, length 0, damping 2.0f, relative damping 0.01f
	void sub_10013840();	// destructor body
	void sub_1004d100();	// destructor body (the function behind the stub above)
	void sub_1004d140(inputdata_t *inputdata);	// input: spring constant
	void sub_1004d1b0(inputdata_t *inputdata);	// input: spring damping
	void sub_1004d6a0(const char *pszName1, const char *pszName2, void **ppObj1, void **ppObj2);	// looks up the physics objects of the two named entities (stub 0x1000e755); registers each with the global at 0x1056645c, or stores the other one (and the global at 0x10723938) when only one was found
	int vfunc124();	// slot 124 "CPhysicsSpring::DrawDebugTextOverlays": the base's line offset, plus three lines (constant, length, damping) when the text overlay bit is set
	int sub_100018cf();	// CBaseEntity::vfunc124 (stub 0x100018cf), called directly
	void vfunc103();	// slot 103 (called directly): SetSolid(0) on the collision property, copies the origin to m_vecStart and recomputes the length when it is positive-or-zero
	void vfunc123();	// slot 123 "CPhysicsSpring::DrawDebugGeometryOverlays": with the overlay bit 4 draws the spring (start to the point at the length along the line, blue; from there to the end, red), then the base's
	void sub_10005880();	// CBaseEntity::vfunc123 (stub 0x10005880), called directly
	void vfunc113();	// slot 113 (called directly): the base's slot 113, then looks up the two named entities' physics objects (sub_1004d6a0), orders the end points by their distance to the first object and creates the spring (slot 11 of the physics environment); with no object, or the same one twice, prints \"ERROR: Can't init spring from %s to %s\" and removes the entity
	void sub_10001226();	// CBaseEntity::vfunc113 (stub 0x10001226), called directly
	void vfunc182(int a, int b, int c, int d);	// slot 182: once per engine counter value, asks the spring (slots 6, 5) and hands the result to sub_1002a210
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
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysicsSpring *vfunc5(unsigned int flags);	// scalar deleting destructor
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
	virtual datamap_t * vfunc82();
	virtual void d83(); virtual void d84(); virtual void d85(); virtual void d86(); virtual void d87();
	virtual void d88(); virtual void d89(); virtual void d90(); virtual void d91(); virtual void d92();
	virtual void d93(); virtual void d94(); virtual void d95(); virtual void d96(); virtual void d97();
	virtual void d98(); virtual void d99(); virtual void d100(); virtual void d101(); virtual void d102();
	virtual void d103(); virtual void d104(); virtual void d105();
	virtual void vfunc106(const char *pszName);
};
