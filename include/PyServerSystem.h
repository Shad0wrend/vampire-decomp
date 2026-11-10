// PyServerSystem (RTTI .?AVPyServerSystem@@): game system embedding the Python interpreter. Bases
// (CAutoGameSystem -> CBaseGameSystem -> IGameSystem) are not modelled; 9 primary vtable slots.
#pragma once

class PyServerSystem
{
public:
	virtual bool vfunc0();
	virtual void vfunc1();	// shutdown: removes the "vampire" module and drops the cached Python objects
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual PyServerSystem *vfunc8(unsigned int flags);
	void sub_1000cfbd();	// as in CDataObjectAccessSystem (transplant)
};
