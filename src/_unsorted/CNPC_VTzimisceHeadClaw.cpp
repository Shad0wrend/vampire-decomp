// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c0c90 size=0x1d
#include "CNPC_VTzimisceHeadClaw.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093d1ac;
extern B g_10936c74;
int CNPC_VTzimisceHeadClaw::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093d1ac.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103c1400 size=0xe0
#include "CNPC_VTzimisceHeadClaw.h"
#include "CUnknown1070b22c.h"
extern CUnknown1070b22c *g_1070b22c;

struct CSoundPrecacherX {
	virtual void PrecacheSound(const char *pszName, int bPreload);
};
extern CSoundPrecacherX *g_1070b248;
extern const char *g_1065ca68[2];
extern const char *g_1065ca70[2];
extern const char *g_1065ca78[3];
void sub_101d0ec0(const char *pszItem);

void CNPC_VTzimisceHeadClaw::vfunc104()
{
	sub_100097b4();
	g_1070b22c->vfunc17((int)"Tzim2_powerup_emitter", 1);
	g_1070b22c->vfunc17((int)"Tzim2_blast_emitter", 1);
	g_1070b22c->vfunc17((int)"Tzim2_player_emitter", 1);
	g_1070b22c->vfunc17((int)"HUD_Tzim2_emitter", 1);
	for (unsigned int i = 0; i < 2; i++)
		g_1070b248->PrecacheSound(g_1065ca68[i], 0);
	for (unsigned int j = 0; j < 2; j++)
		g_1070b248->PrecacheSound(g_1065ca70[j], 0);
	for (unsigned int k = 0; k < 3; k++)
		g_1070b248->PrecacheSound(g_1065ca78[k], 0);
	g_1070b248->PrecacheSound("Character/Monster/TC_FatGuy/Sluge_Hit.wav", 0);
	g_1070b248->PrecacheSound("Character/Monster/TC_FatGuy/Sluge_Affected.wav", 0);
	sub_101d0ec0("item_w_tzimisce2_claw");
	sub_101d0ec0("item_w_tzimisce2_head");
}
// END FUNCTION

// FUNCTION: 0x103c1540 size=0x95
#include "CNPC_VTzimisceHeadClaw.h"

#define D(n) virtual void n();
#define D10(p) D(p##0) D(p##1) D(p##2) D(p##3) D(p##4) D(p##5) D(p##6) D(p##7) D(p##8) D(p##9)
#define D100(p) D10(p##0) D10(p##1) D10(p##2) D10(p##3) D10(p##4) D10(p##5) D10(p##6) D10(p##7) D10(p##8) D10(p##9)

// The slots of the entity's vtable up to 619 (only 220 and 619 are used here).
struct CTzHeadSlots {
    D100(a0) D100(a1) D10(a20) D10(a21)
    virtual float *vfunc220();
    D(b221) D(b222) D(b223) D(b224) D(b225) D(b226) D(b227) D(b228) D(b229)
    D100(a3) D100(a4) D100(a5)
    D10(c53) D10(c54) D10(c55) D10(c56) D10(c57) D10(c58) D10(c59) D10(c60)
    D(d610) D(d611) D(d612) D(d613) D(d614) D(d615) D(d616) D(d617) D(d618)
    virtual void vfunc619(int a);
    void sub_1029b290(void *pEvent);
};

void sub_101cdba0(float *pPos, float a, float b, float c, float d, int e, int f);

void CNPC_VTzimisceHeadClaw::vfunc259(void *pEvent)
{
    CTzHeadSlots *p = (CTzHeadSlots *)this;
    switch (*(int *)pEvent) {
    case 0x802:
        sub_101cdba0(p->vfunc220(), 1.3f, 0.2f, 0.2f, 1024.0f, 0, 0);
        p->vfunc619(1);
        break;
    case 0x803:
        sub_101cdba0(p->vfunc220(), 1.3f, 0.2f, 0.2f, 1024.0f, 0, 0);
        p->vfunc619(0);
        break;
    default:
        p->sub_1029b290(pEvent);
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x103c16f0 size=0x13
#include "CNPC_VTzimisceHeadClaw.h"
void CNPC_VTzimisceHeadClaw::vfunc453()
{
	sub_102ad140();
	sub_100123f5(0x35);
}
// END FUNCTION

// FUNCTION: 0x103c1720 size=0x95
#include "CNPC_VTzimisceHeadClaw.h"

// TARGET: CNPC_VTzimisceHeadClaw::vfunc440
int CNPC_VTzimisceHeadClaw::vfunc440(int act)
{
    switch (act) {
    case 0xc7:
        return 0xc8;
    case 0xe7:
        return 0x156;
    case 0xbf:
        return 0x157;
    case 0xed:
    case 0xef:
        return 0xf0;
    }
    return sub_102b12f0(act);
}
// END FUNCTION

// FUNCTION: 0x103c1820 size=0x15f
#include "CAI_BaseNPCTroika.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct SlotView	// an NPC viewed as a list of slots; slot 618 is used here
{
    S100(a) S100(b) S100(c) S100(d) S100(e) S100(f)
    S10(g)
    virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5(); virtual void h6(); virtual void h7();
    virtual void vfunc618();
};

struct EventData	// the event passed to slot 442: the type first
{
    int m_iType;
    float m_flValue;
};

struct HeadClawView : public CAI_BaseNPCTroika
{
    void sub_103c1820(EventData *pEvent);
    void sub_10010695(EventData *pEvent);	// CAI_BaseNPCTroika::vfunc442 (stub 0x10010695), called directly
};

void HeadClawView::sub_103c1820(EventData *pEvent)
{
    switch (pEvent->m_iType) {
    case 0x122:
    case 0x123:
    case 0x124:
        {
            EventData data;
            data.m_iType = 0x4b;
            data.m_flValue = 1.0f;
            sub_10010695(&data);
            return;
        }
    case 0x36:
    case 0x37:
        ((SlotView *)this)->vfunc618();
        break;
    }
    sub_10010695(pEvent);
}
// END FUNCTION

// FUNCTION: 0x103c1c80 size=0x14
#include "CNPC_VTzimisceHeadClaw.h"

void CNPC_VTzimisceHeadClaw::vfunc420()
{
	CNPC_VBaseBoss::vfunc420();
	m_iField6678 = 0;
}
// END FUNCTION
