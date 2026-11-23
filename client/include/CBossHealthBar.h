// CBossHealthBar: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CBossHealthBarOwned { public: virtual ~CBossHealthBarOwned(); };

class CBossHealthBar : public CManagedHudElement
{
public:
	virtual ~CBossHealthBar();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CBossHealthBar's own function
	virtual void vfunc97();
	virtual void vfunc98();
	virtual bool vfunc107();
	virtual void vfunc112();
	virtual void vfunc113();
	// the slots CBossHealthBar adds to its base's vtable: 114-114, vfuncK at slot K
	virtual void vfunc114();
	int m_unk174; int m_unk178; int m_unk17c; int m_unk180; int m_unk184; int m_unk188; int m_unk18c; int m_unk190; int m_unk194; int m_unk198; int m_unk19c; int m_unk1a0; int m_unk1a4; int m_unk1a8; int m_unk1ac; int m_unk1b0; int m_unk1b4; int m_unk1b8; int m_unk1bc;
	CBossHealthBarOwned *m_pChild1; CBossHealthBarOwned *m_pChild2;
};
