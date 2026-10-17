// CTEImpact: impact temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEImpact
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEImpact *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000c1a8();	// destructor body
};
