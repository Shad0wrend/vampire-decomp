// class CDirtySpatialPartitionEntityList (RTTI .?AVCDirtySpatialPartitionEntityList@@),
// primary vtable 0x10454124 with 9 slots, secondary vtable 0x10454118 for
// IPartitionQueryCallback at +0x8.
//
// Bases per RTTI: CAutoGameSystem / CBaseGameSystem / IGameSystem all at +0x0 and
// IPartitionQueryCallback at +0x8.  The game-system side is modelled by one class that
// contributes the nine primary slots and occupies 8 bytes, so that the second vptr lands
// at +0x8 like in the game.
#pragma once
#ifdef PCD_INITIALIZERS
#include "utlvector.h"	// the initializer units: the vector member is Source's CUtlVector
#endif

class IPartitionQueryCallback
{
public:
	virtual void qfunc0();
};

#ifdef PCD_INITIALIZERS
#include "GameSystemRoot.h"	// the initializer units: Source's root, CAutoGameSystem's constructor
#else
class CAutoGameSystem
{
public:
	virtual bool vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual CAutoGameSystem *vfunc8(unsigned int flags);

	char m_04[4];
	void sub_100f3f80();	// as in CDataObjectAccessSystem (transplant)
	void *sub_10134fa0(unsigned int flags);
};
#endif

class CDirtySpatialPartitionEntityList : public CAutoGameSystem, public IPartitionQueryCallback
{
public:
	virtual bool vfunc0();
	virtual void vfunc1();
	virtual void vfunc5();
#ifndef PCD_INITIALIZERS	// there slot 8 is the destructor (??_E): this would be a tenth slot
	virtual CAutoGameSystem *vfunc8(unsigned int flags);
#endif

#ifdef PCD_INITIALIZERS	// the dirty entity handles (SDK: CUtlVector<CBaseHandle>)
	CUtlVector<unsigned int> m_DirtyEntities;	// 0x0c
#else
	char m_0c[0x18 - 0x0c];
	int m_18;
#endif
};
