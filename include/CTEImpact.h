// CTEImpact: impact temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "ServerClass.h"

class CTEImpact
{
public:
	CTEImpact(const char *name);	// function 0x10064fc0
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEImpact();	// function 0x10065030: the vtable, then the base's destructor body
#endif

	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEImpact *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3();
	virtual void vfunc4(int a, int b);

	void sub_1000c1a8();	// destructor body
	CTEImpact *sub_10064fc0(const char *name);	// constructor body (CBaseTempEntityHead base at stub 0x10015334), then the vtable and the zeroed fields from +0xc
public:
	virtual void vfunc5();
};
