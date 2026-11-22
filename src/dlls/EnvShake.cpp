// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 12 blocks
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

// FUNCTION: 0x10102c10 size=0x5
int sub_10102c50(void);
int g_10709120 = ((int (*)(int))sub_10102c50)(0);
// END FUNCTION

// FUNCTION: 0x10102c50 size=0x1a
namespace lifted {
extern int g_10569e20;
extern int g_10569e24;
extern char g_10569e64;
}
int sub_10102c50()
{
    lifted::g_10569e24 = 8;
    lifted::g_10569e20 = (int)&lifted::g_10569e64;
    return (int)&lifted::g_10569e20;
}
// END FUNCTION

// FUNCTION: 0x10102c80 size=0x2a
#include "CEnvShake.h"

struct IPhysicsEnvironmentStub
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34();
	virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37(); virtual void vfunc38(); virtual void vfunc39();
	virtual void DestroySpring(void *pSpring);
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

extern IPhysicsEnvironmentStub *g_10723940;
extern void *vt_10459acc[];

// TARGET: CEnvShake::sub_10102c80
void CEnvShake::sub_10102c80()
{
	*(void ***)this = vt_10459acc;
	void *pController = *(void **)((char *)this + 0x478);
	if (pController)
		g_10723940->DestroySpring(pController);
	((CBaseEntityDtor *)this)->sub_1009df20();
}
// END FUNCTION

// FUNCTION: 0x10102cc0 size=0x1e
#include "CEnvShake.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvShake::vfunc5
CBaseEntity *CEnvShake::vfunc5(unsigned int flags)
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

// FUNCTION: 0x10102dd0 size=0x268
// TARGET: CEnvShake::sub_10102dd0
#include "CEnvShake.h"
#include "IPhysicsEnvironment.h"
#include "IPhysicsObject.h"

struct CEnvShakeFields
{
	char m_pad0450[0x450];
	float m_flAmplitude;	// 0x450
	float m_flFrequency;	// 0x454
	float m_flDuration;		// 0x458
	float m_flRadius;		// 0x45c
	float m_flStopTime;		// 0x460
	float m_flNextShake;	// 0x464
	float m_flCurrentAmp;	// 0x468
	char m_pad046c[0x478 - 0x46c];
	void *m_pController;	// 0x478
	char m_shakeCallback[0x10];	// 0x47c
};

#define V(n) virtual void f##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)
struct CBaseEntityVt
{
	V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
	V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17) V10(18) V10(19)
	V10(20) V(210) V(211) V(212) V(213) V(214) V(215) V(216)
	virtual float *vfunc217();
};
#undef V
#undef V10

class IMotionController
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(IPhysicsObject *pObject);
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
};

extern IPhysicsEnvironment *g_10723940;
bool __fastcall sub_100b1380(char *pEntity);
void sub_101cdba0(const Vector *pOrigin, float amplitude, float frequency, float duration, float radius, int command, bool airshake);
int sub_101cca80(CBaseEntity **pList, int count, const Vector *mins, const Vector *maxs, unsigned int flags, int a6);

void CEnvShake::sub_10102dd0(int cmd)
{
	CEnvShakeFields *v = (CEnvShakeFields *)this;

	bool bAirShake = (m_flags204 >> 2) & 1;
	float flRadius = v->m_flRadius;
	float flDuration = v->m_flDuration;
	sub_101cdba0((const Vector *)((CBaseEntityVt *)this)->vfunc217(), Amplitude(), Frequency(), flDuration, flRadius, cmd, bAirShake);

	if (!(m_flags204 & 8))
		return;

	if (v->m_pController == 0)
		v->m_pController = g_10723940->vfunc39(&v->m_shakeCallback);

	switch (cmd)
	{
	case 0:
		{
			float flStopTime = v->m_flDuration;
			flStopTime += gpGlobals->curtime;
			v->m_flStopTime = flStopTime;
			v->m_flNextShake = 0;
			((IMotionController *)v->m_pController)->vfunc6();
			m_flNextThink = gpGlobals->curtime;
			v->m_flCurrentAmp = Amplitude();

			float flShakeRadius = v->m_flRadius;
			if (flShakeRadius == 0.0f)
				flShakeRadius = 16384.0f;

			Vector vecMins = *(const Vector *)((CBaseEntityVt *)this)->vfunc217() - Vector(flShakeRadius, flShakeRadius, flShakeRadius);
			Vector vecMaxs = *(const Vector *)((CBaseEntityVt *)this)->vfunc217() + Vector(flShakeRadius, flShakeRadius, flShakeRadius);

			CBaseEntity *pList[1024];
			int count = sub_101cca80(pList, 0x400, &vecMins, &vecMaxs, 0, 0);
			if (count > 0)
			{
				int i = 0;
				do
				{
					if (pList[i]->vfunc94() == 7 && sub_100b1380((char *)pList[i]))
					{
						IPhysicsObject *pPhys = (IPhysicsObject *)pList[i]->m_obj36c;
						if (pPhys)
						{
							((IMotionController *)v->m_pController)->vfunc2(pPhys);
							pPhys->vfunc2();
						}
					}
					i++;
				} while (i < count);
			}
		}
		break;
	case 1:
		((IMotionController *)v->m_pController)->vfunc6();
		break;
	case 2:
		v->m_flCurrentAmp = Amplitude();
	case 3:
		((IMotionController *)v->m_pController)->vfunc7();
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x101030e0 size=0xd
#include "CUnknown101030e0.h"
void CUnknown101030e0::sub_101030e0(int mode)
{
	mode = 0;
	sub_10102dd0(mode);
}
// END FUNCTION

// FUNCTION: 0x10103100 size=0xd
#include "CUnknown10103100.h"
// TARGET: CUnknown10103100::sub_10103100
void CUnknown10103100::sub_10103100(int value)
{
	sub_10102dd0(1);
}
// END FUNCTION

// FUNCTION: 0x10103120 size=0x39
struct CUnknown10103120Param {
    char m_pad0000[0x8];
    float m_f8;
    char m_pad000c[0x18 - 0xc];
    int m_n18;
};

struct CUnknown10103120 {
    char m_pad0000[0x450];
    float m_fl450;
    void sub_10103120(CUnknown10103120Param *pParam);
    void sub_1000c333(int a);
};

// TARGET: CUnknown10103120::sub_10103120
void CUnknown10103120::sub_10103120(CUnknown10103120Param *pParam)
{
    m_fl450 = (pParam->m_n18 == 1) ? pParam->m_f8 : 0.0f;
    sub_1000c333(2);
}
// END FUNCTION

// FUNCTION: 0x10103170 size=0x39
#include "CUnknown10103170.h"

extern float g_104454c4;

// TARGET: CUnknown10103170::sub_10103170
void CUnknown10103170::sub_10103170(void *pInfo)
{
    float flValue;
    if (((int *)pInfo)[6] == 1)
        flValue = ((float *)pInfo)[2];
    else
        flValue = g_104454c4;
    m_f454 = flValue;
    sub_1000c333(3);
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
