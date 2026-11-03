// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c0ad0 size=0x6
#include "CNPC_VTzimisceHeadClaw.h"
namespace lifted {
extern char g_1065ca84;
}
datamap_t *CNPC_VTzimisceHeadClaw::vfunc82()
{
    return (datamap_t *)&lifted::g_1065ca84;
}
// END FUNCTION

// FUNCTION: 0x103c0c30 size=0x6
extern unsigned char g_1065cb24;
// TARGET: sub_103c0c30
unsigned char sub_103c0c30()
{
    return g_1065cb24;
}
// END FUNCTION

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

// FUNCTION: 0x103c12c0 size=0x3
#include "CNPC_VTzimisceHeadClaw.h"
bool CNPC_VTzimisceHeadClaw::vfunc325()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103c12e0 size=0x3
#include "CNPC_VTzimisceHeadClaw.h"
bool CNPC_VTzimisceHeadClaw::vfunc324()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103c1300 size=0x6
#include "CNPC_VTzimisceHeadClaw.h"
namespace lifted {
extern char g_1093d160;
}
int CNPC_VTzimisceHeadClaw::vfunc580()
{
    return (int)&lifted::g_1093d160;
}
// END FUNCTION

// FUNCTION: 0x103c1320 size=0x6
#include "CNPC_VTzimisceHeadClaw.h"
namespace lifted {
extern int g_1065cb2c;
}
int CNPC_VTzimisceHeadClaw::vfunc451()
{
    return lifted::g_1065cb2c;
}
// END FUNCTION

// FUNCTION: 0x103c1340 size=0x86
#include "CNPC_VTzimisceHeadClaw.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CNPC_VTzimisceHeadClaw *CNPC_VTzimisceHeadClaw::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x665c))->~CUtlVector<int>();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103c1400 size=0xe0
#include "CNPC_VTzimisceHeadClaw.h"

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
	engine->vfunc17((const char *)"Tzim2_powerup_emitter", 1);
	engine->vfunc17((const char *)"Tzim2_blast_emitter", 1);
	engine->vfunc17((const char *)"Tzim2_player_emitter", 1);
	engine->vfunc17((const char *)"HUD_Tzim2_emitter", 1);
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

