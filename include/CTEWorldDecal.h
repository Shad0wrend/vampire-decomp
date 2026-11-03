// CTEWorldDecal: world decal temp entity. Declared flat (bases not recovered).
#pragma once
#include "ServerClass.h"

class CTEWorldDecal
{
public:
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEWorldDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000e9df();	// destructor body
	CTEWorldDecal *sub_1006af40(int a);	// constructor body: base constructor (0x10015334), vtable, fields; returns this
	void sub_1000a097(int a, int b);	// CTEWorldDecal::vfunc4 (called directly): sends the decal with the position and normal in the globals set by the caller
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
};
