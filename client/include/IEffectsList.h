// IEffectsList: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the virtual functions before the destructor are not declared yet
#pragma once

class IEffectsList
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots IEffectsList adds to its base's vtable: 0-4, vfuncK at slot K
	virtual ~IEffectsList();
	virtual void vfunc1(class CClientSideEffect *effect);
	virtual void vfunc2(class CClientSideEffect *effect);
	virtual void vfunc3(double frametime);
	virtual void vfunc4();
	void * vfunc0(char);	// as in IParticleEffect (transplant)
};
