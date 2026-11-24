// C_TEExplosion: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_TEParticleSystem.h"

class C_TEExplosion : public C_TEParticleSystem
{
public:
	C_TEExplosion();
	Vector m_vecNormal; int m_unk28; int m_unk2c; int m_unk30; int m_unk34; char m_chMaterialType; int m_unk3c; int m_unk40; int m_unk44; unsigned char m_unk48;
	virtual ~C_TEExplosion();
	void sub_10036a80();
	virtual void PostDataUpdate(int updateType);
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_TEExplosion's own function
	virtual int vfunc8();
	virtual int vfunc9();
	// the slots C_TEExplosion adds to its base's vtable: 16-16, vfuncK at slot K
	virtual bool vfunc16(int, int, int);
};
