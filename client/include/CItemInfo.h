// CItemInfo: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CItemInfoOwned { public: virtual ~CItemInfoOwned(); };

class CItemInfo : public CManagedHudElement
{
public:
	virtual ~CItemInfo();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CItemInfo's own function
	virtual void vfunc97();
	virtual void vfunc98();
	virtual bool vfunc107();
	CItemInfo(int parent);
	void sub_1005ee20();
	void sub_1005eee0();
	void sub_1005eef0();
	void sub_101a9890(int, int);
	void sub_101a98f0(int, int);
	int m_unk174; int m_unk178; int m_unk17c; int m_unk180; int m_unk184; int m_unk188;
	char m_unk18c; char m_unk18d; char m_unk18e; char m_unk18f;
	CItemInfoOwned *m_unk190;
};
