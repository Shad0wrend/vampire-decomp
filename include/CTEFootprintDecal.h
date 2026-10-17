// CTEFootprintDecal: footprint decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEFootprintDecal
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEFootprintDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100059d4();	// destructor body
};
