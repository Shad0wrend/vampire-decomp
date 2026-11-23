// CHUDSprite: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once

class CHUDSprite
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots CHUDSprite adds to its base's vtable: 0-0, vfuncK at slot K
	CHUDSprite(const char *pMaterial, int a1, int a2, int a3, int a4, int a5, int a6);
	virtual ~CHUDSprite();
	char m_pad0004[0x20 - 0x4];
};
