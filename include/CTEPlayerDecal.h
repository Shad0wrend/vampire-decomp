// CTEPlayerDecal: player decal temp entity. Declared flat (bases not recovered).
#pragma once

class CTEPlayerDecal
{
public:
	virtual ServerClass * vfunc0();
	virtual void vfunc1();
	virtual CTEPlayerDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000a1dc();	// destructor body
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
};
