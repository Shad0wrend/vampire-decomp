// CTEBSPDecal: BSP decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBSPDecal
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBSPDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100035df();	// destructor body
	CTEBSPDecal *sub_1005ee50(int a);	// 0x1005ee50: the base temp entity's constructor (0x10015334), then the vtable and five zeroed fields at +0xc .. +0x1c
};
