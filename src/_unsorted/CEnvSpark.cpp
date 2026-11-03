// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10103c20 size=0x6
#include "datamap.h"
#include "CEnvSpark.h"
namespace lifted {
extern char g_1056a578;
}
datamap_t * CEnvSpark::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1056a578);
}
// END FUNCTION

// FUNCTION: 0x10103dc0 size=0x2b
#include "CEnvSpark.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CEnvSpark::vfunc5
CEnvSpark *CEnvSpark::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x460))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10103e00 size=0x81
#include "CEnvSpark.h"

struct CSparkRandom {
    virtual void v0();
    virtual float RandomFloat(float flMin, float flMax);
};
extern CSparkRandom *g_1070b244;
void sub_10002126();

struct CEnvSparkFields {
    char pad0000[0x17c];
    float m_flNextThink;	// 0x17c
    char pad0180[0x1f0 - 0x180];
    int m_n1f0;	// 0x1f0
    char pad01f4[0x204 - 0x1f4];
    int m_nSpawnFlags;	// 0x204
    char pad0208[0x450 - 0x208];
    float m_f450;	// 0x450
};

void CEnvSpark::vfunc103()
{
    CEnvSparkFields *p = (CEnvSparkFields *)this;
    sub_100ac4e0(0, 0, 0);
    p->m_n1f0 = 0;
    if (p->m_nSpawnFlags & 0x40)
        sub_100ac4e0((void *)sub_10002126, 0, 0);
    p->m_flNextThink = gpGlobals->curtime + (g_1070b244->RandomFloat(0, 1.5f) + 0.1);
    if (p->m_f450 < 0.0f)
        p->m_f450 = 0;
    vfunc104();
}
// END FUNCTION

// FUNCTION: 0x10103ec0 size=0x83
#include "CEnvSpark.h"

struct ISoundSink { virtual void PrecacheSound(const char *s, int n); };
extern ISoundSink *g_1070b248;

void CEnvSpark::vfunc104()
{
    g_1070b248->PrecacheSound("environmental/machines/sparks01.wav", 0);
    g_1070b248->PrecacheSound("environmental/machines/sparks02.wav", 0);
    g_1070b248->PrecacheSound("environmental/machines/sparks03.wav", 0);
    g_1070b248->PrecacheSound("environmental/machines/sparks04.wav", 0);
    g_1070b248->PrecacheSound("environmental/machines/sparks01.wav", 0);
    g_1070b248->PrecacheSound("environmental/machines/sparks01.wav", 0);
    m_nGlowModelIndex = engine->vfunc13("sprites/glow01.vmt", 0);
}
// END FUNCTION
