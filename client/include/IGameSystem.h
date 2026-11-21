// IGameSystem (RTTI .?AVIGameSystem@@, vtable 0x10516c94): Source's game-system root (game_shared/igamesystem.h) as
// Troika's has it: eight pure slots and the virtual destructor (0x1042c2c0, stub 0x1000cfbd) whose scalar deleting
// destructor (0x1042c2e0, stub 0x1000853a) is slot 8. CBaseGameSystem and CAutoGameSystem (GameSystemRoot.h,
// CAnchorList.h) derive from it.
#pragma once

class IGameSystem
{
public:
	virtual bool vfunc0() = 0;	// Init
	virtual void vfunc1() = 0;
	virtual void vfunc2() = 0;
	virtual void vfunc3() = 0;
	virtual void vfunc4() = 0;
	virtual void vfunc5() = 0;
	virtual void vfunc6() = 0;
	virtual void vfunc7() = 0;
	virtual ~IGameSystem();

	IGameSystem *vfunc8(unsigned int flags);	// 0x1042c2e0 written out: the scalar deleting destructor
	void sub_100f3f80();	// the destructor's stub, as matched code calls it
};
