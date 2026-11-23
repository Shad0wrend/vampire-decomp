// C_TESpriteSpray: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseTempEntity.h"

#include "Vector.h"
class C_TESpriteSpray : public C_BaseTempEntity
{
public:
	C_TESpriteSpray();
	Vector m_vecOrigin; Vector m_vecDirection; int m_nModelIndex; int m_fNoise; int m_nSpeed; int m_nCount;
	virtual ~C_TESpriteSpray();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_TESpriteSpray's own function
	virtual int vfunc8();
	virtual int vfunc9();
};
