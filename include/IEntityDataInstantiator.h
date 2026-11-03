// IEntityDataInstantiator: abstract interface (RTTI .?AVIEntityDataInstantiator@@, vtable 0x104493a8, 4 slots).
// Slot 0 is the virtual destructor (scalar deleting destructor), slots 1..3 are pure.
#pragma once

class IEntityDataInstantiator
{
public:
	virtual ~IEntityDataInstantiator() {}	// slot 0, scalar deleting destructor
	virtual void vfunc1(unsigned int handle) = 0;
	virtual void *vfunc2(unsigned int handle) = 0;
	virtual void vfunc3(unsigned int handle) = 0;
};
