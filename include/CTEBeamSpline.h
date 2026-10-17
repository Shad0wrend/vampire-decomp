// CTEBeamSpline: beam spline temp entity. Declared flat (bases not recovered).
#pragma once

class CTEBeamSpline
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamSpline *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10007f81();	// destructor body
};
