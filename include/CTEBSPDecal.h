// CTEBSPDecal: BSP decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBSPDecal
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBSPDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100035df();	// destructor body
};
