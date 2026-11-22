// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 52 blocks
#include "vampire.h"

// FUNCTION: 0x10128370 size=0x3e
#include "CBaseCombatCharacter.h"
#include "CGameRules.h"

#define VS(n) virtual void s##n();
#define VS10(p) VS(p##0) VS(p##1) VS(p##2) VS(p##3) VS(p##4) VS(p##5) VS(p##6) VS(p##7) VS(p##8) VS(p##9)

struct CUnknownObjB
{
	int sub_1000a37b();
};

// the virtual slots of the game's object up to slot 55 (the layout is not known yet)
struct CVtblRulesHelper
{
	VS10(0) VS10(1) VS10(2) VS10(3) VS10(4)
	VS(50) VS(51) VS(52) VS(53) VS(54)
	virtual CUnknownObjB *s55(int a);
};

struct CBaseCombatCharacterView2
{
	int sub_103346c0(int a);	// CBaseCombatCharacter::sub_103346c0 (stub 0x1000ff97), called directly
};

extern CVtblRulesHelper *g_1070ba0c;

// TARGET: CGameRules::vfunc53
char CGameRules::vfunc53(CBaseCombatCharacter *pChar, int nIndex)
{
	if (nIndex > -1) {
		int nLimit = g_1070ba0c->s55(nIndex)->sub_1000a37b();
		if (((CBaseCombatCharacterView2 *)pChar)->sub_103346c0(nIndex) < nLimit) {
			return 1;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101283c0 size=0x2b
#include "CBaseCombatCharacter.h"
#include "CGameRules.h"

struct CUnkObj101283c0
{
	int sub_1000df3f();
};

// TARGET: CGameRules::vfunc52
void CGameRules::vfunc52(CBaseCombatCharacter *pChar, int nIndex)
{
	vfunc53(pChar, ((CUnkObj101283c0 *)vfunc55(nIndex))->sub_1000df3f());
}
// END FUNCTION

// FUNCTION: 0x10128400 size=0x17
#include "CGameRules.h"

// TARGET: CGameRules::sub_10128400
void *CGameRules::sub_10128400()
{
	if (*(void **)((char *)this + 4) == 0)
	{
		vfunc56();
	}
	return *(void **)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x10128430 size=0x27
#include "CGameRules.h"

// TARGET: CGameRules::vfunc56
void CGameRules::vfunc56()
{
	CGameRulesSub **ppSub = (CGameRulesSub **)((char *)this + 4);
	*ppSub = new CGameRulesSub;
}
// END FUNCTION

// FUNCTION: 0x10128470 size=0x1dd
#include "CGameRules.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"

struct CWorldBoundsView
{
	char m_pad0000[0x460];
	Vector m_vecMins;	// 0x460
	Vector m_vecMaxs;	// 0x46c
};

struct CSpawnPlayerView
{
	char m_pad0000[0x1efc];
	Vector m_vec1efc;
	Vector m_vec1f08;
	char m_pad1f14[0x206c - 0x1f14];
	Vector m_vec206c;
	int m_pad2078;
	int m_n207c;
};

extern Vector g_1070d9d0;
extern Vector g_1070d1b0;
int sub_1023bd00();
void sub_101cf600(CBaseEntity *pPlayer);

inline void SetAbsOrigin62(CEntityVSlots *p, const Vector &v)
{
	p->slot62((float *)&v.x);
}

CBaseEntity *CGameRules::vfunc39(CBaseEntity *pPlayerEnt)
{
	CEntityVSlots *pPlayer = (CEntityVSlots *)pPlayerEnt;
	CSpawnPlayerView *pView = (CSpawnPlayerView *)pPlayerEnt;
	CEntityVSlots *pSpot = pPlayer->slot453();
	if (pSpot) {
		Vector vecOrigin = *pSpot->slot220() + Vector(0, 0, 1);
		pPlayer->slot62(&vecOrigin.x);
		pView->m_vec206c = *pSpot->slot221();
		pPlayer->slot64(&pSpot->slot221()->x);
	} else {
		CWorldBoundsView *pWorld = (CWorldBoundsView *)sub_1023bd00();
		Vector vecMins, vecMaxs;
		vecMins = pWorld->m_vecMins;
		vecMaxs = pWorld->m_vecMaxs;
		SetAbsOrigin62(pPlayer, (vecMaxs + vecMins) * 0.5f);
		pView->m_vec206c = g_1070d9d0;
		pPlayer->slot64(&g_1070d9d0.x);
	}
	pPlayerEnt->sub_100b2e30(&g_1070d1b0.x);
	pView->m_vec1efc = g_1070d9d0;
	pView->m_vec1f08 = g_1070d9d0;
	pView->m_n207c = 1;
	sub_101cf600(pPlayerEnt);
	return (CBaseEntity *)pSpot;
}
// END FUNCTION

// FUNCTION: 0x101286d0 size=0x5
#include "CBaseEntity.h"
#include "CGameRules.h"
char CGameRules::vfunc47(CBaseEntity * a0, CBaseEntity * a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101286f0 size=0x9c
#include "CGameRules.h"
struct SkillVar { virtual void v0(); virtual bool v1(); char pad[0x28]; int m_value; };
struct SkillEntry { int pad; SkillVar *pVar; };
struct CvarSys { virtual void v0(); virtual void v1(); virtual SkillEntry *v2(const char *name); };
extern CvarSys *g_1070b234;
extern int g_1070ba3c;
extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);

// TARGET: CGameRules::vfunc15
void CGameRules::vfunc15()
{
    char cmd[256];
    SkillEntry *e = g_1070b234->v2("skill");
    int skill;
    if (e) {
        if (e->pVar->v1())
            skill = 0;
        else
            skill = e->pVar->m_value;
    } else
        skill = 1;
    g_1070ba3c = skill;
    if (skill < 1)
        skill = 1;
    else if (skill > 3)
        skill = 3;
    else
        goto L;
    g_1070ba3c = skill;
L:
    Q_snprintf(cmd, 256, "exec skill%d.cfg\n", skill);
    engine->vfunc59(cmd);
    engine->vfunc60();
}
// END FUNCTION

// FUNCTION: 0x101287c0 size=0xa
#include "ConVar.h"
ConVar g_1070b9c8("debug_explosion_trace", "0", 0);
// END FUNCTION

// FUNCTION: 0x10128850 size=0x55d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CGameRules.h"
#include "CUnknown101cccf0.h"
#include "CVDmg_t.h"
#include "CGameTrace.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CTraceFilterWorldOnly.h"
#include "UTIL_Trace.h"
#include "Vector.h"

struct DmgInfoView
{
	CVDmg_t *m_pDmg;
	int m_pad04[11];
	float m_flDamage;
	int m_pad34;
	int m_nFlags38;
	int m_pad3c[4];

	float GetDamage() const
	{
		if (m_pDmg)
			return (float)m_pDmg->sub_101faa70();
		return m_flDamage;
	}
};

struct CDebugConVarView
{
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad[0x28];
	int m_n2c;
};

struct CEntityWaterView
{
	char m_pad[0x3e0];
	int m_nWaterLevel;
};

extern CDebugConVarView *g_1070b9cc;
extern void (*g_109f3650)(int level, const char *pMsg, ...);
void sub_10142e90(const Vector *pStart, const Vector *pEnd, int r, int g, int b, int c, float flDuration);
void sub_10143b70(const Vector *pOrigin, const Vector *pA, const Vector *pB, int r, int g, int b, int c, float flDuration);
void sub_101cf210(CGameTrace *pTrace);
void sub_101c2c30();
void sub_101c2c60();

inline bool IsSolidInline(CBaseEntity *p)
{
	ScopeTrace scope("CBaseEntity::IsSolid", p->m_name26c ? p->m_name26c : g_106b8540);
	return p->m_n2b0 && !(p->m_b2b4 & 4);
}

// TARGET: CGameRules::vfunc33
void CGameRules::vfunc33(void *pInfo, void *pVecSrc, float flRadius, int iClassIgnore, int bIgnoreWorld)
{
	const DmgInfoView &info = *(const DmgInfoView *)pInfo;
	const Vector &vecSrc = *(const Vector *)pVecSrc;
	CBaseEntity *pEntity = 0;
	CTraceFilterWorldOnly filter;
	CGameTrace tr;
	float flAdjustedDamage, falloff;
	Vector vecSpot;

	if (flRadius)
		falloff = info.GetDamage() / flRadius;
	else
		falloff = 1.0f;

	int bInWater = (bool)(g_1070b254->vfunc0(&vecSrc.x, 0) & 0x4030);

	int nTraceLines = 0;
	CUnknown101cccf0 sphere;
	for (sphere.sub_101cccf0((int)&vecSrc.x, *(int *)&flRadius, 0, 0); (pEntity = sphere.sub_101ccd40()) != 0; sphere.m_nIndex++)
	{
		if (pEntity->m_nTakeDamage == 0)
			continue;
		if (!IsSolidInline(pEntity))
			continue;
		if (pEntity->sub_100b3700() & iClassIgnore)
			continue;

		if (bInWater && ((CEntityWaterView *)pEntity)->m_nWaterLevel == 0)
			continue;
		if (!bInWater && ((CEntityWaterView *)pEntity)->m_nWaterLevel == 3)
			continue;

		Vector tmp;
		vecSpot = *(Vector *)((CEntityVSlots *)pEntity)->slot197((int)&tmp, (int)&vecSrc, 1, 0);

		if (!*(unsigned char *)&bIgnoreWorld)
		{
			nTraceLines++;
			UTIL_TraceLine_Calls(vecSrc, vecSpot, 1, &filter, &tr);
		}
		else
		{
			sub_101cf210(&tr);
			tr.m_fraction = 1.0f;
			tr.m_pEnt = pEntity;
			*(Vector *)&tr.m_endpos[0] = vecSpot;
		}

		if (tr.m_fraction != 1.0 && tr.m_pEnt != pEntity)
		{
			if (!g_1070b9cc->vfunc1() && g_1070b9cc->m_n2c)
				sub_10142e90(&vecSrc, &vecSpot, 0xff, 0, 0, 1, 5.0f);
			continue;
		}

		if (tr.m_startsolid)
		{
			*(Vector *)&tr.m_endpos[0] = vecSrc;
			tr.m_fraction = 0.0f;
		}

		flAdjustedDamage = (vecSrc - *(Vector *)&tr.m_endpos[0]).Length() * falloff;
		flAdjustedDamage = info.GetDamage() - flAdjustedDamage;
		if (flAdjustedDamage < 1.0f)
			flAdjustedDamage = 1.0f;

		DmgInfoView adjustedInfo = info;
		adjustedInfo.m_flDamage = flAdjustedDamage;
		sub_101c2c30();

		Vector dir = *(Vector *)&tr.m_endpos[0] - vecSrc;
		VectorNormalize(dir);

		CVDmg_t dmg;
		dmg.sub_101fa8d0(1, info.m_pDmg ? (info.m_pDmg->m_field10 | info.m_nFlags38) : info.m_nFlags38, (int)flAdjustedDamage);
		adjustedInfo.m_pDmg = &dmg;
		pEntity->sub_100a7d00((int)&adjustedInfo, (int)&dir, (int)&tr);
		sub_101c2c60();
		dmg.sub_101fa680();

		if (!g_1070b9cc->vfunc1() && g_1070b9cc->m_n2c)
		{
			g_109f3650(1, "RadiusDamage() applied %.1f damage to %s\n", (double)flAdjustedDamage, pEntity->sub_100ab4f0());
			sub_10142e90(&vecSrc, &vecSpot, 0, 0xff, 0, 1, 5.0f);
			sub_10143b70((const Vector *)&tr.m_endpos[0], &Vector(5.0f, 5.0f, 5.0f), &Vector(-5.0f, -5.0f, -5.0f), 0xff, 0, 0, 1, 5.0f);
		}
	}

	g_109f3650(1, "RadiusDamage() ran %d trace lines\n", nTraceLines);
}
// END FUNCTION

// FUNCTION: 0x10128f10 size=0x2e
#include "CGameRules.h"
#include "CBaseEntity.h"
#include "CVoiceGameMgr.h"
int __cdecl sub_10232400();
bool CGameRules::vfunc41(const char *pcmd, CBaseEntity *pPlayer)
{
	if (pPlayer->m_pA8 && ((CVoiceGameMgr *)sub_10232400())->sub_102325e0(pPlayer, pcmd))
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10128f50 size=0x1b
#include "globalvars.h"

struct CUnk10232540
{
    void sub_10232540(double d);
};
void *sub_10232400();

// TARGET: sub_10128f50
void sub_10128f50()
{
    ((CUnk10232540 *)sub_10232400())->sub_10232540(gpGlobals->frametime);
}
// END FUNCTION

// FUNCTION: 0x10128f80 size=0xb
#include "CGameRules.h"
struct CIface10128f80 { virtual char f0(void *pPassEnt, int collisionGroup); };
int sub_1042df50();
// TARGET: CGameRules::vfunc77
char CGameRules::vfunc77(void *pPassEnt, int collisionGroup) { return ((CIface10128f80 *)sub_1042df50())->f0(pPassEnt, collisionGroup); }
// END FUNCTION

// FUNCTION: 0x10128fa0 size=0x1c8
#include "CBaseEntity.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameRules.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"

extern CUnknown1070b254 *g_1070b254;
extern CUnknown10738964 *g_10738964;
void sub_10146570(const float *pStart, const float *pEnd, int r, int g, int b, int bNoDepthTest, float flDuration);

float CGameRules::vfunc76(const Vector &vecStart, const Vector &vecEnd, const Vector &vecMins, const Vector &vecMaxs, unsigned int fMask, CBaseEntity *pPassEnt, int collisionGroup, int unused, CGameTrace *pTrace)
{
	Ray_t ray;
	ray.Init(vecStart, vecEnd, vecMins, vecMaxs);
	CTraceFilterSimple filter(pPassEnt, collisionGroup);
	g_1070b254->vfunc4(&ray, fMask, (CTraceFilterNoCharacterCollide *)&filter, pTrace);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570(pTrace->m_startpos, pTrace->m_endpos, 255, 255, 0, 1, -1.0f);
	return 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101291f0 size=0x35
#include "CGameRules.h"
#include "CVoiceGameMgr.h"
#include "globalvars.h"

extern int g_10627728;
CVoiceGameMgr *sub_10232400();
void sub_101c2c30();

// TARGET: ??0CGameRules@@QAE@XZ
CGameRules::CGameRules()
{
    *(int *)((char *)this + 4) = 0;
    sub_10232400()->sub_102324a0((void *)g_10627728, gpGlobals->maxClients);
    sub_101c2c30();
}
// END FUNCTION

// FUNCTION: 0x10129240 size=0x3
#include "CGameRules.h"
int CGameRules::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129260 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x10129280 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc3(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101292a0 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc4(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101292c0 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc5(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x101292e0 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc6(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x10129300 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc7(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10129320 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc8(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10129340 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc9(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10129360 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc10(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10129380 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc11()
{
}
// END FUNCTION

// FUNCTION: 0x101293a0 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc12()
{
}
// END FUNCTION

// FUNCTION: 0x101293c0 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc13()
{
}
// END FUNCTION

// FUNCTION: 0x101293e0 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc14()
{
}
// END FUNCTION

// FUNCTION: 0x10129400 size=0x3
#include "CGameRules.h"
bool CGameRules::vfunc23()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129420 size=0x6
#include "CGameRules.h"
namespace lifted {
extern char g_10572c30;
}
int CGameRules::vfunc25()
{
    return (int)&lifted::g_10572c30;
}
// END FUNCTION

// FUNCTION: 0x10129440 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc29(void * a0)
{
}
// END FUNCTION

// FUNCTION: 0x10129460 size=0x5
#include "CGameRules.h"
bool CGameRules::vfunc31(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10129480 size=0x5
#include "CGameRules.h"
bool CGameRules::vfunc32(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101294a0 size=0x5
#include "CGameRules.h"
bool CGameRules::vfunc34(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101294c0 size=0x3
#include "CGameRules.h"
bool CGameRules::vfunc40()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101294e0 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc42(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10129500 size=0x5
#include "CGameRules.h"
int CGameRules::vfunc46(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129520 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc57()
{
}
// END FUNCTION

// FUNCTION: 0x10129540 size=0x5
#include "CGameRules.h"
int CGameRules::vfunc58(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129560 size=0x7
#include "CGameRules.h"
namespace lifted {
extern float g_104454c4;
}
float CGameRules::vfunc60()
{
    return lifted::g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x10129580 size=0x6
#include "CGameRules.h"
int CGameRules::vfunc66(int a0)
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x101295a0 size=0x8
#include "CGameRules.h"

const char *CGameRules::vfunc67(int)
{
	return "";
}
// END FUNCTION

// FUNCTION: 0x101295c0 size=0x5
#include "CGameRules.h"
bool CGameRules::vfunc68(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101295e0 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc69(int a0, int a1, int a2, int a3)
{
}
// END FUNCTION

// FUNCTION: 0x10129600 size=0x8
#include "CGameRules.h"
extern char g_106b8540[];

// TARGET: CGameRules::vfunc70
const char *CGameRules::vfunc70(int index)
{
	return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x10129620 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc71(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10129640 size=0x3
#include "CGameRules.h"
bool CGameRules::vfunc72()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10129660 size=0x5
#include "CBaseEntity.h"
#include "CGameRules.h"
bool CGameRules::vfunc73(CBaseEntity * a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10129680 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc75()
{
}
// END FUNCTION

// FUNCTION: 0x101296a0 size=0x1e
#include "CGameRules.h"

// TARGET: CGameRules::vfunc0
CGameRules *CGameRules::vfunc0(unsigned int flags)
{
	sub_1000d189();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101296d0 size=0x20
#include "vampire.h"
extern char g_104629f4;
void __fastcall sub_10427970(void *p);
void sub_10430964(void *p);
struct CUnk101296d0
{
    char m_pad0000[4];
    void *m_pObj;  // 0x04
    void sub_101296d0();
};
// TARGET: CUnk101296d0::sub_101296d0
void CUnk101296d0::sub_101296d0()
{
    void *p = m_pObj;
    *(void **)this = &g_104629f4;
    if (p != 0) {
        sub_10427970(p);
        sub_10430964(p);
    }
}
// END FUNCTION

// FUNCTION: 0x10129700 size=0x2a
#include "CGameRules.h"

void sub_10009863(int a, int b, int c, int d, int e);

// TARGET: CGameRules::vfunc78
float CGameRules::vfunc78(int a, int b, int c, int d, int e)
{
	sub_10009863(a, b, c, d, e);
	return 1.0f;
}
// END FUNCTION
