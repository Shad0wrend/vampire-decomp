// CEntityTouchManager: entity listener keeping a list of entities; base IEntityListener in the initializer unit (the
// global 0x107036b0), a flat view elsewhere.
#pragma once

#include "utlvector.h"
#ifdef PCD_INITIALIZERS
#include "IEntityListener.h"
#endif

struct CEntityListSystem_Ent;

class CEntityTouchManager
#ifdef PCD_INITIALIZERS
	: public IEntityListener
#endif
{
public:
#ifdef PCD_INITIALIZERS	// IEntityListener's two slots, both its own (vtable 0x10455ecc; matched as the flat view's vfunc0 / vfunc1)
	virtual void OnEntityCreated(CBaseEntity *pEntity);
	virtual void OnEntityDeleted(CBaseEntity *pEntity);	// drops a flagged (bit 0 at +0x26b) entity from the list
#else
	virtual void vfunc0();
	virtual void vfunc1(CEntityListSystem_Ent *pEnt);	// slot 1: drops a flagged (bit 0 at +0x26b) entity from the list
#endif

	CUtlVector<CEntityListSystem_Ent *> m_List;	// 0x04

	void sub_100f8ec0();	// the SDK's FrameUpdatePostEntityThink (0x100f8ec0): copies the list, empties it, then sub_100085a8 (PhysicsCheckForEntityUntouch) on each entity whose flag bit 0 (+0x26b) is set
};
