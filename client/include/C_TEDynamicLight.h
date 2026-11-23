// C_TEDynamicLight: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseTempEntity.h"
#include "Vector.h"

class C_TEDynamicLight : public C_BaseTempEntity
{
public:
	C_TEDynamicLight();
	Vector m_vecOrigin; int m_unk1c; int m_unk20; int m_unk24; int m_unk28; int m_unk2c; int m_unk30; int m_unk34;
	virtual ~C_TEDynamicLight();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_TEDynamicLight's own function
	virtual int vfunc8();
	virtual int vfunc9();
};
