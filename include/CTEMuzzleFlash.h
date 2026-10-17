// CTEMuzzleFlash: muzzle flash temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEMuzzleFlash
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEMuzzleFlash *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000df12();	// destructor body
};
