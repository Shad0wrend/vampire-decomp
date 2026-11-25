// CFXQuad: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CClientSideEffect.h"

class CFXQuad : public CClientSideEffect
{
public:
	CFXQuad *sub_100e5c70(const int *p);
	virtual ~CFXQuad();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CFXQuad's own function
	virtual void vfunc1();
	virtual bool vfunc3();
	virtual void vfunc4();
	// the slots CFXQuad adds to its base's vtable: 5-5, vfuncK at slot K
	virtual void vfunc5();
	char m_pad0004[0x34 - 0x4];
	float m_flA;
	float m_flB;
	char m_pad003c[0x60 - 0x3c];
};
