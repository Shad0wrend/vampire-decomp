// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