// FUNCTION: 0x103c1520 size=0x3
#include "CNPC_VTzimisceHeadClaw.h"
bool CNPC_VTzimisceHeadClaw::vfunc70()
{
    return 1;
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

// FUNCTION: 0x103c1610 size=0xa6
#include "CNPC_VTzimisceHeadClaw.h"
#include "CUnknown1070b244.h"

struct CNpcSlotsView	// the NPC's virtual table up to slot 605
{
	CBP_V100(a) CBP_V100(b) CBP_V100(c) CBP_V100(d) CBP_V100(e) CBP_V100(f)
	CBP_V1(g0) CBP_V1(g1) CBP_V1(g2) CBP_V1(g3)
	virtual int vfunc604(unsigned int flags);
	virtual int vfunc605(unsigned int flags);
};

struct CWeaponFlagsView	// the weapon's virtual table up to slot 360
{
	CBP_V100(a) CBP_V100(b) CBP_V100(c) CBP_V10(d0) CBP_V10(d1) CBP_V10(d2) CBP_V10(d3) CBP_V10(d4) CBP_V10(d5)
	virtual unsigned int vfunc360();
};

extern CUnknown1070b244 *g_1070b244;

// TARGET: CNPC_VTzimisceHeadClaw::vfunc438
int CNPC_VTzimisceHeadClaw::vfunc438()
{
	switch (m_nState5cc0) {
	case 2: {
		m_b5b80 = 0;
		if (((CAI_BaseNPC *)this)->sub_10269aa0(0x35))
			return 0x158;
		unsigned int nWeaponFlags;
		if (((CAI_BaseNPC *)this)->sub_10007e19())
			nWeaponFlags = ((CWeaponFlagsView *)((CAI_BaseNPC *)this)->sub_10007e19())->vfunc360();
		else
			nWeaponFlags = 0;
		if (nWeaponFlags & 0x18000) {
			int iSchedule = ((CNpcSlotsView *)this)->vfunc604(nWeaponFlags);
			if (iSchedule)
				return iSchedule;
		} else {
			if (sub_103c24a0() || g_1070b244->vfunc2(0, 100) < 40)
				return 0xca;
			int iSchedule = ((CNpcSlotsView *)this)->vfunc605(nWeaponFlags);
			if (iSchedule)
				return iSchedule;
		}
		break;
	}
	}
	return sub_102af660();
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

// FUNCTION: 0x103c17f0 size=0x1c
#include "CNPC_VTzimisceHeadClaw.h"

// TARGET: CNPC_VTzimisceHeadClaw::vfunc433
void CNPC_VTzimisceHeadClaw::vfunc433()
{
	sub_102b27f0();
	sub_10269b50(0xf);
	sub_10269b50(0xe);
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

// FUNCTION: 0x103c19e0 size=0x5b
#include "CNPC_VTzimisceHeadClaw.h"
#include "CUnknown1025ddd0.h"
#include "globalvars.h"
#include "engineiface.h"
struct SNotify10924edc { virtual void vfunc0(); virtual void vfunc1(); };
extern SNotify10924edc *g_10924edc;
bool CNPC_VTzimisceHeadClaw::vfunc599(CBaseEntity *pEntity)
{
	if (m_pBehaviour65e8->sub_1025db70((CBaseEntity *)this)) {
		g_10924edc->vfunc1();
		m_b6078 = 1;
		m_f6074 = enginerandom->vfunc1(7.5f, 15.0f) + gpGlobals->curtime;
		return true;
	}
	m_b6078 = 0;
	return false;
}
// END FUNCTION

// FUNCTION: 0x103c1a60 size=0x43
#include "CNPC_VTzimisceHeadClaw.h"
#include "CUnknown1025ddd0.h"
struct S10924edc
{
	virtual void v0();
	virtual void v1();
};
extern S10924edc *g_10924edc;
bool CNPC_VTzimisceHeadClaw::vfunc600(void *pEntity)
{
	g_10924edc->v1();
	if (!m_b6078 && m_pBehaviour65e8->sub_1025dca0((CBaseEntity *)this, 0))
	{
		m_b6078 = 1;
		return true;
	}
	m_b6078 = 0;
	return false;
}
// END FUNCTION

// FUNCTION: 0x103c1ad0 size=0x25
#include "CNPC_VTzimisceHeadClaw.h"

struct CUnknown10924edc
{
    virtual void a0();
    virtual void vfunc1();
};

extern CUnknown10924edc *g_10924edc;

struct CUnknown1025ddd0
{
    void sub_1025ddd0(CNPC_VTzimisceHeadClaw *pOwner);
};

// TARGET: CNPC_VTzimisceHeadClaw::vfunc601
void CNPC_VTzimisceHeadClaw::vfunc601(int a)
{
    g_10924edc->vfunc1();
    *((char *)this + 0x6078) = 0;
    ((CUnknown1025ddd0 *)*(void **)((char *)this + 0x65e8))->sub_1025ddd0(this);
}
// END FUNCTION

// FUNCTION: 0x103c1b90 size=0xb4
#include "CNPC_VTzimisceHeadClaw.h"

void CNPC_VTzimisceHeadClaw::vfunc103()
{
	const char *pszName = "TzimisceCreation2";
	m_pszName10e4 = *pszName ? pszName : 0;
	const char *pszName2 = "D_HT 10";
	m_pszName63ac = *pszName2 ? pszName2 : 0;
	m_n6420 = 0;
	m_n6424 = 0;
	m_n6428 = 0;
	m_n642c = 0;
	m_n6430 = 100;
	sub_10298d30();
	sub_10012855(0x4000000);
	sub_10012855(0x200000);
	m_nFlags5b84 |= 0x80;
	float size[3];
	size[0] = 45.0f;
	size[1] = 45.0f;
	size[2] = 100.0f;
	sub_1009b060(size);
	sub_100b3900(4);
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

// FUNCTION: 0x103c1cb0 size=0x9
#include "CNPC_VTzimisceHeadClaw.h"

unsigned short __fastcall sub_1029a050(void *pThis);

unsigned short CNPC_VTzimisceHeadClaw::sub_103c1cb0()
{
	unsigned short result = sub_1029a050(this);
	result |= 0x800;
	return result;
}
// END FUNCTION

// FUNCTION: 0x103c1cd0 size=0x37
// TARGET: CNPC_VTzimisceHeadClaw::vfunc310
#include "CNPC_VTzimisceHeadClaw.h"
#include "CAI_BaseNPCTroika.h"

struct CNPC_VTzimisceHeadClawSlotView
{
	virtual int vf0(); virtual int vf1(); virtual int vf2(); virtual int vf3(); virtual int vf4();
	virtual int vf5(); virtual int vf6(); virtual int vf7(); virtual int vf8(); virtual int vf9();
	virtual int vf10(); virtual int vf11(); virtual int vf12(); virtual int vf13(); virtual int vf14();
	virtual int vf15(); virtual int vf16(); virtual int vf17(); virtual int vf18(); virtual int vf19();
	virtual int vf20(); virtual int vf21(); virtual int vf22(); virtual int vf23(); virtual int vf24();
	virtual int vf25(); virtual int vf26(); virtual int vf27(); virtual int vf28(); virtual int vf29();
	virtual int vf30(); virtual int vf31(); virtual int vf32(); virtual int vf33(); virtual int vf34();
	virtual int vf35(); virtual int vf36(); virtual int vf37(); virtual int vf38(); virtual int vf39();
	virtual int vf40(); virtual int vf41(); virtual int vf42(); virtual int vf43(); virtual int vf44();
	virtual int vf45(); virtual int vf46(); virtual int vf47(); virtual int vf48(); virtual int vf49();
	virtual int vf50(); virtual int vf51(); virtual int vf52(); virtual int vf53(); virtual int vf54();
	virtual int vf55(); virtual int vf56(); virtual int vf57(); virtual int vf58(); virtual int vf59();
	virtual int vf60(); virtual int vf61(); virtual int vf62(); virtual int vf63(); virtual int vf64();
	virtual int vf65(); virtual int vf66(); virtual int vf67(); virtual int vf68(); virtual int vf69();
	virtual int vf70(); virtual int vf71(); virtual int vf72(); virtual int vf73(); virtual int vf74();
	virtual int vf75(); virtual int vf76(); virtual int vf77(); virtual int vf78(); virtual int vf79();
	virtual int vf80(); virtual int vf81(); virtual int vf82(); virtual int vf83(); virtual int vf84();
	virtual int vf85(); virtual int vf86(); virtual int vf87(); virtual int vf88(); virtual int vf89();
	virtual int vf90(); virtual int vf91(); virtual int vf92(); virtual int vf93(); virtual int vf94();
	virtual int vf95(); virtual int vf96(); virtual int vf97(); virtual int vf98(); virtual int vf99();
	virtual int vf100(); virtual int vf101(); virtual int vf102(); virtual int vf103(); virtual int vf104();
	virtual int vf105(); virtual int vf106(); virtual int vf107(); virtual int vf108(); virtual int vf109();
	virtual int vf110(); virtual int vf111(); virtual int vf112(); virtual int vf113(); virtual int vf114();
	virtual int vf115(); virtual int vf116(); virtual int vf117(); virtual int vf118(); virtual int vf119();
	virtual int vf120(); virtual int vf121(); virtual int vf122(); virtual int vf123(); virtual int vf124();
	virtual int vf125(); virtual int vf126(); virtual int vf127(); virtual int vf128(); virtual int vf129();
	virtual int vf130(); virtual int vf131(); virtual int vf132(); virtual int vf133(); virtual int vf134();
	virtual int vf135(); virtual int vf136(); virtual int vf137(); virtual int vf138(); virtual int vf139();
	virtual int vf140(); virtual int vf141(); virtual int vf142(); virtual int vf143(); virtual int vf144();
	virtual int vf145(); virtual int vf146(); virtual int vf147(); virtual int vf148(); virtual int vf149();
	virtual int vf150(); virtual int vf151(); virtual int vf152(); virtual int vf153(); virtual int vf154();
	virtual int vf155(); virtual int vf156(); virtual int vf157(); virtual int vf158(); virtual int vf159();
	virtual int vf160(); virtual int vf161(); virtual int vf162(); virtual int vf163(); virtual int vf164();
	virtual int vf165(); virtual int vf166(); virtual int vf167();
};

void CNPC_VTzimisceHeadClaw::vfunc310(int a)
{
	if (a == 9) {
		if (((CNPC_VTzimisceHeadClawSlotView *)this)->vf167()) {
			((CAI_BaseNPCTroika *)this)->vfunc310(0x1136);
			return;
		}
	}
	((CAI_BaseNPCTroika *)this)->vfunc310(a);
}
// END FUNCTION

// FUNCTION: 0x103c24d0 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTzimisceHeadClaw.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1065ca78[];

void CNPC_VTzimisceHeadClaw::vfunc618()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 4, g_1065ca78[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103c2640 size=0x170
#include "CNPC_VTzimisceHeadClaw.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"
extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1065ca68[];
extern const char *g_1065ca70[];

void CNPC_VTzimisceHeadClaw::vfunc619(char bFlag)
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = m_pEdict2e0;
	if (bFlag)
	{
		int entindex = engine->vfunc35(edict);
		g_1070b248->vfunc3(&filter, entindex, 4, g_1065ca70[g_1070b244->vfunc2(0, 1)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
	}
	else
	{
		int entindex = engine->vfunc35(edict);
		g_1070b248->vfunc3(&filter, entindex, 4, g_1065ca68[g_1070b244->vfunc2(0, 1)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x103c2810 size=0x35
#include "CNPC_VTzimisceHeadClaw.h"

void sub_1009d940(void *p, int n);
void sub_1009d960(void *p, int n);

int CNPC_VTzimisceHeadClaw::vfunc126(int a)
{
	void *member = (char *)this + 0x6678;
	sub_1009d940(member, 3);
	int r = sub_100025cc(a);
	sub_1009d960(member, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x103c2860 size=0x28
#include "CNPC_VTzimisceHeadClaw.h"
void __cdecl sub_10015311(void *p, int mode);

// TARGET: CNPC_VTzimisceHeadClaw::vfunc127
int CNPC_VTzimisceHeadClaw::vfunc127(int a)
{
	int r = sub_1000527c(a);
	sub_10015311((char *)this + 0x6678, 3);
	return r;
}
// END FUNCTION
