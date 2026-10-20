// CTEWorldDecal: world decal temp entity. Declared flat (bases not recovered).
#pragma once

class CTEWorldDecal
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEWorldDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000e9df();	// destructor body
	CTEWorldDecal *sub_1006af40(int a);	// constructor body: base constructor (0x10015334), vtable, fields; returns this
};
