// PyServerSystem (RTTI .?AVPyServerSystem@@): game system embedding the Python interpreter. Bases
// CAutoGameSystem -> CBaseGameSystem -> IGameSystem (GameSystemRoot.h); 9 primary vtable slots.
#pragma once

#include "GameSystemRoot.h"

class PyServerSystem : public CAutoGameSystem
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
	PyServerSystem *vfunc8(unsigned int flags);	// slot 8 written out: the scalar deleting destructor
	void sub_1000cfbd();	// as in CDataObjectAccessSystem (transplant)
};
