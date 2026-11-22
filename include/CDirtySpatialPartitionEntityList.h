// class CDirtySpatialPartitionEntityList (RTTI .?AVCDirtySpatialPartitionEntityList@@),
// primary vtable 0x10454124 with 9 slots, secondary vtable 0x10454118 for
// IPartitionQueryCallback at +0x8.
//
// Bases per RTTI: CAutoGameSystem / CBaseGameSystem / IGameSystem all at +0x0 and
// IPartitionQueryCallback at +0x8.  The game-system side is modelled by one class that
// contributes the nine primary slots and occupies 8 bytes, so that the second vptr lands
// at +0x8 like in the game (GameSystemRoot.h).
#pragma once
#ifdef PCD_INITIALIZERS
#include "utlvector.h"	// the initializer units: the vector member is Source's CUtlVector
#endif

class IPartitionQueryCallback
{
public:
	virtual void qfunc0();
};

#include "GameSystemRoot.h"

class CDirtySpatialPartitionEntityList : public CAutoGameSystem, public IPartitionQueryCallback
{
public:
	virtual bool vfunc0();
	virtual void vfunc1();
	virtual void vfunc5();
	CAutoGameSystem *vfunc8(unsigned int flags);	// slot 8 (0x100dbb50) written out: the scalar deleting destructor

#ifdef PCD_INITIALIZERS	// the dirty entity handles (SDK: CUtlVector<CBaseHandle>)
	CUtlVector<unsigned int> m_DirtyEntities;	// 0x0c
#else
	char m_0c[0x18 - 0x0c];
	int m_18;
#endif
};
