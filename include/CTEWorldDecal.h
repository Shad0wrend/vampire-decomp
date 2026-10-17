// CTEWorldDecal: world decal temp entity. Declared flat (bases not recovered).
#pragma once

class CTEWorldDecal
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEWorldDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000e9df();	// destructor body
};
