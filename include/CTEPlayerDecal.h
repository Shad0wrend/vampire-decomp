// CTEPlayerDecal: player decal temp entity. Declared flat (bases not recovered).
#pragma once
#include "ServerClass.h"

class CTEPlayerDecal
{
public:
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEPlayerDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000a1dc();	// destructor body
	CTEPlayerDecal *sub_10066320(const char *name);	// constructor body (CBaseTempEntityHead base at stub 0x10015334), then the vtable and the zeroed fields from +0xc
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
};
