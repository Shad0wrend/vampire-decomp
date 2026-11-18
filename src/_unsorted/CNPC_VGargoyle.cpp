// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10377910 size=0x6
#include "CNPC_VGargoyle.h"
#include "datamap.h"
namespace lifted {
extern char g_1063949c;
}
datamap_t *CNPC_VGargoyle::vfunc82()
{
    return (datamap_t *)&lifted::g_1063949c;
}
// END FUNCTION

// FUNCTION: 0x10377ae0 size=0x3
#include "CNPC_VGargoyle.h"
bool CNPC_VGargoyle::vfunc615()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10377b00 size=0x5
#include "CNPC_VGargoyle.h"
bool CNPC_VGargoyle::vfunc378(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10377b20 size=0x6
#include "CNPC_VGargoyle.h"
namespace lifted {
extern char g_1093aff0;
}
int CNPC_VGargoyle::vfunc580()
{
    return (int)&lifted::g_1093aff0;
}
// END FUNCTION

// FUNCTION: 0x10377b40 size=0x6
#include "CNPC_VGargoyle.h"
namespace lifted {
extern int g_106395c8;
}
int CNPC_VGargoyle::vfunc451()
{
    return lifted::g_106395c8;
}
// END FUNCTION

// FUNCTION: 0x10377b60 size=0x2b
#include "CNPC_VGargoyle.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_100123af();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CNPC_VGargoyle::vfunc5
CNPC_VGargoyle *CNPC_VGargoyle::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x6664))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_100123af();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10377c70 size=0x6
extern unsigned char g_106395c0;
// TARGET: sub_10377c70
unsigned char sub_10377c70()
{
    return g_106395c0;
}
// END FUNCTION

// FUNCTION: 0x10377cd0 size=0x1d
#include "CNPC_VGargoyle.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b038;
extern B g_10936c74;
int CNPC_VGargoyle::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b038.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10378470 size=0x102
#include "CNPC_VGargoyle.h"


struct CSoundPrecacher
{
	virtual void PrecacheSound(const char *pszName, int a);
};

extern CSoundPrecacher *g_1070b248;
extern const char *g_10639480[];
extern const char *g_10639490[];
void sub_101d0ec0(const char *pszName);

void CNPC_VGargoyle::vfunc104()
{
	sub_10384670();
	engine->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/garg_gibbs.mdl", 1);
	engine->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_head.mdl", 1);
	engine->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_L_foot.mdl", 1);
	engine->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_L_hand.mdl", 1);
	engine->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_L_torso.mdl", 1);
	engine->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_pelvis.mdl", 1);
	engine->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_R_foot.mdl", 1);
	engine->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_R_hand.mdl", 1);
	engine->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_R_torso.mdl", 1);
	unsigned int i;
	for (i = 0; i < 4; i++)
		g_1070b248->PrecacheSound(g_10639480[i], 0);
	for (i = 0; i < 3; i++)
		g_1070b248->PrecacheSound(g_10639490[i], 0);
	g_1070b248->PrecacheSound("character/monster/gargoyle/roar2.wav", 0);
	sub_101d0ec0("item_w_gargoyle_fist");
}
// END FUNCTION

// FUNCTION: 0x103785d0 size=0x5
#include "CNPC_VGargoyle.h"
struct CNPC_VVampireCall_103c4ef0 { void sub_103c4ef0(); };
// TARGET: CNPC_VGargoyle::vfunc103
// the game's 0x103785d0: a tail call (jmp) of CNPC_VVampireCall_103c4ef0::sub_103c4ef0
void CNPC_VGargoyle::vfunc103()
{
	((CNPC_VVampireCall_103c4ef0 *)this)->CNPC_VVampireCall_103c4ef0::sub_103c4ef0();
}
// END FUNCTION

// FUNCTION: 0x103785f0 size=0x32
#include "CNPC_VGargoyle.h"

extern int g_109340d8;

struct CAI_BaseNPCTroikaPlaceholder {
    void sub_1000c531();
};

// TARGET: CNPC_VGargoyle::vfunc420
void CNPC_VGargoyle::vfunc420()
{
    ((CAI_BaseNPCTroikaPlaceholder *)this)->sub_1000c531();
    m_hPillar = -1;
    *(int *)((char *)this + 0x6680) = 0;
    *(int *)((char *)this + 0x6684) = 0;
    m_nVulnerable = 0;
    g_109340d8 = 0xe;
}
// END FUNCTION

