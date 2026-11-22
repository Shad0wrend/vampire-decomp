// CNavPropertyDatabase (RTTI .?AVCNavPropertyDatabase@@): bases CAutoGameSystem (GameSystemRoot.h) and IEntityListener
// at +8, as the game's RTTI has them; the global 0x1093402c.
#pragma once

#include "GameSystemRoot.h"
#include "IEntityListener.h"

class CNavPropertyDatabase : public CAutoGameSystem, public IEntityListener
{
public:
	bool vfunc0();	// slot 0: arms the function pointer global at 0x10934014 (once), adds this + 8 (or 0) to the list at 0x106eb5d8, true
	virtual void vfunc1();	// slot 1 (0x102ea5a0, matched as the free sub_102ea5a0): removes this + 8 from that list
	void vfunc4();	// rebuilds the free list of the global linked list at 0x10934018 (12 byte nodes, count at 0x1093402a)
	CNavPropertyDatabase *vfunc8(unsigned int flags);	// slot 8 written out: the scalar deleting destructor
	void sub_1000cfbd();
	virtual void OnEntityCreated(CBaseEntity *pEntity);	// 0x102ea5e0
	virtual void OnEntityDeleted(CBaseEntity *pEntity);	// 0x102ea600
};
