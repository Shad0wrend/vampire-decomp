// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10102bf0 size=0x6
#include "datamap.h"
#include "CEnvShake.h"
namespace lifted {
extern char g_10569e20;
}
datamap_t * CEnvShake::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10569e20);
}
// END FUNCTION

// FUNCTION: 0x10102cc0 size=0x1e
#include "CEnvShake.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvShake::vfunc5
CEnvShake *CEnvShake::vfunc5(unsigned int flags)
{
	sub_100117f2();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10102cf0 size=0xa4
#include "CCollisionProperty.h"
#include "CEnvShake.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CEnvShake::vfunc103()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    (*g_109f3680)--;
    vfunc93(0, 0);
    if (*((unsigned char *)this + 0x204) & 1)
        *(int *)((char *)this + 0x45c) = 0;
}
// END FUNCTION

// FUNCTION: 0x101031c0 size=0x146
#include "CEnvShake.h"
#include "CEntityVSlots.h"
#include "CUnknown1070b244.h"
#include <math.h>

extern CUnknown1070b244 *g_1070b244;

struct ShakeThinkView
{
    char pad0000[0x17c];
    float m_flNextThink;	// 0x17c
    char pad0180[0x454 - 0x180];
    float m_flFrequency;	// 0x454
    float m_flDuration;	// 0x458
    int m_nRadius;	// 0x45c
    float m_flStopTime;	// 0x460
    float m_flNextShake;	// 0x464
    float m_flCurrentAmp;	// 0x468
    Vector m_vecMaxForce;	// 0x46c
    CEntityVSlots *m_pOwner;	// 0x478
    char pad047c[4];
    Vector m_vecShake;	// 0x480

    float Frequency() const { return m_flFrequency; }
    float Duration() const { return m_flDuration; }
};

// TARGET: CEnvShake::vfunc134
void CEnvShake::vfunc134()
{
    ShakeThinkView *p = (ShakeThinkView *)this;
    int i;
    if (gpGlobals->curtime > p->m_flNextShake)
    {
        p->m_flNextShake = 1.0f / p->Frequency() + gpGlobals->curtime;
        for (i = 0; i < 2; i++)
            p->m_vecMaxForce[i] = g_1070b244->vfunc1(-1.0f, 1.0f);
        p->m_vecMaxForce[2] = 4.0f;
        VectorNormalize(p->m_vecMaxForce);
        p->m_vecMaxForce *= p->m_flCurrentAmp * 10.0f;
    }
    float fraction = (p->m_flStopTime - gpGlobals->curtime) / p->m_flDuration;
    if (fraction < 0.0f && p->m_pOwner)
    {
        p->m_pOwner->slot6();
        return;
    }
    float freq = 0.0f;
    if (fraction != 0.0f)
        freq = p->m_flFrequency / fraction;
    float angle = (float)sin(freq * gpGlobals->curtime);
    float flAmp = angle * (fraction * fraction);
    for (i = 0; i < 3; i++)
        p->m_vecShake[i] = flAmp * p->m_vecMaxForce[i];
    float flCurrentAmp = p->m_flCurrentAmp;
    p->m_flCurrentAmp = flCurrentAmp - (gpGlobals->frametime / (p->Frequency() * p->Duration())) * flCurrentAmp;
    p->m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION
