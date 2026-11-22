// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ae230 size=0x95
#include "CEnvSoundscape.h"
#include "Vector.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CSoundscapeSlotView {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8)
	virtual void c0(); virtual void c1();
	virtual Vector vfunc192();
	virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
	S10(e0)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6();
	virtual void *vfunc217();
};

struct CSoundscapeFields {
	char m_pad[0x224];
	unsigned char m_nFlags224;
	char m_pad225[0x2e0 - 0x225];
	int m_pEdict2e0;
	char m_pad2e4[0x454 - 0x2e4];
	float m_flValue454;
	int edict() const { return m_pEdict2e0; }
};

struct CSoundscapePlayerView {
	char m_pad[0x2014];
	int m_nIndex2014;
};

inline int ENTINDEX_SS(int pEdict) { return engine->vfunc35(pEdict); }

CSoundscapePlayerView *sub_101cd9e0(int index);
void sub_10142e90(void *p1, const Vector &p2, int color, int a, int b, int c, int d);

void CEnvSoundscape::vfunc123()
{
	CSoundscapeFields *f = (CSoundscapeFields *)this;
	if (f->m_nFlags224 & 0x2c) {
		CSoundscapePlayerView *pPlayer = sub_101cd9e0(1);
		if (pPlayer && pPlayer->m_nIndex2014 == ENTINDEX_SS(f->edict())) {
			sub_10142e90(((CSoundscapeSlotView *)this)->vfunc217(), ((CSoundscapeSlotView *)pPlayer)->vfunc192(), f->m_flValue454 != 0.0f ? 0xff : 0, 0, 0xff, 0, 0);
		}
	}
	sub_100a0130();
}
// END FUNCTION

// FUNCTION: 0x101ae300 size=0x1e
#include "CEnvSoundscape.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvSoundscape::vfunc5
CEnvSoundscape *CEnvSoundscape::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101ae330 size=0x6
#include "datamap.h"
#include "CEnvSoundscape.h"
namespace lifted {
extern char g_10596db4;
}
datamap_t *CEnvSoundscape::vfunc82()
{
    return (datamap_t *)&lifted::g_10596db4;
}
// END FUNCTION

// FUNCTION: 0x101ae7a0 size=0x106
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CEnvSoundscape.h"

struct SsEntity_t;
struct SsUnknown_t {
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual SsEntity_t *GetBaseEntity();
};
struct SsEdict_t {
	char pad[0x40];
	SsUnknown_t *m_pUnk;
	SsUnknown_t *GetUnknown() { return m_pUnk; }
};
struct SsPlayer_t {
	char pad0[0x1fdc];
	CEnvSoundscapeParams m_Audio;
};
struct SsEntity_t {
	char pad[0xa8];
	SsPlayer_t *m_pPlayer;
};
struct SsSelf_t {
	char pad[0x17c];
	float m_flNextThink;
	char pad180[0x2e0 - 0x180];
	void *m_pEdict;
	char pad2e4[0x454 - 0x2e4];
	float m_flRadius454;
};

inline SsEntity_t *GetContainingEntity(SsEdict_t *pent)
{
	if (pent && pent->GetUnknown())
		return pent->GetUnknown()->GetBaseEntity();
	return 0;
}

SsEdict_t *sub_101d1800(void *pViewer);
extern float g_104454c4;

#define SELF ((SsSelf_t *)this)

void CEnvSoundscape::sub_101ae7a0()
{
	SsEntity_t *pEntity = GetContainingEntity(sub_101d1800(pcd_stage(SELF->m_pEdict)));
	SsPlayer_t *pPlayer = pEntity ? pEntity->m_pPlayer : 0;
	if (!pPlayer)
	{
		SELF->m_flNextThink = gpGlobals->curtime + 1.0;
		return;
	}

	CEnvSoundscapeParams &audio = pPlayer->m_Audio;
	SsSelf_t *pCurrent = 0;
	SELF->m_flNextThink = gpGlobals->curtime + 0.25;
	if (audio.m_nEdictIndex)
		pCurrent = (SsSelf_t *)GetContainingEntity((SsEdict_t *)engine->vfunc38(audio.m_nEdictIndex));

	if (pCurrent == SELF)
	{
		if (!sub_101ae440(pPlayer))
		{
			SELF->m_flNextThink = SELF->m_flNextThink + 0.5;
			SELF->m_flRadius454 = 0;
		}
	}
	else if (sub_101ae440(pPlayer))
	{
		if (!pCurrent || pCurrent->m_flRadius454 == g_104454c4 || pCurrent->m_flRadius454 > SELF->m_flRadius454)
			sub_101ae6c0(&audio);
	}
}
// END FUNCTION

// FUNCTION: 0x101ae900 size=0x26
#include "CEnvSoundscape.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CEnvSoundscape::vfunc103
void CEnvSoundscape::vfunc103()
{
	*(float *)((char *)this + 0x17c) = g_1070b244->vfunc1(0, 0.5f) + gpGlobals->curtime;
}
// END FUNCTION
