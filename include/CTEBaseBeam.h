// CTEBaseBeam: base beam temp entity. Declared flat (bases not recovered).
#pragma once

class CTEBaseBeam
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBaseBeam *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000d08f();	// destructor body
};
