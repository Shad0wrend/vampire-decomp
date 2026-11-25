// CPhysicsHand: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CPhysicsHandOwned { public: virtual ~CPhysicsHandOwned(); };

class CPhysicsHand : public CManagedHudElement
{
public:
	virtual ~CPhysicsHand();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CPhysicsHand's own function
	virtual void vfunc97();
	virtual void vfunc98();
	virtual bool vfunc107();
	virtual void vfunc112();
	CPhysicsHand(int a);
	void sub_1005f750();
	void sub_1005f800();
	void sub_1005f810();
	void sub_101a9890(int, int);
	int m_unk174; int m_unk178; int m_unk17c; int m_unk180; int m_unk184; int m_unk188; int m_unk18c; int m_n190; bool m_b194; bool m_b195; bool m_b196; char m_unk197;
	CPhysicsHandOwned *m_pChild1; CPhysicsHandOwned *m_pChild2;
};
