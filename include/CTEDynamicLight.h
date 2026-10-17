// CTEDynamicLight: dynamic light temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEDynamicLight
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEDynamicLight *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10005f51();	// destructor body
};
