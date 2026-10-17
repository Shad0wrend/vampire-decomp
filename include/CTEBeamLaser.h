// CTEBeamLaser: beam laser temp entity. Declared flat (bases not recovered).
#pragma once

class CTEBeamLaser
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamLaser *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100051c8();	// destructor body
};
