// CNavPropertyDatabase: declared by pcdecomp transplant for 0x102eaac0 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

#ifdef PCD_INITIALIZERS
#include "GameSystemRoot.h"	// the initializer units: Source's CAutoGameSystem root and IEntityListener (vptr at +8)
#include "CNotifyList.h"
#endif

class CNavPropertyDatabase
#ifdef PCD_INITIALIZERS
	: public CAutoGameSystem, public IEntityListener	// the bases the flat model leaves out
#endif
{
public:
	bool vfunc0();	// slot 0: arms the function pointer global at 0x10934014 (once), adds this + 8 (or 0) to the list at 0x106eb5d8, true
	CNavPropertyDatabase *vfunc8(unsigned int flags);
	void sub_1000cfbd();
#ifdef PCD_INITIALIZERS
	// own slots the game's vtable holds (matched under another name)
	virtual void vfunc1();	// 0x102ea5a0
	virtual void OnEntityCreated(CBaseEntity *pEntity);	// 0x102ea5e0
	virtual void OnEntityDeleted(CBaseEntity *pEntity);	// 0x102ea600
#endif
	void vfunc4();	// rebuilds the free list of the global linked list at 0x10934018 (12 byte nodes, count at 0x1093402a)
};
