// CBaseTempEntity: base of temp entities. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "ServerClass.h"
#include "Vector.h"
#include "QAngle.h"

class CRecipientFilter;

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
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": prints the name (+4), then creates the temp entity for every player (slot 4) with a position 20 units in front
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// "Create"

	void sub_100021d0();	// destructor body

	const char *m_pszName;	// 0x04
public:
	virtual void vfunc5();
};
