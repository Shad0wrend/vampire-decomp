// CLightRays: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once

#include "utlvector.h"
#include "vector.h"

struct LightRay_t
{
	float f00;
	float f04;
	float f08;
	float f0c;
	int m_unk10;
	int m_unk14;
	int m_unk18;
	int m_unk1c;
	int m_unk20;
	int m_unk24;
	int n28;
};

class CLightRays
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots CLightRays adds to its base's vtable: 0-2, vfuncK at slot K
	CLightRays() {}
	CLightRays(int numRays, float a1, float a2, float a3, float a4, float a5, float a6);
	virtual ~CLightRays();
	virtual void vfunc1();
	void sub_100491c0();
	virtual void vfunc2();

	CUtlVector<LightRay_t> m_Rays;
	Vector m_v18;
	Vector m_v24;
};
