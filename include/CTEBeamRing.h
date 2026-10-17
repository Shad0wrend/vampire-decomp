// CTEBeamRing: beam ring temp entity. Declared flat (bases not recovered).
#pragma once

class CTEBeamRing
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamRing *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10002667();	// destructor body
};
