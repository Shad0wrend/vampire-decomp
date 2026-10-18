// CBaseTempEntity: base of temp entities. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "ServerClass.h"

// The part of CBaseTempEntity (slots 0-1 and the constructor) that derived temp entities share, without the
// slot-2 destructor: VC6 cannot express the derived classes' covariant slot-2 return type against it.
class CBaseTempEntityHead
{
public:
	CBaseTempEntityHead(const char *name);	// 0x100507e0

	virtual ServerClass *vfunc0();	// GetServerClass
	virtual void vfunc1();
};

class CBaseTempEntity
{
public:
	virtual ServerClass *vfunc0();	// GetServerClass
	virtual void vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100021d0();	// destructor body
};
