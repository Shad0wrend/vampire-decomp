// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 8 blocks
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

// FUNCTION: 0x10103c40 size=0x5
int * sub_10103c80(void);
int * g_107091a4 = ((int * (*)(int))sub_10103c80)(0);
// END FUNCTION

// FUNCTION: 0x10103c80 size=0x52
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_1056a578[2];
void sub_10002126();
void sub_1000279d();
void sub_1000fb37();
void sub_10013381();
void sub_10003eb3();

int *sub_10103c80()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_flDelay", {0x450, 0}, 1, 6, "MaxDelay" },
        { 4, "m_nMagnitude", {0x458, 0}, 1, 6, "Magnitude" },
        { 4, "m_nTrailLength", {0x45c, 0}, 1, 6, "TrailLength" },
        { 0, "CEnvSparkSparkThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10002126 },
        { 0, "InputStartSpark", {0, 0}, 1, 8, "StartSpark", 0, (void *)sub_1000279d },
        { 0, "InputStopSpark", {0, 0}, 1, 8, "StopSpark", 0, (void *)sub_1000fb37 },
        { 0, "InputToggleSpark", {0, 0}, 1, 8, "ToggleSpark", 0, (void *)sub_10013381 },
        { 0, "InputSparkOnce", {0, 0}, 1, 8, "SparkOnce", 0, (void *)sub_10003eb3 },
        { 10, "m_OnSpark", {0x460, 0}, 1, 0x16, "OnSpark", g_1055dc70 },
    };
    g_1056a578[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1056a578[0] = (int)&dataDesc[1];
    return g_1056a578;
}
// END FUNCTION

// FUNCTION: 0x10103d00 size=0x43
#include "platform.h"
#include "CEnvSpark.h"
void *sub_100aa720(int size);
extern char g_1056a984[];

// TARGET: env_spark
DLL_EXPORT CBaseEntity *env_spark()
{
	void *mem = sub_100aa720(0x478);
	CEnvSpark *p;
	if (mem)
		p = ((CEnvSpark *)mem)->sub_10103d70();
	else
		p = 0;
	p->vfunc106(g_1056a984);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10103d70 size=0x36
extern void *vt_1044b584[];
extern void *vt_1045a404[];
struct CEnvSparkBaseView {
	void sub_100090fc(int);
};
void __fastcall sub_100cd2a0(void *);

// TARGET: sub_10103d70
void *__fastcall sub_10103d70(char *p)
{
	((CEnvSparkBaseView *)p)->sub_100090fc(0);
	*(void **)p = vt_1044b584;
	sub_100cd2a0(p + 0x460);
	*(void **)p = vt_1045a404;
	*(int *)(p + 0x458) = 1;
	*(int *)(p + 0x45c) = 1;
	return p;
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
CBaseEntity *CEnvSpark::vfunc5(unsigned int flags)
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
