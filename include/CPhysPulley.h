// CPhysPulley: pulley constraint entity. Declared flat (bases not recovered).
#pragma once

class CPhysPulley
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysPulley *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_100121ac();	// destructor body
};
