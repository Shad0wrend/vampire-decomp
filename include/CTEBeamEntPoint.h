// CTEBeamEntPoint: beam temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBeamEntPoint
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamEntPoint *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000d8d7();	// destructor body
	CTEBeamEntPoint *sub_1005ac10(int a);	// constructor body: base constructor (0x1000b1a4), vtable, fields 0x44..0x60; returns this
};
