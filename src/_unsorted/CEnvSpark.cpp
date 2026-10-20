// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10103e00 size=0x81
#include "CEnvSpark.h"

struct CSparkRandom {
    virtual void v0();
    virtual float RandomFloat(float flMin, float flMax);
};
extern CSparkRandom *g_1070b244;
struct CSparkGlobals { char pad[0xc]; float curtime; };
extern CSparkGlobals *g_1070b228;
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
    p->m_flNextThink = g_1070b228->curtime + (g_1070b244->RandomFloat(0, 1.5f) + 0.1);
    if (p->m_f450 < 0.0f)
        p->m_f450 = 0;
    vfunc104();
}
// END FUNCTION

// FUNCTION: 0x10103ec0 size=0x83
#include "CEnvSpark.h"

struct ISoundSink { virtual void PrecacheSound(const char *s, int n); };
struct IModelSink {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual int PrecacheModel(const char *s, int n);
};
extern ISoundSink *g_1070b248;
extern IModelSink *g_1070b22c;

void CEnvSpark::vfunc104()
{
    g_1070b248->PrecacheSound("environmental/machines/sparks01.wav", 0);
    g_1070b248->PrecacheSound("environmental/machines/sparks02.wav", 0);
    g_1070b248->PrecacheSound("environmental/machines/sparks03.wav", 0);
    g_1070b248->PrecacheSound("environmental/machines/sparks04.wav", 0);
    g_1070b248->PrecacheSound("environmental/machines/sparks01.wav", 0);
    g_1070b248->PrecacheSound("environmental/machines/sparks01.wav", 0);
    m_nGlowModelIndex = g_1070b22c->PrecacheModel("sprites/glow01.vmt", 0);
}
// END FUNCTION
