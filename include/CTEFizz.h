// CTEFizz: fizz temp entity. Declared flat (bases not recovered).
#pragma once

class CTEFizz
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEFizz *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100142b8();	// destructor body
	void vfunc5();	// as in CFireSmoke (transplant)
	CTEFizz *sub_10061f70(int a);	// constructor body: base constructor (0x10015334), vtable, fields; returns this
};
