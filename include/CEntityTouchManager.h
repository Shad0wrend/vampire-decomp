// CEntityTouchManager (RTTI .?AVCEntityTouchManager@@): entity listener keeping a list of entities (the global
// 0x107036b0, the SDK's g_TouchManager); base IEntityListener, both slots its own (vtable 0x10455ecc).
#pragma once

#include "utlvector.h"
#include "IEntityListener.h"

struct CEntityListSystem_Ent;

class CEntityTouchManager : public IEntityListener
{
public:
	virtual void OnEntityCreated(CBaseEntity *pEntity);	// 0x100f8cd0: nothing
	virtual void OnEntityDeleted(CBaseEntity *pEntity);	// 0x100f8cf0: drops a flagged (bit 0 at +0x26b) entity from the list

	CUtlVector<CBaseEntity *> m_List;	// 0x04 (SDK: m_updateList)

	void sub_100f8ec0();	// the SDK's FrameUpdatePostEntityThink (0x100f8ec0): copies the list, empties it, then sub_100085a8 (PhysicsCheckForEntityUntouch) on each entity whose flag bit 0 (+0x26b) is set
};
