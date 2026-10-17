// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035cb90 size=0x6f
#include "CNPC_VAndreiBlood.h"

struct ISoundSink { virtual void PrecacheSound(const char *s, int n); };
struct IEmitSink {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16();
    virtual void PrecacheEmitter(const char *s, int n);
};
extern ISoundSink *g_1070b248;
extern IEmitSink *g_1070b22c;

void CNPC_VAndreiBlood::vfunc104()
{
    CNPC_VHuman::vfunc104();
    g_1070b248->PrecacheSound("Character/Boss/Andrei/TeleportOut.wav", 0);
    g_1070b248->PrecacheSound("Character/Boss/Andrei/TeleportIn.wav", 0);
    g_1070b248->PrecacheSound("Character/Boss/Andrei/Summon.wav", 0);
    g_1070b22c->PrecacheEmitter("Andrei_Teleport_Out-Emitter", 1);
    g_1070b22c->PrecacheEmitter("Andrei_Teleport_In-Emitter", 1);
    g_1070b22c->PrecacheEmitter("Andrei_Summon-Emitter", 1);
}
// END FUNCTION
