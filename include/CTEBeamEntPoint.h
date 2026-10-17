// CTEBeamEntPoint: beam temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBeamEntPoint
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamEntPoint *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000d8d7();	// destructor body
};
