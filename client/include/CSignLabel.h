// CSignLabel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Label.h"

class CSignLabel : public vgui2::Label
{
public:
	virtual ~CSignLabel();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CSignLabel's own function
	virtual int vfunc74(int);
	CSignLabel(vgui2::Panel *, const char *, const char *);
	struct CZero8 { unsigned char m_dummy; CZero8() { unsigned char *p = (unsigned char *)this; p[-0xb0] = 0; p[-0xaf] = 0; p[-0xae] = 0; p[-0xad] = 0; p[-0xac] = 0; p[-0xab] = 0; p[-0xaa] = 0; p[-0xa9] = 0; } };
	CZero8 m_col;
	char m_pad0004[0xdc - 0x4];
};
