// IRecipientFilter: abstract interface (RTTI .?AVIRecipientFilter@@, vtable 0x10447108, 8 slots).
#pragma once

class IRecipientFilter
{
public:
	virtual ~IRecipientFilter() {}	// slot 0, scalar deleting destructor
	virtual void vfunc1() = 0;
	virtual int vfunc2() = 0;	// GetRecipientCount
	virtual int vfunc3(int slot) = 0;	// GetRecipientIndex
	virtual char vfunc4() = 0;
	virtual void vfunc5() = 0;
	virtual void vfunc6() = 0;
	virtual void vfunc7() = 0;
};
