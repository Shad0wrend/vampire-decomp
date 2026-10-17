// CPhysForce: physics force entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CPhysForce
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysForce *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_10014470();	// destructor body
};
