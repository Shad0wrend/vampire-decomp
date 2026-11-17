// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10053e20 size=0x127
#include "CBaseEntity.h"
#include "CLogicAuto.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
struct ShakyFields {
    char pad[0x1044];
    int m_nStamp;
    float m_flTime;
    int m_n104c;
    float m_flAmount;
};
void __fastcall sub_10053e20(CBaseEntity *self, int unused, float flDelay, float flAmount, int stamp)
{
    ScopeTrace trace("CBaseCombatCharacter::SetShakyHands", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
    ShakyFields *p = (ShakyFields *)self;
    if (stamp >= p->m_nStamp) {
        p->m_nStamp = stamp;
        p->m_flTime = flDelay + gpGlobals->curtime;
        p->m_flAmount = flAmount > 1.0f ? 1.0f : (flAmount < 0.0f ? 0.0f : flAmount);
    } else if (stamp == -1) {
        p->m_nStamp = -1;
        p->m_flTime = 0.0f;
        p->m_flAmount = 0.0f;
        p->m_n104c = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10053fa0 size=0x8f
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern float g_104454c4;

struct CScopeGuard {
	CScopeGuard(const char *func, const char *name)
	{
		g_109f3620[*g_109f3680].a = func;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~CScopeGuard() { (*g_109f3680)--; }
};

float CBaseCombatCharacter::vfunc344()
{
	CScopeGuard guard("CBaseCombatCharacter::GetShakyHandsIntensity", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	if (*(int *)((char *)this + 0x1044) > -1)
		return *(float *)((char *)this + 0x1050);
	return g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x10054060 size=0x1fd
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

struct ShakyHandsParam_t
{
	float m_flRandom[2];
	float m_flPeriod;
	float m_flApproachSpeed;
};
extern const ShakyHandsParam_t g_1053e3b8[3];

float sub_1013d450(float target, float value, float speed);
float sub_1013d650(float angle);

void CBaseCombatCharacter::vfunc314(float flDeltaTime)
{
	ScopeTrace trace("CBaseCombatCharacter::UpdatePoseParameters",
		this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (m_flShakyEnd1048 > gpGlobals->curtime)
	{
		if (g_1053e3b8[m_nShakyIndex1044].m_flPeriod + m_flShakyTime104c < gpGlobals->curtime)
		{
			for (int i = 0; i < 2; i++)
			{
				m_flShakyOffset1054[i] = enginerandom->vfunc1(-g_1053e3b8[m_nShakyIndex1044].m_flRandom[i], g_1053e3b8[m_nShakyIndex1044].m_flRandom[i]);
			}
			m_flShakyTime104c = gpGlobals->curtime;
		}
		flDeltaTime *= g_1053e3b8[m_nShakyIndex1044].m_flApproachSpeed;
		int nSame = 0;
		for (int i = 0; i < 2; i++)
		{
			float flTarget = m_flShakyOffset1054[i] * m_flShakyIntensity1050 + m_flPoseValue[i];
			if (flTarget != m_flPoseCurrent105c[i])
				m_flPoseCurrent105c[i] = sub_1013d650(sub_1013d450(flTarget, m_flPoseCurrent105c[i], flDeltaTime));
			else
				nSame++;
		}
		if (nSame == 2)
			m_flShakyTime104c = 0;
	}
	else
	{
		flDeltaTime *= 180.0f;
		m_flShakyTime104c = 0;
		m_nShakyIndex1044 = -1;
		for (int i = 0; i < 2; i++)
		{
			if (m_flPoseValue[i] != m_flPoseCurrent105c[i])
				m_flPoseCurrent105c[i] = sub_1013d650(sub_1013d450(m_flPoseValue[i], m_flPoseCurrent105c[i], flDeltaTime));
		}
	}

	for (int i = 0; i < 2; i++)
		sub_10091fe0(m_nPoseIndex[i], m_flPoseCurrent105c[i]);
}
// END FUNCTION

// FUNCTION: 0x10105f30 size=0xd5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBaseFlex.h"
#include "ScopeTrace.h"

void CBaseCombatCharacter::vfunc284()
{
	ScopeTrace trace("CBaseCombatCharacter::AddSceneExpressions", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int nItems = *(int *)((char *)this + 0xa64);
	for (int i = 0; i < nItems; i++) {
		CBaseFlexItem *pItem = (CBaseFlexItem *)(*(char **)((char *)this + 0xa58) + i * 0x1c);
		CBaseFlexItemObject *pObject = pItem->m_pObject;
		if (pObject->sub_100029c8() == 10 && pObject->sub_1000695b())
			vfunc289(pItem);
		pItem->m_b08 = 1;
		nItems = *(int *)((char *)this + 0xa64);
	}
}
// END FUNCTION

// FUNCTION: 0x10107120 size=0x134
#include "CBaseCombatCharacter.h"

struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern void (*g_109f3890)(char *, const char *, int);
extern void (*g_109f364c)(const char *, ...);

bool CBaseCombatCharacter::vfunc347(int event, char *pszName, float *pA, float *pB, float *pC, float *pD)
{
    const char *pszEnt;
    if (this) {
        pszEnt = m_name26c;
        if (!pszEnt)
            pszEnt = g_106b8540;
    } else {
        pszEnt = "NULL ENTITY";
    }
    g_109f3620[*g_109f3680].m_pszName = "CBaseCombatCharacter::GetExpressionEventParams";
    g_109f3620[*g_109f3680].m_pszEnt = pszEnt;
    g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
    (*g_109f3680)++;
    if (event >= 0 && event < 2) {
        switch (event) {
        case 0:
            g_109f3890(pszName, "Knockback", 64);
            *pA = 1.0f;
            *pB = 0.1f;
            *pC = 1.0f;
            *pD = 0.2f;
            (*g_109f3680)--;
            return true;
        case 1:
            g_109f3890(pszName, "Knockback", 64);
            *pA = 1.0f;
            *pB = 0.25f;
            *pC = 2.0f;
            *pD = 0.5f;
            (*g_109f3680)--;
            return true;
        default:
            g_109f364c("Unhandled Expression Event: %s!!\n", event);
            break;
        }
    }
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1014f6f0 size=0x3
// TARGET: sub_1014f6f0
int __cdecl sub_1014f6f0() { return 0; }
// END FUNCTION

// FUNCTION: 0x1014f710 size=0x3
// TARGET: sub_1014f710
void __stdcall sub_1014f710(void *a, void *b, void *c) {}
// END FUNCTION

// FUNCTION: 0x1014f730 size=0x5
// TARGET: sub_1014f730
bool __stdcall sub_1014f730(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1014f750 size=0x5
// TARGET: sub_1014f750
bool __stdcall sub_1014f750(int a, int b, int c)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1014f770 size=0x5
// TARGET: sub_1014f770
bool __stdcall sub_1014f770(int a, int b, int c)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1014f790 size=0x5
// TARGET: sub_1014f790
bool __stdcall sub_1014f790(int a, int b)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1014f7b0 size=0x5
// TARGET: sub_1014f7b0
bool __stdcall sub_1014f7b0(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1014f7d0 size=0x3
// TARGET: sub_1014f7d0
void __stdcall sub_1014f7d0(void *p) {}
// END FUNCTION

// FUNCTION: 0x1014f7f0 size=0x3
// TARGET: sub_1014f7f0
bool __cdecl sub_1014f7f0() { return true; }
// END FUNCTION

// FUNCTION: 0x1014f810 size=0x3
// TARGET: sub_1014f810
bool __cdecl sub_1014f810() { return true; }
// END FUNCTION

// FUNCTION: 0x1014f830 size=0x3
// TARGET: sub_1014f830
bool __cdecl sub_1014f830() { return false; }
// END FUNCTION

// FUNCTION: 0x1014f850 size=0x3
// TARGET: sub_1014f850
bool __cdecl sub_1014f850() { return false; }
// END FUNCTION

// FUNCTION: 0x1014f870 size=0x3
// TARGET: sub_1014f870
void __stdcall sub_1014f870(void *a, void *b) {}
// END FUNCTION

// FUNCTION: 0x1014f890 size=0x3
// TARGET: sub_1014f890
void __stdcall sub_1014f890(void *p) {}
// END FUNCTION

// FUNCTION: 0x1014f8b0 size=0x6
#include "CBaseCombatCharacter.h"
extern int g_1072b360;

int CBaseCombatCharacter::vfunc240()
{
	return g_1072b360;
}
// END FUNCTION

// FUNCTION: 0x1014f8d0 size=0x1
// TARGET: sub_1014f8d0
void __fastcall sub_1014f8d0(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1014f8f0 size=0x1
// TARGET: sub_1014f8f0
void __fastcall sub_1014f8f0(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1014f910 size=0x6
#include "CBaseCombatCharacter.h"
int CBaseCombatCharacter::vfunc359(int a)
{
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1014f930 size=0x3
#include "CBaseCombatCharacter.h"
// TARGET: CBaseCombatCharacter::vfunc360
char CBaseCombatCharacter::vfunc360() { return 0; }
// END FUNCTION

// FUNCTION: 0x1014f950 size=0x3
// TARGET: sub_1014f950
bool __cdecl sub_1014f950() { return false; }
// END FUNCTION

// FUNCTION: 0x1014f970 size=0x14
#include "CBaseCombatCharacter.h"

#define VT(n) virtual void vt##n();
#define VT10(p) VT(p##0) VT(p##1) VT(p##2) VT(p##3) VT(p##4) VT(p##5) VT(p##6) VT(p##7) VT(p##8) VT(p##9)

struct CBaseCombatCharacterVtbl
{
	VT10(0) VT10(1) VT10(2) VT10(3) VT10(4) VT10(5) VT10(6) VT10(7) VT10(8) VT10(9)
	VT10(10) VT10(11) VT10(12) VT10(13) VT10(14) VT10(15) VT10(16) VT10(17) VT10(18) VT10(19)
	VT10(20) VT10(21) VT10(22) VT10(23) VT10(24) VT10(25) VT10(26) VT10(27) VT10(28) VT10(29)
	VT10(30) VT10(31) VT10(32) VT10(33) VT10(34) VT10(35) VT10(36)
	virtual void vt370(int a);
};

int CBaseCombatCharacter::vfunc372(int a)
{
	((CBaseCombatCharacterVtbl *)this)->vt370(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1014f9a0 size=0x14
#include "CBaseCombatCharacter.h"

#define CVS(n) virtual void s##n();
#define CVS10(p) CVS(p##0) CVS(p##1) CVS(p##2) CVS(p##3) CVS(p##4) CVS(p##5) CVS(p##6) CVS(p##7) CVS(p##8) CVS(p##9)

struct CCBCSlots371
{
	CVS10(0) CVS10(1) CVS10(2) CVS10(3) CVS10(4) CVS10(5) CVS10(6) CVS10(7) CVS10(8) CVS10(9)
	CVS10(10) CVS10(11) CVS10(12) CVS10(13) CVS10(14) CVS10(15) CVS10(16) CVS10(17) CVS10(18) CVS10(19)
	CVS10(20) CVS10(21) CVS10(22) CVS10(23) CVS10(24) CVS10(25) CVS10(26) CVS10(27) CVS10(28) CVS10(29)
	CVS10(30) CVS10(31) CVS10(32) CVS10(33) CVS10(34) CVS10(35) CVS10(36)
	CVS(370)
	virtual void s371(int a);
};

int CBaseCombatCharacter::vfunc373(int a)
{
	((CCBCSlots371 *)this)->s371(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1014f9d0 size=0x5
// TARGET: sub_1014f9d0
bool __stdcall sub_1014f9d0(int a, int b)
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x1014f9f0 size=0x5
// TARGET: sub_1014f9f0
bool __stdcall sub_1014f9f0(int a, int b)
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x1014fa10 size=0x7
#include "CBaseCombatCharacter.h"

int CBaseCombatCharacter::vfunc145()
{
	struct BloodColorView { char pad[0x1570]; int m_color; };
	return ((BloodColorView *)this)->m_color;
}
// END FUNCTION

// FUNCTION: 0x1014fa30 size=0x3
// TARGET: sub_1014fa30
bool __cdecl sub_1014fa30() { return false; }
// END FUNCTION

// FUNCTION: 0x1014fa50 size=0x3
// TARGET: sub_1014fa50
bool __cdecl sub_1014fa50() { return false; }
// END FUNCTION

// FUNCTION: 0x1015dc20 size=0x5
#include "CBaseCombatCharacter.h"
bool CBaseCombatCharacter::vfunc72(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1031a5a0 size=0x6
#include "CBaseCombatCharacter.h"
#include "datamap.h"
namespace lifted {
extern char g_1061664c;
}
datamap_t * CBaseCombatCharacter::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1061664c);
}
// END FUNCTION

// FUNCTION: 0x10321670 size=0x6
#include "CBaseCombatCharacter.h"
namespace lifted {
extern char g_10619d10;
}
int CBaseCombatCharacter::vfunc79()
{
    return (int)&lifted::g_10619d10;
}
// END FUNCTION

// FUNCTION: 0x10321960 size=0x6
#include "CBaseCombatCharacter.h"
namespace lifted {
extern char g_10936d54;
}
int CBaseCombatCharacter::vfunc80()
{
    return (int)&lifted::g_10936d54;
}
// END FUNCTION

// FUNCTION: 0x10321980 size=0x3
#include "CBaseCombatCharacter.h"
int CBaseCombatCharacter::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103222c0 size=0x423
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Vector.h"
// TARGET: CBaseCombatCharacter::vfunc31
#include "ScopeTrace.h"
extern int g_10937ccc;
#define I(off) (*(int *)((char *)this + off))
#define B(off) (*(unsigned char *)((char *)this + off))
#define S(s) ((int)(s))
void CBaseCombatCharacter::vfunc31(int pFile)
{
	ScopeTrace trace("CBaseCombatCharacter::Dump", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_1009b980(pFile, "m_lastInteraction", g_10937ccc);
	sub_1009c2d0(pFile, "m_Activity", m_Activity);
	sub_1009c2d0(pFile, "m_IdealActivity", m_IdealActivity);
	sub_1009c2d0(pFile, "m_TranslatedActivity", m_TranslatedActivity);
	sub_1009ba60(pFile, "m_flNextAttack", I(0x1564));
	sub_1009b980(pFile, "m_LastHitGroup", I(0x1594));
	sub_1009b980(pFile, "m_bloodColor", I(0x1570));
	sub_1009b980(pFile, "m_eHull", I(0x1568));
	sub_1009ba60(pFile, "m_impactEnergyScale", I(0xdc));
	sub_1009bc30(pFile, "m_Relationship", I(0x1598));
	sub_1009b980(pFile, "m_nMaxRelationships", I(0x159c));
	sub_1009b980(pFile, "m_nNumRelationships", I(0x15a0));
	sub_1009b700(pFile, S("m_RelationshipString"), (const char *)I(0x1584));
	sub_1009ba60(pFile, "m_flFieldOfView", I(0x1574));
	sub_1009be00(pFile, "m_HackedGunPos", *(Vector *)&I(0x1578));
	sub_1009c850(pFile, "m_hMyWeapons", (const unsigned int *)&I(0x1624), 0xe0);
	sub_1009c000(pFile, "m_hLastWeapon", m_hEa4);
	sub_1009c000(pFile, "m_hLastMeleeWeapon", m_hEa8);
	sub_1009c000(pFile, "m_hActiveIArmor", m_hActiveIArmor);
	sub_1009c000(pFile, "m_hLastIArmor", m_hLastIArmor);
	sub_1009c390(pFile, "m_iAmmo", &I(0x15a4), 0x20);
	sub_1009b700(pFile, S("m_statTemplate"), (const char *)I(0x10e4));
	sub_1009b980(pFile, "m_iVHistoryID", I(0x13a0));
	sub_1009b980(pFile, "m_iUpdateFlags", I(0x13a4));
	sub_1009b980(pFile, "m_iGender", I(0x13cc));
	sub_1009b980(pFile, "m_iCurVReaction", I(0x1468));
	sub_1009b980(pFile, "m_iCurFrenzyCount", I(0x146c));
	sub_1009b8a0(pFile, S("m_bFrenzyHunger"), B(0x1474));
	sub_1009b8a0(pFile, S("m_bCantBreakGrapple"), B(0x1475));
	sub_1009b8a0(pFile, S("m_bIsFrenzyGrapple"), B(0x1476));
	sub_1009ba60(pFile, "m_flBreakGrappleTimer", I(0x1478));
	sub_1009ba60(pFile, "m_flGrappleDamageTimer", I(0x147c));
	sub_1009b980(pFile, "m_nMotionTrail", I(0x1484));
	sub_1009ba60(pFile, "m_flSpeedScale", I(0x1488));
	sub_1009ba60(pFile, "m_flJumpStartTime", I(0x148c));
	sub_1009ba60(pFile, "m_flNextFeedPulse", I(0x1490));
	sub_1009ba60(pFile, "m_flNextFeedDuration", I(0x1494));
	sub_1009ba60(pFile, "m_flFeedStartTime", I(0x1498));
	sub_1009c4c0(pFile, "m_clientAuraCount", m_clientAuraCount, 0x20);
	sub_1009c000(pFile, "m_GrapplePartner", m_hTarget1538);
	sub_1009b980(pFile, "m_GrappleRole", I(0x153c));
	sub_1009b980(pFile, "m_GrapplePosition", I(0x1544));
	sub_1009b980(pFile, "m_GrappleType", I(0x1540));
	sub_1009b980(pFile, "m_GrappleSavedMoveType", I(0x1534));
	sub_10001483(pFile);
}
// END FUNCTION

// FUNCTION: 0x103229d0 size=0x11b
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include <math.h>
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern "C" __declspec(dllimport) int __cdecl RandomInt(int minVal, int maxVal);
extern "C" __declspec(dllimport) float __cdecl RandomFloat(float minVal, float maxVal);
extern float g_104454c4;
extern float g_10446758;

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CBCCSlotsView
{
	SV10(a0) SV10(a1) SV10(a2) SV10(a3) SV10(a4) SV10(a5) SV10(a6) SV10(a7) SV10(a8) SV10(a9)
	SV10(b0) SV10(b1) SV10(b2) SV10(b3) SV10(b4) SV10(b5) SV10(b6) SV10(b7) SV10(b8) SV10(b9)
	SV10(c0)
	virtual void u210(); virtual void u211(); virtual void u212(); virtual void u213(); virtual void u214();
	virtual void u215(); virtual void u216(); virtual void u217(); virtual void u218();
	virtual const QAngle &vfunc219();
	SV10(d0) SV10(d1) SV10(d2) SV10(d3)
	virtual void u260(); virtual void u261(); virtual void u262(); virtual void u263(); virtual void u264();
	virtual void vfunc265(int act, float a, float b, const char *pszName, float value);
};

void CBaseCombatCharacter::vfunc292(int unused1, const Vector *pDirection, int unused2)
{
	ScopeTrace trace("CBaseCombatCharacter::DamageFlinch", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	int iActivity = RandomInt(0, 1) ? 0x73 : 0x74;
	float flYaw = 0;
	if (pDirection->x > g_104454c4 || pDirection->y > g_104454c4)
	{
		flYaw = (double)((CBCCSlotsView *)this)->vfunc219().y - (float)atan2(pDirection->y, pDirection->x) * g_10446758;
	}
	flYaw = RandomFloat(-30.0f, 30.0f) + flYaw;
	((CBCCSlotsView *)this)->vfunc265(iActivity, 0.1f, 0.3f, "hit_yaw", flYaw);
}
// END FUNCTION

// FUNCTION: 0x10322b40 size=0x567
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBaseCombatCharacter.h"
#include "CVStatList_t.h"
#include "ScopeTrace.h"
#include "CUnknown101e0f00.h"
#include "CUnknown101e3af0.h"
#include "CEntityVSlots.h"
#include "CBCCSlotViews.h"
#include "utlvector.h"
#include "ehandle.h"
#include "globalvars.h"
#include "engineiface.h"
#include "Tier1.h"

struct CNamedList1006cf30
{
	int sub_1006cf30(const char *pszName);
};

struct SCurve6caa0
{
	float sub_1006caa0(int level);
	int sub_1006cb60(int index);
};

struct StatOwner
{
	SCurve6caa0 *sub_1006cff0(int id);
};

extern CNamedList1006cf30 g_106c7c34;
extern CUnknown101e0f00 g_10739a4c;
extern CUtlVector<EHANDLE> g_109370bc;
extern float g_104454c4;

struct CBCCView
{
	char m_pad[0x10b0];
	short m_team;
	bool sub_10323930(CBCCView *pOther);
};

struct CC169View
{
	VIEW_SLOT100(0)
	VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13) VIEW_SLOT10(14) VIEW_SLOT10(15)
	VIEW_SLOT(160) VIEW_SLOT(161) VIEW_SLOT(162) VIEW_SLOT(163) VIEW_SLOT(164) VIEW_SLOT(165) VIEW_SLOT(166) VIEW_SLOT(167) VIEW_SLOT(168)
	virtual void vfunc169(Vector *pVelocity);
};

struct CC343View
{
	VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2)
	VIEW_SLOT10(30) VIEW_SLOT10(31) VIEW_SLOT10(32) VIEW_SLOT10(33)
	VIEW_SLOT(340) VIEW_SLOT(341) VIEW_SLOT(342)
	virtual void vfunc343(float flDuration, float flIntensity, int nIndex);
};

void sub_101cdba0(const Vector *pOrigin, float a, float b, float c, float d, int e, bool f);

extern CVStatList_t g_109f0b40;
void __cdecl sub_10012a8a();
extern "C" int __cdecl atexit(void (__cdecl *)(void));
inline CVStatList_t *FindA(CVStatListSet *pSet, int type)
{
	for (int i = 0; i < pSet->m_nLists; i++) {
		if (pSet->m_pLists[i]->m_field10 == type)
			return pSet->m_pLists[i];
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		g_109f0b40.CVStatList_t::CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}
struct EHVecView { EHANDLE *m_pMemory; int m_nAlloc; int m_nGrow; int m_Size; };
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
inline float LengthZXY(const Vector &v)
{
	return FastSqrt(v.y * v.y + (v[2] * v.z + v.x * v.x));
}

// TARGET: CBaseCombatCharacter::vfunc313
void CBaseCombatCharacter::vfunc313()
{
	ScopeTrace scope("CBaseCombatCharacter::UpdatePresenceEffect",
		this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (gpGlobals->curtime < m_flNextPresenceCheckTime)
		return;

	m_flNextPresenceCheckTime = enginerandom->vfunc1(0.2f, 0.4f) + gpGlobals->curtime;

	if (g_109370bc.Count() <= 0)
	{
		((CUnknown101e3af0 *)&g_10739a4c)->sub_101e3ff0(this);
		m_iFriendPresenceEffect = 0;
		m_iEnemyPresenceEffect = 0;
		m_flEnemeyPresencePercent = 0;
		return;
	} else { SCurve6caa0 *pRadiusCurve = ((StatOwner *)&g_106c7c34)->sub_1006cff0(g_106c7c34.sub_1006cf30("Presence_Effect_Radius"));

	int iFriend = 0;
	int iEnemy; iEnemy = 0;
	float flPercent = 0.0f;
	float flBestEffect; flBestEffect = 0.0f;

	for (long i = 0; i < g_109370bc.Count(); )
	{
		CBaseEntity *p = g_109370bc[i].Get();
		if (!p)
		{
			int nMove = ((EHVecView *)&g_109370bc)->m_Size - i - 1;
			if (nMove > 0) memmove(&g_109370bc[i], &(*(EHANDLE * volatile *)&g_109370bc)[i + 1], nMove * sizeof(EHANDLE));
			--((EHVecView *)&g_109370bc)->m_Size;
			continue;
		}

		int statValue; statValue = FindA(CVStatListSet::Of(p), 3)->sub_102012d0(10);

		if (p != this && p != this->vfunc97())
		{
			if (statValue > 0)
			{
				g_10739a4c.sub_101e34c0(p, this, 10, statValue - 1);

				float flRadius = pRadiusCurve->sub_1006caa0(pcd_stage(statValue));

				Vector *pOtherOrigin = pcd_stage(((CEntityVSlots *)p)->slot220());
				Vector *pThisOrigin = ((CEntityVSlots *)this)->slot220();
				float flDist = LengthZXY(*pThisOrigin - *pOtherOrigin);

				if (flDist <= flRadius)
				{
					float flEffect = (((flRadius - flDist))) / flRadius;
					if (flEffect > flBestEffect)
						flBestEffect = flEffect;

					int nRelation = ((CEntityVSlots *)p)->slot404(this);
					if (!(((CBCCView *)this)->sub_10323930(pcd_stage((CBCCView *)p)) || nRelation == 3)) {
						if (flEffect > flPercent)
							flPercent = flEffect;
						if (pcd_stage(statValue) > iEnemy)
							iEnemy = statValue;
					} else {
						SCurve6caa0 *pCombatRanges = ((StatOwner *)&g_106c7c34)->sub_1006cff0(g_106c7c34.sub_1006cf30("Presence_Combat_Ranges"));
						float flRange = flRadius / pCombatRanges->sub_1006caa0(0);
						int nDist; nDist = (int)flDist;
						float flCombat;
						if ((char)nDist == -1) flCombat = nDist / flRange; else flCombat = pcd_stage(nDist) / pcd_stage(flRange);
						if (1.0f > flCombat)
							flCombat = 1.0f;
						int nCombat = (int)flCombat;
						if (nCombat > iFriend)
							iFriend = nCombat;
					}
				}
			}
			else
			{
				g_109f364c("CombatCharacter in presence list that has no active presence: %s.\n", p->sub_100ab4f0());
			}
			i++;
		}
		else
			i++;
	}

	m_iFriendPresenceEffect = iFriend;
	if (iFriend > 0)
	{
		SCurve6caa0 *pBenefit = pcd_stage(((StatOwner *)&g_106c7c34)->sub_1006cff0(g_106c7c34.sub_1006cf30("Presence_Combat_Benefit")));
		m_iFriendPresenceEffect = pBenefit->sub_1006cb60(m_iFriendPresenceEffect);
	}

	m_flEnemeyPresencePercent = flPercent;
	if (flPercent > 0.0f)
	{
		if (!m_hTarget1538.Get() || m_nTarget153c == -1)
		{
			SCurve6caa0 *pScalar = ((StatOwner *)&g_106c7c34)->sub_1006cff0(g_106c7c34.sub_1006cf30("Presence_Jitter_Scalar"));
			float flScalar = pScalar->sub_1006caa0(0) * m_flEnemeyPresencePercent;

			SCurve6caa0 *pSpeed = ((StatOwner *)&g_106c7c34)->sub_1006cff0(g_106c7c34.sub_1006cf30("Presence_Jitter_Speed"));
			float flSpeed = m_flEnemeyPresencePercent * pSpeed->sub_1006caa0(0);

			sub_101cdba0(&((CEntityVSlots *)this)->slot192(), flScalar, flSpeed, 1.0, 1.0f, 0, true);

			(pcd_stage((StatOwner *)&g_106c7c34))->sub_1006cff0(g_106c7c34.sub_1006cf30("Presence_Jitter_Hand"));
			flScalar = (m_flEnemeyPresencePercent * pSpeed->sub_1006caa0(0)) * 0.1;

			((CC343View *)this)->vfunc343(0.4f, m_flEnemeyPresencePercent, 0);

			float flRand1; flRand1 = pcd_stage(enginerandom->vfunc1(-flScalar, flScalar));
			Vector vecJitter(enginerandom->vfunc1(-flScalar, flScalar), flRand1, 0.0f);
			((CC169View *)this)->vfunc169(&vecJitter);

			m_iEnemyPresenceEffect = iEnemy;
		}
	} }
}
// END FUNCTION

// FUNCTION: 0x10323a90 size=0x96
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc103()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Spawn";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    const char *p = *(const char **)((char *)this + 0x10ac);
    if (!p) p = g_106b8540;
    if (*p)
        sub_103239a0(p);
    ((CBaseAnimating *)this)->CBaseAnimating::vfunc103();
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10323b60 size=0x84
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"

// TARGET: CBaseCombatCharacter::vfunc130
void CBaseCombatCharacter::vfunc130(int a)
{
	sub_1008df10(a);
	if (CVStatListSet::Of(this)->Find(3)->sub_10010609(10) > 0)
		sub_10323370();
}
// END FUNCTION

// FUNCTION: 0x10323c20 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_10323c20(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetMaxInvenSlotsPerSection";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x20;
}
// END FUNCTION

// FUNCTION: 0x10324430 size=0x98
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CActivityNotifier {
	void sub_101f6010(CBaseCombatCharacter *pChar, int newAct, int oldAct);
};
extern CActivityNotifier g_1073dd58;

struct CScopeTrace {
	CScopeTrace(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~CScopeTrace() { (*g_109f3680)--; }
};

void CBaseCombatCharacter::sub_10324430(int activity)
{
	CScopeTrace trace("CBaseCombatCharacter::SetActivity", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	int *pAct = (int *)((char *)this + 0xfec);
	if (activity != *pAct)
		g_1073dd58.sub_101f6010(this, activity, *pAct);
	*pAct = activity;
}
// END FUNCTION

// FUNCTION: 0x103246d0 size=0x323
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "ScopeTrace.h"
#include "CBaseCombatCharacter.h"
#include "CVStatList_t.h"
#include "engineserver.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CUpdSlots2
{
	S100(a) S100(b) S100(c) S100(d) S100(e)
	S10(f0)
	virtual void g0(); virtual void g1(); virtual void g2();
	virtual unsigned int s513();
};

struct CUpdView
{
	S100(a) S100(b)
	S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6)
	virtual void c70(); virtual void c71(); virtual void c72(); virtual void c73(); virtual void c74(); virtual void c75(); virtual void c76(); virtual void c77();
	virtual void *s278();
	virtual void c79();
	S10(c8) S10(c9)
	S10(d0)
	virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13();
	virtual void s314(int a);
	virtual void s315();
	virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
	S10(d2)
	virtual void d30(); virtual void d31(); virtual void d32();
	virtual void s333(int a);
};

struct CGlob10936e54
{
	virtual char s0();
	virtual char s1();
	char pad[0x28];
	int m_f2c;
};
extern CGlob10936e54 *g_10936e54;

void sub_10143710(void *a, int b, int c, int d);
void sub_10143d80(void *a, float b, int c, int d, int e, int f, int g);
void sub_101cee20(float a, Vector v1, Vector v2, int b);
void sub_10139970(Vector *a, Vector *b);

// TARGET: CBaseCombatCharacter::vfunc312
void CBaseCombatCharacter::vfunc312(int a)
{
	ScopeTrace trace("CBaseCombatCharacter::UpdateCharacter", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CUpdSlots2 *pOwner = *(CUpdSlots2 **)((char *)this + 0x98);
	int pPlayer = *(int *)((char *)this + 0xa8);
	sub_100521e0();
	((CUpdView *)this)->d13();
	sub_10324ea0();
	if (pPlayer != 0 || (pOwner->s513() & 0x800000) != 0)
		sub_10106050(a);
	if (*(int *)((char *)this + 0xe68) == 0)
		((CUpdView *)this)->s333(a);
	else
		sub_10325620(a);
	if (!g_10936e54->s1() && g_10936e54->m_f2c) {
		Vector va, vb, vc;
		sub_10331da0(&va, &vb);
		sub_10139970(&vb, &vc);
		sub_101cee20(10.0f, va, vc, a);
		sub_10143710(((CUpdView *)this)->s278(), sub_100ab4f0(), 0, a);
		sub_10143d80(((CUpdView *)this)->s278(), 2.0f, 0xff, 0, 0, 0, a);
	}
	((CUpdView *)this)->s314(a);
	((CUpdView *)this)->s315();
	if (m_n168 == 0x1a && engine->vfunc119(0) - *(float *)((char *)this + 0x5a4) > 0.2) {
		if (sub_10337f30()) {
			if (CVStatListSet::Of(this)->Find(3)->sub_102012d0(7) > 0)
				m_n168 = 0;
		} else {
			if (CVStatListSet::Of(this)->Find(3)->sub_102012d0(13) > 0)
				m_n168 = 0;
		}
	}
	if (m_n168 == 0x25 && engine->vfunc119(0) - *(float *)((char *)this + 0x5a4) > 0.2 && sub_10330220())
		m_n168 = 0x24;
}
// END FUNCTION

// FUNCTION: 0x103250d0 size=0xb6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CAI_BaseNPC.h"
#include "ScopeTrace.h"

void CBaseCombatCharacter::vfunc311(int a, int b, int c)
{
	ScopeTrace trace("CBaseCombatCharacter::ForcePreTranslatedSequenceAndActivity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (c >= 0) {
		*(int *)((char *)this + 0xff0) = a;
		*(int *)((char *)this + 0xff4) = b;
		((CAI_BaseNPC *)this)->sub_10260a50(c);
		*(float *)((char *)this + 0x6f8) = 0;
		sub_10090950();
		*(int *)((char *)this + 0x6f4) = *(int *)((char *)this + 0x1488);
	}
}
// END FUNCTION

// FUNCTION: 0x103251c0 size=0xff
#include "CBaseCombatCharacter.h"
#include "CVStatList_t.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseCombatCharacter::vfunc252(int a, int b, int c)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SelectWeightedSequenceForStat";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;

	int r = -1;
	if (b >= 0 && b < 4) {
		CVStatList_t *p = CVStatListSet::Of(this)->Find(b);
		r = p->sub_10010609(c);
	}
	int ret = ((CBaseAnimating *)this)->sub_1008dc40(a, r);
	--*g_109f3680;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10325300 size=0xff
#include "CBaseCombatCharacter.h"
#include "CVStatList_t.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseCombatCharacter::vfunc254(int a, int b, int c)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SelectSameSequenceForStat";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;

	int r = -1;
	if (b >= 0 && b < 4) {
		CVStatList_t *p = CVStatListSet::Of(this)->Find(b);
		r = p->sub_10010609(c);
	}
	int ret = ((CBaseAnimating *)this)->sub_1008de20(a, r);
	--*g_109f3680;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10325440 size=0xff
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseCombatCharacter::vfunc253(int a, int b, int c)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SelectHeaviestSequenceForStat";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;

	int r = -1;
	if (b >= 0 && b < 4) {
		CVStatList_t *p = CVStatListSet::Of(this)->Find(b);
		r = p->sub_10010609(c);
	}
	int ret = ((CBaseAnimating *)this)->sub_1008dd30(a, r);
	--*g_109f3680;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10325580 size=0x71
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f458[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::vfunc333(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f458;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10325f00 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10325f00(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasHumanGibs";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10325fa0 size=0x7f
#include "CBaseCombatCharacter.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct EntSlots138 {
    S100(a)
    S10(b0)
    S10(b1)
    S10(b2)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
    virtual void c5(); virtual void c6(); virtual void c7();
    virtual void v138();
};

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

char CBaseCombatCharacter::sub_10325fa0()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseCombatCharacter::HasAlienGibs";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    ((EntSlots138 *)this)->v138();
    --*g_109f3680;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10326040 size=0xc8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

extern float g_1070d1b0[3];
extern float g_1070d9d0[3];

// TARGET: CBaseCombatCharacter::vfunc395
void CBaseCombatCharacter::vfunc395()
{
    ScopeTrace trace("CBaseCombatCharacter::CorpseFade", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    *(int *)((char *)this + 0x6f4) = 0;
    sub_100b2e30(g_1070d1b0);
    vfunc93(0, 0);
    sub_100b2f50(g_1070d9d0);
    *(float *)((char *)this + 0x174) = gpGlobals->curtime;
    *(int *)((char *)this + 0x19c) |= 0x10;
    sub_102695d0();
}
// END FUNCTION

// FUNCTION: 0x10326750 size=0x132
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CUnknown10738964.h"
#include "ScopeTrace.h"
#include "Vector.h"

#define TV_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// The slots of a target entity this function calls: 29 (a float) and 192 (a position returned by value).
class CTargetView
{
public:
	TV_SLOTS10(a0) TV_SLOTS10(a1)
	virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24();
	virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28();
	virtual float vfunc29();
	TV_SLOTS10(a3) TV_SLOTS10(a4) TV_SLOTS10(a5) TV_SLOTS10(a6) TV_SLOTS10(a7) TV_SLOTS10(a8) TV_SLOTS10(a9)
	TV_SLOTS10(b0) TV_SLOTS10(b1) TV_SLOTS10(b2) TV_SLOTS10(b3) TV_SLOTS10(b4) TV_SLOTS10(b5) TV_SLOTS10(b6) TV_SLOTS10(b7) TV_SLOTS10(b8)
	virtual void c90(); virtual void c91();
	virtual Vector vfunc192();
};

extern CUnknown10738964 *g_10936f74;

char CBaseCombatCharacter::vfunc363(CBaseEntity *pTarget)
{
	ScopeTrace trace("CBaseCombatCharacter::FInViewCone", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CTargetView *pView = (CTargetView *)pTarget;
	if (!g_10936f74->vfunc1() && g_10936f74->m_n2c == 2)
		return sub_103261f0(pView->vfunc192(), pView->vfunc29(), m_field1574);
	return sub_103264d0(pView->vfunc192(), pView->vfunc29(), m_field1574);
}
// END FUNCTION

// FUNCTION: 0x10326a20 size=0x86
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

char CBaseCombatCharacter::vfunc362(const float *pos)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::FInViewCone";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char result = sub_103268e0(pos, m_field1574);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10326ae0 size=0xb5
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SelfSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6) SL10(b7) SL10(b8)
	virtual void c0(); virtual void c1(); virtual void c2();
	virtual float *s193(float *out);
	SL10(d0) SL10(d1) SL10(d2) SL10(d3) SL10(d4) SL10(d5) SL10(d6) SL10(d7) SL10(d8) SL10(d9)
	SL10(e0) SL10(e1) SL10(e2) SL10(e3) SL10(e4) SL10(e5) SL10(e6)
	virtual int s364(float *v);
};
struct TargetSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6) SL10(b7) SL10(b8)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6();
	virtual float *s197(float *out, float *in, int a, int b);
};

int CBaseCombatCharacter::vfunc365(CBaseEntity *pTarget)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::FInAimCone";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	float a[3];
	float b[3];
	int r = ((SelfSlots *)this)->s364(((TargetSlots *)pTarget)->s197(b, ((SelfSlots *)this)->s193(a), 1, 0));
	--*g_109f3680;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10326bd0 size=0x11b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CBaseCombatCharacter.h"

bool CBaseCombatCharacter::vfunc364(const Vector *pTarget)
{
	ScopeTrace trace("CBaseCombatCharacter::FInAimCone", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	Vector dir = *pTarget - *pSelf->slot217();
	dir.z = 0;
	VectorNormalize(dir);
	Vector fwd;
	pSelf->slot372(&fwd);
	if (DotProduct(dir, fwd) > 0.994)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10326d40 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10326d40(char *self, int, int a, int b, int c)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HandleInteraction";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x103274a0 size=0x1e
#include "CBaseCombatCharacter.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseCombatCharacter::vfunc5
CBaseCombatCharacter *CBaseCombatCharacter::vfunc5(unsigned int flags)
{
	sub_100078c4();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10327790 size=0x161
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

void sub_101cd940(void *pEntity);
void __fastcall sub_103234a0(CBaseCombatCharacter *pChar);

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

class S_Slot139
{
public:
	SL100(a)
	SL10(b0)
	SL10(b1)
	SL10(b2)
	virtual void b30(); virtual void b31(); virtual void b32(); virtual void b33(); virtual void b34();
	virtual void b35(); virtual void b36(); virtual void b37(); virtual void b38();
	virtual void slot139(CBaseEntity *pOther);
};

struct S_CharView
{
	char m_pad0[0x5a8];
	unsigned int m_hRemove;
	char m_pad1[0x1598 - 0x5ac];
	void **m_ppRelationships;
	int m_nRelAlloc;
	int m_nRelationships;
};

void CBaseCombatCharacter::vfunc180()
{
	ScopeTrace trace("CBaseCombatCharacter::UpdateOnRemove", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	S_CharView *v = (S_CharView *)this;
	CBaseEntity *pOwner = vfunc97();
	if (pOwner)
		((S_Slot139 *)pOwner)->slot139(this);
	int i;
	for (i = 0; i < v->m_nRelationships; i++) {
		if (v->m_ppRelationships[i])
			delete v->m_ppRelationships[i];
	}
	delete v->m_ppRelationships;
	v->m_ppRelationships = 0;
	v->m_nRelationships = 0;
	v->m_nRelAlloc = 0;
	for (i = 0; i < 0xe0; i++) {
		if (sub_1032e8b0(i))
			sub_101cd940(sub_1032e8b0(i));
	}
	sub_10052030();
	sub_103234a0(this);
	sub_10323770();
	sub_101cd940(EHandle_Get(v->m_hRemove));
	CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x10327a90 size=0x2ce
#include "TestBit.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "CStatDefault3List.h"
#include "CUnknown101d4f20.h"
#include "CEntityVSlots.h"

#define V1(p) virtual void p();
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct CCorpseSlots
{
	V100(e0) V100(e1) V100(e2) V10(f0) V10(f1) V10(f2) V10(f3) V10(f4) V10(f5) V10(f6) V10(f7) V10(f8) V1(g0) V1(g1) V1(g2) V1(g3) V1(g4) V1(g5)
	virtual char vfunc396();
	virtual char vfunc397();
};

struct CCorpsePhys
{
	V10(a0) V10(a1) V10(a2) V1(b0) V1(b1) V1(b2) V1(b3) V1(b4) V1(b5) V1(b6) V1(b7) V1(b8)
	virtual void vfunc39(float *pPos, float *pAng);
	virtual void vfunc40(float *pPos, float *pAng);
};

struct CCorpseProp2
{
	char m_pad0[0x19c];
	unsigned int m_flags19c;
	char m_pad1[0x36c - 0x1a0];
	CCorpsePhys *m_pPhys36c;
	char m_pad2[0x3d4 - 0x370];
	float m_pos[3];
	char m_pad3[0x774 - 0x3e0];
	float m_fl774;
	void sub_1018f690(int a);
	void sub_1018f700(int a);
	void sub_100b2f50(float *p);
};

struct CCorpseNameView
{
	CUnknown101d4f20_Value *sub_101d4f20(CUnknown101d4f20_Value *out);
};

struct CCorpseGlobal
{
	virtual void v0();
	virtual char v1();
	char m_pad[0x28 - 4];
	float m_fl28;
};

extern CCorpseGlobal *g_109371c4;
extern CStatDefault3List g_10738d10;
extern float g_104454c4;
extern "C" __declspec(dllimport) int RandomInt(int lo, int hi);
extern "C" __declspec(dllimport) float RandomFloat(float lo, float hi);
void sub_10129dc0(CBaseCombatCharacter *p);
void sub_1012a6e0(CBaseCombatCharacter *p, int a, int b);
void *sub_100a9ab0(const char *pszClass, const float *pOrigin, const float *pAngles, int a);

// TARGET: CBaseCombatCharacter::vfunc394
char CBaseCombatCharacter::vfunc394()
{
	CBaseCombatCharacter *pChar = this;
	ScopeTrace scope("CBaseCombatCharacter::CorpseGib", pChar ? (*(char **)((char *)pChar + 0x26c) ? *(char **)((char *)pChar + 0x26c) : g_106b8540) : g_105387dc);
	char bRet = 0;
	CCorpseSlots *pThis = (CCorpseSlots *)this;
	CEntityVSlots *pVS = (CEntityVSlots *)this;
	if (pThis->vfunc396())
	{
		sub_10129dc0(this);
		CEntityVSlots *pProp = (CEntityVSlots *)sub_100a9ab0("prop_physics", (const float *)pVS->slot217(), (const float *)pVS->slot219(), 0);
		CCorpseProp2 *pProp2 = (CCorpseProp2 *)pProp;
		int nHull = sub_10337860();
		CUnknown101d4f20_Value tmp;
		const char *pszName = (const char *)((CCorpseNameView *)g_10738d10.sub_101d5e80(nHull))->sub_101d4f20(&tmp)->m_value;
		if (!pszName)
			pszName = g_106b8540;
		pProp->slot105(pszName);
		pProp2->m_flags19c |= 0xa0;
		if (g_10738d10.sub_101d5e80(nHull)->m_8c[5])
			pProp2->sub_1018f690(1);
		else
			pProp2->sub_1018f690(0);
		pProp2->sub_1018f700(1);
		float pos[3];
		float ang[3];
		CCorpsePhys *pPhys = *(CCorpsePhys **)((char *)this + 0x36c);
		if (pPhys)
			pPhys->vfunc40(pos, ang);
		else
		{
			if (TestBit(m_flags268, 12))
				sub_100b1d10();
			pos[0] = *(float *)((char *)this + 0x3bc);
			pos[1] = *(float *)((char *)this + 0x3c0);
			pos[2] = *(float *)((char *)this + 0x3c4);
			ang[0] = *(float *)((char *)this + 0x3d0);
			ang[1] = *(float *)((char *)this + 0x3c8);
			ang[2] = *(float *)((char *)this + 0x3cc);
		}
		if (pProp2->m_pPhys36c)
			pPhys->vfunc39(pos, ang);
		else
		{
			pProp2->m_pos[0] = pos[0];
			pProp2->m_pos[1] = pos[1];
			pProp2->m_pos[2] = pos[2];
			float tmpAng[3];
			tmpAng[0] = ang[1];
			tmpAng[1] = ang[2];
			tmpAng[2] = ang[0];
			pProp2->sub_100b2f50(tmpAng);
		}
		pProp2->m_fl774 = g_109371c4->v1() ? g_104454c4 : g_109371c4->m_fl28;
		pProp->slot266((int)this);
		goto gibbed;
	}
	if (!pThis->vfunc397())
		goto done;
	sub_1012a6e0(this, 4, 1);
gibbed:
	bRet = 1;
	if (sub_10337e40())
	{
		if (RandomInt(1, 20) > 19)
		{
			float yaw = RandomFloat(0, 359.0f);
			float angles[3];
			angles[0] = 0;
			angles[1] = 0;
			angles[2] = yaw;
			CEntityVSlots *pArm = (CEntityVSlots *)sub_100a9ab0("item_w_severed_arm", (const float *)&pVS->slot192(), angles, 0);
			if (pArm)
				pArm->slot103();
		}
	}
done:
	return bRet;
}
// END FUNCTION

// FUNCTION: 0x10327e20 size=0x77
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f908[];
extern char g_105387dc[];
extern char g_106b8540[];
int CBaseCombatCharacter::vfunc393()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f908;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return 0x43;
}
// END FUNCTION

// FUNCTION: 0x10327ec0 size=0x120
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"

struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_109f3620;
extern int *g_109f3680;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CWeaponSlotView
{
	SL10(a00) SL10(a01) SL10(a02) SL10(a03) SL10(a04) SL10(a05) SL10(a06) SL10(a07) SL10(a08) SL10(a09)
	SL10(a10) SL10(a11) SL10(a12) SL10(a13) SL10(a14) SL10(a15) SL10(a16) SL10(a17) SL10(a18) SL10(a19)
	SL10(a20) SL10(a21) SL10(a22) SL10(a23) SL10(a24) SL10(a25) SL10(a26) SL10(a27) SL10(a28) SL10(a29)
	SL10(a30) SL10(a31) SL10(a32) SL10(a33) SL10(a34) SL10(a35)
	virtual int b360();
	virtual int b361(int a);
};

int CBaseCombatCharacter::vfunc381(int a)
{
	const char *pszName;
	if (this) {
		pszName = m_name26c;
		if (!pszName)
			pszName = g_106b8540;
	} else {
		pszName = "NULL ENTITY";
	}
	g_109f3620[*g_109f3680].m_pszName = "CBaseCombatCharacter::Weapon_TranslateActivity";
	g_109f3620[*g_109f3680].m_pszEnt = pszName;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	int result = a;
	if (m_hActiveWeapon19a4.Get() && !(m_hActiveWeapon19a4.Get()->m_nEffectFlags & 0x40))
		result = ((CWeaponSlotView *)m_hActiveWeapon19a4.Get())->b361(a);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10328030 size=0xa5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

char __cdecl sub_104126a0(int act);

int CBaseCombatCharacter::vfunc375(int act)
{
	ScopeTrace trace("CBaseCombatCharacter::NPC_EarlyTranslateActivity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (sub_104126a0(act))
		return sub_10328380(act, -1, 0, -1);
	return act;
}
// END FUNCTION

// FUNCTION: 0x10328110 size=0x78
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f9ac[];
extern char g_105387dc[];
extern char g_106b8540[];
int CBaseCombatCharacter::vfunc376(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f9ac;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return a;
}
// END FUNCTION

// FUNCTION: 0x10328df0 size=0x5e8
#include "CNPC_VTzimisce.h"
#include "CUnknown100c81b0.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Quaternion.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "CDevFlagObj.h"
#include "CUnknown100c7f30.h"

#include "ConVar.h"
extern ConVar g_10937030;
extern void (*g_109f362c)(const char *fmt, ...);
extern "C" int sprintf(char *, const char *, ...);
extern "C" double fabs(double);
#pragma intrinsic(fabs)
float sub_101d2c70(const Vector &vec);	// UTIL_VecToYaw
float sub_1013d580(float a, float b);	// UTIL_AngleDiff
const char *sub_101d3730(const char *pszFormat, ...);

struct CPlayerGrappleView
{
	void sub_10161d20();
	void sub_1017e150(int a, float b, const char *c);
};

struct CBCCGrappleView
{
	bool sub_103285a0(CBaseCombatCharacter *pTarget, int nType, int nSide);
	void sub_1032a100(int a);
};

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct CGrappleSlots
{
	V100(a) V100(b) V100(c)
	V10(d0) V10(d1) V10(d2)
	virtual void d30(); virtual void d31(); virtual void d32();
	virtual void slot333(int a, int b, int c, int d, int e, int f);
	virtual void d34(); virtual void d35(); virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39();
	V10(d4) V10(d5) V10(d6)
	virtual void d70(); virtual void d71(); virtual void d72(); virtual void d73(); virtual void d74();
	virtual void d75(); virtual void d76(); virtual void d77(); virtual void d78();
	virtual char slot379(CBaseEntity *pTarget, int nRole, int nType, int nSide, Vector *pPos, float flYaw, bool b);
	virtual void slot380();
	virtual int slot381(int a);
};

inline float AngleModX(float a)
{
	a = (360.0f / 65536) * ((int)(a * (65536.0f / 360.0f)) & 65535);
	return a;
}

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm
	{
		fld DWORD PTR [radians]
		fsincos
		mov edx, DWORD PTR [cosine]
		mov eax, DWORD PTR [sine]
		fstp DWORD PTR [edx]
		fstp DWORD PTR [eax]
	}
}

inline void InitBits(CUnknown100c7f30 *b, CUnknown100c7f30Hdr *h, unsigned int m) { b->sub_100c7f30(h, m); }
inline void InitBits2(CUnknown100c7f30 *b, CBaseAnimating *p, unsigned int m) { b->sub_100c7f30((CUnknown100c7f30Hdr *)p->sub_100952d0(-1), m); }
inline int TranslateAct(CGrappleSlots *p, int a) { return p->slot381(a); }
#define DEG2RAD(x) ((float)(x) * (float)(3.14159265358979323846f / 180.f))

bool CBaseCombatCharacter::StartGrappleAttack(CBaseCombatCharacter *pTarget, int nType)
{
	ScopeTrace trace("CBaseCombatCharacter::StartGrappleAttack", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (g_10937030.GetInt())
	{
		char text[256];
		sprintf(text, "%s StartGrappleAttack with %s (type=%d)", sub_1000b5cd(), pTarget->sub_1000b5cd(), nType);
		sub_103221b0(text);
	}

	Vector vecDelta = *((CEntityVSlots *)pTarget)->slot217() - *((CEntityVSlots *)this)->slot217();
	Vector vecOrigin = *((CEntityVSlots *)pTarget)->slot217();

	float flYaw;
	if (nType != 5)
		flYaw = sub_101d2c70(vecDelta);
	else
		flYaw = AngleModX(((CEntityVSlots *)pTarget)->slot219()->y + 180.0f);

	const Vector *pAng = ((CEntityVSlots *)pTarget)->slot219();
	float flTargetYaw = pAng->y;
	int nSide = (fabs(sub_1013d580(flYaw, flTargetYaw)) > 90.0) ? 0 : 1;

	bool b1, b2;
	switch (nType)
	{
	case 3:
		b1 = false;
		b2 = true;
		break;
	case 4:
	case 7:
		b1 = false;
		b2 = false;
		break;
	default:
		b1 = true;
		b2 = true;
		break;
	}

	if (!((CBCCGrappleView *)this)->sub_103285a0(pTarget, nType, nSide))
		return false;

	if (*(CPlayerGrappleView **)((char *)this + 0xa8))
		(*(CPlayerGrappleView **)((char *)this + 0xa8))->sub_10161d20();

	nSide = sub_10328af0(pTarget, nType, nSide);
	int nAnim = sub_10328c80(nType);
	int nAct = pTarget->sub_10328380(nAnim, 1, this, nSide);
	nAct = ((CGrappleSlots *)this)->slot381(nAct);
	int nSequence = ((CBaseAnimating *)pTarget)->sub_1008dd30(nAct, -1);

	CPlayerGrappleView *pPlayer = *(CPlayerGrappleView **)((char *)this + 0xa8);
	if (pPlayer && pTarget->m_bIsAlive && nType != 8 && nType != 2)
	{
		const char *pszName = pTarget->sub_1000b5cd();
		const char *psz = sub_101d3730("StartGrappleAttack %s", pszName);
		pPlayer->sub_1017e150(1, 2.0f, psz);
	}

	if (nSequence < 0 || nAnim == -1 || nSide == -1)
	{
		g_109f362c("StartGrappleAttack failing after CheckAndTranslateGrapplePosition!\n");
		return false;
	}

	float flTargetGrappleYaw;
	if (nSide == 0)
		flTargetGrappleYaw = AngleModX(flYaw + 180.0f);
	else
		flTargetGrappleYaw = flYaw;
	if (nType == 5)
		flYaw = AngleModX(flYaw + 180.0f);

	Vector vecOffset(0, 0, 0);
	int iBone = ((CBaseAnimating *)pTarget)->sub_10092550((int)"Bip01");
	if (iBone >= 0)
	{
		Vector pos[350];
		char q[0x15e0];
		char bits[0x30];
		InitBits((CUnknown100c7f30 *)bits, (CUnknown100c7f30Hdr *)((CBaseAnimating *)pTarget)->sub_100952d0(-1), 4);
		((CBaseAnimating *)pTarget)->sub_1008e770(pos, (class Quaternion *)q, nSequence, 0,
			(float *)((char *)pTarget + 0x690), (class CUnknown100c81b0 *)bits);
		float bx = pos[iBone].x;
		float by = pos[iBone].y;
		float s, c;
		SinCos(DEG2RAD(flTargetGrappleYaw), &s, &c);
		SinCos(DEG2RAD(flYaw), &s, &c);
		vecOffset.x = c * bx - s * by;
		vecOffset.y = c * by + s * bx;
	}

	m_iBloodStolen = 0;
	{
		Vector vecPos = vecOrigin - vecOffset;
		if (!((CGrappleSlots *)this)->slot379(pTarget, 0, nType, nSide, &vecPos, flYaw, b1))
			goto fail;
	}
	{
		Vector vecPos = vecOrigin - Vector(0, 0, vecOffset.z);
		if (!((CGrappleSlots *)pTarget)->slot379(this, 1, nType, nSide, &vecPos, flTargetGrappleYaw, b2))
		{
			((CGrappleSlots *)this)->slot380();
			goto fail;
		}
	}

	((CBCCGrappleView *)this)->sub_1032a100(nAnim);
	CGrappleSlots *pObj;
	pObj = (CGrappleSlots *)sub_1032e7b0();
	switch (nType)
	{
	case 3:
		if (pObj)
		{
			pObj->slot333(0x17, 1, 0, 0, 0, 0);
			return true;
		}
		break;
	case 4:
		if (pObj)
		{
			pObj->slot333(0x18, 1, 0, 0, 0, 0);
			return true;
		}
		break;
	case 0:
	case 1:
		sub_1033b100(2);
		pTarget->sub_1033b100(0);
		break;
	}
	return true;
fail:
	return false;
}
// END FUNCTION

// FUNCTION: 0x10329760 size=0x270
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CStatDefault3List.h"
#include "ScopeTrace.h"

extern "C" int sprintf(char *, const char *, ...);
void sub_101cf5c0(CBaseEntity *p, int v, int w);

struct CGrappleDbg10937034
{
	virtual void v0();
	virtual char v1();
	char pad[0x2c - 4];
	int m2c;
};
extern CGrappleDbg10937034 *g_10937034;
extern CStatDefault3List g_10738d10;

// TARGET: CBaseCombatCharacter::vfunc379
char CBaseCombatCharacter::vfunc379(CBaseEntity *pTarget, int nRole, int nType, int a4, int a5, int a6, char bHolster)
{
	ScopeTrace trace("CBaseCombatCharacter::EnterGrappleState", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!g_10937034->v1() && g_10937034->m2c) {
		char buf[256];
		sprintf(buf, "%s EnterGrappleState with %s : role=%d type=%d", sub_100ab4f0(), pTarget->sub_100ab4f0(), nRole, nType);
		sub_103221b0(buf);
	}
	if (pTarget)
		m_hTarget1538 = pTarget;
	else
		m_hTarget1538 = (CBaseEntity *)0;
	m_nTarget153c = nRole;
	m_nTargetMode1540 = nType;
	m_nGrapple1544 = a4;
	m_bGrapple1554 = 0;
	if (bHolster) {
		if (sub_1032e7b0() && (((CBaseEntity *)sub_1032e7b0())->m_nEffectFlags & 0x40) != 0x40) {
			((CBaseEntity *)sub_1032e7b0())->vfunc66();
			m_bGrapple1554 = 1;
		}
	}
	sub_100976e0();
	m_vecGrapple1548 = *(Vector *)a86();
	sub_101cf5c0(this, a5, 0);
	vfunc65(*(int *)((char *)this + 0x428), a6, *(int *)((char *)this + 0x430));
	m_nGrapple1534 = vfunc94();
	if (m_pA8)
		vfunc93(0, 0);
	m_hGrapple1558 = (CBaseEntity *)0;
	if (nRole)
		m_hGrapple1558 = pTarget;
	char *pCtrl = (char *)m_pA8;
	if (pCtrl)
		*(int *)(pCtrl + 0x1a90) = g_10738d10.sub_101d5f10((CBaseCombatCharacter *)m_hTarget1538.Get())->m_d0[0][12];
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10329a70 size=0x538
#include "CNPC_VTzimisce.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include <stdio.h>
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "UTIL_Trace.h"
#include "ehandle.h"
#include "CEHandleGet.h"
#include "CBasePlayer.h"
#include "QAngle.h"

#define V1(a) virtual void a();
#define V10(p) V1(p##0) V1(p##1) V1(p##2) V1(p##3) V1(p##4) V1(p##5) V1(p##6) V1(p##7) V1(p##8) V1(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct EntV220 { V100(a) V100(b) V10(c0) V10(c1) virtual Vector *vfunc220(); };
struct EntV65 { V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V1(g0) V1(g1) V1(g2) V1(g3) V1(g4) virtual void vfunc65(int, float, int); };

struct CDevFlag10937034 { virtual void v0(); virtual char vfunc1(); char pad[0x28]; int m_n2c; };
extern CDevFlag10937034 *g_10937034;
struct CColView270 { virtual void v0(); virtual const Vector *vfunc1(); virtual const Vector *vfunc2(); };
void sub_101cf5c0(CBaseEntity *, Vector *, int);

extern float g_1049e02c;
void CBaseCombatCharacter::vfunc380()
{
	char buf[0x100];
	ScopeTrace scope("CBaseCombatCharacter::LeaveGrappleState", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!g_10937034->vfunc1() && g_10937034->m_n2c) {
		sprintf(buf, "%s LeaveGrappleState", sub_1000b5cd());
		sub_103221b0(buf);
	}
	m_flTimeA9c = -1.0f;
	bool bWasGrapple = false;
	Vector vecOld;
	if (m_nTarget153c == 0 && (m_nTargetMode1540 == 1 || m_nTargetMode1540 == 4)) {
		bWasGrapple = true;
		CBaseCombatCharacter *pTarget = (CBaseCombatCharacter *)g_10566458->sub_100290c0((const unsigned int *)&m_hTarget1538);
		vecOld = pTarget->m_vecGrapple1548;
	}
	m_hGrapple1558.m_Index = -1;
	m_hTarget1538.m_Index = -1;
	m_nTarget153c = -1;
	m_nTargetMode1540 = -1;
	m_nGrapple1544 = -1;
	if (m_bGrapple1554 && sub_1032e7b0())
		((CBaseEntity *)sub_1032e7b0())->vfunc67();
	CBasePlayer *pPlayer = (CBasePlayer *)m_pA8;
	if (pPlayer) {
		EntV220 *pOther = (EntV220 *)pPlayer->sub_10161ed0();
		if (pOther) {
			Vector vecOrigin = *pOther->vfunc220();
			CColView270 *pCol = (CColView270 *)((char *)this + 0x270);
			const Vector *pMins = pCol->vfunc1();
			const Vector *pMaxs = pCol->vfunc2();
			CGameTrace tr;
			UTIL_TraceHull_DebugCall(vecOrigin, *((EntV220 *)this)->vfunc220(), *pMins, *pMaxs, 0x201400b, this, 0, &tr, 1, 0);
			vecOrigin += (*(Vector *)tr.m_endpos - *(Vector *)tr.m_startpos) * tr.m_fraction;
			if ((float)fabs(vecOrigin.z - pOther->vfunc220()->z) >= 0.0001f) {
				Vector vecPos = *pOther->vfunc220();
				if (vecPos.z < ((EntV220 *)this)->vfunc220()->z)
					vecPos.z = ((EntV220 *)this)->vfunc220()->z;
				vfunc62(&vecPos.x);
			} else {
				Vector vecTop = vecOrigin;
				vecTop.z = vecOrigin.z + g_1049e02c;
				UTIL_TraceLine_Calls(vecTop, vecOrigin, 0x201400b, this, 0, &tr);
				vecOrigin = vecTop + (*(Vector *)tr.m_endpos - *(Vector *)tr.m_startpos) * tr.m_fraction;
				vfunc62(&vecOrigin.x);
			}
			sub_10348d00();
			pPlayer->sub_10161f10();
		} else if (vfunc158() && !((CBaseAnimating *)this)->sub_100903e0()) {
			sub_100976e0();
			int bone = sub_10092550((int)"Bip01");
			if (bone >= 0) {
				Vector pos;
				QAngle ang;
				sub_100926e0(bone, &pos.x, &ang.x);
				pos.z = m_vecGrapple1548.z;
				((EntV65 *)this)->vfunc65(*(int *)((char *)this + 0x428), ((const QAngle &)ang)[1], *(int *)((char *)this + 0x430));
				if (bWasGrapple) {
					if (vecOld.x < pos.x) pos.x += 13.0f; else pos.x -= 13.0f;
					if (vecOld.y < pos.y) pos.y += 13.0f; else pos.y -= 13.0f;
				}
				vfunc62(&pos.x);
			} else {
				sub_101cf5c0(this, &m_vecGrapple1548, 0);
			}
		}
	}
	if (vfunc94() == 0)
		vfunc93(m_nGrapple1534, 0);
}
// END FUNCTION

// FUNCTION: 0x1032af40 size=0x1b7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCollisionProperty.h"
#include "CBaseCombatCharacter.h"
#include "CBCCSlotViews.h"

struct CvarInner402 { virtual void v0(); virtual char vfunc1(); char pad[0x28]; int m_nValue; };
struct CvarEntry402 { int pad; CvarInner402 *m_pInner; };
struct CvarSys402 { virtual void v0(); virtual void v1(); virtual CvarEntry402 *FindVar(const char *name); };
extern CvarSys402 *g_1070b234;

char CBaseCombatCharacter::vfunc402()
{
	CCombatCharGibSlotView *pView = (CCombatCharGibSlotView *)this;
	ScopeTrace trace("CBaseCombatCharacter::Event_Gibbed", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	bool bGib = false;
	if (pView->vfunc396()) {
		CvarEntry402 *pVar = g_1070b234->FindVar("violence_hgibs");
		if (pVar && (pVar->m_pInner->vfunc1() || !pVar->m_pInner->m_nValue))
			bGib = true;
	} else if (pView->vfunc397()) {
		CvarEntry402 *pVar = g_1070b234->FindVar("violence_agibs");
		if (pVar && (pVar->m_pInner->vfunc1() || !pVar->m_pInner->m_nValue))
			bGib = true;
	}
	m_nTakeDamage = 0;
	{
		ScopeTrace trace2("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}
	m_field200 = 2;
	sub_100b3b00();
	if (bGib) {
		pView->vfunc395();
		return 0;
	}
	vfunc66();
	return pView->vfunc394();
}
// END FUNCTION

// FUNCTION: 0x1032b9b0 size=0x356
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTakeDamageInfo.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "Vector.h"
#include "CUnknown101c2af0.h"
#include "CUnknown101c2ab0.h"
#include "ScopeTrace.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##a) S10(p##b) S10(p##c) S10(p##d) S10(p##e) S10(p##f) S10(p##g) S10(p##h) S10(p##i) S10(p##j)

struct KView
{
	S10(a) S10(b) S10(c) S10(d) S10(e) S10(f) S10(g) S10(h) S10(i)
	virtual void j0(); virtual void j1(); virtual void j2(); virtual void j3(); virtual void j4(); virtual void j5(); virtual void j6();
	virtual KView *w97();
	S10(k) S10(l) S10(m) S10(n) virtual void o0();
	virtual void w139(void *p);
	S100(p) S10(q) S10(r) S10(s) S10(t) S10(u) S10(v)
	virtual void w300(void *p, char a, char b);
	virtual void w301(const Vector *pF, void *pInfo);
	S10(x) S10(y) S10(z) S10(zz) S10(zy) virtual void yq0();
	virtual void w353();
	S10(m1) S10(m2) S10(m3) virtual void mq4();
	virtual void w385(void *p, void *a, void *b);
};
struct PhysView { S10(a) S10(b) S10(c) S10(d) virtual void w40(Vector *p, int a); };
struct DevView { virtual void a0(); virtual char w1(); char pad[0x2c - 4]; void *m_p2c; };
extern DevView *g_106bbaa4;
extern void (*g_109f3650)(int, const char *, ...);
extern float g_104454c4;

inline Vector InfoForce(CTakeDamageInfo *p) { return *(Vector *)((char *)p + 0x10); }
inline IHandleEntity *L1(EHandleDetail::EntityList *l, const CBaseHandle *h) { return l->LookupEntity(*h); }
inline IHandleEntity *L2(EHandleDetail::EntityList *l, const CBaseHandle *h) { return L1(l, h); }
inline unsigned int FlagBit(unsigned int f, int bit) { return (f >> bit) & 1; }
inline bool FlagB(unsigned int f, int bit) { return (f >> bit) & 1; }
template <class T> inline int ENTINDEX(T e) { return engine->vfunc35(e); }

// TARGET: CBaseCombatCharacter::vfunc144
void CBaseCombatCharacter::vfunc144(void *pInfo)
{
	ScopeTrace trace("CBaseCombatCharacter::Event_Killed", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	m_field200 = 1;
	((KView *)this)->w385(m_hActiveWeapon19a4.Get(), 0, 0);
	const CBaseHandle *h = &m_hTarget1538;
	EHandleDetail::EntityList *pList = EHandleDetail::g_10566458;
	if (L2(pList, h) && m_nTarget153c == 1)
	{
		KView *p = (KView *)L2(pList, h);
		if (p)
			p->w353();
	}
	if ((char)(int)pList == -1) sub_10052030(); else sub_10052030();
	sub_103234a0(this);
	sub_10323770();
	enginesound->vfunc6(ENTINDEX(m_pEdict2e0), 1);
	KView *pOwner = ((KView *)this)->w97();
	if (pOwner)
		pOwner->w139(this);
	CTakeDamageInfo *info = (CTakeDamageInfo *)pInfo;
	Vector forceVector;
	if (InfoForce(info).Length() > g_104454c4)
		forceVector = InfoForce(info);
	else
		forceVector = sub_1032b290(info);
	if (FlagB(m_flags268, 12))
		sub_100b1d10();
	forceVector = forceVector + m_vecVelocity3bc;
	if (!g_106bbaa4->w1() && g_106bbaa4->m_p2c && m_obj36c)
	{
		Vector d;
		((PhysView *)m_obj36c)->w40(&d, 0);
		forceVector += d;
		sub_100b2e30(&forceVector.x);
	}
	float len = forceVector.Length();
	if (len > 50000.0f)
	{
		g_109f3650(1, "Clamping ragdoll force from %.2f to %.2f.\n", (double)len, 50000.0);
		VectorNormalize(forceVector);
		forceVector *= 50000.0f;
	}
	((KView *)this)->w301(&forceVector, info);
	m_field146c = 0;
	if (info->m_pInflictor)
	{
		KView *pObj = *(KView **)((char *)info->m_pInflictor + 0x9c);
		if (pObj)
			pObj->w300(this, ((CUnknown101c2ab0 *)pInfo)->sub_101c2ab0(), info->sub_101c2af0());
	}
}
// END FUNCTION

// FUNCTION: 0x1032bdf0 size=0x6f
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc403()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Event_Dying";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1032c0e0 size=0x3a8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CTakeDamageInfo.h"
#include "CAI_BaseNPC.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"
#include "ehandle.h"
#include "engineserver.h"
#include "engineiface.h"
#include "globalvars.h"

#define PS(n) virtual void p##n();
#define PS10(a) PS(a##0) PS(a##1) PS(a##2) PS(a##3) PS(a##4) PS(a##5) PS(a##6) PS(a##7) PS(a##8) PS(a##9)
struct CSlotsA
{
	PS10(0) PS10(1) PS10(2) PS10(3) PS10(4) PS10(5)
	PS(60) PS(61) PS(62) PS(63) PS(64) PS(65)
	virtual void s66();
	PS(67) PS(68) PS(69)
	PS10(7) PS10(8) PS10(9) PS10(10) PS10(11) PS10(12)
	PS(130) PS(131) PS(132) PS(133) PS(134) PS(135) PS(136)
	virtual CBaseEntity *s137();
	PS(138) PS(139)
	PS10(14) PS10(15) PS10(16) PS10(17) PS10(18) PS10(19) PS10(20) PS10(21) PS10(22) PS10(23)
	PS(240) PS(241) PS(242)
	virtual void s243(int a);
	virtual int s244(int a);
};
struct CNpcView { char pad[0x1a94]; EHANDLE m_h1a94; };
struct CCorpseView { char pad[0xa8]; void *m_pA8; char pad2[0x17c - 0xac]; float m_flNextThink17c; };
void sub_101cd940(CBaseEntity *p);
void sub_101c0b10();
void sub_102696f0();
struct CVendorUnit { char sub_10207df0(CBaseEntity *p); };
extern CVendorUnit g_1074f028;

inline void EmitBurnSound(CBaseCombatCharacter *pThis)
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)pThis);
	filter.MakeReliable();
	int edict = (int)pThis->m_pEdict2e0;
	enginesound->vfunc3(&filter, engine->vfunc35(edict), 0, "character/vampire burning death.wav", 1.0f, 0.8f, 1, 100, 0, 0, 1, 0);
}

// TARGET: CBaseCombatCharacter::vfunc301
void CBaseCombatCharacter::vfunc301(const Vector *pForce, CTakeDamageInfo *pInfo)
{
	ScopeTrace trace("CBaseCombatCharacter::CreateCorpse", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	{
		Vector vecHalf;
		float flHalf = FastSqrt(pForce->x * pForce->x + pForce->y * pForce->y + pForce->z * pForce->z) * 0.5;
		vecHalf.sub_1010e530(-flHalf, flHalf);
	}
	if (m_pNPC98) {
		CNpcView *pNpc = (CNpcView *)m_pNPC98;
		m_pNPC98->sub_10265a90(pNpc->m_h1a94.Get());
	}
	int bone;
	if (pInfo->sub_101c2a30() > -1) {
		int idx = pInfo->sub_101c2a30();
		char *pStudio = (char *)sub_100952d0(-1);
		char *pHdr = pStudio + *(int *)(pStudio + 0x104);
		char *pHit;
		if (!pHdr)
			pHit = 0;
		else
			pHit = pHdr + *(int *)(pHdr + 8) + idx * 32;
		bone = *(int *)pHit;
	} else {
		bone = sub_10092550((int)"Bip01 Spine2");
	}
	CBaseEntity *pCorpse;
	if (m_pA8) {
		pCorpse = (CBaseEntity *)sub_1032be80();
		EHANDLE *ph = (EHANDLE *)((char *)this + 0xff8);
		int n = 0x12;
		do {
			sub_101cd940(ph->Get());
			ph++;
		} while (--n);
	} else if (!sub_1033c900(0x80000)) {
		sub_10090180((int)pForce, bone, 0);
		pCorpse = ((CSlotsA *)this)->s137();
	} else {
		pCorpse = (CBaseEntity *)sub_1032be80();
		((CSlotsA *)this)->s66();
		sub_100ac4e0((int)sub_101c0b10, 0, 0);
		((CCorpseView *)this)->m_flNextThink17c = gpGlobals->curtime + 0.5f;
	}
	if (pCorpse) {
		CCorpseView *pView = (CCorpseView *)pCorpse;
		if (g_1074f028.sub_10207df0(this)) {
			if (!pView->m_pA8) {
				((CSlotsA *)pCorpse)->s243(((CSlotsA *)this)->s244(1));
				pCorpse->sub_100ac4e0((int)sub_101c0b10, 0, 0);
				pView->m_flNextThink17c = gpGlobals->curtime + 10.0f;
				EmitBurnSound(this);
			}
		} else if (!pView->m_pA8) {
			pCorpse->sub_100ac4e0((int)sub_102696f0, 0, 0);
			pView->m_flNextThink17c = gpGlobals->curtime + 10.0f;
		}
		sub_101cd940((CBaseEntity *)m_hAnimFollowModel.Get());
		*(unsigned int *)&m_hAnimFollowModel = 0xffffffff;
		sub_1009d1e0();
		pCorpse->sub_1009d1e0();
	}
}
// END FUNCTION

// FUNCTION: 0x1032c580 size=0xd4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

extern "C" int _strcmpi(const char *, const char *);

#define W10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define W100(p) W10(p##0) W10(p##1) W10(p##2) W10(p##3) W10(p##4) W10(p##5) W10(p##6) W10(p##7) W10(p##8) W10(p##9)

class CWeaponNameUnit
{
public:
    W100(a) W100(b) W100(c) W10(d0) W10(d1) W10(d2) W10(d3)
    virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7();
    virtual const char *GetClassname();
    void sub_103f9160(int a);
};

void CBaseCombatCharacter::vfunc300(int a, int b, int c)
{
    ScopeTrace trace("CBaseCombatCharacter::Event_TookLife", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (*(unsigned char *)((char *)this + 0xe38) & 4) {
        for (int i = 0; i < sub_1032e890(); i++) {
            CWeaponNameUnit *pWeapon = (CWeaponNameUnit *)sub_1032e8b0(i);
            if (pWeapon && !_strcmpi(pWeapon->GetClassname(), "item_p_occult_regen"))
                pWeapon->sub_103f9160(a);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1032ce40 size=0x1ff
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWeaponOwner.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "ScopeTrace.h"

extern int (*g_109f3868)(int, int);

void CBaseCombatCharacter::vfunc386()
{
	ScopeTrace trace("CBaseCombatCharacter::Weapon_Drop", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!(!*(char *)((char *)this + 0x1589))) return; if (CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0())
		{
			if (pWeapon->sub_102577e0())
			{
				if (sub_100b3700() & 0x2000)
				{
					int i = 0;
					while (i < 2)
					{
						int *pClip = (int *)((char *)pWeapon + 0x74c) + i;
						if (pWeapon->vfunc277(i))
						{
							CWeaponOwner *pOwner = pWeapon->sub_102517b0();
							int *pRoll = (int *)((char *)pOwner + 0x2668 + i * 0x1093c);
							*pClip = g_109f3868(1, pRoll[3]);
						}
						else
						{
							int nMax = pWeapon->vfunc276(i);
							if (nMax > 0)
								*pClip = g_109f3868(1, pWeapon->vfunc276(i));
							else
								*pClip = 0;
						}
						i++;
					}
				}
				if (pWeapon->sub_100b5190())
					pWeapon->vfunc78();
				if (m_hEa4 == pWeapon)
					m_hEa4 = 0;
				if (m_hEa8 == pWeapon)
					m_hEa8 = 0;
				pWeapon->vfunc300();
				sub_10335470(pWeapon);
				if (sub_100b3700() & 0x2000)
					sub_1032cbe0(pWeapon);
			}
		}
}
// END FUNCTION

// FUNCTION: 0x1032d0c0 size=0x1af
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "ScopeTrace.h"

// TARGET: CBaseCombatCharacter::vfunc385
void CBaseCombatCharacter::vfunc385(CBaseCombatWeapon *pWeapon, int nUnused, char bForce)
{
	ScopeTrace trace("CBaseCombatCharacter::Weapon_Drop", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pWeapon) {
		if ((CBaseCombatWeapon *)sub_1032e7b0() == pWeapon) {
			(*(void (__fastcall ***)(CBaseCombatCharacter *))this)[386](this);
			return;
		}
		if (pWeapon->sub_102577e0() || bForce) {
			if (pWeapon->vfunc371() && *(int *)((char *)pWeapon + 0x8d0) > 1) {
				--*(int *)((char *)pWeapon + 0x8d0);
				CBaseCombatWeapon *pNew = (CBaseCombatWeapon *)sub_1032e120(pWeapon->vfunc348());
				if (pNew) {
					pNew->sub_10258620(0);
					pNew->vfunc300();
					return;
				}
			} else {
				if (m_hEa4.Get() == pWeapon)
					m_hEa4 = 0;
				if (m_hEa8.Get() == pWeapon)
					m_hEa8 = 0;
				pWeapon->vfunc300();
				sub_10335470(pWeapon);
				if (sub_100b3700() & 0x2000)
					sub_1032cbe0(pWeapon);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1032d2e0 size=0x7a
#include "CBaseCombatCharacter.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct Slot386 {
    V100(a) V100(b) V100(c)
    V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k)
    virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void l4(); virtual void l5();
    virtual void v386();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10620140[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::vfunc387()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10620140;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    ((Slot386 *)this)->v386();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1032d380 size=0x2aa
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseCombatWeapon.h"
bool __fastcall sub_10256280(void *p);
// TARGET: CBaseCombatCharacter::vfunc383
void CBaseCombatCharacter::vfunc383(CBaseCombatWeapon *pWeapon, char bNoEquip)
{
	ScopeTrace st("CBaseCombatCharacter::Weapon_Equip", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	bool bEquipped = false;
	sub_10334e70(pWeapon);
	if (!m_pA8 && !bNoEquip && !sub_10256280(pWeapon)) {
		if (m_hActiveWeapon19a4.Get()) {
			((CBaseCombatWeapon *)m_hActiveWeapon19a4.Get())->vfunc316(0);
			((CBaseCombatWeapon *)m_hActiveWeapon19a4.Get())->vfunc66();
		}
		m_hActiveWeapon19a4 = (CBaseEntity *)pWeapon;
		((CBaseCombatWeapon *)m_hActiveWeapon19a4.Get())->vfunc67();
		sub_10335de0(m_hActiveWeapon19a4.Get());
		bEquipped = true;
		if (*(unsigned *)((char *)this + 0x204) & 0x100) {
			*(unsigned *)((char *)m_hActiveWeapon19a4.Get() + 0x8c0) = 0x4e6e6b28;
			*(unsigned *)((char *)m_hActiveWeapon19a4.Get() + 0x8c4) = 0x4e6e6b28;
		}
	}
	pWeapon->vfunc298(this, *(int *)&bNoEquip);
	if (!sub_10256280(pWeapon))
		*((char *)this + 0x1588) = 1;
	if (!bNoEquip && bEquipped) {
		pWeapon->vfunc315();
		return;
	}
	if (!m_pA8)
		pWeapon->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x1032d6e0 size=0x14e
#include "CBaseCombatCharacter.h"

struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern "C" int __cdecl _strcmpi(const char *, const char *);

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CccVt
{
	S100(a) S100(b) S100(c) S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3();
	virtual int TakeAmmo(int a, int b, int c);
};

struct NameObj
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual const char *GetName();
};

struct NameHolder
{
	virtual void a0(); virtual void a1(); virtual void a2();
	virtual NameObj *GetObj();
};

struct AmmoEdict
{
	char pad[0x40];
	NameHolder *m_pHolder;
};

struct AmmoWeapon
{
	S100(a) S100(b) S100(c) S10(d0) S10(d1) S10(d2)
	virtual void e0(); virtual void e1(); virtual void e2();
	virtual bool Notify(int a, int b, int c, int d, int e, int f);
};

// TARGET: CBaseCombatCharacter::vfunc384
void CBaseCombatCharacter::vfunc384(CBaseEntity *pAmmoWeapon)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Weapon_EquipAmmoOnly";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	for (int i = 0; i < 0xe0; i++)
	{
		if (sub_1032e8b0(i))
		{
			AmmoEdict *edict = (AmmoEdict *)pAmmoWeapon->m_pEdict2e0;
			const char *ammoName;
			if (!edict->m_pHolder)
				ammoName = g_106b8540;
			else
				ammoName = edict->m_pHolder->GetObj()->GetName();
			const char **pcls = (const char **)((char *)sub_1032e8b0(i) + 0x11c);
			const char *cls = *pcls;
			if (!cls)
				cls = g_106b8540;
			if (_strcmpi(cls, ammoName) == 0)
			{
				int *p = (int *)((char *)pAmmoWeapon + 0x74c);
				*((char *)this + 0x1588) = 0;
				bool bAny = false;
				for (int k = 2; k != 0; k--)
				{
					int count = p[0];
					int taken = ((CccVt *)this)->TakeAmmo(count, p[-2], 0);
					p[0] -= taken;
					if (taken > 0)
						bAny = true;
					p++;
				}
				*((char *)this + 0x1588) = 1;
				if (bAny)
					((AmmoWeapon *)pAmmoWeapon)->Notify(10, 3, 0, 0, 0, 0);
				--*g_109f3680;
				return;
			}
		}
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1032d9b0 size=0x14e
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
#define SL5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define SL10(p) SL5(p##a) SL5(p##b)
#define SL50(p) SL10(p##a) SL10(p##b) SL10(p##c) SL10(p##d) SL10(p##e)
struct WepRec { int key; int ref; char flag; };
struct WepL {
    SL50(w0) SL50(w1) SL50(w2) SL50(w3) SL50(w4) SL50(w5) SL50(w6) SL10(w7)
    virtual void x0(); virtual void x1();
    virtual WepRec *v362();
    virtual int v363();
};
struct CharL {
    SL50(c0) SL50(c1) SL50(c2) SL50(c3) SL50(c4) SL50(c5) SL50(c6) SL10(c7) SL10(c8)
    SL5(c9)
    virtual void y0();
    virtual int v376(int a);
};

bool CBaseCombatCharacter::sub_1032d9b0(void *pWeapon)
{
    const char *ent;
    if (this) {
        ent = *(const char **)((char *)this + 0x26c);
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseCombatCharacter::Weapon_CanUse", ent, g_106b8540);
    WepL *w = (WepL *)pWeapon;
    CharL *self = (CharL *)this;
    WepRec *recs = w->v362();
    int count = w->v363();
    for (int i = 0; i < count; i++) {
        if (recs[i].flag) {
            int a = self->v376(recs[i].ref);
            if (((CBaseAnimating *)this)->sub_1008dd30(a, -1) < 0) {
                int j;
                for (j = 0; j < count; j++) {
                    if (recs[i].key == recs[j].key && i != j) {
                        int b = self->v376(recs[j].ref);
                        if (((CBaseAnimating *)this)->sub_1008dd30(b, -1) >= 0)
                            break;
                    }
                }
                if (j == count)
                    return false;
            }
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1032dde0 size=0x289
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "CBCCSlotViews.h"

class CSlot443View
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2) VIEW_SLOT100(3)
	VIEW_SLOT10(40) VIEW_SLOT10(41) VIEW_SLOT10(42) VIEW_SLOT10(43) VIEW_SLOT(440) VIEW_SLOT(441) VIEW_SLOT(442)
	virtual void vfunc443(void *pWeapon);
};

char __fastcall sub_10256280(void *pWeapon);
int __fastcall sub_102517b0(void *pWeapon);

#define H10E0 (*(EHANDLE *)((char *)this + 0x10e0))
#define HEA4 (*(EHANDLE *)((char *)this + 0xea4))
#define HEA8 (*(EHANDLE *)((char *)this + 0xea8))
#define POBJA8 (*(CSlot443View **)((char *)this + 0xa8))
#define WEAP(p) ((CEntityVSlots *)(p))
#define CBE(p) ((CBaseEntity *)(p))

char CBaseCombatCharacter::vfunc388(void *weapon, int a)
{
	ScopeTrace scope("CBaseCombatCharacter::Weapon_Switch", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!sub_1032db60(weapon))
		return 0;
	if (sub_1032e7b0() == weapon)
		return 1;
	if (sub_10341510() == weapon)
		return 1;
	if (weapon && sub_10256280(weapon))
	{
		H10E0 = m_hActiveIArmor;
		sub_10335ea0(m_hActiveIArmor.Get());
		*(unsigned int *)&m_hActiveIArmor = *WEAP(weapon)->slot1();
		sub_10335de0(m_hActiveIArmor.Get());
		return 1;
	}
	if (sub_1032e7b0())
	{
		if ((*(unsigned int *)(sub_102517b0(sub_1032e7b0()) + 0x242c) & 1) != 1)
		{
			CSlot443View *pObj;
			if (this && (pObj = POBJA8) != 0)
				pObj->vfunc443(sub_1032e7b0());
			else
				HEA4 = CBE(sub_1032e7b0());
			if (*(int *)(sub_102517b0(sub_1032e7b0()) + 0x24d0) == 0)
				HEA8 = CBE(sub_1032e7b0());
		}
	}
	if (sub_1032e7b0())
	{
		sub_10335ea0(CBE(sub_1032e7b0()));
		if (!((CBaseCombatWeapon *)sub_1032e7b0())->vfunc316((int)weapon))
			return 0;
	}
	m_hActiveWeapon19a4 = CBE(weapon);
	if (weapon)
	{
		((CBaseCombatWeapon *)weapon)->vfunc315();
		sub_10335de0(CBE(sub_1032e7b0()));
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1032e330 size=0x385
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "S1033d380.h"
#include "CBaseCombatCharacter.h"
#include "animevent_t.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include "CBaseAnimating.h"
#include "CUnknown101e0f00.h"
#include "COrnamentProp.h"

extern CUnknown101e0f00 g_10739a4c;
void sub_101cd940(CBaseEntity *p);
char *sub_101d3730(const char *fmt, ...);
char **sub_10203ed0(char **tmp, char *s);
COrnamentProp *sub_10190e50(const char *pszModel, CBaseEntity *pParent);

static inline CBaseEntity *LookH(const unsigned int &rh)
{
	if (rh == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[rh & 0x1fff];
	if (pSlot->m_Serial == (int)(rh >> 13))
		return (CBaseEntity *)pSlot->m_pEntity;
	return 0;
}

// TARGET: CBaseCombatCharacter::sub_1032e330
void CBaseCombatCharacter::sub_1032e330(void *pv)
{
	animevent_t *pEvent = (animevent_t *)pv;
	ScopeTrace trace("CBaseCombatCharacter::HandleAnimEvent", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pEvent->pSource != (CBaseEntity *)this || (pEvent->event >= 3000 && pEvent->event <= 3999)) {
		sub_1032e210(pEvent);
		return;
	}
	switch (pEvent->event) {
	case 0x1004:
	case 0x1006: {
		sub_101cd940(LookH(m_hAnimFollowModel.m_Index));
		char *name;
		if (pEvent->event == 0x1006)
			name = sub_101d3730("%s_%s.mdl", pEvent->options, sub_10336920() ? "male" : "female");
		else
			name = sub_101d3730("%s.mdl", pEvent->options);
		char *tmp;
		const char *str = *sub_10203ed0(&tmp, name);
		if (!str)
			str = g_106b8540;
		COrnamentProp *pProp = sub_10190e50(str, (CBaseEntity *)this);
		if (pProp) {
			m_hAnimFollowModel.m_Index = *((IHandleEntity *)pProp)->vfunc1();
			return;
		}
		m_hAnimFollowModel.m_Index = 0xffffffff;
		return;
	}
	case 0x1005:
		sub_101cd940((CBaseEntity *)EHandle_Get(m_hAnimFollowModel.m_Index));
		m_hAnimFollowModel.m_Index = 0xffffffff;
		break;
	case 0xfa7:
		if (m_hTarget1538.Get() && m_nTarget153c == 0) {
			CBaseEntity *pT = m_hTarget1538.Get();
			if (pT) {
				vfunc351((CBaseCombatCharacter *)pT);
				return;
			}
		}
		break;
	case 0xfa6:
		if (m_hTarget1538.Get() && m_nTarget153c == 1)
			break;
		if (m_hTarget1538.Get() && m_nTarget153c == 0) {
			c353();
			return;
		}
		break;
	case 0xfb4:
		g_10739a4c.sub_101e3e70((S1033d380 *)(void *)this, pEvent->options);
		return;
	default:
		((CBaseAnimating *)(void *)this)->vfunc259((animevent_t *)pEvent);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x1032ebc0 size=0x9d
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106203f4[];
extern char g_106b8540[];
extern char g_105387dc[];
int CBaseCombatCharacter::vfunc143(float flHealth, int bitsDamageType)
{
    const char *name;
    if (this)
        name = m_name26c ? m_name26c : g_106b8540;
    else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106203f4;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (m_nTakeDamage == 0) {
        --*g_109f3680;
        return 0;
    }
    int r = CBaseEntity::vfunc143(flHealth, bitsDamageType);
    --*g_109f3680;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1032ef60 size=0x4bd
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "ScopeTrace.h"
#include "CVStatList_t.h"
#include "CBCCSlotViews.h"
#include "CVDmg_t.h"
#include "CTakeDamageInfo.h"
#include "CBaseCombatCharacter.h"

class CUnknown101e3cf0
{
public:
	void sub_101e3cf0(void *p);
};
extern CUnknown101e3cf0 g_10739a4c;
struct CBCCView { char sub_10323930(void *p); };
CBaseEntity *__fastcall sub_1032e7b0(CBaseEntity *p);

class CBCCV142
{
public:
	VIEW_SLOT100(0)
	VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13)
	VIEW_SLOT(140) VIEW_SLOT(141) VIEW_SLOT(142) VIEW_SLOT(143)
	virtual void vfunc144(void *pInfo);
	VIEW_SLOT(145) VIEW_SLOT(146) VIEW_SLOT(147) VIEW_SLOT(148) VIEW_SLOT(149)
	VIEW_SLOT10(15) VIEW_SLOT10(16) VIEW_SLOT10(17) VIEW_SLOT10(18) VIEW_SLOT10(19)
	VIEW_SLOT100(2)
	VIEW_SLOT10(30) VIEW_SLOT10(31) VIEW_SLOT10(32) VIEW_SLOT10(33) VIEW_SLOT10(34)
	VIEW_SLOT10(35) VIEW_SLOT10(36) VIEW_SLOT10(37) VIEW_SLOT10(38)
	virtual int vfunc390(void *pInfo);
	virtual int vfunc391(void *pInfo);
	virtual int vfunc392(void *pInfo);
	VIEW_SLOT(393) VIEW_SLOT(394) VIEW_SLOT(395) VIEW_SLOT(396) VIEW_SLOT(397) VIEW_SLOT(398)
	virtual bool vfunc399();
	VIEW_SLOT(400) VIEW_SLOT(401)
	virtual bool vfunc402();
	virtual void vfunc403();
};

struct CTDIAttacker
{
	char m_pad0000[0x9c];
	void *m_pOwner9c;
	char m_pad00a0[0xa8 - 0xa0];
	void *m_pa8;
};

inline int DamageTypeOf(const CTakeDamageInfo *p)
{
	return p->m_pVDmg00 ? (p->m_pVDmg00->m_field10 | p->m_n38) : p->m_n38;
}

inline float DamageOf(const CTakeDamageInfo *p)
{
	return p->m_pVDmg00 ? (float)p->m_pVDmg00->sub_101faa70() : p->m_flDamage;
}

extern float g_104454c4;

int CBaseCombatCharacter::vfunc142(void *pInfo)
{
	ScopeTrace scope("CBaseCombatCharacter::OnTakeDamage", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CTakeDamageInfo *info = (CTakeDamageInfo *)pInfo;
	int retVal;

	if (!m_nTakeDamage)
		return 0;

	void *pOwner = info->m_pInflictor;
	if (pOwner)
		pOwner = ((CTDIAttacker *)pOwner)->m_pOwner9c;
	if (((CBCCView *)this)->sub_10323930(pOwner) && info->m_pInflictor != this)
		return 0;

	g_10739a4c.sub_101e3cf0(this);

	switch (m_field200)
	{
	case 0:
	{
		retVal = ((CBCCV142 *)this)->vfunc390(pInfo);
		int a = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);
		int b = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x11);
		sub_10324ba0();
		if (a >= b)
		{
			((CBCCV142 *)this)->vfunc144(pInfo);
			bool bGibbed = false;
			if (((CBCCV142 *)this)->vfunc399() || ((DamageTypeOf(info) & 0x2000) && !(DamageTypeOf(info) & 0x1000)))
			{
				bGibbed = ((CBCCV142 *)this)->vfunc402();
				retVal = bGibbed;
			}
			if (!bGibbed)
				((CBCCV142 *)this)->vfunc403();

			CBaseEntity *pAttacker = (CBaseEntity *)info->m_pInflictor;
			if (pAttacker && pAttacker != this && ((CTDIAttacker *)pAttacker)->m_pa8)
			{
				CBaseEntity *pWeapon = ::sub_1032e7b0(pAttacker);
				if (pWeapon && (((CWeaponSlotView *)pWeapon)->vfunc360() & 0x18000)
					&& CVStatListSet::Of(pAttacker)->Find(3)->sub_102012d0(9) > 0)
					sub_1032ec90(4, (int)((CTDIAttacker *)pAttacker)->m_pa8, (int)pInfo);
			}
		}
		else
		{
			CBaseEntity *pAttacker = (CBaseEntity *)info->m_pInflictor;
			if (pAttacker && pAttacker != this && ((CTDIAttacker *)pAttacker)->m_pa8)
			{
				CBaseEntity *pWeapon = ::sub_1032e7b0(pAttacker);
				if (pWeapon && (((CWeaponSlotView *)pWeapon)->vfunc360() & 0x18000)
					&& CVStatListSet::Of(pAttacker)->Find(3)->sub_102012d0(9) > 0)
				{
					int level = 0;
					float flDamage = DamageOf(info);
					if (flDamage > 5.0f)
						level = 2;
					else if (flDamage > 1.0f)
						level = 1;
					else if (flDamage > g_104454c4)
						level = 0;
					switch (level)
					{
					case 0: sub_1032ec90(1, (int)((CTDIAttacker *)pAttacker)->m_pa8, (int)pInfo); break;
					case 1: sub_1032ec90(2, (int)((CTDIAttacker *)pAttacker)->m_pa8, (int)pInfo); break;
					case 2: sub_1032ec90(3, (int)((CTDIAttacker *)pAttacker)->m_pa8, (int)pInfo); break;
					default: sub_1032ec90(1, (int)((CTDIAttacker *)pAttacker)->m_pa8, (int)pInfo); break;
					}
				}
			}
		}
		return retVal;
	}
	case 1:
		return ((CBCCV142 *)this)->vfunc391(pInfo);
	default:
		retVal = ((CBCCV142 *)this)->vfunc392(pInfo);
		if (m_iHealth <= 0 && (DamageTypeOf(info) & 0xe1))
		{
			((CBCCV142 *)this)->vfunc402();
			retVal = 0;
		}
		return retVal;
	}
}
// END FUNCTION

// FUNCTION: 0x1032fb80 size=0x98
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

#define SL5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define SL10(p) SL5(p##a) SL5(p##b)
#define SL50(p) SL10(p##a) SL10(p##b) SL10(p##c) SL10(p##d) SL10(p##e)
struct PoseSetter {
    SL50(q0) SL50(q1) SL50(q2) SL50(q3) SL50(q4) SL50(q5) SL10(q6a) SL10(q6b) SL10(q6c) SL10(q6d) SL5(q7)
    virtual void q8();
    virtual void vfunc346(int pose, int a, int b);
};

// TARGET: CBaseCombatCharacter::vfunc345
void CBaseCombatCharacter::vfunc345(const char *pszName, int a, int b)
{
    const char *ent;
    if (this != 0) {
        ent = m_name26c;
        if (ent == 0)
            ent = g_106b8540;
    } else
        ent = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SetPoseParameter";
    g_109f3620[*g_109f3680].b = ent;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    ((PoseSetter *)this)->vfunc346(sub_10092270(pszName), a, b);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1032fc50 size=0x19d
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include <math.h>
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct SPoseHdr;
struct SPoseParamView { int pad0; int pad1; float start; float end; float loop; };
SPoseHdr *sub_100c73b0(SPoseHdr *pHdr, int iParameter);

float CBaseCombatCharacter::vfunc346(int iParameter, float flValue, char bClamp)
{
	ScopeTrace trace("CBaseCombatCharacter::SetPoseParameter", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	for (int i = 0; i < 2; i++)
	{
		if (iParameter == m_nPoseIndex[i])
		{
			m_flPoseValue[i] = flValue;
			if (bClamp && sub_100952d0(-1))
			{
				SPoseParamView *pPose = (SPoseParamView *)sub_100c73b0((SPoseHdr *)sub_100952d0(-1), iParameter);
				if (!pPose)
					continue;
				if (pPose->loop != 0.0f)
				{
					float wrap = (pPose->start + pPose->end) / 2.0 + pPose->loop / 2.0;
					float shift = pPose->loop - wrap;
					flValue = flValue - pPose->loop * floor((flValue + shift) / pPose->loop);
				}
				float flRemain = (flValue - pPose->start) / (pPose->end - pPose->start);
				if (flRemain < 0.0f)
					flRemain = 0.0f;
				else if (flRemain > 1.0f)
					flRemain = 1.0f;
				flValue = (pPose->end - pPose->start) * flRemain + pPose->start;
			}
			return flValue;
		}
	}
	return sub_10091fe0(iParameter, flValue);
}
// END FUNCTION

// FUNCTION: 0x1032fe60 size=0x158
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseCombatCharacter.h"

// TARGET: CBaseCombatCharacter::vfunc348
int CBaseCombatCharacter::vfunc348()
{
	ScopeTrace trace("CBaseCombatCharacter::HealthToPercent", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int a = GetActiveStatList()->sub_10010609(0x11);
	int b = GetActiveStatList()->sub_10010609(0xf);
	return (a - b) * m_iMaxHealth / a;
}
// END FUNCTION

// FUNCTION: 0x10330020 size=0x75
#include "CBaseCombatCharacter.h"
extern char g_10937cf2;
struct CDisciplineEntry {
    char m_pad[0x2c];
    float m_flDuration;
};
struct CDisciplineMgrView {
    int sub_101e1250(int a, int b);
    CDisciplineEntry *sub_101e11c0(int index);
};
extern CDisciplineMgrView g_10739a4c;

bool CBaseCombatCharacter::vfunc334(int a, int b)
{
    if (m_field146c > 0)
        return false;
    g_10937cf2 = 0;
    int nIndex = g_10739a4c.sub_101e1250(a, b);
    if (nIndex != -1) {
        CDisciplineEntry *pEntry = g_10739a4c.sub_101e11c0(nIndex);
        float flElapsed = gpGlobals->curtime - ((float *)((char *)this + 0xec0))[nIndex];
        float flDuration = pEntry->m_flDuration;
        if (flElapsed < flDuration) {
            g_10937cf2 = 1;
            return false;
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x103302e0 size=0x7f7
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CVStatInfoList_t.h"
#include "CVStatList_t.h"
#include "ScopeTrace.h"
#include "Tier1.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CTakeDamageInfo.h"
#include "CBaseAnimating.h"

// TARGET: CBaseCombatCharacter::sub_103302e0

extern Vector g_1070d1b0;
extern Vector g_1070ba40;
extern int g_10739a68;
extern CVStatInfoList_t g_1074e098;
extern float g_104454c4;

void sub_101cebc0(void *pEntity, int a, int b);
void sub_1023e4b0(void *pCharacter, int a);

class CUnknown101e8dc0 { public: int sub_101e8dc0(); };
class CUnknown101e8de0 { public: int sub_101e8de0(); };
class CUnknown101e8e60 { public: int sub_101e8e60(); };
class CUnknown101c2b30 { public: char sub_101c2b30(); };
class CNamedListXRem { public: void sub_101e3c10(int a, const char *name); };

class CUnknown10936de4
{
public:
	virtual char vfunc0();
	virtual char vfunc1();
	int m_field04;
	int m_field08;
	int m_field0c;
	int m_field10;
	int m_field14;
	int m_field18;
	int m_field1c;
	int m_field20;
	int m_field24;
	int m_field28;
	int m_field2c;
};
extern CUnknown10936de4 *g_10936de4;
extern char g_10739d08[];
extern char g_10739a4c[];

#define EVS(n) virtual void slot##n();
#define EVS10(p) EVS(p##0) EVS(p##1) EVS(p##2) EVS(p##3) EVS(p##4) EVS(p##5) EVS(p##6) EVS(p##7) EVS(p##8) EVS(p##9)

class CCBCCVSlots299
{
public:
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28)
	EVS(290) EVS(291) EVS(292) EVS(293) EVS(294) EVS(295) EVS(296) EVS(297) EVS(298)
	virtual void vfunc299(CTakeDamageInfo *pInfo, char *pResult);
};

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline float DamageValue(CTakeDamageInfo *pInfo)
{
	if (pInfo->m_pVDmg00)
		return (float)pInfo->m_pVDmg00->sub_101faa70();
	return pInfo->m_flDamage;
}

#pragma inline_depth(1)
int CBaseCombatCharacter::sub_103302e0(CTakeDamageInfo *pInfo)
{
	ScopeTrace scope("CBaseCombatCharacter::OnTakeDamage_Alive",
	                 this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (sub_1033b7c0())
		c358();

	if (sub_103300c0())
	{
		if (m_n168 != 0x1e && m_n168 != 0x1f)
		{
			m_n168 = 0x1a;
			((CBaseAnimating *)this)->sub_10090890(0);
		}

		const char *pszSound;
		switch (g_109f3868(0, 2))
		{
		case 0:
			pszSound = STRINGR(g_1074e098.sub_10200370(7)->m_apszSound[3]);
			break;
		case 1:
			pszSound = STRINGR(g_1074e098.sub_10200370(7)->m_apszSound[4]);
			break;
		default:
			pszSound = STRINGR(g_1074e098.sub_10200370(7)->m_apszSound[5]);
			break;
		}
		if (pszSound && pszSound[0] == 0)
			pszSound = STRINGR(g_1074e098.sub_10200370(7)->m_apszSound[3]);

		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		enginesound->vfunc0(pszSound, 0);
		int edict = m_pEdict2e0;
		enginesound->vfunc3(&filter, engine->vfunc35(edict), 4, pszSound,
		                    1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
	}
	else
	{
		if (sub_10330220())
		{
			if (m_n168 != 0x1e && m_n168 != 0x1f)
			{
				m_n168 = 0x25;
				((CBaseAnimating *)this)->sub_10090890(0);
			}
		}
	}

	char bResult = 0;
	((CCBCCVSlots299 *)this)->vfunc299(pInfo, &bResult);
	if (bResult)
		return 1;
	else
	{
		CBaseEntity *pInflictor = (CBaseEntity *)pInfo->m_pInflictor;
		if (pInflictor)
		{
			CBaseEntity *pPlayer = (CBaseEntity *)pInflictor->m_pA8;
			if (pPlayer)
				sub_101cebc0(pPlayer, 0x2a, (int)DamageValue(pInfo));
		}

		if (!((CUnknown101c2b30 *)pInfo)->sub_101c2b30() && m_pNPC98 && !m_pNPC98->m_b63d8)
			sub_1023e4b0(this, (int)DamageValue(pInfo));

		m_bitsDamageType = pInfo->m_pVDmg00
			? (pInfo->m_pVDmg00->m_field10 | pInfo->m_nFlags38)
			: pInfo->m_nFlags38;

		Vector vecDir = g_1070d1b0;
		if (pInfo->m_pAttacker)
		{
			vecDir = ((CEntitySoundOriginView *)pInfo->m_pAttacker)->WorldSpaceCenter() - Vector(0, 0, 10)
				- ((CEntitySoundOriginView *)this)->WorldSpaceCenter();
			VectorNormalize(vecDir);
		}
		g_1070ba40 = vecDir;

		if (m_nTakeDamage == 1)
			return 1;

		if (!g_10936de4->vfunc1() && g_10936de4->m_field2c)
			return 1;

		float flDamage;
		if (pInfo->m_pVDmg00)
		{
			int edict = engine->vfunc35(pcd_stage(m_pEdict2e0));
			flDamage = (float)pInfo->m_pVDmg00->sub_101fb200(edict, pInfo->sub_101c29b0());
		}
		else
		{
			flDamage = pInfo->m_flDamage;
		}

		if (flDamage > g_104454c4)
		{
			long iBlood = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x19);
			if (iBlood)
			{
				int nAbsorb = (int)(g_10739a68 * flDamage * 0.01f);
				flDamage -= (float)nAbsorb;
				if (nAbsorb >= iBlood)
				{
					CVStatListSet::Of(this)->Find(0)->sub_102008e0(0x19, 0);
					((CNamedListXRem *)g_10739a4c)->sub_101e3c10((int)this, "Thaumaturgy_Bloodshield");
				}
				else
				{
					CVStatListSet::Of(this)->Find(0)->sub_10201100(0x19, nAbsorb);
				}
			}

			if (flDamage > g_104454c4)
			{
				int nHealth = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);
				if (m_bIsUnkillable && (int)flDamage + nHealth > 75)
					flDamage = (float)(75 - nHealth);

				CVStatListSet::Of(this)->Find(0)->sub_10200fc0(0xf, (int)flDamage);

				if (sub_10337f30())
				{
					if (0xc8000008 & m_bitsDamageType)
						CVStatListSet::Of(this)->Find(0)->sub_10200fc0(0x10, (int)flDamage);

					if (pInfo->m_pInflictor && ((CBaseEntity *)pInfo->m_pInflictor)->m_p9c)
					{
						if ((float)((CUnknown101e8dc0 *)g_10739d08)->sub_101e8dc0() <= DamageValue(pInfo) ||
						    ((float)((CUnknown101e8de0 *)g_10739d08)->sub_101e8de0() <= DamageValue(pInfo) &&
						     (m_bitsDamageType & 0xc8000008)))
							sub_1033eb60(((CUnknown101e8e60 *)g_10739d08)->sub_101e8e60());
					}
				}

				m_iHealth = c348();
			}
		}
		return 1;
	}
}
// END FUNCTION

// FUNCTION: 0x103315e0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_103315e0(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::OnTakeDamage_Dying";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10331680 size=0xb9
#include "CBaseCombatCharacter.h"
#include "CVDmg_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseCombatCharacter::vfunc392(void *pInfo)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::OnTakeDamage_Dead";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (*(int *)((char *)this + 0x1fc) != 1) {
		CVDmg_t *pDmg = *(CVDmg_t **)pInfo;
		float dmg;
		if (pDmg)
			dmg = (float)pDmg->sub_101faa70();
		else
			dmg = *(float *)((char *)pInfo + 0x30);
		*(int *)((char *)this + 0x210) = (int)((float)*(int *)((char *)this + 0x210) - dmg);
	}
	--*g_109f3680;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10331880 size=0x97
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct ScopeGuard
{
	ScopeGuard(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~ScopeGuard() { (*g_109f3680)--; }
};

typedef QAngle *(__fastcall *PFN_ANGLES)(void *);

QAngle CBaseCombatCharacter::vfunc367()
{
	ScopeGuard guard("CBaseCombatCharacter::BodyAngles", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	return *((PFN_ANGLES)(*(void ***)this)[219])(this);
}
// END FUNCTION

// FUNCTION: 0x10331950 size=0xb6
#include "Vector.h"
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_10620864[];
extern float (__fastcall *g_1057966c)(Vector *pThis);

#define S10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
#define S100(x) S10(x##0) S10(x##1) S10(x##2) S10(x##3) S10(x##4) S10(x##5) S10(x##6) S10(x##7) S10(x##8) S10(x##9)
struct BodySlots {
	S100(a) S100(b) S100(c)
	S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual void vfunc369(Vector *pOut);
};

struct ScopeTraceGuard {
	ScopeTraceGuard(const char *a, const char *b, const char *c)
	{
		g_109f3620[*g_109f3680].a = a;
		g_109f3620[*g_109f3680].b = b;
		g_109f3620[*g_109f3680].c = c;
		++*g_109f3680;
	}
	~ScopeTraceGuard() { --*g_109f3680; }
};

Vector CBaseCombatCharacter::vfunc368()
{
	const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc;
	ScopeTraceGuard trace(g_10620864, name, g_106b8540);
	Vector vBodyDir;
	((BodySlots *)this)->vfunc369(&vBodyDir);
	vBodyDir.z = 0;
	g_1057966c(&vBodyDir);
	return vBodyDir;
}
// END FUNCTION

// FUNCTION: 0x10331a40 size=0xb8
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *name; const void *file; const void *line; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);

struct ScopeTrace
{
	ScopeTrace(const char *func, const char *name)
	{
		g_109f3620[*g_109f3680].name = func;
		g_109f3620[*g_109f3680].file = name;
		g_109f3620[*g_109f3680].line = g_106b8540;
		(*g_109f3680)++;
	}
	~ScopeTrace() { (*g_109f3680)--; }
};

#define SL1(n) virtual void s##n();
#define SL10(p) SL1(p##0) SL1(p##1) SL1(p##2) SL1(p##3) SL1(p##4) SL1(p##5) SL1(p##6) SL1(p##7) SL1(p##8) SL1(p##9)
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

class CBCCSlots367
{
public:
	SL100(0) SL100(1) SL100(2)
	SL10(30) SL10(31) SL10(32) SL10(33) SL10(34) SL10(35)
	SL1(360) SL1(361) SL1(362) SL1(363) SL1(364) SL1(365) SL1(366)
	virtual QAngle slot367();
};

// TARGET: CBaseCombatCharacter::vfunc369
Vector CBaseCombatCharacter::vfunc369()
{
	ScopeTrace trace("CBaseCombatCharacter::BodyDirection3D", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	QAngle ang = ((CBCCSlots367 *)this)->slot367();
	Vector fwd;
	::sub_10139610(&ang, &fwd, 0, 0);
	return fwd;
}
// END FUNCTION

// FUNCTION: 0x10331b30 size=0x12e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CCineNPCSlots.h"
#include "Vector.h"
#include "ScopeTrace.h"

void sub_101381b0(const float *in1, const float in2[3][4], float *out);

struct CBccHeadSlots
{
	CCS_V100(a) CCS_V100(b) CCS_V100(c) CCS_V10(d0) CCS_V10(d1) CCS_V10(d2) CCS_V10(d3) CCS_V10(d4) CCS_V10(d5)
	CCS_V(d360) CCS_V(d361) CCS_V(d362) CCS_V(d363) CCS_V(d364) CCS_V(d365) CCS_V(d366) CCS_V(d367) CCS_V(d368)
	virtual Vector BodyDirection3D();
};

Vector CBaseCombatCharacter::vfunc371()
{
	ScopeTrace trace("CBaseCombatCharacter::HeadDirection3D", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (engine->vfunc120() == m_nHeadTime108c)
		return m_vecHeadDir109c;
	if (m_nHeadBone1080 >= 0)
	{
		float matrix[3][4];
		vfunc256(m_nHeadBone1080, &matrix[0][0]);
		Vector vecDir;
		sub_101381b0(&m_vecHeadAxis1074.x, matrix, &vecDir.x);
		return vecDir;
	}
	return ((CBccHeadSlots *)this)->BodyDirection3D();
}
// END FUNCTION

// FUNCTION: 0x10331cb0 size=0xb6
#include "Vector.h"
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_106208f4[];
extern float (__fastcall *g_1057966c)(Vector *pThis);

#define S10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
#define S100(x) S10(x##0) S10(x##1) S10(x##2) S10(x##3) S10(x##4) S10(x##5) S10(x##6) S10(x##7) S10(x##8) S10(x##9)
struct HeadSlots {
	S100(a) S100(b) S100(c)
	S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9(); virtual void e10();
	virtual void vfunc371(Vector *pOut);
};

struct ScopeTraceGuard {
	ScopeTraceGuard(const char *a, const char *b, const char *c)
	{
		g_109f3620[*g_109f3680].a = a;
		g_109f3620[*g_109f3680].b = b;
		g_109f3620[*g_109f3680].c = c;
		++*g_109f3680;
	}
	~ScopeTraceGuard() { --*g_109f3680; }
};

Vector CBaseCombatCharacter::vfunc370()
{
	const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc;
	ScopeTraceGuard trace(g_106208f4, name, g_106b8540);
	Vector vHeadDir;
	((HeadSlots *)this)->vfunc371(&vHeadDir);
	vHeadDir.z = 0;
	g_1057966c(&vHeadDir);
	return vHeadDir;
}
// END FUNCTION

// FUNCTION: 0x10332010 size=0x80
#include "CBaseCombatCharacter.h"
struct ScopeTraceEntry { const char *m_pFunction; const char *m_pEntity; const char *m_pExtra; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
void CBaseCombatCharacter::vfunc50(int a)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = "";
	} else {
		name = "NULL ENTITY";
	}
	g_109f3620[*g_109f3680].m_pFunction = "CBaseCombatCharacter::GetCameraViewpointPosition";
	g_109f3620[*g_109f3680].m_pEntity = name;
	g_109f3620[*g_109f3680].m_pExtra = "";
	++*g_109f3680;
	sub_10014eb6(a, 0);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103320b0 size=0xbe
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntitySlots.h"
#include "ScopeTrace.h"

// TARGET: CBaseCombatCharacter::vfunc51
void CBaseCombatCharacter::vfunc51(int unused, float *pOut)
{
	ScopeTrace trace("CBaseCombatCharacter::GetCameraTargetPosition", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_b10d4)
	{
		sub_10014eb6((int)pOut, 0);
		return;
	}
	float buf[3];
	float *p = ((CBaseEntitySlots *)this)->slot192(buf);
	pOut[0] = p[0];
	pOut[1] = p[1];
	pOut[2] = p[2];
}
// END FUNCTION

// FUNCTION: 0x103321a0 size=0x78
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

float __fastcall sub_103321a0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetCameraFadeInTime";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    float r = *(float *)(self + 0x10d0);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10332240 size=0x78
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

float __fastcall sub_10332240(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetCameraFadeOutTime";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    float r = *(float *)(self + 0x10d0);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10332ef0 size=0x92
#include "CUnknown10332fc0.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CScopeTrace {
	CScopeTrace(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~CScopeTrace() { (*g_109f3680)--; }
};

void CUnknown10332fc0::sub_10332ef0(void *pSpeaker, int nDelta, int unused)
{
	CScopeTrace trace("CBaseCombatCharacter::AdjustDialogReaction", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	sub_103330f0(pSpeaker, sub_10332fc0(pSpeaker) + nDelta);
}
// END FUNCTION

// FUNCTION: 0x10333340 size=0x2f4
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

__declspec(dllimport) void DevMsg(const char *pMsg, ...);

struct CRelationRecord
{
	EHANDLE m_hEntity;
	int m_nClass;
	int m_nDisposition;
};

struct CRelationView
{
	char m_pad0000[0x98];
	CRelationView *m_pAI98;
	CBaseCombatCharacter *m_pOwner9c;
	char m_pad00a0[0x14bc - 0xa0];
	unsigned int m_nFlags14bc;
};

typedef int (__fastcall *PFN_SLOT)(CBaseEntity *pThis);
static inline int CallSlot(CBaseEntity *p, int slot) { return ((PFN_SLOT)(*(void ***)p)[slot])(p); }
static inline CBaseEntity *const &Ref(CBaseEntity *const &r) { return r; }

// TARGET: CBaseCombatCharacter::vfunc404
int CBaseCombatCharacter::vfunc404(CBaseEntity *pTarget)
{
	ScopeTrace trace("CBaseCombatCharacter::IRelationType", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	if (pTarget == this)
		return 0;
	if (!pTarget)
		return 0;
	CBaseCombatCharacter *pOwner = ((CRelationView *)pTarget)->m_pOwner9c;
	CRelationView *pThis = (CRelationView *)this;
	CRelationView *pOtherAI = ((CRelationView *)pTarget)->m_pAI98;
	if (pOwner && pOwner->m_b1480 && !pOwner->sub_100b5190()) {
		unsigned int flags = pThis->m_nFlags14bc;
		if (0x20000 == (flags & 0x20000)) {
			if (!pTarget->m_pA8) return 1; return 3;
		}
		if ((flags & 0x10000) == 0x10000)
			return 3;
		if (0x40000 == (flags & 0x40000)) {
			if (pOtherAI && (pOtherAI->m_nFlags14bc & 0x40000) != 0x40000) {
				CBaseEntity *pCompare;
				CRelationView *pMyAI = pThis->m_pAI98;
				if (pMyAI)
					pCompare = ((EHANDLE *)(0x628c + (char *)pMyAI))->Get();
				else
					pCompare = *(CBaseEntity *volatile *)&pTarget;
				if (pCompare && (CBaseEntity *)CallSlot((CBaseEntity *)pOtherAI, 168) == pCompare)
					return 1;
			}
			return 3;
		}
		if (0 < m_field146c && sub_10337f30())
			return 1;
	}
	if (m_nRelationships15a0) {
		CRelationRecord **ppRecords = (CRelationRecord **)m_ppRelationships1598;
		if (ppRecords) {
			CRelationRecord **pp = ppRecords;
			int i;
			i = 0; while (i < m_nRelationships15a0) { if (pTarget == (*pp)->m_hEntity.Get())
					return ppRecords[i]->m_nDisposition; i++, pp++; }
			if (CallSlot(pTarget, 138)) {
				i = 0; while (i < m_nRelationships15a0) { if (CallSlot(pTarget, 138) == ((CRelationRecord **)m_ppRelationships1598)[i]->m_nClass)
						return ((CRelationRecord **)m_ppRelationships1598)[i]->m_nDisposition; ++i; }
			}
		} else {
			DevMsg("ERROR: no relationships found, but there SHOULD be!\n");
		}
	}
	return 4;
}
// END FUNCTION

// FUNCTION: 0x10333700 size=0x15a
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
extern char g_105387dc[];
#define SL5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define SL10(p) SL5(p##a) SL5(p##b)
#define SL50(p) SL10(p##a) SL10(p##b) SL10(p##c) SL10(p##d) SL10(p##e)
struct TargetL {
    SL50(t0) SL50(t1) SL10(t2) SL10(t3) SL10(t4) SL5(t5)
    virtual void u0(); virtual void u1(); virtual void u2();
    virtual int v138();
};
struct RelRec { EHANDLE handle; int cls; int pad; int priority; };
struct RelHolder {
    char pad[0x1598];
    RelRec **m_pTable;
    int m_nCap;
    int m_nCount;
};

int CBaseCombatCharacter::sub_10333700(CBaseEntity *pTarget)
{
    const char *ent;
    if (this) {
        ent = *(const char **)((char *)this + 0x26c);
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseCombatCharacter::IRelationPriority", ent, g_106b8540);
    if (!pTarget)
        return 0;
    RelHolder *self = (RelHolder *)this;
    int i;
    for (i = 0; i < self->m_nCount; i++) {
        if (pTarget == self->m_pTable[i]->handle.Get())
            return self->m_pTable[i]->priority;
    }
    for (i = 0; i < self->m_nCount; i++) {
        if (((TargetL *)pTarget)->v138() == self->m_pTable[i]->cls)
            return self->m_pTable[i]->priority;
    }
    return 5;
}
// END FUNCTION

// FUNCTION: 0x103338c0 size=0x19c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "Vector.h"

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);

Vector CBaseCombatCharacter::vfunc389(const Vector &vecSrc)
{
	ScopeTrace trace("CBaseCombatCharacter::Weapon_ShootPosition", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseAnimating *pWeapon = (CBaseAnimating *)sub_1032e7b0();
	if (pWeapon) {
		Vector vecPos;
		Vector vecDummy;
		if ((char)pWeapon->sub_10092e20((int)"muzzleflash", (int)&vecPos, (int)&vecDummy))
			return vecPos;
	}
	Vector forward, right, up;
	::sub_10139610(*(const QAngle *)((CEntityVSlots *)this)->slot221(), &forward, &right, &up);
	return forward * m_f157c + vecSrc + right * m_f1578 + up * m_f1580;
}
// END FUNCTION

// FUNCTION: 0x10334180 size=0x1ed
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGameRules.h"
#include "CGameRulesSlotTable.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "ScopeTrace.h"
#include "engineiface.h"
#include "engineserver.h"

extern CGameRules *g_1070ba0c;

struct CGameRulesAmmoView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
	virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
	virtual CGameRulesSlotTable *GetAmmoTable();
};

int CBaseCombatCharacter::vfunc374(int count, int ammoIndex, int unused)
{
	ScopeTrace trace("CBaseCombatCharacter::GiveAmmo", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	if (count <= 0)
		return 0;
	if (!g_1070ba0c->vfunc53(this, ammoIndex))
		return 0;
	if (ammoIndex < 0 || ammoIndex >= 32)
		return 0;
	int limit = ((CGameRulesAmmoView *)g_1070ba0c)->GetAmmoTable()->sub_10427620(ammoIndex);
	int have = m_iAmmo[ammoIndex];
	int avail = limit - have;
	int add = (count < avail) ? count : avail;
	if (add < 1)
		return 0;
	if (!(char)unused) {
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int edict = m_pEdict2e0;
		enginesound->vfunc3(&filter, engine->vfunc35(edict), 3, "weapons/misc/ammo_pickup.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
	}
	m_iAmmo[ammoIndex] += add;
	return add;
}
// END FUNCTION

// FUNCTION: 0x10334a50 size=0x86
#include "CBaseCombatCharacter.h"
#include "CBaseEntitySlots.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc228(int a, int b)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::VPhysicsShadowCollision";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CBaseEntitySlots *)this)->slot75(a, b);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10335f60 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10335f60(char *self, int, int a, int b)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Inventory_ShouldAllow_Autopickup";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10336000 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10336000(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Inventory_ShouldAllow_AutopickupAmmo";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10336cd0 size=0x75
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseCombatCharacter::vfunc307()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasUsableMeleeWeapon";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = sub_10336a50();
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10336d70 size=0x142
#include "CBaseCombatCharacter.h"

struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern int g_10619eb4[];
extern int g_10619d28[];
extern int g_10937cd0[];

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CccVt
{
	S100(a) S100(b)
	S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6) S10(c7) S10(c8)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
	virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
	virtual int GroupSize(int group);
};

struct Weapon
{
	S100(a) S100(b) S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6) S10(c7)
	virtual char IsEquippable(int a);
	S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual unsigned int GetFlags();
	char pad[0x744 - 4];
	int m_ammoType;
};

// TARGET: CBaseCombatCharacter::vfunc308
bool CBaseCombatCharacter::vfunc308()
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = g_105387dc;
	int *p = g_10619eb4;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasUsableRangedWeapon";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	for (; *p != -1; p++)
	{
		int group = g_10619d28[*p];
		if (group >= 0)
		{
			int start = g_10937cd0[*p];
			int end = start + ((CccVt *)this)->GroupSize(group);
			for (int i = start; i < end; i++)
			{
				if (sub_1032e8b0(i))
				{
					Weapon *w = (Weapon *)sub_1032e8b0(i);
					if (w->GetFlags() & 0x6000)
					{
						if (((Weapon *)sub_1032e8b0(i))->IsEquippable(0)
							|| ((int *)this)[0x15a4 / 4 + ((Weapon *)sub_1032e8b0(i))->m_ammoType] > 0)
						{
							--*g_109f3680;
							return true;
						}
					}
				}
			}
		}
	}
	--*g_109f3680;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10337080 size=0x149
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"

#define S1(p, n) virtual void p##n();
#define S10(p) S1(p,0) S1(p,1) S1(p,2) S1(p,3) S1(p,4) S1(p,5) S1(p,6) S1(p,7) S1(p,8) S1(p,9)
struct Slots298 {
    S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
    S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
    S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6) S10(c7) S10(c8)
    S1(d, 0) S1(d, 1) S1(d, 2) S1(d, 3) S1(d, 4) S1(d, 5) S1(d, 6) S1(d, 7)
    virtual int f298(int group);
};

struct ScopeTraceEntry {
    const char *m_pszName;
    const char *m_pszEntity;
    const char *m_pszExtra;
};
extern "C" __declspec(dllimport) ScopeTraceEntry g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;

struct ScopeTrace {
    ScopeTrace(const char *name, const char *entity)
    {
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszName = name;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszEntity = entity;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszExtra = "";
        g_ScopeTraceStackDepth++;
    }
    ~ScopeTrace() { g_ScopeTraceStackDepth--; }
};

extern int g_10619eb4[];
extern int g_10619d28[];
extern int g_10937cd0[];

// TARGET: CBaseCombatCharacter::vfunc309
void *CBaseCombatCharacter::vfunc309()
{
    ScopeTrace trace("CBaseCombatCharacter::GetBestRangedWeapon", this ? (m_name26c ? m_name26c : "") : "NULL ENTITY");
    for (int *p = g_10619eb4; *p != -1; p++) {
        int group = g_10619d28[*p];
        if (group >= 0) {
            int start = g_10937cd0[*p];
            int end = start + ((Slots298 *)this)->f298(group);
            for (int i = start; i < end; i++) {
                if (sub_1032e8b0(i)) {
                    CBaseCombatWeapon *w = (CBaseCombatWeapon *)sub_1032e8b0(i);
                    if (w->vfunc360() & 0x6000) {
                        w = (CBaseCombatWeapon *)sub_1032e8b0(i);
                        if (w->vfunc280(0) || *(int *)((char *)this + *(int *)((char *)sub_1032e8b0(i) + 0x744) * 4 + 0x15a4) > 0)
                            return sub_1032e8b0(i);
                    }
                }
            }
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10337ca0 size=0xa6
#include "CBaseCombatCharacter.h"
#include "CVStatListManager_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc111()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::MemberSync";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int edict = m_pEdict2e0;
    int index = engine->vfunc35(edict);
    ((CVStatListManager_t *)((char *)this + 0x13a8))->sub_10201fa0(index);
    *(unsigned int *)((char *)this + 0x13cc) = (unsigned char)sub_10336920();
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10337d80 size=0x8b
#include "CBaseCombatCharacter.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CBaseCombatCharacter::vfunc106(const char *szClassname)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::PostConstructor";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	CBaseEntity::vfunc106(szClassname);
	vfunc111();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10339800 size=0xed
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
struct EntInfo { void *pEnt; unsigned int serial; int pad; };
struct EntList { int hdr; EntInfo e[1]; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern EntList *g_10566458;

__forceinline void *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntInfo *e = &g_10566458->e[h & 0x1fff];
		if (e->serial == (h >> 13))
			return e->pEnt;
	}
	return 0;
}

char CBaseCombatCharacter::vfunc342(int unused)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::CanBeFedUponBy";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (sub_10339a90() && !(*(unsigned int *)((char *)this + 0x14bc) & 0x8000000)) {
		if (!ResolveHandle(*(unsigned int *)((char *)this + 0x1538)) || *(int *)((char *)this + 0x153c) == -1) {
			if (vfunc158() && !sub_10341aa0()) {
				(*g_109f3680)--;
				return 1;
			}
		}
	}
	(*g_109f3680)--;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10339d90 size=0x512
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "CUnknown10206c70.h"
#include "StatDefault3.h"
#include "CUnknown101f9c70.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include <stdio.h>

struct CFeedDbg { virtual char vfunc0(); virtual char vfunc1(); char m_pad[0x28]; int m_n2c; };
extern CFeedDbg *g_10937034;
extern CUnknown10206c70 g_1074f028;
struct CLocalPlayerView { char m_pad0000[0x49c]; int m_n49c; };
CLocalPlayerView *sub_1023bd00();
float __fastcall sub_101800a0(char *p);
void sub_10265680(int a);

void CBaseCombatCharacter::vfunc351(CBaseCombatCharacter *pTarget)
{
	ScopeTrace trace("CBaseCombatCharacter::FeedBegin", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	if (sub_103395f0() && pTarget) {
		CGlobalEntityList *pList = g_10566458;
		if (!pList->sub_100290c0((unsigned int *)&m_h149c)
			&& !(pList->sub_100290c0((unsigned int *)&m_hTarget1538) && m_nTarget153c != -1 && m_nTargetMode1540 == 8)) {
			if (!g_10937034->vfunc1() && g_10937034->m_n2c) {
				char buf[256];
				sprintf(buf, "%s FeedBegin with %s", sub_100ab4f0(), pTarget->sub_100ab4f0());
				sub_103221b0(buf);
			}
			if (m_pA8)
				*(int *)((char *)m_pA8 + 0x1a8c) = 0xf;
			m_iBloodStolen = 0;
			m_iCurBloodStolenMod = 0;
			bool bOK = true;
			if (sub_1033c900(0x2000)) {
				int nOwn = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xb);
				int nOther = CVStatListSet::Of(pTarget)->Find(0)->sub_102012d0(0xb);
				if (nOwn == nOther)
					bOK = false;
			}
			if ((!sub_1033c900(0x4000) || g_1074f028.sub_10207c40(pTarget)->m_8c[6]) && bOK) {
				int nMod = 0;
				((CUnknown101f9c70 *)((char *)this + 0x13dc))->sub_101f9ff0(9, 0, 12, (int)&nMod);
				m_iCurBloodStolenMod += nMod;
				int n = CVStatListSet::Of(pTarget)->Find(0)->sub_102012d0(0xc);
				if (m_iCurBloodStolenMod + n < 1)
					m_iCurBloodStolenMod = 1 - n;
			}
			m_h149c = *(EHANDLE *)pTarget->vfunc1();
			pTarget->c354();
			CBaseCombatCharacter *pVictim = (CBaseCombatCharacter *)m_h149c.Get();
			int nStat = CVStatListSet::Of(pVictim)->Find(0)->sub_102012d0(0xc) + 1;
			m_flFeedInterval1494 = nStat * 0.15 + 0.3;
			m_flNextFeed1490 = m_flFeedInterval1494 + gpGlobals->curtime;
			m_flFeedStart1498 = gpGlobals->curtime;
			if (!(m_hTarget1538.Get() && m_nTarget153c != -1 && m_nTargetMode1540 == 8)) {
				sub_1033b100(6);
				((CBaseCombatCharacter *)m_h149c.Get())->sub_1033b100(4);
				((CBaseCombatCharacter *)m_h149c.Get())->sub_1033b100(8);
				char *pA8 = (char *)m_pA8;
				if (pA8) {
					CLocalPlayerView *pLocal = sub_1023bd00();
					if (pLocal && pLocal->m_n49c) {
						if (gpGlobals->curtime - sub_101800a0(pA8) > 3.0f)
							sub_10265680(0);
					}
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1033a400 size=0x4ad
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "ehandle.h"
#include "Vector.h"
#include <stdio.h>
struct CUnknownA8 { void sub_1017df50(int a, float b, const char *c); void sub_1017e150(int a, float b, const char *c); };
#include "ConVar.h"
extern ConVar g_10937030;
struct CBloodAmt { int sub_101e9290(void *pEnt, int n); };
extern CBloodAmt g_10739d08;
struct CFeedFlagsView { unsigned int sub_1033c9c0(); };
void __fastcall sub_10293e20(void *, float);
const char *sub_101d3730(const char *fmt, ...);


extern float g_104454c4;
extern float g_104454c0;
namespace block_1033a400 {
#define V4(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)
#define V64(x) V16(x##a) V16(x##b) V16(x##c) V16(x##d)

struct EyeTarget {
	V64(a) V64(b) V64(c) virtual Vector vfunc192(); virtual Vector vfunc193();
	V16(d) V4(e) virtual void f0(); virtual void f1(); virtual void f2();
	virtual Vector *vfunc217();
};
struct EyeSelf {
	V64(a) V64(b) V64(c) V64(d) V16(e) V4(f) virtual void g0();
	virtual void vfunc277(Vector *pDir);
	char m_pad0004[0x26c - 4];
	const char *m_name26c;
	char m_pad0270[0xe3c - 0x270];
	float m_flBlend;
	char m_pad0e40[4];
	Vector m_vecGoal;
	Vector m_vecDir;
	char m_pad0e5c[0xe64 - 0xe5c];
	unsigned int m_hTarget;
	int m_nMode;

	void sub_10331da0(Vector *pA, Vector *pB);
	char sub_10325da0(Vector *pGoal);
};

void __fastcall sub_10325620(EyeSelf *self, int edx, float flInterval)
{
	ScopeTrace trace("CBaseCombatCharacter::MaintainScriptedEyeDirection", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
	EyeTarget *pTarget = (EyeTarget *)((const CBaseHandle *)&self->m_hTarget)->Get();
	if (!pTarget) {
		self->m_nMode = 0;
		return;
	}
	Vector vecPos, vecDir;
	self->sub_10331da0(&vecPos, &vecDir);
	switch (self->m_nMode) {
	case 1:
		self->m_vecGoal = pTarget->vfunc193();
		break;
	case 2:
		self->m_vecGoal = pTarget->vfunc192();
		break;
	case 3:
		self->m_vecGoal = *pTarget->vfunc217();
		break;
	default:
		self->m_vecGoal = vecPos + vecDir * 300.0f;
		break;
	}
	if (!self->sub_10325da0(&self->m_vecGoal))
		self->m_vecGoal = vecPos + vecDir * 300.0f;
	float t = flInterval;
	while (t > g_104454c4) {
		self->m_vecDir = self->m_vecDir * (g_104454c0 - self->m_flBlend) + self->m_vecGoal * self->m_flBlend;
		t -= 0.1;
	}
	self->vfunc277(&self->m_vecDir);
}
}

struct CGrappleView1033a400 : CBaseCombatCharacter
{
	int GetGrappleType() { if (m_hTarget1538.Get() && m_nTarget153c != -1) return m_nTargetMode1540; return -1; }
};
// TARGET: CBaseCombatCharacter::vfunc352
void CBaseCombatCharacter::vfunc352()
{
	ScopeTrace trace("CBaseCombatCharacter::Feed", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CGrappleView1033a400 *self = (CGrappleView1033a400 *)this;
	EHANDLE *pVictim = &m_h149c;
	if (!pVictim->Get())
		return;
	if (!(self->GetGrappleType() == 0
		|| self->GetGrappleType() == 2
		|| self->GetGrappleType() == 6))
		return;
	if (m_flNextFeed1490 > gpGlobals->curtime)
		return;
	if (g_10937030.GetBool()) {
		char buf[256];
		sprintf(buf, "%s Feed with %s", sub_100ab4f0(), pVictim->Get()->sub_100ab4f0());
		sub_103221b0(buf);
	}
	if (sub_103395f0()) {
		int n = 1;
		bool bA = (((CFeedFlagsView *)this)->sub_1033c9c0() & 0x8000) == 0x8000 && self->GetGrappleType() == 6;
		bool bB = (((CFeedFlagsView *)this)->sub_1033c9c0() & 0x10000) == 0x10000 && self->GetGrappleType() == 6;
		if (bA) {
			n = 3;
			if (m_iCurBloodStolenMod < 0)
				m_iCurBloodStolenMod = 0;
		}
		do {
			n--;
			int mod = m_iCurBloodStolenMod;
			if (mod != 0) {
				if (mod < 0) {
					m_iCurBloodStolenMod = mod + 1;
					continue;
				}
				n += mod;
				m_iCurBloodStolenMod = 0;
			}
			if (bB) {
				m_iBloodStolen++;
			} else {
				if (sub_10338cb0())
					m_iBloodStolen++;
				sub_1033c340(g_10739d08.sub_101e9290(m_h149c.Get(), 1));
			}
		} while (n > 0);
		((CBaseCombatCharacter *)m_h149c.Get())->sub_10338df0(0);
		if (self->GetGrappleType() != 2) {
			void *pNpc = m_h149c.Get()->m_pNPC98;
			if (pNpc)
				sub_10293e20(pNpc, 3.0f);
			CUnknownA8 *p = (CUnknownA8 *)m_pA8;
			if (p) {
				p->sub_1017df50(2, 2.0f, sub_101d3730("Feed %s", m_h149c.Get()->sub_100ab4f0()));
				p->sub_1017e150(3, 2.0f, sub_101d3730("Feed %s", m_h149c.Get()->sub_100ab4f0()));
			}
		}
	}
	if (m_flFeedInterval1494 > 0.3)
		m_flFeedInterval1494 = m_flFeedInterval1494 - 0.15;
	m_flNextFeed1490 = gpGlobals->curtime + m_flFeedInterval1494;
}
// END FUNCTION

// FUNCTION: 0x1033b500 size=0xbf
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

extern float g_1070d1b0[3];

// TARGET: CBaseCombatCharacter::vfunc356
void CBaseCombatCharacter::vfunc356()
{
	ScopeTrace trace("CBaseCombatCharacter::PrayerBegin", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	*(float *)((char *)this + 0x1494) = 2.0f;
	*(float *)((char *)this + 0x1490) = gpGlobals->curtime + 2.0f;
	*(int *)((char *)this + 0xff0) = 0x131;
	sub_100b2e30(g_1070d1b0);
	if (*(int *)((char *)this + 0xa8) != 0)
		vfunc93(0, 0);
}
// END FUNCTION

// FUNCTION: 0x1033b5f0 size=0x162
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
// TARGET: CBaseCombatCharacter::vfunc357
#include "CBaseCombatCharacter.h"
#include "CVStatList_t.h"
#include "CVStatInfoList_t.h"
#include "CVStatInfo_t.h"
#include "CVDmg_t.h"
#include "globalvars.h"

extern CVStatInfoList_t g_1074e658;

#define FL1490(p) (*(float *)((char *)(p) + 0x1490))
#define FL1494(p) (*(float *)((char *)(p) + 0x1494))

void CBaseCombatCharacter::vfunc357()
{
	if (m_Activity != 0x132)
		return;

	if (gpGlobals->curtime > FL1490(this))
	{
		int nCurrent = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xe);

		CVStatInfo_t *pInfo = g_1074e658.sub_10200370(0xe);
		int nMax = pInfo->m_max0060.sub_10205840();

		if (nCurrent < nMax)
			CVStatListSet::Of(this)->Find(0)->sub_10200d60(0xe);
		else
			c358();

		float flNow = gpGlobals->curtime;
		FL1490(this) = flNow + FL1494(this);
		if (FL1494(this) > 0.3)
			FL1494(this) -= 0.15;
	}
}
// END FUNCTION

// FUNCTION: 0x1033b890 size=0xb6
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc358()
{
	ScopeTrace trace("CBaseCombatCharacter::PrayerEnd",
		this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	m_b14a8 = 0;
	m_bCantBreakGrapple = 0;
	m_flBreakGrappleTimer = 0;
	m_b14aa = 0;
	m_h14ac = 0;
	m_IdealActivity = 0x133;
	if (m_pA8)
		vfunc93(3, 0);
}
// END FUNCTION

// FUNCTION: 0x1033cb90 size=0x74
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc119()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Kill";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	CBaseEntity::vfunc119();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033cc30 size=0x71
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc338(int a, int b, int c)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::AddPreDisciplineEffect";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033ccd0 size=0x71
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10622018[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::vfunc340(int a, int b, int c)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10622018;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1033cd70 size=0x71
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc339(int a, int b, int c)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::AddDisciplineEffect";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033cef0 size=0x86
#include "CBaseCombatCharacter.h"
#include "CUnknown101e3af0.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern CUnknown101e3af0 g_10739a4c;

void CBaseCombatCharacter::vfunc341(int discipline, int unused)
{
	const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::RemoveDisciplineEffects";
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	g_10739a4c.sub_101e3af0(this, discipline, 0);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033dde0 size=0x9b
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_10011fdb(CBaseCombatCharacter *pChar, const char *pszName, int a);

void CBaseCombatCharacter::vfunc304()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GiveBaseFightingItems";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (!sub_10335950("item_w_fists")) {
        sub_10011fdb(this, "item_w_fists", 0);
        sub_1033c6b0(0x10);
    }
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033deb0 size=0x92
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int __fastcall sub_1033c9c0(char *pThis);
void sub_100118d8(CBaseCombatCharacter *pThis, const char *classname);

void CBaseCombatCharacter::vfunc305()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::RemoveBaseFightingItems";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (sub_1033c9c0((char *)this) & 0x10) {
		sub_100118d8(this, "item_w_fists");
		sub_1033c770(0x10);
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033e370 size=0xea
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseCombatCharacter.h"

#define HV1(p) virtual void p();
#define HV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define HV100(p) HV10(p##0) HV10(p##1) HV10(p##2) HV10(p##3) HV10(p##4) HV10(p##5) HV10(p##6) HV10(p##7) HV10(p##8) HV10(p##9)

struct LookProbe	// a character as seen through its vtable: slots 192, 193 and 220 are typed
{
	HV100(la) HV10(lb0) HV10(lb1) HV10(lb2) HV10(lb3) HV10(lb4) HV10(lb5) HV10(lb6) HV10(lb7) HV10(lb8)
	HV1(lc0) HV1(lc1)
	virtual Vector vfunc192();
	virtual Vector vfunc193();
	HV10(ld0) HV10(ld1) HV1(ld20) HV1(ld21) HV1(ld22) HV1(ld23) HV1(ld24) HV1(ld25)
	virtual void *vfunc220();
};

struct LookTarget	// the object at +0x5d44 of the AI object at +0x94
{
	void sub_102e20b0(void *pPos, float flTime);	// stub 0x10007248
};

struct LookOwner	// the AI object at +0x94
{
	char m_pad0000[0x5d44];
	LookTarget *m_pLook;
};

void __fastcall sub_102e0b40(float *pLook);

void CBaseCombatCharacter::vfunc306(CBaseCombatCharacter *pTarget, char bUseEyes)
{
	ScopeTrace trace("CBaseCombatCharacter::LookAtEntity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (bUseEyes)
		((LookProbe *)pTarget)->vfunc192();
	else
		((LookProbe *)pTarget)->vfunc193();
	((LookProbe *)this)->vfunc193();
	LookOwner *pOwner = *(LookOwner **)((char *)this + 0x94);
	if (pOwner) {
		sub_102e0b40((float *)pOwner->m_pLook);
		LookTarget *pLook = pOwner->m_pLook;
		pLook->sub_102e20b0(((LookProbe *)pTarget)->vfunc220(), -1.0f);
	}
}
// END FUNCTION

// FUNCTION: 0x1033e4a0 size=0x28f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "CUnknown101e44c0.h"
#include "CVStatList_t.h"

extern "C" int sprintf(char *, const char *, ...);
void sub_101434b0(int entindex, int line, const char *text, float duration, int r, int g, int b, int a);
CBaseEntity *sub_101cd9e0(int index);
extern CUnknown101e44c0 g_10739a4c;

struct CReactionRec
{
	const char *sub_101f1da0(int a, int b);
};

inline int ENTINDEX(int edict) { return engine->vfunc35(edict); }

#define ENT_NAME (this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc)

int CBaseCombatCharacter::vfunc124()
{
	ScopeTrace trace("CBaseCombatCharacter::DrawDebugTextOverlays", ENT_NAME);
	char tmp[128];
	int text_offset = 1;
	text_offset = CBaseEntity::vfunc124();
	if (*(unsigned int *)((char *)this + 0x224) & 0x400) {
		CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)m_p9c;
		int i = 0;
		do {
			const char *pText = CVStatListSet::Of(pChar)->Find(0)->sub_10201a40(i, 0);
			int ent = ENTINDEX(m_pEdict2e0);
			sub_101434b0(ent, text_offset, pText, 0.0f, 255, 255, 255, 255);
			text_offset++;
			i++;
		} while (i < 0x23);
		CBaseEntity *pPlayer = sub_101cd9e0(1);
		if (pPlayer) {
			const char *pReaction = ((CReactionRec *)((char *)pChar + 0x1460))->sub_101f1da0(ENTINDEX(pChar->m_pEdict2e0), ENTINDEX(pPlayer->m_pEdict2e0));
			sprintf(tmp, "Reaction: %s", pReaction);
			int ent = ENTINDEX(m_pEdict2e0);
			sub_101434b0(ent, text_offset, tmp, 0.0f, 255, 255, 255, 255);
			text_offset++;
		}
	}
	g_10739a4c.sub_101e45b0(this, &text_offset);
	if (*(int *)((char *)this + 0x94)) {
		sprintf(tmp, "NPC: %s", sub_1000b5cd());
		int ent = ENTINDEX(m_pEdict2e0);
		sub_101434b0(ent, text_offset, tmp, 0.0f, 255, 255, 255, 255);
		text_offset++;
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x1033e7e0 size=0x121
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

void sub_10143b70(const float *pos, const float *mins, const float *maxs, int a, int r, int b, int c, float duration);

typedef float *(__fastcall *GetAbsOriginFn)(CBaseCombatCharacter *pThis);

void CBaseCombatCharacter::vfunc125()
{
	ScopeTrace trace("CBaseCombatCharacter::DrawMuzzleOverlay", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	void *pWeapon = sub_1032e7b0();
	if (pWeapon) {
		float *p = ((GetAbsOriginFn)(*(void ***)this)[217])(this);
		float pos[3];
		pos[0] = p[0];
		pos[1] = p[1];
		pos[2] = p[2];
		float ang[3];
		int r = 0;
		if ((char)((CBaseAnimating *)pWeapon)->sub_10092e20((int)"muzzleflash", (int)pos, (int)ang))
			r = 0xff;
		float mins[3] = { -3.0f, -3.0f, -3.0f };
		float maxs[3] = { 3.0f, 3.0f, 3.0f };
		sub_10143b70(pos, mins, maxs, 0xff, r, 0, 1, 0.3f);
	}
}
// END FUNCTION

// FUNCTION: 0x10340360 size=0x139
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "CStatDefault3List.h"
#include "CUnknown101d4f20.h"

extern CStatDefault3List g_10738d10;
extern "C++" __declspec(dllimport) void DevMsg(const char *fmt, ...);
void sub_10191ac0(int nValue);
char sub_102f9970();
int sub_102f9950();
void sub_102f9920(int a);
const char *sub_102d6230(int a);

struct CUnknown101d4f20Ret : CUnknown101d4f20
{
	CUnknown101d4f20_Value *sub_101d4f20(CUnknown101d4f20_Value *out);
};

#define BCV(n) virtual void b##n();
#define BCV10(p) BCV(p##0) BCV(p##1) BCV(p##2) BCV(p##3) BCV(p##4) BCV(p##5) BCV(p##6) BCV(p##7) BCV(p##8) BCV(p##9)
struct CCharacterView	// the character as seen for slot 337
{
	BCV10(0) BCV10(1) BCV10(2) BCV10(3) BCV10(4) BCV10(5) BCV10(6) BCV10(7) BCV10(8) BCV10(9)
	BCV10(10) BCV10(11) BCV10(12) BCV10(13) BCV10(14) BCV10(15) BCV10(16) BCV10(17) BCV10(18) BCV10(19)
	BCV10(20) BCV10(21) BCV10(22) BCV10(23) BCV10(24) BCV10(25) BCV10(26) BCV10(27) BCV10(28) BCV10(29)
	BCV10(30) BCV10(31) BCV10(32) BCV(330) BCV(331) BCV(332) BCV(333) BCV(334) BCV(335) BCV(336)
	virtual int vfunc337();
};

// TARGET: CBaseCombatCharacter::vfunc104
void CBaseCombatCharacter::vfunc104()
{
	ScopeTrace trace("CBaseCombatCharacter::Precache", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CUnknown101d4f20_Value value;
	int nTemplate = sub_10337860();
	sub_10191ac0(((CUnknown101d4f20Ret *)g_10738d10.sub_101d5e80(nTemplate))->sub_101d4f20(&value)->m_value);
	vfunc71();
	if (sub_102f9970())
	{
		int nA = ((CCharacterView *)this)->vfunc337();
		nA &= sub_102f9950();
		if (nA != ((CCharacterView *)this)->vfunc337())
		{
			DevMsg("\n****ERROR***\n");
			DevMsg("%s is being spawned after links have been initialized, but its hull %s\n", sub_100ab4f0(), sub_102d6230(m_field1568));
			DevMsg("Has not been initialized.  Be sure that this class's GetUsedHullBits function includes that hull type.\n");
			DevMsg("If it already is, this entity is probably spawned after the node graph is created.\n");
			DevMsg("Have the class responsible for spawning it include it.\n");
			DevMsg("****ERROR***\n\n");
		}
	}
	else
		sub_102f9920(((CCharacterView *)this)->vfunc337());
}
// END FUNCTION

// FUNCTION: 0x103404f0 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_103404f0(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::ReceivesImpactDamage";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10340590 size=0x8b
#include "CBaseCombatCharacter.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

bool CBaseCombatCharacter::vfunc73(CBaseEntity *pOther)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::CausesImpactDamage";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	bool result = (pOther->sub_100b3700() & 0x20000000) == 0x20000000;
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10340650 size=0x10c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntitySlots.h"
#include "ScopeTrace.h"

// TARGET: CBaseCombatCharacter::vfunc68
bool CBaseCombatCharacter::vfunc68(CBaseEntity *pOther)
{
	ScopeTrace trace("CBaseCombatCharacter::ShouldIgnoreCollision", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char *pOwner = *(char **)((char *)pOther + 0x9c);
	if (pOwner && !pOwner[0x1480])
		return false;
	if (pOther->sub_100b5190())
		return false;
	if (((CBaseEntitySlots *)pOther)->slot95() == 1)
		return true;
	char *pChar = *(char **)((char *)pOther + 0x98);
	if (pChar && (*(unsigned int *)(pChar + 0x14b8) & 0x20000))
		return true;
	return sub_1008bfe0(pOther);
}
// END FUNCTION

// FUNCTION: 0x103407b0 size=0xec
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"



char CBaseCombatCharacter::vfunc86(int a, int b, int c, int d, int e)
{
	ScopeTrace t("CBaseCombatCharacter::ShouldTransmit", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_flForceTransmitTime > gpGlobals->curtime)
		return 1;
	int idx = engine->vfunc35(b) - 1;
	if (*((char *)this + 0x14e4 + idx))
		return 1;
	return sub_100ab020(a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x103408e0 size=0x89
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

const char *CBaseCombatCharacter::vfunc244()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetSkeletonModelName";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (sub_10336920()) {
		(*g_109f3680)--;
		return "models/character/npc/common/skeleton/skeleton_male.mdl";
	}
	(*g_109f3680)--;
	return "models/character/npc/common/skeleton/skeleton_female.mdl";
}
// END FUNCTION

// FUNCTION: 0x103409a0 size=0x1b8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "CBCCSlotViews.h"
#include "ScopeTrace.h"

extern char g_105387dc[];
void sub_101381b0(const float *pIn, const float *pMatrix, float *pOut);

class CCombatChar138SlotView
{
public:
	VIEW_SLOT100(0) VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12)
	VIEW_SLOT(130) VIEW_SLOT(131) VIEW_SLOT(132) VIEW_SLOT(133) VIEW_SLOT(134) VIEW_SLOT(135) VIEW_SLOT(136) VIEW_SLOT(137)
	virtual void *vfunc138();
};

void CBaseCombatCharacter::vfunc105(const char *pszModel)
{
	ScopeTrace trace("CBaseCombatCharacter::SetModel", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_100b5ab0(pszModel);
	char *pHdr = (char *)sub_100952d0(-1);
	if (pHdr) {
		int bLegs = (~*(unsigned int *)(pHdr + 0xe4) >> 8) & 1;
		GetActiveStatList()->sub_102008e0(11, bLegs);
		m_nHasLegs13cc = bLegs;
		if (((CCombatChar138SlotView *)this)->vfunc138())
			sub_10106c40();
		m_nPoseIndex[0] = ((CBaseAnimating *)this)->sub_10092270("aim_pitch");
		m_nPoseIndex[1] = ((CBaseAnimating *)this)->sub_10092270("aim_yaw");
		m_nHeadBone1080 = sub_10092550((int)"Bip01 Head");
		if (m_nHeadBone1080 >= 0) {
			Vector vecAxis(0.0f, -1.0f, 0.0f);
			sub_101381b0(&vecAxis.x, (float *)(pHdr + m_nHeadBone1080 * 0xa0 + *(int *)(pHdr + 0xf4) + 0x58), &m_vecHeadAxis1074.x);
		}
		m_nVSoundTableIdx = -1;
	}
}
// END FUNCTION

// FUNCTION: 0x103412b0 size=0x8c
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc349(inputdata_t *pInput)
{
	const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InputBarterBegin";
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (pInput->pActivator)
		sub_103411c0(*(int *)((char *)pInput->pActivator + 0x9c), 0);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10341450 size=0x8c
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CBaseCombatCharacter::vfunc350(inputdata_t *pInput)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::InputBarterEnd";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	if (pInput->pActivator)
		sub_10341370(*(int *)((char *)pInput->pActivator + 0x9c), 0);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103415f0 size=0x6f
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc335()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::NotifyChangeSizeSmall";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10341680 size=0x6f
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::vfunc336()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::NotifyChangeSizeNormal";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10341710 size=0x77
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106236c4[];
extern char g_105387dc[];
extern char g_106b8540[];
int CBaseCombatCharacter::vfunc337()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106236c4;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103417b0 size=0x76
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106236f4[];
extern char g_105387dc[];
extern char g_106b8540[];
bool CBaseCombatCharacter::vfunc295(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106236f4;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10341850 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10341850(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IsValidStealthKillTarget";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10342800 size=0xcb
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct CWeaponInfoBlock
{
    char pad0[0x242c];
    unsigned char m_flags242c;
};

struct CWeaponUnit : public CEntityVSlots
{
    CWeaponInfoBlock *sub_102517b0();
};

int CBaseCombatCharacter::vfunc34(int pOther)
{
    ScopeTrace trace("CBaseCombatCharacter::GetHighlightMaterial", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    CWeaponUnit *pWeapon = (CWeaponUnit *)((CBaseCombatCharacter *)pOther)->sub_1032e7b0();
    if (pWeapon && !pWeapon->slot267() && (pWeapon->sub_102517b0()->m_flags242c & 2) && pWeapon->slot285() == (int)this)
        return 6;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10344dd0 size=0x14b
#include "CBaseCombatCharacter.h"
#include "Vector.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CSlot219View
{
	SV100(a0) SV100(a1) SV10(a20) SV1(a210) SV1(a211) SV1(a212) SV1(a213) SV1(a214) SV1(a215) SV1(a216) SV1(a217) SV1(a218)
	virtual float *vfunc219();
};

float sub_101d2c70(const Vector *pVec);

int CBaseCombatCharacter::vfunc323(const Vector *pDirection)
{
	int nSide = 0;
	Vector vecDir = *pDirection;
	if (FastSqrt(vecDir.x * vecDir.x + vecDir.y * vecDir.y) >= 1e-7f) {
		vecDir.z = 0;
		VectorNormalize(vecDir);
		float flYaw = sub_101d2c70(&vecDir);
		float flAngle = (float)(unsigned short)(int)((((CSlot219View *)this)->vfunc219()[1] - flYaw) * 182.04445f) * 0.005493164f;
		if (flAngle < 0)
			flAngle += 360.0f;
		if (flAngle > 316.0f || flAngle <= 45.0f)
			nSide = 2;
		else if (flAngle <= 135.0f)
			nSide = 3;
		else if (flAngle > 135.0f && flAngle <= 225.0f)
			nSide = 0;
		else if (flAngle > 225.0f)
			nSide = 1;
	}
	return nSide;
}
// END FUNCTION

// FUNCTION: 0x10345460 size=0x3
#include "CBaseCombatCharacter.h"
bool CBaseCombatCharacter::vfunc327()
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x10346cd0 size=0x3b8
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VTzimisce.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include <math.h>

void sub_10345890(const float *pFrom, const float *pTo, float t, float *pOut);
extern float g_104454c4;

struct CMeleeGlobal { virtual void vfunc0(); virtual char vfunc1(); char pad[0x24]; float m_fl28; };
extern CMeleeGlobal *g_10936ccc;
extern CMeleeGlobal *g_109370d4;

struct CMeleeSwingView : CBaseCombatCharacter {
	void sub_10343020(const Vector *pOrigin, const Vector *pAngles, float flFrom, float flTo);
	char sub_103451d0(float flValue);
};

void CBaseCombatCharacter::vfunc315()
{
	ScopeTrace trace("CBaseCombatCharacter::MeleeSwingUpdate", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	int seq = ((CBaseAnimating *)this)->sub_1008d990(m_nSequence6f0);
	if (seq && *(int *)(seq + 0x2c4) > 0)
	{
		Vector *pOrigin = ((CEntityVSlots *)this)->slot217();
		Vector *pAngles = ((CEntityVSlots *)this)->slot219();

		if (!m_bMeleeSwingIsLive)
		{
			((CMeleeSwingView *)this)->sub_10343020(pOrigin, pAngles, 0, 0);
			sub_10346760();
		}
		else
		{
			float dt = gpGlobals->curtime - m_flLastMeleeSwingUpdate;
			if (!(dt > g_104454c4))
				return;
			float duration = ((CBaseAnimating *)this)->sub_10091230(m_nSequence6f0) * m_flPlaybackRate6f4;
			float a = (gpGlobals->curtime - (*(float *)((char *)this + 0x174) - 0.1f)) * duration + m_fl6f8;
			float b = a - duration * dt;

			CAI_BaseNPCTroika *pNPC = m_pNPC98;
			if (pNPC)
			{
				float f = g_10936ccc->vfunc1() ? g_104454c4 : g_10936ccc->m_fl28;
				if (f <= m_fl6f8)
					pNPC->m_n6064 = 0;
			}

			if (!m_bDidSendIncomingSwingNotice)
			{
				sub_10346ac0();
				m_bDidSendIncomingSwingNotice = 1;
			}

			if (!m_bAA3)
			{
				float v = g_109370d4->vfunc1() ? 0.0f : g_109370d4->m_fl28;
				if (((CMeleeSwingView *)this)->sub_103451d0(v))
				{
					void *pWeapon = sub_1032e7b0();
					if (pWeapon)
						((CBaseCombatWeapon *)pWeapon)->vfunc333(0x15, 1, 0, 0, 0, 0);
					m_bAA3 = 1;
				}
			}

			int steps = (int)ceil(dt * 100.0f);
			float prev;
			if (b > g_104454c4) prev = b; else prev = 0;
			for (int i = 1; i <= steps; i++)
			{
				if (prev >= 1.0f)
					break;
				float t = (float)i / (float)steps;
				float cur = (a - b) * t + b;
				if (cur <= g_104454c4)
					continue;
				if (cur > 1.0f)
					cur = 1.0f;
				Vector pos;
				pos.x = (pOrigin->x - m_vecLastMeleeSwingPosition.x) * t + m_vecLastMeleeSwingPosition.x;
				pos.y = (pOrigin->y - m_vecLastMeleeSwingPosition.y) * t + m_vecLastMeleeSwingPosition.y;
				pos.z = (pOrigin->z - m_vecLastMeleeSwingPosition.z) * t + m_vecLastMeleeSwingPosition.z;
				Vector outAng;
				sub_10345890(&m_angLastMeleeSwingAngles.x, &pAngles->x, t, &outAng.x);
				((CMeleeSwingView *)this)->sub_10343020(&pos, &outAng, prev, cur);
				prev = cur;
			}
		}

		m_flLastMeleeSwingUpdate = gpGlobals->curtime;
		m_vecLastMeleeSwingPosition = *pOrigin;
		m_angLastMeleeSwingAngles = *pAngles;
	}
	else
		m_bMeleeSwingIsLive = 0;
}
// END FUNCTION

// FUNCTION: 0x10347180 size=0xc58
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Vector.h"
#include "CGameTrace.h"
#include "ConVar.h"
#include "ScopeTrace.h"
#include "ehandle.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "CTraceFilterPlayerMovement.h"
#include "UTIL_Trace.h"
#include <math.h>

#include <math.h>
namespace block_10347180 {
#pragma auto_inline(off)
struct RayInit : Ray_t { void sub_1004f7a0(const float *pStart, const float *pEnd); };
void RayInit::sub_1004f7a0(const float *pStart, const float *pEnd)
{
    VectorSubtract(*(const Vector *)pEnd, *(const Vector *)pStart, *(Vector *)m_Delta);
    m_IsSwept = ((Vector *)m_Delta)->LengthSqr() != 0;
    m_StartOffset[2] = 0;
    m_StartOffset[1] = 0;
    m_StartOffset[0] = 0;
    m_IsRay = true;
    m_Extents[2] = 0;
    m_Extents[1] = 0;
    m_Extents[0] = 0;
    m_Start[0] = pStart[0];
    m_Start[1] = pStart[1];
    m_Start[2] = pStart[2];
    m_b32 = 0;
    m_n34 = 0;
    m_b33 = 0;
}
struct Ray_tViewH { Vector m_Start; Vector m_Delta; Vector m_StartOffset; Vector m_Extents; bool m_IsRay; bool m_IsSwept; char m_b32; char m_b33; float m_f34; };
struct RayHull : Ray_t { void sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b); };
void RayHull::sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b)
{
	const Vector &end = *(const Vector *)pEnd;
	Ray_tViewH *r = (Ray_tViewH *)this;
	const Vector &mins = *(const Vector *)pMins;
	const Vector &maxs = *(const Vector *)pMaxs;
	VectorSubtract(end, start, r->m_Delta);
	r->m_IsSwept = (r->m_Delta.LengthSqr() != 0.0f);
	VectorSubtract(maxs, mins, r->m_Extents);
	r->m_Extents *= 0.5f;
	r->m_IsRay = (r->m_Extents.LengthSqr() < 1e-6);
	VectorAdd(mins, maxs, r->m_StartOffset);
	r->m_StartOffset *= 0.5f;
	VectorAdd(start, r->m_StartOffset, r->m_Start);
	r->m_StartOffset *= -1.0f;
	r->m_b32 = b;
	r->m_b33 = 0;
	r->m_f34 = 0.0f;
	if (a && !r->m_IsRay) {
		r->m_f34 = (float)sqrt((r->m_Extents.x * r->m_Extents.x) + (r->m_Extents.y * r->m_Extents.y));
		if (1e-6 < r->m_f34)
			r->m_b33 = 1;
	}
}
#pragma auto_inline(on)
}
using namespace block_10347180;

struct CMeleeHook
{
	virtual void v0();
	virtual bool v1();
};
extern CMeleeHook *g_10924a6c;
extern CMeleeHook *g_10936d14;
extern CMeleeHook *g_10936e9c;

struct CMeleeHullSource
{
	virtual void v0();
	virtual void v1();
	virtual const Vector *v2(int a, int b);
	virtual const Vector *v3(int a, int b);
};
extern CMeleeHullSource *g_10627580;

struct CMeleeEntList
{
	void *sub_100290c0(const void *pHandle);
};
extern CMeleeEntList *g_10566458;

int sub_10348100(int count, int *values, int *weights, unsigned int *flags, unsigned int mask);
bool sub_100c6020(void *pStudioHdr, int iSequence, float flCycle, const float *poseParameter, Vector &deltaPos, Vector &deltaAngles);
void sub_1011e010(const Vector &a, const Vector &b, Vector &result);
void sub_10137fe0(const float *in1, const float *in2, float *out);

struct CMeleeSeqBox
{
	float mins[3];
	float maxs[3];
};

struct CMeleeSeqDesc
{
	char m_pad0000[0x2bc];
	int m_nBoxes;	// 0x2bc
	int m_nBoxIndex;	// 0x2c0
	int m_pad2c4[2];
	float m_flMinRange;	// 0x2cc
	float m_flMaxRange;	// 0x2d0
	int m_n2d4;	// 0x2d4
	float GetMinRange() { return m_flMinRange; }
	float GetMaxRange() { return m_flMaxRange; }
	CMeleeSeqBox *pBox(int i) { return (CMeleeSeqBox *)((char *)this + m_nBoxIndex) + i; }
};

struct CMeleeStatRef
{
	int sub_10204900(void *pCharacter);
	char m_pad[0x44];
};

class CMeleeMoveProbe
{
public:
	void sub_102e37b0(const Vector &vecStart, const Vector &vecEnd, unsigned int fMask, bool bUseOwner, CGameTrace *pTrace);
	void sub_102e3450(const Vector &vecStart, const float *vecEnd, unsigned int collisionMask, CGameTrace *pTrace, char bGround);
};

class CMeleeWeapon : public CEntityVSlots
{
public:
	int *sub_102517e0();
	char m_pad0004[0x7a0 - 4];
	CMeleeStatRef m_Stats[1];	// 0x7a0
	char m_pad07e4[0x8b8 - 0x7e4];
	float m_flMinRange;	// 0x8b8
	int m_pad8bc;
	float m_flMaxRange;	// 0x8c0
	float GetMinRange() { return m_flMinRange; }
	float GetMaxRange() { return m_flMaxRange; }
};

class CMeleeChar : public CEntityVSlots
{
public:
	bool sub_10347180(CMeleeWeapon *pWeapon, CMeleeChar *pEnemy, int nActivity, int *pOutSequence);
	void *sub_100952d0(int a);
	int sub_1008dac0(int nActivity, int *pSequences, int *pWeights, int nStat);
	CMeleeSeqDesc *sub_1008d990(int nSequence);
	void sub_10269a20(int nCondition);

	CCollisionProperty *CollisionProp() { return (CCollisionProperty *)((char *)this + 0x270); }
	CMeleeMoveProbe *GetMoveProbe() { return *(CMeleeMoveProbe **)((char *)this + 0x5d40); }
	const float *EntityToWorldTransform()
	{
		if ((bool)((m_iEFlags >> 11) & 1))
			slot98();
		return m_rgflCoordinateFrame;
	}
	void EntityToWorldSpace(const Vector &in, Vector *pOut)
	{
		sub_10137fe0(&in.x, EntityToWorldTransform(), &pOut->x);
	}

	char m_pad0004[0x4c - 4];
	unsigned int m_fFlags4c;	// 0x4c
	char m_pad0050[0x98 - 0x50];
	CMeleeChar *m_pNPC98;	// 0x98
	char m_pad009c[0xa8 - 0x9c];
	void *m_pA8;	// 0xa8
	char m_pad00ac[0x130 - 0xac];
	float m_rgflCoordinateFrame[12];	// 0x130
	char m_pad0160[0x268 - 0x160];
	unsigned int m_iEFlags;	// 0x268
	const char *m_name26c;	// 0x26c
	char m_pad0270[0x690 - 0x270];
	float m_flPoseParameter[24];	// 0x690
	char m_pad06f0[0xfe0 - 0x6f0];
	bool m_bAllowsInterpenetratingAttacks;	// 0xfe0
	char m_pad0fe1[0x1538 - 0xfe1];
	EHANDLE m_hTarget1538;	// 0x1538
	int m_nTarget153c;	// 0x153c
};

inline void UTIL_TraceHull_Scoped(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, void *pFilter, CGameTrace *ptr)
{
	ScopeTrace trace("UTIL_TraceHull", g_106b8540);
	Ray_t ray;
	((RayHull *)&ray)->sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, 1, 0);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

inline Vector AddV(const Vector &a, const Vector &b) { Vector r; r.x = a.x + b[0]; r.y = a.y + b.y; r.z = a.z + b.z; return r; }
inline float LenV(const Vector &v) { return (float)FastSqrt((v[0] * v.x + v.z * v.z) + v.y * v.y); }
// side * delta.y: x reads side through the by-value operator[], y/z read delta.y through it (game fmul operand order)
__forceinline void SideMul(const Vector &a, const Vector &dp, Vector &c) { c.x = a[0] * dp.y; c.y = a.y * dp[1]; c.z = a.z * dp[1]; }
struct VecM : Vector { Vector MulY(const Vector &dp) const { Vector res; SideMul(*this, dp, res); return res; } };
// TARGET: CMeleeChar::sub_10347180
bool CMeleeChar::sub_10347180(CMeleeWeapon *pWeapon, CMeleeChar *pEnemy, int nActivity, int *pOutSequence)
{
	int nSequences[2048];
	unsigned int nFlags[2048];
	int nWeights[2048];
	CGameTrace tr;
	Vector vecMins, vecMaxs;
	Vector vecLocal;
	Vector vecForward, vecSide;

	ScopeTrace trace("CBaseCombatCharacter::ChooseMeleeAttackSequence", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	*pOutSequence = -1;
	void *pStudioHdr = sub_100952d0(-1);
	if (!pStudioHdr)
		return false;

	CMeleeChar *pNPC = m_pNPC98;
	if (pNPC && pEnemy) {
		pNPC->GetMoveProbe()->sub_102e37b0(pNPC->slot192(), pEnemy->slot192(), 0x202400b, true, &tr);
		if (tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid) {
			CMeleeChar *pHit = *(CMeleeChar * volatile *)&tr.m_pEnt;
			if (pHit && pHit != pEnemy
				&& pHit != (pEnemy->m_nTarget153c != -1 ? g_10566458->sub_100290c0(&pEnemy->m_hTarget1538) : 0)
				&& !(bool)((pHit->m_fFlags4c >> 10) & 1)) {
				g_10924a6c->v1();
				pNPC->sub_10269a20(0x3a);
				return false;
			}
		}
	}
	if (pEnemy) {
		pEnemy->CollisionProp()->vfunc15(&vecMins, &vecMaxs);
		Vector vecCenter = AddV(vecMins, vecMaxs) * 0.5f;
		vecLocal = vecCenter - *slot217();
		float flDist = sqrt(vecLocal.x * vecLocal.x + vecLocal.y * vecLocal.y);
		vecLocal.x = flDist;
		vecLocal.y = 0.0f;
		Vector vecHalf = (vecMaxs - vecMins) * 0.5f;
		vecMins = vecLocal - vecHalf;
		vecMaxs = vecLocal + vecHalf;
		g_10936d14->v1();
	}

	float flStepHeight = 4.0f;
	if (pNPC)
		flStepHeight = pNPC->slot522();
	if (!pWeapon || !(pWeapon->slot360() & 0x18000))
		return false;

	int nCount = sub_1008dac0(nActivity, nSequences, nWeights, pWeapon->m_Stats[*pWeapon->sub_102517e0()].sub_10204900(this));
	if (pEnemy && pNPC) {
		vecForward = *pEnemy->slot217() - *slot217();
		VectorNormalize(vecForward);
		vecSide = vecForward;
		Vector vecRight;
		sub_1011e010(vecSide, Vector(0, 0, 1), vecRight);
	}

	for (int i = 0; i < nCount; i++) {
		CMeleeSeqDesc *pDesc = sub_1008d990(nSequences[i]);
		unsigned int fl = 0;
		if (pEnemy && vecLocal.x >= pDesc->m_flMinRange && vecLocal.x <= pDesc->m_flMaxRange)
			fl = 8;
		pWeapon->m_flMinRange = (pWeapon->GetMinRange() < pDesc->GetMinRange()) ? pWeapon->GetMinRange() : pDesc->GetMinRange();
		pWeapon->m_flMaxRange = (pWeapon->GetMaxRange() > pDesc->GetMaxRange()) ? pWeapon->GetMaxRange() : pDesc->GetMaxRange();
		fl |= 4;

		Vector vecDeltaPos, vecDeltaAngles;
		if (sub_100c6020(pStudioHdr, nSequences[i], 1.0f, m_flPoseParameter, vecDeltaPos, vecDeltaAngles)) {
			Vector vecStart = *slot217();
			Vector vecEnd;
			if (pEnemy && pNPC)
				vecEnd = vecStart + (vecForward * vecDeltaPos.x + ((const VecM &)vecSide).MulY(vecDeltaPos));
			else
				EntityToWorldSpace(vecDeltaPos, &vecEnd);
			vecStart.z += flStepHeight;
			vecEnd.z += flStepHeight;

			Vector vecHullMins, vecHullMaxs;
			if (m_pA8) {
				vecHullMins = *g_10627580->v2(0, 0);
				vecHullMaxs = *g_10627580->v3(0, 0);
				CTraceFilterPlayerMovement filter(this, 6);
				UTIL_TraceHull_Scoped(vecStart, vecEnd, vecHullMins, vecHullMaxs, 0x201400b, &filter, &tr);
			} else {
				CCollisionProperty *pColl = pNPC->CollisionProp();
				vecHullMins = *(Vector *)pColl->vfunc1();
				vecHullMaxs = *(Vector *)pColl->vfunc2();
				pNPC->GetMoveProbe()->sub_102e3450(vecStart, &vecEnd.x, 0x202400b, &tr, 0);
				if (pDesc->m_n2d4 >= 0)
					fl = 0;
			}

			if (tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid) {
				CMeleeChar *pHit = (CMeleeChar *)tr.m_pEnt;
				if (pHit && pEnemy && pEnemy->m_nTarget153c != -1 && pEnemy->m_hTarget1538.Get()
					&& pHit == (CMeleeChar *)pEnemy->m_hTarget1538.Get())
					pHit = pEnemy;
				if (m_pA8) {
					if (!tr.m_startsolid) {
						if (!(tr.m_fraction < 0.9f))
							goto done;
						if (!((1.0f - tr.m_fraction) * LenV(vecEnd - vecStart) > 8.0f))
							goto done;
					}
				} else {
					if (!pHit || pHit == pEnemy) {
						static ConVar debug_melee_npc_range("debug_melee_npc_range", "128", 0, g_106b8540);
						if (!tr.m_startsolid) {
							float flLen = LenV(vecEnd - vecStart);
							if (!(debug_melee_npc_range.GetFloat() < (1.0f - tr.m_fraction) * flLen))
								goto done;
						}
					}
				}
				if (pHit && pHit == pEnemy && m_bAllowsInterpenetratingAttacks)
					fl |= 1;
				else
					fl &= ~4;
			}
		} else {
			fl |= 0x10;
		}
done:
		if (pEnemy) {
			CMeleeSeqDesc *pD = pDesc;
			for (int j = 0; j < pD->m_nBoxes; j++) {
				CMeleeSeqBox *pBox = pD->pBox(j);
				if (pBox->mins[0] < vecMaxs.x && pBox->maxs[0] > vecMins.x
					&& pBox->mins[1] < vecMaxs.y && pBox->maxs[1] > vecMins.y
					&& pBox->mins[2] < vecMaxs.z && pBox->maxs[2] > vecMins.z) {
					fl |= 2;
					g_10936d14->v1();
					break;
				}
				g_10936e9c->v1();
			}
		}
		nFlags[i] = fl;
	}

	if (!pEnemy) {
		*pOutSequence = sub_10348100(nCount, nSequences, nWeights, nFlags, 0x10);
		if (*pOutSequence < 0)
			*pOutSequence = sub_10348100(nCount, nSequences, nWeights, nFlags, 0);
		return false;
	}

	int nOrder[8] = { 7, 5, 6, 3, 1, 2, 4, 0 };
	for (int nPass = 0; nPass < 2; nPass++) {
		for (int k = 0; k < sizeof(nOrder) / sizeof(nOrder[0]); k++) {
			unsigned int nMask = nOrder[k];
			if (nPass == 0)
				nMask |= 8;
			*pOutSequence = sub_10348100(nCount, nSequences, nWeights, nFlags, nMask);
			if (*pOutSequence >= 0)
			{
				if ((nMask & 3) && (nMask & 4) && (nMask & 8))
					return true;
				return false;
			}
		}
	}
	*pOutSequence = -1;
	return false;
}
// END FUNCTION

// FUNCTION: 0x103482e0 size=0xaa
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "CStatDefault3List.h"
#include "CVStatList_t.h"

extern CStatDefault3List g_10738d10;

// TARGET: CBaseCombatCharacter::vfunc326
bool CBaseCombatCharacter::vfunc326(int unused1, int unused2)
{
	StatDefault3 *pDefault = g_10738d10.sub_101d5f10(this);
	if (pDefault->m_98[6])
		return false;
	if (CVStatListSet::Of(this)->Find(0)->sub_102017b0(0xf, 0x11))
		return false;
	if (vfunc158())
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10348890 size=0xb7
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_10015311(void *p, int a);

int CBaseCombatCharacter::vfunc127(int a)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Restore";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int result = CBaseEntity::vfunc127(a);
    const char *p = *(const char **)((char *)this + 0x10ac);
    if (!p) p = g_106b8540;
    if (*p)
        sub_103239a0(p);
    sub_10015311((char *)this + 0x13d0, 1);
    (*g_109f3680)--;
    return result;
}
// END FUNCTION

// FUNCTION: 0x10348980 size=0xb0
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_1062416c[];
extern char g_106b8540[];
extern char g_105387dc[];
void sub_1009d940(void *, int);
void sub_1009d960(void *, int);
int CBaseCombatCharacter::vfunc126(int a)
{
    const char *name;
    if (this)
        name = m_name26c ? m_name26c : g_106b8540;
    else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1062416c;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    sub_1009d940((char *)this + 0x13d0, 1);
    vfunc111();
    int r = CBaseEntity::vfunc126(a);
    sub_1009d960((char *)this + 0x13d0, 1);
    --*g_109f3680;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10348a60 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_10348a60(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasExplosiveGibs";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10348b00 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_10348b00(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::KnockbackActivity_Default";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x8a;
}
// END FUNCTION

// FUNCTION: 0x10348ba0 size=0x47
#include "CBaseCombatCharacter.h"
char CBaseCombatCharacter::vfunc296(int a)
{
	if (m_nTarget153c != -1 && m_hTarget1538.Get() && a == 0xb)
		return 1;
	return 0;
}
// END FUNCTION
