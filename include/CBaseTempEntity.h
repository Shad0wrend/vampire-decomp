// CBaseTempEntity: base of temp entities (RTTI). The name at +4; the derived classes pad +8 (Source's m_pNext,
// the list of all temp entities the constructor links the entity into).
#pragma once

#include "ServerClass.h"
#include "Vector.h"
#include "QAngle.h"

class CRecipientFilter;

// Slots 0-1 of CBaseTempEntity, for the temp entities whose constructor is not matched yet (the game's RTTI has
// no such class: move them to CBaseTempEntity). Its constructor is CBaseTempEntity's, it has no definition.
class CBaseTempEntityHead
{
public:
	CBaseTempEntityHead(const char *name);

	virtual ServerClass *vfunc0();	// GetServerClass
	virtual int vfunc1();
};

class CBaseTempEntity
{
public:
	CBaseTempEntity(const char *name);	// 0x100507e0: the name, then the entity is linked in front of the list

	virtual ServerClass *vfunc0();	// GetServerClass
	virtual int vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": prints the name (+4), then creates the temp entity for every player (slot 4) with a position 20 units in front
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// "Create"

	void sub_100021d0();	// destructor body

	const char *m_pszName;	// 0x04
public:
	virtual void vfunc5();
};
