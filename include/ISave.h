// class ISave (RTTI .?AVISave@@), abstract base of CSave, vtable 0x104625f4 (all slots pure).
#pragma once

class ISave
{
public:
	ISave() {}
	virtual int vfunc0() = 0;
	void *vfunc39(unsigned char bFree);	// scalar deleting destructor: stores the game vftable, deletes when bit 0 is set
};
