// CTEEnergySplash: energy splash temp entity. Declared flat (bases not recovered).
#pragma once

class CTEEnergySplash
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEEnergySplash *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10001c7b();	// destructor body
};
