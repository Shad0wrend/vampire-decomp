// GameSystemRoot.h: Source's game-system classes (game_shared/igamesystem.h) as Troika's has them, for every unit:
// CBaseGameSystem on the root IGameSystem (IGameSystem.h; the game has no CBaseGameSystem vtable, so no destructor of
// its own), CAutoGameSystem with its out-of-line constructor (0x1042c260, links it into the list) and m_pNext.
// Slot 8 is IGameSystem's virtual destructor; every system's scalar deleting destructor is matched written out as a
// plain vfunc8 (IGameSystem's own 0x1042c2e0, CAutoGameSystem's 0x1042c290, ...), so its name stays the slot's.
#pragma once
#include "IGameSystem.h"

class CBaseGameSystem : public IGameSystem
{
public:
	virtual bool vfunc0();	// Init
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
};

class CAutoGameSystem : public CBaseGameSystem
{
public:
	CAutoGameSystem();	// function 0x1042c260 (stub 0x10004e71)
	// Troika's CAutoGameSystem fills slots 0-7 itself (vtable 0x10516c64: 0x10029c10, 0x10029c30, 0x10029c50,
	// 0x10029c70, 0x10029c90, 0x1003c640, 0x10029cb0, 0x10029cd0; IGameSystem's are __purecall): declared so the
	// derived systems' vtables hold them
	virtual bool vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	CAutoGameSystem *vfunc8(unsigned int flags);	// 0x1042c290 written out: the scalar deleting destructor of slot 8
	void sub_1000cfbd();	// as in CDataObjectAccessSystem (transplant)
	void *sub_101bd980(unsigned int flags);

	CAutoGameSystem *m_pNext;	// 0x04
};
