// CProgBar: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CProgBar : public CManagedHudElement
{
public:
	virtual ~CProgBar();
	void sub_1005fcb0();
	bool sub_1005fcf0();
	void sub_1005fe40(int a, int b, int c);
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CProgBar's own function
	virtual void vfunc98();
	virtual bool vfunc107();
	virtual void vfunc112();
	int m_unk174;
	int m_n178;
	char m_b17c;
	char m_b17d;
	char m_b17e;
	char m_pad017f[0x1a8 - 0x17f];
	int m_n1a8;
	int m_n1ac;
	int m_n1b0;
	char m_b1b4;
	char m_pad01b5[0x1c4 - 0x1b5];
};
