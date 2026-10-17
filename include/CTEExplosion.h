// CTEExplosion: explosion temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEExplosion
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEExplosion *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000e90d();	// destructor body
};
