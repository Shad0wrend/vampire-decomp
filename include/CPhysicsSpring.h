// CPhysicsSpring: physics spring. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "inputdata_t.h"
#include "Vector.h"

struct IPhysicsSpringStub
{
	virtual void vfunc0();
	virtual void vfunc1();
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

	void sub_10013840();	// destructor body
	void sub_1004d100();	// destructor body (the function behind the stub above)
	void sub_1004d140(inputdata_t *inputdata);	// input: spring constant
	void sub_1004d6a0(const char *pszName1, const char *pszName2, void **ppObj1, void **ppObj2);	// looks up the physics objects of the two named entities (stub 0x1000e755); registers each with the global at 0x1056645c, or stores the other one (and the global at 0x10723938) when only one was found
	int vfunc124();	// slot 124 "CPhysicsSpring::DrawDebugTextOverlays": the base's line offset, plus three lines (constant, length, damping) when the text overlay bit is set
	int sub_100018cf();	// CBaseEntity::vfunc124 (stub 0x100018cf), called directly
	void vfunc103();	// slot 103 (called directly): SetSolid(0) on the collision property, copies the origin to m_vecStart and recomputes the length when it is positive-or-zero

	char m_pad0004[0x224 - 4];
	unsigned char m_fTextOverlayFlags;	// 0x224: bit 0 = text overlay shown
	char m_pad0225[0x26c - 0x225];
	const char *m_name26c;	// 0x26c
	char m_pad0270[0x2e0 - 0x270];
	int m_pEdict;	// 0x2e0
	char m_pad02e4[0x450 - 0x2e4];
	IPhysicsSpringStub *m_pSpring;	// 0x450: IPhysicsSpring, destroyed with the environment
	char m_pad0454[4];
	float m_flSpringConstant;	// 0x458
	float m_flLength;	// 0x45c
	float m_flDamping;	// 0x460
	char m_pad0464[0x470 - 0x464];
	Vector m_vecStart;	// 0x470
	Vector m_vecEnd;	// 0x47c
};
