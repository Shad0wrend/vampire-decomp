// IManagedHudElement: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its inline virtual destructor (slot 0); slots 1-8 are _purecall in the game, not declared yet
#pragma once

class IManagedHudElement
{
public:
	virtual ~IManagedHudElement() {}	// slot 0: the game's ??_G (0x1005f0f0) stores this class's vtable, then deletes
	virtual void vfunc1_hud() {}
	virtual void vfunc2_hud() {}
	virtual void vfunc3_hud() {}
	virtual void vfunc4_hud() {}
	virtual void vfunc5_hud(bool) {}
};
