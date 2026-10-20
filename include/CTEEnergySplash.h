// CTEEnergySplash: energy splash temp entity. Declared flat (bases not recovered).
#pragma once

class CTEEnergySplash
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEEnergySplash *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10001c7b();	// destructor body
	CTEEnergySplash *sub_10061250(int a);	// constructor body: base constructor (0x10015334), vtable, fields 0x0c..0x24; returns this
};
