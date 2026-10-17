// CPhysicsSpring: physics spring. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

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
};
