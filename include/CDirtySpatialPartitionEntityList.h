// class CDirtySpatialPartitionEntityList (RTTI .?AVCDirtySpatialPartitionEntityList@@),
// primary vtable 0x10454124 with 9 slots, secondary vtable 0x10454118 for
// IPartitionQueryCallback at +0x8.
//
// Bases per RTTI: CAutoGameSystem / CBaseGameSystem / IGameSystem all at +0x0 and
// IPartitionQueryCallback at +0x8.  The game-system side is modelled by one class that
// contributes the nine primary slots and occupies 8 bytes, so that the second vptr lands
// at +0x8 like in the game.
#pragma once

class IPartitionQueryCallback
{
public:
	virtual void qfunc0();
};

#ifdef PCD_INITIALIZERS
// The initializer units see the game-system root as it is (Source's IGameSystem / CBaseGameSystem): eight slots and the
// virtual destructor in slot 8 (0x1024a1b0 ??1CBaseGameSystem), and CAutoGameSystem's out-of-line constructor
// 0x1042c260. Elsewhere slot 8 stays the plain vfunc8 matched code calls (a real destructor would rename them).
class CBaseGameSystem
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
	virtual ~CBaseGameSystem();

	char m_04[4];
};

class CAutoGameSystem : public CBaseGameSystem
{
public:
	CAutoGameSystem();	// function 0x1042c260 (stub 0x10004e71)
	void sub_1000cfbd();	// as in CDataObjectAccessSystem (transplant)
	void *sub_101bd980(unsigned int flags);
};
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
	void sub_1000cfbd();	// as in CDataObjectAccessSystem (transplant)
	void *sub_101bd980(unsigned int flags);
};
#endif

class CDirtySpatialPartitionEntityList : public CAutoGameSystem, public IPartitionQueryCallback
{
public:
	virtual bool vfunc0();
	virtual void vfunc1();
	virtual void vfunc5();
	virtual CAutoGameSystem *vfunc8(unsigned int flags);

	char m_0c[0x18 - 0x0c];
	int m_18;
};
