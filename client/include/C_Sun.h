// C_Sun: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseEntity.h"
#include "CGlowOverlay.h"

class C_Sun : public C_BaseEntity
{
public:
	C_Sun();
	virtual ~C_Sun();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_Sun's own function
	virtual int vfunc15();
	virtual int vfunc16();
	char m_pad0014[0x410 - 0x14];
	CGlowOverlay m_Glow;
	char m_padTail[0x4c0 - 0x410 - sizeof(CGlowOverlay)];
};
