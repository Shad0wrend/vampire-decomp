// CParticleEffectBinding: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases; nothing else yet (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "CDefaultClientRenderable.h"

#include "Vector.h"
struct CPEBList
{
	int m_a; int m_b; int m_c;
	short m_s0c; short m_s0e; short m_s10; short m_s12; unsigned short m_s14; short m_s16;
	int m_x18;
	void sub_10117b60();
	CPEBList() { m_a = 0; m_b = 0; m_c = 0; sub_10117b60(); m_x18 = m_a; }
};
class CParticleEffectBinding;
class VMatrix;
struct CPEBOwner { void sub_101176b0(CParticleEffectBinding *); };
class CParticleEffectBinding : public CDefaultClientRenderable
{
public:
	CParticleEffectBinding();
	~CParticleEffectBinding();
	int sub_10116710();
	void *sub_10117260(const char *name, unsigned short *pIndex);
	void sub_10116e10();
	void sub_10116bb0(VMatrix *, VMatrix *);
	unsigned short m_unk08; unsigned short m_unk0a;
	Vector m_Min; Vector m_Max;
	unsigned short m_unk24; unsigned short m_unk26; unsigned short m_unk28; unsigned short m_unk2a;
	int m_unk2c; CPEBOwner *m_unk30; int m_unk34;
	CPEBList m_List;
};
