// CSimplePhysicsProp: simple physics prop entity. Declared flat (bases not recovered).
#pragma once

class CSimplePhysicsProp
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CSimplePhysicsProp *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_10004c3c();	// destructor body
};
