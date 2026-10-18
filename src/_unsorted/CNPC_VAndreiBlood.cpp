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

// FUNCTION: 0x1035cf80 size=0x65
#include "CNPC_VAndreiBlood.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1062b158[];
extern char g_106b8540[];

// TARGET: CNPC_VAndreiBlood::vfunc127
int CNPC_VAndreiBlood::vfunc127(int arg)
{
	g_109f3620[*g_109f3680].a = g_1062b158;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = sub_1000b28f(arg);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x1035d180 size=0x13
#include "CNPC_VAndreiBlood.h"
void CNPC_VAndreiBlood::vfunc433()
{
	sub_102b27f0();
	sub_10015839(0x79);
}
// END FUNCTION

// FUNCTION: 0x1035dba0 size=0x64
#include "CNPC_VAndreiBlood.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1062b244[];
extern char g_106b8540[];

// TARGET: CNPC_VAndreiBlood::vfunc619
void CNPC_VAndreiBlood::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_1062b244;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION
