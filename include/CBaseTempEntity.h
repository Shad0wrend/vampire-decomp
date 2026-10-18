// CBaseTempEntity: base of temp entities. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CBaseTempEntity
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100021d0();	// destructor body
	void sub_100507e0(const char *name);	// constructor body (without the vtable store)
};
