// CTEFogRipple: fog ripple temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEFogRipple
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEFogRipple *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000a08d();	// destructor body
};
