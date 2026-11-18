// GameSystemRoot.h: Source's game-system root as the initializer units see it (game_shared/igamesystem.h): IGameSystem's
// eight slots and the virtual destructor in slot 8 (0x1024a1b0 ??1CBaseGameSystem, vtable 0x10516c94), CBaseGameSystem
// with no fields, CAutoGameSystem with its out-of-line constructor (0x1042c260, links it into the list) and m_pNext.
// Only units that define PCD_INITIALIZERS include it: elsewhere slot 8 stays the plain vfunc8 matched code calls
// (a real destructor would rename them) and CAnchorList.h's 8-byte CBaseGameSystem stands.
#pragma once
#ifdef PCD_INITIALIZERS	// guarded as a whole: the link audit compiles every header in one unit without the define

class CBaseGameSystem
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
	virtual ~CBaseGameSystem();
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
	void sub_1000cfbd();	// as in CDataObjectAccessSystem (transplant)
	void *sub_101bd980(unsigned int flags);

	CAutoGameSystem *m_pNext;	// 0x04
};
#endif