// FUNCTION: 0x10378640 size=0x6
#include "CNPC_VGargoyle.h"
int CNPC_VGargoyle::vfunc473()
{
    return 0x17;
}
// END FUNCTION

// FUNCTION: 0x10378660 size=0x6
#include "CNPC_VGargoyle.h"
int CNPC_VGargoyle::vfunc138()
{
    return 0x1b;
}
// END FUNCTION

// FUNCTION: 0x10378680 size=0x6
#include "CNPC_VGargoyle.h"
int CNPC_VGargoyle::vfunc337()
{
    return 0x4000;
}
// END FUNCTION

// FUNCTION: 0x103786c0 size=0x195
#include "CNPC_VGargoyle.h"
#include "CEntityVSlots.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b248 *g_1070b248;
void sub_101cdba0(const float *center, float amplitude, float frequency, float duration, float radius, int eCommand, bool bAirShake);

struct S103786c0Event
{
	int m_nEvent;
};

struct S103786c0View
{
	char m_pad0000[0x2e0];
	int m_pEdict2e0;
};

void CNPC_VGargoyle::vfunc259(void *pEvent)
{
	switch (((S103786c0Event *)pEvent)->m_nEvent) {
	case 1:
		break;
	case 2: {
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		filter.MakeReliable();
		int edict = ((S103786c0View *)this)->m_pEdict2e0;
		g_1070b248->vfunc3(&filter, engine->vfunc35(edict), 4, "character/monster/gargoyle/roar2.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		break;
	}
	case 0x802:
	case 0x803:
		sub_101cdba0(((CEntitySoundOriginView *)this)->GetOrigin(), 2.0f, 0.2f, 0.2f, 1024.0f, 0, false);
		((CEntityVSlots *)this)->slot617();
		break;
	default:
		sub_100076bc(pEvent);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10378a30 size=0xf0
#include "CNPC_VGargoyle.h"
#include "CNPC_VHuman.h"

int CNPC_VGargoyle::vfunc440(int schedule)
{
    switch (schedule) {
    case 0x5b: return 0x15d;
    case 0xea: return 0x15e;
    case 0xdc: return 0x15f;
    case 0xdd: return 0x160;
    }
    return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc440(schedule);
}
// END FUNCTION

// FUNCTION: 0x10378b60 size=0xf
#include "CNPC_VGargoyle.h"
namespace lifted {
int sub_10011225();
}
int CNPC_VGargoyle::vfunc461()
{
    *(int *)((char *)this + 0x1b38) = 0x11;
    return lifted::sub_10011225();
}
// END FUNCTION

// FUNCTION: 0x10378b80 size=0x50
#include "CNPC_VGargoyle.h"
// TARGET: CNPC_VGargoyle::vfunc432
void CNPC_VGargoyle::vfunc432(int a)
{
	int kind;
	void *pObj = sub_10006ae6(&kind);
	if (pObj) {
		switch (kind) {
		case 0:
			goto other;
		case 1:
			sub_1000d3cd(pObj);
			break;
		default:
		other:
			sub_100027a7(pObj);
			break;
		}
	}
	sub_1000698d(a);
}
// END FUNCTION

// FUNCTION: 0x10378bf0 size=0x5
#include "CNPC_VGargoyle.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VGargoyle::vfunc434
// the game's 0x10378bf0: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VGargoyle::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x10378c10 size=0x7c
#include "CBaseEntity.h"
#include "CNPC_VGargoyle.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
struct S10378c10Dmg { char m_pad[0x10]; unsigned int m_nDamageType; };
struct S10378c10Info {
    S10378c10Dmg *m_pDmg;
    char m_pad[0x38 - 4];
    unsigned int m_nDamageType;
};
int CNPC_VGargoyle::vfunc390(void *pInfo)
{
    S10378c10Info *info = (S10378c10Info *)pInfo;
    m_nVulnerable = 1;
    unsigned int type;
    if (info->m_pDmg)
        type = info->m_pDmg->m_nDamageType | info->m_nDamageType;
    else
        type = info->m_nDamageType;
    if (type & 0x4000000)
        m_nVulnerable = 0;
    unsigned int h = *(unsigned int *)((char *)this + 0x628c);
    CGlobalEntityList_Ent *pTarget;
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        pTarget = s->m_Serial == (int)(h >> 13) ? s->m_pEntity : 0;
    } else
        pTarget = 0;
    sub_10005849((CBaseEntity *)pTarget, 1, 10);
    return sub_10001b45(pInfo);
}
// END FUNCTION

// FUNCTION: 0x10378cb0 size=0x5c
#include "CNPC_VGargoyle.h"
#include "CVDmg_t.h"
struct CGargoyleDmgInfo
{
	CVDmg_t *m_pDmg;	// 0x0
	char m_pad04[0x30 - 4];
	float m_flDamage;	// 0x30
	char m_pad34[4];
	unsigned int m_nFlags;	// 0x38
};

// TARGET: CNPC_VGargoyle::vfunc292
void CNPC_VGargoyle::vfunc292(CGargoyleDmgInfo *pInfo, int b, int c)
{
	unsigned int flags;
	if (pInfo->m_pDmg)
		flags = pInfo->m_pDmg->m_field10 | pInfo->m_nFlags;
	else
		flags = pInfo->m_nFlags;
	if (!(flags & 0x4000002)) {
		float dmg;
		if (pInfo->m_pDmg)
			dmg = (float)pInfo->m_pDmg->sub_101faa70();
		else
			dmg = pInfo->m_flDamage;
		if (dmg != 0.0f)
			sub_10015843(pInfo, b, c);
	}
}
// END FUNCTION

// FUNCTION: 0x10378d30 size=0x3e
#include "vampire.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1070b244.h"
#include "CNPC_VGargoyle.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CNPC_VGargoyle::vfunc320
bool CNPC_VGargoyle::vfunc320(int a, int b)
{
    if (m_nVulnerable)
    {
        if (g_1070b244->vfunc2(1, 100) <= 0x32)
        {
            ((CAI_BaseNPCTroika *)this)->vfunc320(a, b);
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10378df0 size=0x93
#include "CNPC_VGargoyle.h"
#include "CEntityVSlots.h"

void CNPC_VGargoyle::vfunc433()
{
	sub_102b27f0();
	sub_10269b50(0xf);
	sub_10269b50(0xc);
	sub_10269b50(0xd);
	CEntityVSlots *pEnemy = (CEntityVSlots *)((CEntityVSlots *)this)->slot167();
	if (pEnemy)
	{
		const Vector *pMine = ((CEntityVSlots *)this)->slot217();
		const Vector *pTheirs = pEnemy->slot217();
		if ((*pTheirs - *pMine).Length2D() <= 50.0)
		{
			sub_10269b50(0x5f);
			sub_10269b50(0xe);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10378fc0 size=0x2f
#include "CNPC_VGargoyle.h"
// TARGET: vfunc435

struct CAI_BaseNPCTroikaCall
{
    void sub_100048f9(int a);
};

void CNPC_VGargoyle::vfunc435(int a)
{
    ((CAI_BaseNPCTroikaCall *)this)->sub_100048f9(a);
    if ((~m_nFlags14b8 & 8) != 0 && m_n6680 > 0)
    {
        m_n6680--;
    }
}
// END FUNCTION

// FUNCTION: 0x10379060 size=0x4d
#include "CNPC_VGargoyle.h"
namespace block_10379060 {
struct CNPC_VGargoyleUnit : CNPC_VGargoyle { bool sub_10379040(); };
bool CNPC_VGargoyleUnit::sub_10379040()
{
	bool r = (m_nFlags14b8 >> 4) & 1;
	return r;
}
}
using namespace block_10379060;
// TARGET: CNPC_VGargoyle::vfunc448
void CNPC_VGargoyle::vfunc448(int a)
{
	if (m_nState5cc0 == 2 && sub_10269d30(0x5c))
		m_nFlags5d8c &= 0x7fffffff;
	if (((CNPC_VGargoyleUnit *)this)->sub_10379040())
		sub_10379000(0);
	m_n6680 = 0;
	sub_1029adb0(a);
}
// END FUNCTION

// FUNCTION: 0x103790d0 size=0x267
#include "CAI_Motor.h"
#include "COutputEvent.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CNPC_VGargoyle.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "ehandle.h"
#include "Vector.h"
typedef void *(__fastcall *GarFnP)(void *);
typedef float *(__fastcall *GarFnF)(void *);
#define GAR_SLOT(p, n) ((*(GarFnP **)(p))[n](p))
#define GAR_SLOTF(p, n) ((*(GarFnF **)(p))[n](p))
#define TEN(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define HUN(p) TEN(p##0) TEN(p##1) TEN(p##2) TEN(p##3) TEN(p##4) TEN(p##5) TEN(p##6) TEN(p##7) TEN(p##8) TEN(p##9)
#define NINE(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8();
struct GarSlots199 {
	HUN(a) TEN(b0) TEN(b1) TEN(b2) TEN(b3) TEN(b4) TEN(b5) TEN(b6) TEN(b7) TEN(b8) NINE(c)
	virtual void s199(float *pVel, int b);
};
struct GarPhys {
	TEN(a0) TEN(a1) TEN(a2) TEN(a3) virtual void p40();
	virtual void s41(const float *pImpulse, const float *pAngImpulse);
};
struct GarMotor {
	void sub_102e0b40();
	void sub_102e2020(const float *pPos, int b);
};
struct GarView : CNPC_VGargoyle {
	void sub_10013336(int *pEvent);
	void sub_10289ee0(int a);
};
void sub_10139610(void *, void *, int, int);
#define GAR_PILLAR (*(EHANDLE *)&m_hPillar)
void CNPC_VGargoyle::vfunc442(int *pEvent)
{
	GarView *self = (GarView *)this;
	switch (*pEvent) {
	case 0xe9:
	case 0xea: {
		void *pObj = (void *)*(int *)((char *)this + 0x36c);
		m_p6684 = (void *)1;
		if (pObj) {
			Vector vecAngImpulse(0, 0, 0);
			Vector vecFwd;
			sub_10139610(GAR_SLOT(this, 221), &vecFwd, 0, 0);
			Vector vecVel;
			((GarSlots199 *)this)->s199(&vecVel.x, 0);
			vecFwd *= 400.0f;
			vecFwd.z += 100.0f;
			vecVel += vecFwd;
			((GarPhys *)pObj)->s41(&vecVel.x, &vecAngImpulse.x);
			((COutputEvent *)((char *)this + 0x6664))->sub_100cd660(this, this, 0);
		}
		self->sub_10013336(pEvent);
		return;
	}
	case 0x31:
		if (GAR_PILLAR.Get()) {
			((GarMotor *)m_pObj5d44)->sub_102e0b40();
			CBaseEntity *pPillar = GAR_PILLAR.Get();
			GarMotor *pMotor = (GarMotor *)m_pObj5d44;
			pMotor->sub_102e2020(GAR_SLOTF(pPillar, 220), 0);
			GAR_SLOT(this, 572);
		}
		if (sub_10010352())
			sub_1000ac68(0);
		return;
	case 0x36:
	case 0x37:
		GAR_SLOT(this, 618);
		self->sub_10013336(pEvent);
		return;
	case 0x12f:
		self->sub_10289ee0(0x5e);
		return;
	case 0x130:
		if (g_10566458->sub_100290c0((unsigned int *)&m_hPillar)) {
			CBaseEntity *pPillar2 = g_10566458->sub_100290c0((unsigned int *)&m_hPillar);
			*(Vector *)((char *)this + 0x5dd0) = *(Vector *)GAR_SLOTF(pPillar2, 220);
			sub_1000ac68(0);
		}
		return;
	default:
		self->sub_10013336(pEvent);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x103793e0 size=0x67
#include "CEntityVSlots.h"
#include "CAI_BaseNPC.h"
#include "CNPC_VGargoyle.h"

struct CNavObj5d44 { void sub_1000e6e7(int a); };

// TARGET: CNPC_VGargoyle::vfunc444
void CNPC_VGargoyle::vfunc444(int *pTask)
{
	switch (*pTask) {
	case 0x31:
		if (!(m_nFlags5d8c & 0x2000))
			((CEntityVSlots *)this)->slot572();
		((CNavObj5d44 *)m_pObj5d44)->sub_1000e6e7(-1);
		if (sub_10010352())
			((CAI_BaseNPC *)this)->sub_10273e80(0);
		break;
	case 0x12f:
		if (((CEntityVSlots *)this)->slot251())
			((CAI_BaseNPC *)this)->sub_10273e80(0);
		break;
	default:
		sub_10011928(pTask);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x10379470 size=0x3
#include "CNPC_VGargoyle.h"
bool CNPC_VGargoyle::vfunc70()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10379490 size=0x198
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <string.h>
#include "CNPC_VGargoyle.h"
#include "CAI_BaseNPCTroika.h"
#include "ScopeTrace.h"

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct S10379490Ent
{
	char m_pad0000[0x4c];
	unsigned char m_nFlags4c;	// 0x4c
	char m_pad004d[0x11c - 0x4d];
	const char *m_pszClassname;	// 0x11c
	char m_pad0120[0x26c - 0x120];
	const char *m_pszName;	// 0x26c

	inline bool ClassMatchesComplex(const char *pszClassOrWildcard)
	{
		int len = strlen(pszClassOrWildcard);
		if (len == 0)
			return !m_pszName;
		if (pszClassOrWildcard[len - 1] != '*')
			return !_strcmpi(STRINGR(m_pszClassname), pszClassOrWildcard);
		return !_strnicmp(STRINGR(m_pszClassname), pszClassOrWildcard, len - 1);
	}
	inline bool ClassMatches(const char *pszClassOrWildcard)
	{
		if (m_pszClassname && pszClassOrWildcard && m_pszClassname == pszClassOrWildcard)
			return true;
		return ClassMatchesComplex(pszClassOrWildcard);
	}
};

char CNPC_VGargoyle::vfunc69(CBaseEntity *pOther)
{
	S10379490Ent *pEnt = (S10379490Ent *)pOther;
	if (pEnt->m_nFlags4c & 0x16)
		return 1;
	if (pEnt->ClassMatches("prop_dynamic") || pEnt->ClassMatches("func_brush") || pEnt->ClassMatches("func_door_rotating"))
		return 1;
	return ((CAI_BaseNPCTroika *)this)->sub_1029b180(pOther);
}
// END FUNCTION

// FUNCTION: 0x10379ef0 size=0x1a
// TARGET: CNPC_VGargoyle::vfunc599
#include "CNPC_VGargoyle.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
char CNPC_VGargoyle::vfunc599(int unused)
{
	g_10924edc->b();
	return m_b6078 = 1;
}
// END FUNCTION

// FUNCTION: 0x10379f20 size=0x17
#include "CNPC_VGargoyle.h"

struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;

struct CUnk10379f20 {
    char pad[0x6078];
    char m_6078;
};

bool CNPC_VGargoyle::vfunc600(int unused)
{
    ((CUnk10379f20 *)this)->m_6078 = 1;
    g_10924edc->b();
    return true;
}
// END FUNCTION

// FUNCTION: 0x10379f50 size=0xe
#include "CNPC_VGargoyle.h"
struct CUnk10924edc
{
	virtual void v0();
	virtual void v1();
};
extern CUnk10924edc *g_10924edc;
// TARGET: CNPC_VGargoyle::vfunc601
void CNPC_VGargoyle::vfunc601(int unused)
{
	g_10924edc->v1();
}
// END FUNCTION

// FUNCTION: 0x10379f70 size=0x3
#include "CNPC_VGargoyle.h"
bool CNPC_VGargoyle::vfunc602()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10379f90 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VGargoyle.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10639480[];

void CNPC_VGargoyle::vfunc617()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 4, g_10639480[g_1070b244->vfunc2(0, 3)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1037a100 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VGargoyle.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10639490[];

void CNPC_VGargoyle::vfunc618()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 4, g_10639490[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1037a270 size=0x174
#include "CBaseEntity.h"
#include "CNPC_VGargoyle.h"
#include "CVDmg_t.h"
#include "CUnknown101c26d0.h"

extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" unsigned int __cdecl strlen(const char *);
extern char g_106b8540[];

struct CVDmgSet : CVDmg_t
{
	void sub_101fa8d0(int a, int b, int c);
};

struct CGargoyleSlots
{
#define GS_V(n) virtual void v##n();
#define GS_V10(p) GS_V(p##0) GS_V(p##1) GS_V(p##2) GS_V(p##3) GS_V(p##4) GS_V(p##5) GS_V(p##6) GS_V(p##7) GS_V(p##8) GS_V(p##9)
	GS_V10(0) GS_V10(1) GS_V10(2) GS_V10(3) GS_V10(4) GS_V10(5) GS_V10(6) GS_V10(7) GS_V10(8) GS_V10(9)
	GS_V10(10) GS_V10(11) GS_V10(12) GS_V10(13)
	GS_V(140) GS_V(141)
	virtual void vfunc142(void *pInfo);
};

#define ENT_NAME(p) (*(const char * volatile *)&(p)->m_name26c)

static inline bool NameMatches(CBaseEntity *pEnt, const char *pszQuery)
{
	if (pEnt->m_name26c && (int)pEnt->m_name26c == (int)pszQuery)
		return true;
	int len = strlen(pszQuery);
	if (len == 0)
		return ENT_NAME(pEnt) == 0;
	if (pszQuery[len - 1] != '*') {
		const char *pszName = ENT_NAME(pEnt);
		return _strcmpi(pszName ? pszName : g_106b8540, pszQuery) == 0;
	}
	const char *pszName = ENT_NAME(pEnt);
	return _strnicmp(pszName ? pszName : g_106b8540, pszQuery, len - 1) == 0;
}

void CNPC_VGargoyle::vfunc175(CBaseEntity *pOther)
{
	if (NameMatches(pOther, "pillar") || NameMatches(pOther, "central_pillar")) {
		CVDmgSet dmg;
		dmg.sub_101fa960((CVDmgSource_t *)this);
		dmg.sub_101fa8d0(1, 0x80, 10);
		dmg.m_field0c = 1;
		CUnknown101c26d0 info;
		info.sub_101c26d0(pOther, this, 1.0f, 0, 0, (int)&dmg, -1);
		((CGargoyleSlots *)pOther)->vfunc142(&info);
		dmg.sub_101fa680();
	}
	((CBaseEntity *)this)->CBaseEntity::vfunc175(pOther);
}
// END FUNCTION

// FUNCTION: 0x1037a450 size=0x108
#include "CBaseEntity.h"
#include "CNPC_VGargoyle.h"

extern "C" int _strcmpi(const char *, const char *);
extern "C" int _strnicmp(const char *, const char *, unsigned int);
extern "C" unsigned int strlen(const char *);
extern char g_106b8540[];

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct EntSlots_t
{
    SL10(a00) SL10(a01) SL10(a02) SL10(a03) SL10(a04) SL10(a05) SL10(a06) SL10(a07) SL10(a08) SL10(a09)
    SL10(a10) SL10(a11) SL10(a12) SL10(a13) SL10(a14) SL10(a15) SL10(a16) SL10(a17) SL10(a18) SL10(a19)
    SL10(a20) SL10(a21) SL10(a22) SL10(a23) SL10(a24) SL10(a25)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5();
    virtual void vfunc266(CNPC_VGargoyle *pOther);
    const char *m_pad[0x26c / 4 - 1];
    const char *m_name;
};

static inline bool NameMatches(EntSlots_t *pEnt, const char *pszQuery)
{
    const char *pszFirst = *(const char *volatile *)&pEnt->m_name;
    if (pszFirst && pszFirst == pszQuery)
        return true;
    unsigned int len = strlen(pszQuery);
    int r;
    if (len == 0) {
        r = (int)pEnt->m_name;
    } else if (pszQuery[len - 1] != '*') {
        r = _strcmpi(pEnt->m_name ? pEnt->m_name : g_106b8540, pszQuery);
    } else {
        r = _strnicmp(pEnt->m_name ? pEnt->m_name : g_106b8540, pszQuery, len - 1);
    }
    return r == 0;
}

void CNPC_VGargoyle::vfunc24(CBaseEntity *pOther)
{
    EntSlots_t *pEnt = (EntSlots_t *)pOther;
    if (NameMatches(pEnt, "pillar") || NameMatches(pEnt, "central_pillar"))
        pEnt->vfunc266(this);
}
// END FUNCTION

// FUNCTION: 0x1037a5b0 size=0x24
extern int g_10739a4c;
struct CNPC_VGargoyleCallee {
    void sub_1000d954(void *pOther);
};

// TARGET: sub_1037a5b0
void __fastcall sub_1037a5b0(void *pSelf)
{
    ((CNPC_VGargoyleCallee *)&g_10739a4c)->sub_1000d954(pSelf);
    *(int *)((char *)pSelf + 0xe80) = 0;
    *(int *)((char *)pSelf + 0xe88) = 0;
    *(int *)((char *)pSelf + 0xe84) = 0;
}
// END FUNCTION

// FUNCTION: 0x1037a5f0 size=0x8
#include "CNPC_VGargoyle.h"
// TARGET: CNPC_VGargoyle::vfunc359
int CNPC_VGargoyle::vfunc359(int index)
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1037a610 size=0x5
#include "CNPC_VGargoyle.h"
bool CNPC_VGargoyle::vfunc74(int a0)
{
    return 0;
}
// END FUNCTION
