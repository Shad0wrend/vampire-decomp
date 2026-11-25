// FX_Cube: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "CClientSideEffect.h"

struct FXMatView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void vfunc12(int a);
};

class FX_Cube : public CClientSideEffect
{
public:
	FX_Cube(void *pMat) : CClientSideEffect((int)"FX_Cube")
	{
		m_pMaterial = pMat;
		if (pMat)
			((FXMatView *)pMat)->vfunc12(0);
	}
	virtual void vfunc1();
	virtual bool vfunc3();
	int m_unk4; int m_unk8; int m_unkc; int m_unk10; int m_unk14; int m_unk18; int m_unk1c;
	int m_unk20; int m_unk24; int m_unk28; int m_unk2c;
	float m_flUnk30;
	void *m_pMaterial;
};
