// C_TETextMessage: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseTempEntity.h"

class C_TETextMessage : public C_BaseTempEntity
{
public:
	C_TETextMessage();
	int m_a10; int m_a14; int m_a18; int m_a1c; int m_a20; int m_a24; int m_a28; int m_a2c; int m_a30; int m_a34; int m_a38; int m_a3c; int m_a40; int m_a44; int m_a48; int m_a4c; int m_a50[0x20]; void sub_1003fc00(int arg);
	virtual ~C_TETextMessage();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_TETextMessage's own function
	virtual int vfunc8();
	virtual int vfunc9();
};
