// Beam_t: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases; nothing else yet (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "CDefaultClientRenderable.h"

class Beam_t : public CDefaultClientRenderable
{
public:
	Beam_t();
	void sub_10192db0();
	int m_unk8[(0x104 - 8) / 4];
	struct BeamFill { int m_a[10]; BeamFill() { for (int i = 0; i < 10; i++) m_a[i] = -1; } } m_fill;
	int m_unk12c[(0x378 - 0x12c) / 4];
};
