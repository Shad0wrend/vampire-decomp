// PyServerSystem (RTTI .?AVPyServerSystem@@): game system embedding the Python interpreter. Bases
// (CAutoGameSystem -> CBaseGameSystem -> IGameSystem) are not modelled; 9 primary vtable slots.
#pragma once

#ifdef PCD_INITIALIZERS
#include "GameSystemRoot.h"	// the initializer units: Source's CAutoGameSystem root
#endif

class PyServerSystem
#ifdef PCD_INITIALIZERS
	: public CAutoGameSystem	// the bases the flat model leaves out
#endif
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
#ifndef PCD_INITIALIZERS	// there slot 8 is the destructor (??_E): this would be a tenth slot
	virtual PyServerSystem *vfunc8(unsigned int flags);
#endif
	void sub_1000cfbd();	// as in CDataObjectAccessSystem (transplant)
};
