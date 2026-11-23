// CTargeted: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CTargeted : public CManagedHudElement
{
public:
	virtual ~CTargeted();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CTargeted's own function
	virtual void vfunc97();
	virtual void vfunc98();
	virtual bool vfunc107();
	virtual void vfunc112();
	char m_pad0008[0x40];
	struct CTgtObj *m_p1b4; struct CTgtObj *m_p1b8; struct CTgtObj *m_p1bc; struct CTgtObj *m_p1c0; struct CTgtObj *m_p1c4; struct CTgtObj *m_p1c8; struct CTgtObj *m_p1cc;
	char m_pad01d0[0x50];
	struct CTgtObj *m_p220;
};
