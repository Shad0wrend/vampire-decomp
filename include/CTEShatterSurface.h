// CTEShatterSurface: shatter surface temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEShatterSurface
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEShatterSurface *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100021d0();	// destructor body
};
