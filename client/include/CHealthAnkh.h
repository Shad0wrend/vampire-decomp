// CHealthAnkh: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CHealthAnkh : public CManagedHudElement
{
public:
	virtual ~CHealthAnkh();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CHealthAnkh's own function
	virtual void vfunc97();
	virtual void vfunc98();
	virtual bool vfunc107();
	virtual void vfunc112();
	// the slots CHealthAnkh adds to its base's vtable: 114-115, vfuncK at slot K
	virtual void vfunc114(int);
	virtual void vfunc115(int);
	CHealthAnkh(int parent);
	void sub_10051100();
	void sub_101a9890(int, int);
	void sub_101a98f0(int, int);
	int m_unk174; int m_unk178; int m_unk17c; int m_unk180; int m_unk184; int m_unk188;
	char m_unk18c; char m_unk18d; char m_unk18e; char m_unk18f;
	int m_unk190; int m_unk194; int m_unk198; int m_unk19c; int m_unk1a0; int m_unk1a4; int m_unk1a8; int m_unk1ac;
};
