// C_TEBloodSprite: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseTempEntity.h"
#include "Vector.h"

class C_TEBloodSprite : public C_BaseTempEntity
{
public:
	C_TEBloodSprite();
	Vector m_vecOrigin; Vector m_vecDirection; int m_unk28; int m_unk2c; int m_unk30; int m_unk34; int m_unk38; int m_unk3c; int m_unk40;
	virtual ~C_TEBloodSprite();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_TEBloodSprite's own function
	virtual int vfunc8();
	virtual int vfunc9();
};
