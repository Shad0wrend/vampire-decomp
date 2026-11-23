// C_TEUserTracer: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseTempEntity.h"
#include "Vector.h"

class C_TEUserTracer : public C_BaseTempEntity
{
public:
	C_TEUserTracer();
	Vector m_vecOrigin; Vector m_vecEnd; int m_unk28; char m_unk2c;
	virtual ~C_TEUserTracer();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_TEUserTracer's own function
	virtual int vfunc8();
	virtual int vfunc9();
};
