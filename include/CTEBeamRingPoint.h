// CTEBeamRingPoint: beam ring temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBeamRingPoint
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamRingPoint *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10008404();	// destructor body
};
