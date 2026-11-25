// CHudCounterElement: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CHudElement.h"

struct CCounterDef { int m_unk0; int m_unk4; int m_unk8; int m_unkc; int m_unk10; int m_unk14; int m_unk18; int m_unk1c; int m_unk20; int m_unk24; int m_unk28; int m_unk2c; int m_unk30; int m_unk34; int m_unk38; int m_unk3c; int m_unk40; int m_unk44; int m_unk48; int m_unk4c;
	unsigned char m_r, m_g, m_b, m_a;
	int m_unk54[(0x418 - 0x54) / 4]; int m_unk418; float m_flY; float m_flX; int m_unk424; int m_bFlag; };
class CHudCounterElement : public CHudElement
{
public:
	int m_unk10;
	CCounterDef *m_pDef;	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CHudCounterElement's own function
    virtual void vfunc5(int);
};
