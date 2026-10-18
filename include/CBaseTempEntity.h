// CBaseTempEntity: base of temp entities. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CBaseTempEntity
{
public:
	CBaseTempEntity(const char *name);	// 0x100507e0

	virtual void vfunc0();
	virtual void vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100021d0();	// destructor body

	char m_pad0004[8];
};
