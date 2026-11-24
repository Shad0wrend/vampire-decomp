// C_BreakableSurface: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseEntity.h"
#include "IBrushRenderer.h"

class C_BreakableSurface : public C_BaseEntity, public IBrushRenderer
{
public:
	C_BreakableSurface();
	virtual ~C_BreakableSurface();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_BreakableSurface's own function
	virtual int vfunc15();
	virtual int vfunc16();
	virtual bool vfunc79();
	virtual bool IsTransparent();
	char m_pad0018[0x414 - 0x18];
	int m_nWidth;
	int m_nHeight;
	char m_pad041c[0x43c - 0x41c];
	bool sub_100b7450(int x, int y);
	void sub_100b74f0();
	bool m_bUnk438;
	char m_pad043d[0x940 - 0x43d];
};
