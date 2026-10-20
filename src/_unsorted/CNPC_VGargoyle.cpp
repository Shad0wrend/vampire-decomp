// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
#include "CUnknown1070b22c.h"

extern CUnknown1070b22c *g_1070b22c;

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
	g_1070b22c->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/garg_gibbs.mdl", 1);
	g_1070b22c->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_head.mdl", 1);
	g_1070b22c->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_L_foot.mdl", 1);
	g_1070b22c->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_L_hand.mdl", 1);
	g_1070b22c->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_L_torso.mdl", 1);
	g_1070b22c->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_pelvis.mdl", 1);
	g_1070b22c->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_R_foot.mdl", 1);
	g_1070b22c->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_R_hand.mdl", 1);
	g_1070b22c->vfunc13("models/character/monster/gargoyle/gargoyle_gibbs/gargoyle_R_torso.mdl", 1);
	unsigned int i;
	for (i = 0; i < 4; i++)
		g_1070b248->PrecacheSound(g_10639480[i], 0);
	for (i = 0; i < 3; i++)
		g_1070b248->PrecacheSound(g_10639490[i], 0);
	g_1070b248->PrecacheSound("character/monster/gargoyle/roar2.wav", 0);
	sub_101d0ec0("item_w_gargoyle_fist");
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

// FUNCTION: 0x10378a30 size=0xf0
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

// FUNCTION: 0x10378c10 size=0x7c
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

// FUNCTION: 0x10379f50 size=0xe
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

// FUNCTION: 0x1037a450 size=0x108
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

// FUNCTION: 0x1037a5f0 size=0x8
// TARGET: CNPC_VGargoyle::vfunc359
int CNPC_VGargoyle::vfunc359(int index)
{
	return 1;
}
// END FUNCTION
