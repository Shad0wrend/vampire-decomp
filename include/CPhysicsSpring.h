// CPhysicsSpring: physics spring. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "inputdata_t.h"

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

	char m_pad0004[0x44c];
	IPhysicsSpringStub *m_pSpring;	// 0x450: IPhysicsSpring, destroyed with the environment
	char m_pad0454[4];
	float m_flSpringConstant;	// 0x458
};
