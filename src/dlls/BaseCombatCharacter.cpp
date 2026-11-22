// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
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

// FUNCTION: 0x10106050 size=0x293
#include "utllinkedlist.h"
#include "utlrbtree.h"
#include "CBaseFlexCalves.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CAI_BaseNPCTroika.h"
#include "CExpressionTable.h"
#include "CUnknown10105a60.h"
#include "UtlMem.h"
#include "ScopeTrace.h"
#include <string.h>
#include "utlvector.h"

struct CDevFlagObjView
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};
extern CDevFlagObjView *g_107091bc;
extern CExpressionTable g_10709200;

struct CSceneEventView
{
	float sub_10076280(float flTime);
};

struct CExprCalcView
{
	float sub_10106e20(float flTime, void *pCurve);
};

struct CExprVectorView
{
	void *m_pMemory;
	int m_nAlloc;
	int m_nGrow;
	int m_nSize;
	void *m_pElements;
};

#define exprs (*(CUtlVector<CExpressionRecord> *)&m_pExpressions10bc)
// TARGET: CBaseCombatCharacter::sub_10106050
void CBaseCombatCharacter::sub_10106050(int unused)
{
	ScopeTrace trace("CBaseCombatCharacter::UpdateExpressions", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	void *pModel = sub_100952d0(-1);
	if (m_idxDefExpression == -1 || !pModel || *(int *)((char *)pModel + 0x160) <= 0)
		return;
	if (!g_107091bc->vfunc1() && g_107091bc->m_n2c > 0) {
		exprs.RemoveAll();
		((UtlMem *)&exprs.m_Memory)->sub_10107480();
		exprs.ResetDbgInfo();
		return;
	}
	float *pFlexWeights = (float *)((char *)this + 0x858);
	float flNow = gpGlobals->curtime;
	float flTotal = 0.0f;
	CAI_BaseNPCTroika *pNPC = (CAI_BaseNPCTroika *)m_pNPC98;
	int nDefault;
	if (pNPC && pNPC->sub_102c0aa0())
		nDefault = *(int *)((char *)pNPC + 0x64d0);
	else
		nDefault = m_idxDefExpression;
	float weights[128];
	for (int k = 0; k < 128; k++)
		weights[k] = 0.0f;
	for (int i = 0; i < exprs.Count(); ) {
		if (flNow >= exprs[i].m_flFadeTime) {
			exprs.Remove(i);
			continue;
		}
		CExpressionRecord *p = &exprs[i];
		if (flNow > p->m_flStart) {
			float flValue;
			if (p->m_pEvent1c && p->m_pScene18)
				flValue = ((CSceneEventView *)p->m_pEvent1c)->sub_10076280(((CUnknown1007dfa0 *)p->m_pScene18)->sub_1007dfa0());
			else
				flValue = ((CExprCalcView *)this)->sub_10106e20(flNow, p);
			flTotal = flValue + flTotal;
			sub_10105e20(weights, (char *)g_10709200.sub_101051b0(p->m_iExpression));
			((CUnknown10105a60 *)this)->sub_10105a60(pFlexWeights, pFlexWeights, weights, flValue, 128);
		}
		i++;
	}
	if (flTotal < 1.0) {
		char *pExpr = (char *)g_10709200.sub_101051b0(nDefault);
		float flBlend = m_flDefExpressionIntensity;
		flBlend *= 1.0 - flTotal;
		sub_10105e20(weights, pExpr);
		((CUnknown10105a60 *)this)->sub_10105a60(pFlexWeights, pFlexWeights, weights, flBlend, 128);
	}
}
// END FUNCTION

// FUNCTION: 0x101063a0 size=0xbf
#include "CBaseCombatCharacter.h"
#include "CLogicAuto.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

struct ExprRecord { char pad[8]; float m_flTime; char pad2[0x20 - 0xc]; };

void CBaseCombatCharacter::sub_101063a0()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::FadeoutExpressions";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	float now = gpGlobals->curtime;
	int i = 0;
	for (; i < *(int *)((char *)this + 0x10c8); i++) {
		float *p = &(*(ExprRecord **)((char *)this + 0x10bc))[i].m_flTime;
		if (*p > now)
			*p = now;
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10106490 size=0xbc
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern void (*g_109f3624)(void *);
extern char g_106b8540[];
extern char g_105387dc[];
extern char g_1056bb3c[];

// TARGET: sub_10106490
void __fastcall sub_10106490(char *p)
{
	const char *name;
	if (p) {
		name = *(const char **)(p + 0x26c);
		if (!name)
			name = g_106b8540;
	} else {
		name = g_105387dc;
	}
	g_109f3620[*g_109f3680].a = g_1056bb3c;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	*(int *)(p + 0x10c8) = 0;
	if (*(int *)(p + 0x10c4) != -1) {
		if (*(void **)(p + 0x10bc)) {
			g_109f3624(*(void **)(p + 0x10bc));
			*(void **)(p + 0x10bc) = 0;
		}
		*(int *)(p + 0x10c0) = 0;
	}
	*(int *)(p + 0x10cc) = *(int *)(p + 0x10bc);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10106580 size=0x1d9
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }
inline int ENTINDEX_E(int pEdict) { return engine->vfunc35(pEdict); }

struct CExprDist1460
{
	int sub_101f1d80(int a, int b);
};

void CBaseCombatCharacter::sub_10106580(const char *pszName, int d, float a, float e, float b, float flStrength)
{
	ScopeTrace trace("CBaseCombatCharacter::SetExpression", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	sub_101063a0();
	float flIntensity;
	if (flStrength < 0.0 && m_hDialogPartnerFE8.Get()) {
		int edict = m_hDialogPartnerFE8->m_pEdict2e0;
		int i1 = ENTINDEX_E(m_pEdict2e0);
		int i2 = ENTINDEX_E(edict);
		float flDist = (float)((CExprDist1460 *)((char *)this + 0x1460))->sub_101f1d80(i1, i2);
		flIntensity = (flDist < 0.0f ? 0.0f : (flDist > 100.0f ? 100.0f : flDist)) * 0.01f;
	} else {
		flIntensity = (flStrength > 1.0 || flStrength < 0.1) ? 0.5f : flStrength;
	}
	sub_101067e0(pszName, a, b, flIntensity, d, e);
}
// END FUNCTION

// FUNCTION: 0x101067e0 size=0x1d7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "globalvars.h"
#include "utlvector.h"

typedef void (*FnDevWarning)(int, const char *, ...);
extern FnDevWarning g_109f3658;

typedef CUtlVector<CBaseCombatCharacter::CExpressionRecord> CExpressionList;

void CBaseCombatCharacter::sub_101067e0(const char *pszName, float a, float b, float c, float d, float e)
{
	ScopeTrace trace("CBaseCombatCharacter::AddScriptedExpression",
		this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if ( ((CExpressionList *)&m_pExpressions10bc)->Count() >= 10 )
	{
		g_109f3658(2, "NPC %s has %d expressions, max: %d", ((CExpressionList *)&m_pExpressions10bc)->Count(), 10);
	}
	else
	{
		if ( ((CExpressionList *)&m_pExpressions10bc)->Count() == 9 )
		{
			int idx = 0;
			for ( int i = 0; i < ((CExpressionList *)&m_pExpressions10bc)->Count(); i++ )
			{
				if ( (*(CExpressionList *)&m_pExpressions10bc)[i].m_flFadeTime < 3.4028235e38f )
					idx = i;
			}
			((CExpressionList *)&m_pExpressions10bc)->Remove(idx);
		}

		int nExpr = sub_10106a40(pszName);
		if ( nExpr != -1 )
		{
			CExpressionRecord rec;
			*(float *)((char *)&rec + 0x0c) = a;
			*(float *)((char *)&rec + 0x10) = b;
			rec.m_iExpression = nExpr;
			rec.m_flStart = gpGlobals->curtime + d;
			rec.m_flFadeTime = rec.m_flStart + a + b + e;
			*(float *)((char *)&rec + 0x14) = c;
			rec.m_pEvent1c = 0;
			rec.m_pScene18 = 0;
			((CExpressionList *)&m_pExpressions10bc)->AddToTail(rec);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10106a40 size=0xbf
#include "CBaseAnimating.h"
#include "CExpressionTable.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern CExpressionTable g_10709200;

int __fastcall sub_10106a40(CBaseAnimating *self, int, int a)
{
    CBaseAnimating *e = self;
    const char *name = e ? (e->m_name26c ? e->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::LookupExpressionIndex";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int *hdr = (int *)e->sub_100952d0(-1);
    if (!hdr) {
        (*g_109f3680)--;
        return -1;
    }
    if (hdr[0x160 / 4] <= 0) {
        (*g_109f3680)--;
        return -1;
    }
    int r = g_10709200.sub_10105870(a, (int)e);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10106b30 size=0xc1
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern int (__cdecl *g_109f388c)(char *dest, int size, const char *fmt, ...);
void sub_100b6510(void *pSrc, char *pOut);

void CBaseCombatCharacter::sub_10106b30(const char *pszName, char *pDest, int size)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::GetExpressionOverrideFile";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	char *hdr = (char *)((CBaseAnimating *)this)->sub_100952d0(-1);
	if (hdr) {
		char buf[128];
		sub_100b6510(hdr + 0xc, buf);
		g_109f388c(pDest, size, "expressions/%s_%s.vfe", buf, pszName);
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10106c40 size=0x17d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <stdio.h>
#include "ScopeTrace.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
__declspec(dllimport) void DevWarning(const char *fmt, ...);
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *p);
struct ExprLoader {
    void sub_100119c3(CBaseEntity *pEnt, char *pszFile, int bFlag);
};
extern ExprLoader g_10709200;
void __fastcall sub_10003747(CBaseEntity *self);
struct ExprVec {
    void *m_pMemory;
    int m_allocationCount;
    int m_growSize;
    int m_size;
    void *m_pElements;
};
struct ExprFields {
    char pad[0x10bc];
    ExprVec m_vec;
};
struct CBCCReloadUnit : CBaseCombatCharacter { void sub_10106c40(); };
// TARGET: CBCCReloadUnit::sub_10106c40
void CBCCReloadUnit::sub_10106c40()
{
    CBaseCombatCharacter *self = this;
    ScopeTrace trace("CBaseCombatCharacter::ReloadExpressionsForMyModel", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
    ExprVec *pVec = &((ExprFields *)self)->m_vec;
    pVec->m_size = 0;
    if (pVec->m_growSize != -1) {
        if (pVec->m_pMemory) {
            Plat_Free(pVec->m_pMemory);
            pVec->m_pMemory = 0;
        }
        pVec->m_allocationCount = 0;
    }
    pVec->m_pElements = pVec->m_pMemory;
    char *pHdr = (char *)((CBaseAnimating *)self)->sub_100952d0(-1);
    if (!pHdr) {
        int unused;
        const char **ppName = self->vfunc9(&unused);
        const char *pszModel = *ppName;
        if (!pszModel)
            pszModel = g_106b8540;
        DevWarning("Could not load expressions for %s, model %s is invalid.\n", self->sub_100ab4f0(), pszModel);
        return;
    }
    if (*(int *)(pHdr + 0x160) > 0) {
        char szFile[128];
        self->sub_10106b30("expressions", szFile, 128);
        g_10709200.sub_100119c3(self, szFile, 1);
        Q_snprintf(szFile, 128, "expressions/%s.vfe", "expressions");
        g_10709200.sub_100119c3(self, szFile, 0);
        sub_10003747(self);
    }
}
// END FUNCTION

// FUNCTION: 0x10106e20 size=0x114
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
struct ExprCurve {
    int pad0;
    float a, b, c, d, e;
};
float __fastcall sub_10106e20(CBaseEntity *self, int unused, float t, ExprCurve *p)
{
    ScopeTrace trace("CBaseCombatCharacter::CalcExpressionIntensity", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
    float lo = p->b - p->d;
    float hi = p->a + p->c;
    float r = 0.0f;
    if (t > hi && t < lo)
        return p->e;
    float f;
    if (t < hi) {
        f = (t - p->a) / p->c;
        float f3 = f * f * f;
        r = (3.0f * f * f - (f3 + f3)) * p->e;
    } else if (t > lo) {
        f = (p->b - t) / p->d;
        float f3 = f * f * f;
        r = (3.0f * f * f - (f3 + f3)) * p->e;
    }
    return r;
}
// END FUNCTION

// FUNCTION: 0x10106f90 size=0x81
#include "CBaseCombatCharacter.h"
#include "CExpressionTable.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1056bd64[];
extern char g_105387dc[];
extern char g_106b8540[];
extern CExpressionTable g_10709200;
bool CBaseCombatCharacter::sub_10106f90(int expression)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1056bd64;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    bool r = g_10709200.IsValidExpression(expression);
    --*g_109f3680;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10107050 size=0x9f
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_10107050(CBaseEntity *pEnt)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SetDialogPartner";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (pEnt)
        *(unsigned int *)((char *)this + 0xfe8) = *pEnt->vfunc1();
    else
        *(unsigned int *)((char *)this + 0xfe8) = 0xffffffff;
    (*g_109f3680)--;
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

// FUNCTION: 0x1031a5c0 size=0x5
int * sub_1031a600(void);
int * g_10936edc = ((int * (*)(int))sub_1031a600)(0);
// END FUNCTION

// FUNCTION: 0x1031a600 size=0x59ee
#include "CBaseEntity.h"
#include "DisciplineSrc.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "datamap.h"
class CBaseEntity;
extern ISaveRestoreOps *g_1055dc70;
extern ISaveRestoreOps *g_105b4cd8;
extern ISaveRestoreOps *g_10616648;
struct DisciplineSrc;
template <class T> class CHandle;
void sub_10002ae0();
void sub_10004390();
void sub_100043b8();
void sub_100044cb();
void sub_10004665();
void sub_10004cb4();
void sub_10005e1b();
void sub_1000671c();
void sub_100079dc();
void sub_10009f52();
void sub_1000b370();
void sub_1000b4a6();
void sub_1000b898();
void sub_1000c130();
void sub_1000c46e();
void sub_1000cdba();
void sub_1000e917();
void sub_1000fcef();
void sub_100100b9();
void sub_1001018b();
void sub_100128aa();
void sub_10012d9b();
void sub_1001348f();
void sub_10014a6f();
#include "CUtlVectorDataOps.h"
inline ISaveRestoreOps *Ops_109f0748()
{
	static CUtlVectorDataOps<CUtlVector<DisciplineSrc,CUtlMemory<DisciplineSrc> >,9> ops;
	return (ISaveRestoreOps *)&ops;
}
#include "CHandleVectorOps.h"
#include "saverestore_utlvector.h"
extern int g_1061664c[2];
int *sub_1031a600()
{
    static typedescription_t dataDesc[] = {
        { 0 },
        { 1, "m_flLastBCCUpdate", {0xa80, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flLastBloodHealHOTUpdate", {0xa84, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bMeleeSwingIsLive", {0xaa1, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bDidSendIncomingSwingNotice", {0xaa2, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flLastMeleeSwingUpdate", {0xaa4, 0}, 1, 2, 0, 0, 0 },
        { 0xe, "m_vecLastMeleeSwingPosition", {0xaa8, 0}, 1, 2, 0, 0, 0 },
        { 0xe, "m_angLastMeleeSwingAngles", {0xab4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iVendorIndex", {0xe30, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iVendorRestrictFlags", {0xe34, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iOccultPowerFlags", {0xe38, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flNextEyeLookTime", {0xe40, 0}, 1, 2, 0, 0, 0 },
        { 0xe, "m_vEyeLookTarget", {0xe44, 0}, 1, 2, 0, 0, 0 },
        { 0xe, "m_vCurEyeTarget", {0xe50, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hEyeLookTarget", {0xe64, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flHeadYaw", {0xe5c, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flHeadPitch", {0xe60, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bAimWeaponAtTarget", {0xe6c, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hWeaponAimTarget", {0xe70, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_vWeaponAimOffset", {0xe74, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iFriendPresenceEffect", {0xe80, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flEnemeyPresencePercent", {0xe84, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iEnemyPresenceEffect", {0xe88, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flNextPresenceCheckTime", {0xe8c, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flNextComfortCheckTime", {0xe90, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iComfortingCount", {0xe94, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_bitsDamageType", {0xe98, 0}, 1, 2, 0, 0, 0 },
        { 7, "m_rgbTimeBasedDamage", {0xe9c, 0}, 8, 2, 0, 0, 0 },
        { 0xc, "m_hLastWeapon", {0xea4, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastMeleeWeapon", {0xea8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iDisciplineContextTgtFlags", {0xeac, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iDisciplineFlags", {0xeb0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iDisciplineFlags2", {0xeb4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iDisciplinePreFlags", {0xeb8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iDisciplinePreFlags2", {0xebc, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_fDisciplineTimers", {0xec0, 0}, 60, 2, 0, 0, 0 },
        { 4, "m_iDisciplineCastCounter", {0xfb0, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_aDisciplineSrcBCCs", {0xfb4, 0}, 1, 2, 0, Ops_109f0748(), 0 },
        { 0xf, "m_flMoveStartTime", {0xfcc, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bIsUnkillable", {0xfc8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iMiscFlags", {0xfe4, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hDialogPartner", {0xfe8, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flEyeIntegRate", {0xe3c, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_Activity", {0xfec, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_IdealActivity", {0xff0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_TranslatedActivity", {0xff4, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hBodyFireParticles", {0xff8, 0}, 18, 2, 0, 0, 0 },
        { 0xc, "m_hInteractiveUseTarget", {0x1040, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hAnimFollowModel", {0x5a8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_ShakyType", {0x1044, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flShakyHandsTimer", {0x1048, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flShakyHandsLastPose", {0x104c, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flShakyHandsIntensity", {0x1050, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flShakyHands_PoseOffset", {0x1054, 0}, 2, 2, 0, 0, 0 },
        { 1, "m_flIdeal_PoseParameters", {0x105c, 0}, 2, 2, 0, 0, 0 },
        { 1, "m_flSet_PoseParameters", {0x1064, 0}, 2, 2, 0, 0, 0 },
        { 4, "m_idxPoseParameter", {0x106c, 0}, 2, 2, 0, 0, 0 },
        { 3, "m_vecHeadLocalForward", {0x1074, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_idxHeadBone", {0x1080, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nStealthBonus", {0x1084, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bWillTalk", {0x1088, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flDebugSlowedScale", {0x10a8, 0}, 1, 2, 0, 0, 0 },
        { 2, "m_sTeamName", {0x10ac, 0}, 1, 6, "team_name", 0, 0 },
        { 4, "m_vDiscBloodType", {0xfd0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_idxDefExpression", {0x10b4, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flDefExpressionIntensity", {0x10b8, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flCameraOverrideFadeTime", {0x10d0, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bCameraTargetIsHead", {0x10d4, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hActiveIArmor", {0x10dc, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastIArmor", {0x10e0, 0}, 1, 2, 0, 0, 0 },
        { 2, "m_statTemplate", {0x10e4, 0}, 1, 6, "stattemplate", 0, 0 },
        { 4, "m_bfAINPCFlags", {0x14b8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_bfAINPCFlags2", {0x14bc, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iBloodStolen", {0x14a0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iCurBloodStolenMod", {0x14a4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_attrib_order ]", {0x10f0, 0}, 1, 6, "base_attrib_order", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_strength ]", {0x10f4, 0}, 1, 6, "base_strength", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_dexterity ]", {0x10f8, 0}, 1, 6, "base_dexterity", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_stamina ]", {0x10fc, 0}, 1, 6, "base_stamina", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_charisma ]", {0x1100, 0}, 1, 6, "base_charisma", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_manipulation ]", {0x1104, 0}, 1, 6, "base_manipulation", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_appearance ]", {0x1108, 0}, 1, 6, "base_appearance", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_perception ]", {0x110c, 0}, 1, 6, "base_perception", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_intelligence ]", {0x1110, 0}, 1, 6, "base_intelligence", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_wits ]", {0x1114, 0}, 1, 6, "base_wits", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_clan ]", {0x1118, 0}, 1, 6, "base_clan", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_gender ]", {0x111c, 0}, 1, 6, "base_gender_", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_bloodpool ]", {0x1120, 0}, 1, 6, "base_bloodpool", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_bloodpool_max ]", {0x1124, 0}, 1, 6, "base_bloodpool_max", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_faithpoints ]", {0x1128, 0}, 1, 6, "base_faithpoints", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_health ]", {0x112c, 0}, 1, 6, "base_vhealth", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_health_aggravated_dmg ]", {0x1130, 0}, 1, 6, "base_health_aggravated_dmg", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_max_health ]", {0x1134, 0}, 1, 6, "base_vmax_health", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_generation ]", {0x1138, 0}, 1, 6, "base_generation", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_armor_rating ]", {0x113c, 0}, 1, 6, "base_armor_rating", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_level ]", {0x1140, 0}, 1, 6, "base_level", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_frenzy_check_mod ]", {0x1144, 0}, 1, 6, "base_frenzy_check_mod", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_soak_pool ]", {0x1148, 0}, 1, 6, "base_soak_pool", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_automatic_soak_successes ]", {0x114c, 0}, 1, 6, "base_automatic_soak_successes", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_automatic_str_successes ]", {0x1150, 0}, 1, 6, "base_automatic_str_successes", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_health_buffer ]", {0x1154, 0}, 1, 6, "base_health_buffer", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_encumbrance ]", {0x1158, 0}, 1, 6, "base_encumbrance", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_humanity ]", {0x115c, 0}, 1, 6, "base_humanity", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_masquerade ]", {0x1160, 0}, 1, 6, "base_masquerade", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_experience ]", {0x1178, 0}, 1, 6, "base_experience", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_experience_modifier ]", {0x1164, 0}, 1, 6, "base_experience_modifier", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_starting_equipment ]", {0x1168, 0}, 1, 6, "base_starting_equipment", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_excluded_equipment ]", {0x116c, 0}, 1, 6, "base_excluded_equipment", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_autolevel_template ]", {0x1174, 0}, 1, 6, "base_autolevel_template", 0, 0 },
        { 4, "m_iVAttributesBase[ v_attribute_vampheal_type ]", {0x1170, 0}, 1, 6, "base_vampheal_type", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_attrib_order ]", {0x117c, 0}, 1, 6, "attrib_order", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_strength ]", {0x1180, 0}, 1, 6, "strength", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_dexterity ]", {0x1184, 0}, 1, 6, "dexterity", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_stamina ]", {0x1188, 0}, 1, 6, "stamina", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_charisma ]", {0x118c, 0}, 1, 6, "charisma", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_manipulation ]", {0x1190, 0}, 1, 6, "manipulation", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_appearance ]", {0x1194, 0}, 1, 6, "appearance", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_perception ]", {0x1198, 0}, 1, 6, "perception", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_intelligence ]", {0x119c, 0}, 1, 6, "intelligence", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_wits ]", {0x11a0, 0}, 1, 6, "wits", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_clan ]", {0x11a4, 0}, 1, 6, "clan", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_gender ]", {0x11a8, 0}, 1, 6, "gender", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_bloodpool ]", {0x11ac, 0}, 1, 6, "bloodpool", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_bloodpool_max ]", {0x11b0, 0}, 1, 6, "bloodpool_max", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_faithpoints ]", {0x11b4, 0}, 1, 6, "faithpoints", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_health ]", {0x11b8, 0}, 1, 6, "vhealth", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_health_aggravated_dmg ]", {0x11bc, 0}, 1, 6, "health_aggravated_dmg", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_max_health ]", {0x11c0, 0}, 1, 6, "vmax_health", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_generation ]", {0x11c4, 0}, 1, 6, "generation", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_armor_rating ]", {0x11c8, 0}, 1, 6, "armor_rating", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_level ]", {0x11cc, 0}, 1, 6, "level", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_frenzy_check_mod ]", {0x11d0, 0}, 1, 6, "frenzy_check_mod", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_soak_pool ]", {0x11d4, 0}, 1, 6, "soak_pool", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_automatic_soak_successes ]", {0x11d8, 0}, 1, 6, "automatic_soak_successes", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_automatic_str_successes ]", {0x11dc, 0}, 1, 6, "automatic_str_successes", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_health_buffer ]", {0x11e0, 0}, 1, 6, "health_buffer", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_encumbrance ]", {0x11e4, 0}, 1, 6, "encumbrance", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_humanity ]", {0x11e8, 0}, 1, 6, "humanity", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_masquerade ]", {0x11ec, 0}, 1, 6, "masquerade", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_experience ]", {0x1204, 0}, 1, 6, "experience", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_experience_modifier ]", {0x11f0, 0}, 1, 6, "experience_modifier", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_starting_equipment ]", {0x11f4, 0}, 1, 6, "starting_equipment", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_excluded_equipment ]", {0x11f8, 0}, 1, 6, "excluded_equipment", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_autolevel_template ]", {0x1200, 0}, 1, 6, "autolevel_template", 0, 0 },
        { 4, "m_iVAttributesCurrent[ v_attribute_vampheal_type ]", {0x11fc, 0}, 1, 6, "vampheal_type", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_ability_order ]", {0x1210, 0}, 1, 6, "base_ability_order", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_brawl ]", {0x1214, 0}, 1, 6, "base_brawl", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_dodge ]", {0x1218, 0}, 1, 6, "base_dodge", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_intimidate ]", {0x121c, 0}, 1, 6, "base_intimidate", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_subterfuge ]", {0x1220, 0}, 1, 6, "base_subterfuge", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_firearms ]", {0x1224, 0}, 1, 6, "base_firearms", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_melee ]", {0x1228, 0}, 1, 6, "base_melee", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_security ]", {0x122c, 0}, 1, 6, "base_security", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_stealth ]", {0x1230, 0}, 1, 6, "base_stealth", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_computers ]", {0x1234, 0}, 1, 6, "base_computers", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_finance ]", {0x1238, 0}, 1, 6, "base_finance", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_investigation ]", {0x123c, 0}, 1, 6, "base_investigation", 0, 0 },
        { 4, "m_iVAbilitiesBase[ v_ability_academics ]", {0x1240, 0}, 1, 6, "base_academics", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_ability_order ]", {0x1244, 0}, 1, 6, "ability_order", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_brawl ]", {0x1248, 0}, 1, 6, "brawl", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_dodge ]", {0x124c, 0}, 1, 6, "dodge", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_intimidate ]", {0x1250, 0}, 1, 6, "intimidate", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_subterfuge ]", {0x1254, 0}, 1, 6, "subterfuge", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_firearms ]", {0x1258, 0}, 1, 6, "firearms", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_melee ]", {0x125c, 0}, 1, 6, "melee", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_security ]", {0x1260, 0}, 1, 6, "security", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_stealth ]", {0x1264, 0}, 1, 6, "stealth", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_computers ]", {0x1268, 0}, 1, 6, "computers", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_finance ]", {0x126c, 0}, 1, 6, "finance", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_investigation ]", {0x1270, 0}, 1, 6, "investigation", 0, 0 },
        { 4, "m_iVAbilitiesCurrent[ v_ability_academics ]", {0x1274, 0}, 1, 6, "academics", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_animalism ]", {0x1280, 0}, 1, 6, "base_animalism", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_auspex ]", {0x1284, 0}, 1, 6, "base_auspex", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_blood_healing ]", {0x1288, 0}, 1, 6, "base_blood_healing", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_celerity ]", {0x128c, 0}, 1, 6, "base_celerity", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_corpus_vampirus ]", {0x1290, 0}, 1, 6, "base_corpus_vampirus", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_dementation ]", {0x1294, 0}, 1, 6, "base_dementation", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_dominate ]", {0x1298, 0}, 1, 6, "base_dominate", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_fortitude ]", {0x129c, 0}, 1, 6, "base_fortitude", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_obfuscate ]", {0x12a0, 0}, 1, 6, "base_obfuscate", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_potence ]", {0x12a4, 0}, 1, 6, "base_potence", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_presence ]", {0x12a8, 0}, 1, 6, "base_presence", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_protean ]", {0x12ac, 0}, 1, 6, "base_protean", 0, 0 },
        { 4, "m_iVDisciplinesBase[ v_discipline_thaumaturgy ]", {0x12b0, 0}, 1, 6, "base_thaumaturgy", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_animalism ]", {0x12c4, 0}, 1, 6, "animalism", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_auspex ]", {0x12c8, 0}, 1, 6, "auspex", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_blood_healing ]", {0x12cc, 0}, 1, 6, "blood_healing", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_celerity ]", {0x12d0, 0}, 1, 6, "celerity", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_corpus_vampirus ]", {0x12d4, 0}, 1, 6, "corpus_vampirus", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_dementation ]", {0x12d8, 0}, 1, 6, "dementation", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_dominate ]", {0x12dc, 0}, 1, 6, "dominate", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_fortitude ]", {0x12e0, 0}, 1, 6, "fortitude", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_obfuscate ]", {0x12e4, 0}, 1, 6, "obfuscate", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_potence ]", {0x12e8, 0}, 1, 6, "potence", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_presence ]", {0x12ec, 0}, 1, 6, "presence", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_protean ]", {0x12f0, 0}, 1, 6, "protean", 0, 0 },
        { 4, "m_iVDisciplinesCurrent[ v_discipline_thaumaturgy ]", {0x12f4, 0}, 1, 6, "thaumaturgy", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_animalism ]", {0x1310, 0}, 1, 6, "base_active_animalism", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_auspex ]", {0x1314, 0}, 1, 6, "base_active_auspex", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_blood_healing ]", {0x1318, 0}, 1, 6, "base_active_blood_healing", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_celerity ]", {0x131c, 0}, 1, 6, "base_active_celerity", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_corpus_vampirus ]", {0x1320, 0}, 1, 6, "base_active_corpus_vampirus", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_dementation ]", {0x1324, 0}, 1, 6, "base_active_dementation", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_dominate ]", {0x1328, 0}, 1, 6, "base_active_active_active_dominate", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_fortitude ]", {0x132c, 0}, 1, 6, "base_active_fortitude", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_obfuscate ]", {0x1330, 0}, 1, 6, "base_active_obfuscate", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_potence ]", {0x1334, 0}, 1, 6, "base_active_potence", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_presence ]", {0x1338, 0}, 1, 6, "base_active_presence", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_protean ]", {0x133c, 0}, 1, 6, "base_active_protean", 0, 0 },
        { 4, "m_iVActiveDisciplinesBase[ v_discipline_thaumaturgy ]", {0x1340, 0}, 1, 6, "base_active_thaumaturgy", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_animalism ]", {0x1354, 0}, 1, 6, "active_animalism", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_auspex ]", {0x1358, 0}, 1, 6, "active_auspex", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_blood_healing ]", {0x135c, 0}, 1, 6, "active_blood_healing", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_celerity ]", {0x1360, 0}, 1, 6, "active_celerity", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_corpus_vampirus ]", {0x1364, 0}, 1, 6, "active_corpus_vampirus", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_dementation ]", {0x1368, 0}, 1, 6, "active_dementation", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_dominate ]", {0x136c, 0}, 1, 6, "active_dominate", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_fortitude ]", {0x1370, 0}, 1, 6, "active_fortitude", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_obfuscate ]", {0x1374, 0}, 1, 6, "active_obfuscate", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_potence ]", {0x1378, 0}, 1, 6, "active_potence", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_presence ]", {0x137c, 0}, 1, 6, "active_presence", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_protean ]", {0x1380, 0}, 1, 6, "active_protean", 0, 0 },
        { 4, "m_iVActiveDisciplinesCurrent[ v_discipline_thaumaturgy ]", {0x1384, 0}, 1, 6, "active_thaumaturgy", 0, 0 },
        { 4, "m_iVHistoryID", {0x13a0, 0}, 1, 6, "vhistory", 0, 0 },
        { 4, "m_iGender", {0x13cc, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flLastFaithShieldHealTime", {0x13d0, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flHolyLightEndTime", {0x13d4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iMoney", {0x13d8, 0}, 1, 6, "money", 0, 0 },
        { 0xa, "m_tEffectList", {0x13dc, 0}, 1, 2, 0, g_105b4cd8, 0 },
        { 4, "m_iCurVReaction", {0x1468, 0}, 1, 6, "cur_reaction", 0, 0 },
        { 4, "m_iCurFrenzyCount", {0x146c, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flNextFrenzyTimeThreshhold", {0x1470, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bFrenzyHunger", {0x1474, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bCantBreakGrapple", {0x1475, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bIsFrenzyGrapple", {0x1476, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flBreakGrappleTimer", {0x1478, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flGrappleDamageTimer", {0x147c, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bIsBCCTargetable", {0x1480, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bIsAlive", {0x1481, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bNeverMeleeOpponent", {0x1482, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bAllowsInterpenetratingAttacks", {0xfe0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nMotionTrail", {0x1484, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flSpeedScale", {0x1488, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flJumpStartTime", {0x148c, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flNextFeedPulse", {0x1490, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flNextFeedDuration", {0x1494, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flFeedStartTime", {0x1498, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iLastDisciplineHitBy", {0xfd4, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bLastDisciplineResist", {0xfd8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iLastStoredDmg", {0xfdc, 0}, 1, 2, 0, 0, 0 },
        { 4, "InputHumanityAdd", {0, 0}, 1, 8, "HumanityAdd", 0, (void *)sub_1001348f },
        { 4, "InputBloodloss", {0, 0}, 1, 8, "Bloodloss", 0, (void *)sub_100128aa },
        { 4, "InputBloodgain", {0, 0}, 1, 8, "Bloodgain", 0, (void *)sub_1000671c },
        { 0, "InputClearActiveDisciplines", {0, 0}, 1, 8, "ClearActiveDisciplines", 0, (void *)sub_1000cdba },
        { 4, "m_aCurWpnActivity", {0x14b0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_aNextWpnActivity", {0x14b4, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_disciplineVisuals", {0x14c0, 0}, 1, 2, 0, (ISaveRestoreOps *)CUtlVectorDataopsInstantiator<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity> > >, 12>::GetDataOps((CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity> > > *)0), 0 },
        { 4, "m_nLastObfuscateLevel", {0x14d4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_bitsObfuscateRules", {0x14d8, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bMeetsObfuscateRules", {0x14dc, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flObfBrokeSafeTime", {0x14e0, 0}, 1, 2, 0, 0, 0 },
        { 7, "m_clientAuraCount", {0x14e4, 0}, 32, 2, 0, 0, 0 },
        { 0xc, "m_hProteanTransformOther", {0x155c, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flProteanTransformStartTime", {0x1560, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flNextAttack", {0x1564, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_eHull", {0x1568, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_bloodColor", {0x1570, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flFieldOfView", {0x1574, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_HackedGunPos", {0x1578, 0}, 1, 2, 0, 0, 0 },
        { 2, "m_RelationshipString", {0x1584, 0}, 1, 6, "Relationship", 0, 0 },
        { 5, "m_bCanSwitchWeapons", {0x1588, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bCantDropWeapons", {0x1589, 0}, 1, 6, "cantdropweapons", 0, 0 },
        { 4, "m_LastHitGroup", {0x1594, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_impactEnergyScale", {0xdc, 0}, 1, 0xe, "physdamagescale", 0, 0 },
        { 0xa, "m_Relationship", {0x1598, 0}, 1, 2, 0, g_10616648, 0 },
        { 4, "m_iAmmo", {0x15a4, 0}, 32, 2, 0, 0, 0 },
        { 0xc, "m_hMyWeapons", {0x1624, 0}, 224, 2, 0, 0, 0 },
        { 0xc, "m_hActiveWeapon", {0x19a4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iFloatSoundFrequency", {0x10e8, 0}, 1, 6, "floatfreq", 0, 0 },
        { 0xf, "m_flNextFloatSoundTime", {0x10ec, 0}, 1, 2, 0, 0, 0 },
        { 0xb, "InputInventory_Remove", {0, 0}, 1, 8, "Inventory_Remove", 0, (void *)sub_1000b370 },
        { 4, "InputMoneyAdd", {0, 0}, 1, 8, "MoneyAdd", 0, (void *)sub_1000b4a6 },
        { 4, "InputMoneyRemove", {0, 0}, 1, 8, "MoneyRemove", 0, (void *)sub_1000fcef },
        { 0, "InputBarterBegin", {0, 0}, 1, 8, "BarterBegin", 0, (void *)sub_100043b8 },
        { 0, "InputBarterEnd", {0, 0}, 1, 8, "BarterEnd", 0, (void *)sub_10004390 },
        { 4, "BloodHealIn", {0, 0}, 1, 8, "BloodHeal", 0, (void *)sub_100100b9 },
        { 4, "InputFrenzyCheck", {0, 0}, 1, 8, "FrenzyCheck", 0, (void *)sub_10002ae0 },
        { 0, "InputFrenzyTrigger", {0, 0}, 1, 8, "FrenzyTrigger", 0, (void *)sub_10004665 },
        { 4, "InputFrenzyCheck", {0, 0}, 1, 8, "HungerCheck", 0, (void *)sub_10002ae0 },
        { 4, "InputFrenzyUpdate", {0, 0}, 1, 8, "FrenzyUpdate", 0, (void *)sub_100079dc },
        { 0, "InputPlayFloat", {0, 0}, 1, 8, "PlayFloat", 0, (void *)sub_1000b898 },
        { 4, "InputWillTalk", {0, 0}, 1, 8, "WillTalk", 0, (void *)sub_1000c130 },
        { 4, "InputChangeMasqueradeLevel", {0, 0}, 1, 8, "ChangeMasqueradeLevel", 0, (void *)sub_10005e1b },
        { 1, "InputFadeHeadAsCameraTarget", {0, 0}, 1, 8, "FadeHeadAsCameraTarget", 0, (void *)sub_1000e917 },
        { 1, "InputFadeBodyAsCameraTarget", {0, 0}, 1, 8, "FadeBodyAsCameraTarget", 0, (void *)sub_1001018b },
        { 0, "InputSetHeadAsCameraTarget", {0, 0}, 1, 8, "SetHeadAsCameraTarget", 0, (void *)sub_10004cb4 },
        { 0, "InputSetBodyAsCameraTarget", {0, 0}, 1, 8, "SetBodyAsCameraTarget", 0, (void *)sub_100044cb },
        { 2, "InputLookAtEntityEye", {0, 0}, 1, 8, "LookAtEntityEye", 0, (void *)sub_10014a6f },
        { 2, "InputLookAtEntityCenter", {0, 0}, 1, 8, "LookAtEntityCenter", 0, (void *)sub_10012d9b },
        { 2, "InputLookAtEntityOrigin", {0, 0}, 1, 8, "LookAtEntityOrigin", 0, (void *)sub_1000c46e },
        { 0, "InputLookAtEntityDefault", {0, 0}, 1, 8, "LookAtEntityDefault", 0, (void *)sub_10009f52 },
        { 0xa, "m_OnSellWeapon", {0x151c, 0}, 1, 0x16, "OnSellWeapon", g_1055dc70 },
        { 0xa, "m_OnBarterClose", {0x1504, 0}, 1, 0x16, "OnBarterClose", g_1055dc70 },
        { 1, "m_flMeltExpansionTime", {0x19a8, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flMeltMaxExpand", {0x19ac, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_LootableType", {0x158c, 0}, 1, 6, "lootable_type", 0, 0 },
    };
    g_1061664c[1] = 305;
    g_1061664c[0] = (int)&dataDesc[1];
    return g_1061664c;
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

// FUNCTION: 0x10321690 size=0x60
struct S10321690Ent { char pad[0xa8]; int m_pPlayer; char pad2[0x2e0 - 0xac]; int m_edict; };
int *sub_10321690(S10321690Ent *pEnt, int *pRet, unsigned int *pBits)
{
	if (pEnt && pEnt->m_pPlayer) {
		unsigned int idx = engine->vfunc35(pEnt->m_edict) - 1;
		pBits[0] = 0;
		pBits[idx >> 5] |= 1 << (idx & 0x1f);
		return pRet;
	}
	pBits[0] = 0;
	return pRet;
}
// END FUNCTION

// FUNCTION: 0x10321710 size=0xa
#include "SendTable.h"
SendTable g_10937c6c;
// END FUNCTION

// FUNCTION: 0x10321790 size=0x5
int sub_103217d0(void);
int g_10937c68 = ((int (*)(int))sub_103217d0)(0);
// END FUNCTION

// FUNCTION: 0x103217d0 size=0xb2
#include "SendProp.h"

class SendTable
{
public:
	void sub_10247240(SendProp *pProps, int nProps, const char *pName);	// SendTable::Construct (stub 0x1000e8fe)
};

SendProp sub_10246af0(const char *name, int offset, int size, int bits, int flags, int extra, void *proxy);
SendProp sub_101ab310(const char *name, int offset, int size);
extern SendTable g_10937c6c;
extern const char *g_10619d48;

// TARGET: sub_103217d0
int sub_103217d0()
{
    static SendProp g_SendProps[] = {
        sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
        sub_101ab310("m_flNextAttack", 0x1564, 4),
        sub_10246af0("m_iDisciplineFlags", 0xeb0, 4, 0x1e, 1, 0, 0),
        sub_10246af0("m_iDisciplineFlags2", 0xeb4, 4, 0x1e, 1, 0, 0),
    };
    g_10937c6c.sub_10247240(g_SendProps + 1, 3, g_10619d48);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103218f0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10936dc4;
extern char g_10619d4c[];
ServerClassReg g_10936d54("CBaseCombatCharacter", &g_10936dc4, g_10619d4c);
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

// FUNCTION: 0x103219a0 size=0xa
#include "SendTable.h"
SendTable g_10936dc4;
// END FUNCTION

// FUNCTION: 0x10321a20 size=0x5
int sub_10321a60(void);
int g_10936dc0 = ((int (*)(int))sub_10321a60)(0);
// END FUNCTION

// FUNCTION: 0x10321a60 size=0x34e
#include "SendTable.h"

SendProp sub_10246af0(const char *name, int offset, int size, int bits, int flags, int i5, void *proxy);
SendProp sub_10246510(const char *name, int offset, int size, int bits, int flags, float lo, float hi, void *proxy);
SendProp sub_10246700(const char *name, int offset, int size, int bits, int flags, float lo, float hi, void *proxy);
SendProp sub_10246dc0(const char *name, int offset, int dt, void *proxy);
SendProp SendPropEHandle(const char *name, int offset, int size);
void sub_10246300();
void sub_102463c0();
void sub_102464d0();
void sub_10321690();
extern int g_10559358;
extern int g_10937c6c;
extern SendTable g_10936dc4;
extern char *g_10619d58;

int sub_10321a60()
{
	static SendProp props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_10559358, (void *)sub_102464d0),
		sub_10246af0("m_nMotionTrail", 0x1484, 4, 4, 1, 0, 0),
		sub_10246510("m_flSpeedScale", 0x1488, 4, 0x10, 8, 1.0f, 10.0f, (void *)sub_10246300),
		sub_10246af0("m_iGender", 0x13cc, 4, 4, 1, 0, 0),
		sub_10246510("m_flHolyLightEndTime", 0x13d4, 4, 0, 4, 0.0f, -121121.121212f, (void *)sub_10246300),
		sub_10246dc0("bcc_localdata", 0, (int)&g_10937c6c, (void *)sub_10321690),
		SendPropEHandle("m_hGrappleAnimDriver", 0x1558, 4),
		SendPropEHandle("m_hProteanTransformOther", 0x155c, 4),
		sub_10246510("m_flProteanTransformStartTime", 0x1560, 4, 0, 4, 0.0f, -121121.121212f, (void *)sub_10246300),
		SendPropEHandle("m_hActiveWeapon", 0x19a4, 4),
		SendPropEHandle("m_hActiveIArmor", 0x10dc, 4),
		sub_10246af0("m_iVendorIndex", 0xe30, 4, 9, 0, 0, 0),
		sub_10246af0("m_iVendorRestrictFlags", 0xe34, 4, 0x20, 1, 0, 0),
		sub_10246af0("m_iOccultPowerFlags", 0xe38, 4, 4, 1, 0, 0),
		sub_10246af0("m_iMoney", 0x13d8, 4, 0xc, 1, 0, 0),
		sub_10246af0("m_bAimWeaponAtTarget", 0xe6c, 1, 1, 1, 0, 0),
		SendPropEHandle("m_hWeaponAimTarget", 0xe70, 4),
		sub_10246700("m_vWeaponAimOffset", 0xe74, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_102463c0),
		sub_10246af0("m_bMeetsObfuscateRules", 0x14dc, 1, 1, 1, 0, 0),
		sub_10246af0("m_bIsBCCTargetable", 0x1480, 1, 1, 1, 0, 0),
		sub_10246510("m_flMeltExpansionTime", 0x19a8, 4, 10, 8, 0.0f, 10.0f, (void *)sub_10246300),
		sub_10246510("m_flMeltMaxExpand", 0x19ac, 4, 8, 8, 0.0f, 128.0f, (void *)sub_10246300),
		sub_10246af0("m_LootableType", 0x158c, 4, 3, 1, 0, 0),
		sub_10246af0("m_bCutsceneForceLOD", 0x1590, 1, 1, 1, 0, 0),
	};
	g_10936dc4.sub_10247240(&props[1], 24, g_10619d58);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10321ec0 size=0xb
extern int g_10937ccc;
void sub_10321ec0(void)
{
	g_10937ccc = 0;
}
// END FUNCTION

// FUNCTION: 0x10321ee0 size=0xa
#define PCD_INITIALIZERS
#include "utlvector.h"
#include "PcdGuarded.h"
template <> CUtlVector<int> PcdGuarded<0x109370bc, CUtlVector<int> >::s_object(8, 8);
template <> CUtlVector<int> PcdGuarded<0x10937af4, CUtlVector<int> >::s_object(8, 8);
// END FUNCTION

// FUNCTION: 0x10322140 size=0x5
int sub_10322180(void);
int g_10936dbc = ((int (*)(int))sub_10322180)(0);
// END FUNCTION

// FUNCTION: 0x10322180 size=0x1a
namespace lifted {
extern int g_10619d5c;
extern int g_10619d60;
extern char g_10619da4;
}
int sub_10322180()
{
    lifted::g_10619d60 = 4;
    lifted::g_10619d5c = (int)&lifted::g_10619da4;
    return (int)&lifted::g_10619d5c;
}
// END FUNCTION

// FUNCTION: 0x103221b0 size=0xc6
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern void (*g_109f3630)(const char *fmt, ...);

void CBaseCombatCharacter::sub_103221b0(const char *msg)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::DebugFeedTrace";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    char defaultMsg[] = "Feed Trace";
    if (!msg)
        msg = defaultMsg;
    g_109f3630("%f : Feeding - %s\n", (double)gpGlobals->curtime, msg);
    (*g_109f3680)--;
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

// FUNCTION: 0x10322800 size=0x86
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_10322800(unsigned int flags, int a)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SetOccultPowerFlag";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    *(unsigned int *)((char *)this + 0xe38) |= flags;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103228c0 size=0xc7
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

struct CWeaponInfoBlock
{
    char pad0[0x4fec0];
    int m_field4fec0;
    char pad4fec4[0x4fed0 - 0x4fec4];
    unsigned int m_flags4fed0;
};

struct CWeaponUnit
{
    CWeaponInfoBlock *sub_102517b0();
};

void CBaseCombatCharacter::sub_103228c0()
{
    ScopeTrace trace("CBaseCombatCharacter::UpdateOccultPowers", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    int i = 0;
    if (sub_1032e890() > 0) {
        do {
            CWeaponUnit *pWeapon = (CWeaponUnit *)sub_1032e8b0(i);
            if (pWeapon && pWeapon->sub_102517b0()->m_field4fec0)
                *(unsigned int *)((char *)this + 0xe38) |= pWeapon->sub_102517b0()->m_flags4fed0;
            i++;
        } while (i < sub_1032e890());
    }
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

				float flRadius = pRadiusCurve->sub_1006caa0(statValue);

				Vector *pOtherOrigin = (((CEntityVSlots *)p)->slot220());
				Vector *pThisOrigin = ((CEntityVSlots *)this)->slot220();
				float flDist = LengthZXY(*pThisOrigin - *pOtherOrigin);

				if (flDist <= flRadius)
				{
					float flEffect = (((flRadius - flDist))) / flRadius;
					if (flEffect > flBestEffect)
						flBestEffect = flEffect;

					int nRelation = ((CEntityVSlots *)p)->slot404(this);
					if (!(((CBCCView *)this)->sub_10323930(((CBCCView *)p)) || nRelation == 3)) {
						if (flEffect > flPercent)
							flPercent = flEffect;
						if (statValue > iEnemy)
							iEnemy = statValue;
					} else {
						SCurve6caa0 *pCombatRanges = ((StatOwner *)&g_106c7c34)->sub_1006cff0(g_106c7c34.sub_1006cf30("Presence_Combat_Ranges"));
						float flRange = flRadius / pCombatRanges->sub_1006caa0(0);
						int nDist; nDist = (int)flDist;
						float flCombat;
						if ((char)nDist == -1) flCombat = nDist / flRange; else flCombat = (nDist) / flRange;
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
		SCurve6caa0 *pBenefit = (((StatOwner *)&g_106c7c34)->sub_1006cff0(g_106c7c34.sub_1006cf30("Presence_Combat_Benefit")));
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

			(((StatOwner *)&g_106c7c34))->sub_1006cff0(g_106c7c34.sub_1006cf30("Presence_Jitter_Hand"));
			flScalar = (m_flEnemeyPresencePercent * pSpeed->sub_1006caa0(0)) * 0.1;

			((CC343View *)this)->vfunc343(0.4f, m_flEnemeyPresencePercent, 0);

			float flRand1; flRand1 = (enginerandom->vfunc1(-flScalar, flScalar));
			Vector vecJitter(enginerandom->vfunc1(-flScalar, flScalar), flRand1, 0.0f);
			((CC169View *)this)->vfunc169(&vecJitter);

			m_iEnemyPresenceEffect = iEnemy;
		}
	} }
}
// END FUNCTION

// FUNCTION: 0x10323210 size=0x79
#include "CBaseCombatCharacter.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseCombatCharacter::sub_10323210()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseCombatCharacter::GetPresenceBenefit";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    int v = *(int *)((char *)this + 0xe80);
    --*g_109f3680;
    return v;
}
// END FUNCTION

// FUNCTION: 0x103232b0 size=0x8c
#include "CBaseCombatCharacter.h"

#define QV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define QV100(p) QV10(p##0) QV10(p##1) QV10(p##2) QV10(p##3) QV10(p##4) QV10(p##5) QV10(p##6) QV10(p##7) QV10(p##8) QV10(p##9)

// The entity's vtable up to slot 344, only to make the virtual call.
struct CEntSlots {
	QV100(s0) QV100(s1) QV100(s2)
	QV10(s30) QV10(s31) QV10(s32) QV10(s33)
	virtual void s340(); virtual void s341(); virtual void s342(); virtual void s343();
	virtual float vfunc344();
};

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseCombatCharacter::sub_103232b0()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::GetShakyHandsPenalty";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	int result = *(int *)((char *)this + 0xe88);
	if (result == 0)
		result = (int)(((CEntSlots *)this)->vfunc344() * 2.0f);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10323370 size=0xe8
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "utlvector.h"

class CEntHandle
{
public:
	CEntHandle() : m_Index(0xffffffff) {}
	CEntHandle(unsigned long index) : m_Index(index) {}
	unsigned long m_Index;
};

extern CUtlVector<CEntHandle> g_109370bc;

// TARGET: CBaseCombatCharacter::sub_10323370
void CBaseCombatCharacter::sub_10323370()
{
	ScopeTrace trace("CBaseCombatCharacter::AddToPresenceList", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CEntHandle h(this ? *vfunc1() : 0xffffffff);
	g_109370bc.AddToTail(h);
}
// END FUNCTION

// FUNCTION: 0x103234a0 size=0x13d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CUtlVector4.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"

extern CGlobalEntityList *g_10566458;
extern CUtlVector4 g_109370bc;
extern char g_1061f05c[];

struct EntListLookup	// the global entity list's handle lookup (stub 0x10009c8c)
{
    void *sub_100290c0(const unsigned int *pHandle);
};

inline void *ResolveHandle(unsigned int h)
{
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (h >> 13))
            return pSlot->m_pEntity;
    }
    return 0;
}

inline int FindHandle(CUtlVector4 *pVec, const unsigned int *pHandle)
{
    for (int i = 0; i < pVec->m_size; i++) {
        const unsigned int *pElem = (const unsigned int *)&pVec->m_pMemory[i];
        void *pSrc = ((EntListLookup *)g_10566458)->sub_100290c0(pHandle);
        if (ResolveHandle(*pElem) == pSrc)
            return i;
    }
    return -1;
}

void __fastcall sub_103234a0(CBaseCombatCharacter *pThis)
{
    ScopeTrace trace(g_1061f05c, pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
    unsigned int h = 0xffffffff;
    if (pThis)
        h = *pThis->vfunc1();
    else
        h = 0xffffffff;
    int elem = FindHandle(&g_109370bc, &h);
    if (elem != -1) {
        int numToMove = g_109370bc.m_size - elem - 1;
        if (numToMove > 0)
            memmove(&g_109370bc.m_pMemory[elem], &g_109370bc.m_pMemory[elem + 1], numToMove * 4);
        g_109370bc.m_size--;
    }
}
// END FUNCTION

// FUNCTION: 0x10323630 size=0xf7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "utlvector.h"
#include "ScopeTrace.h"

class CEntHandle
{
public:
    unsigned long m_Index;
};

extern CUtlVector<CEntHandle> g_10937af4;

void __fastcall sub_10323630(CBaseCombatCharacter *self)
{
    ScopeTrace trace("CBaseCombatCharacter::AddToComfortList", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
    CEntHandle h;
    h.m_Index = self ? *self->vfunc1() : -1;
    g_10937af4.AddToTail(h);
    *(int *)((char *)self + 0xe94) = 0;
}
// END FUNCTION

// FUNCTION: 0x10323770 size=0x15b
#include "ScopeTrace.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ehandle.h"
#include "utlvector.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern CUtlVector<EHANDLE> g_109370bc;
extern CUtlVector<EHANDLE> g_10937af4;
extern char g_1061f05c[];

namespace block_10323770 {
// 0x103234a0 "CBaseCombatCharacter::RemoveFromPresenceList", the unit's earlier function: its FindAndRemove declines
// the header inline LookupEntity, so the COMDAT is compiled before the target
void __fastcall sub_103234a0(CBaseCombatCharacter *pThis)
{
	ScopeTrace trace(g_1061f05c, pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
	EHANDLE h = pThis;
	g_109370bc.FindAndRemove(h);
}
}

// TARGET: CBaseCombatCharacter::sub_10323770
void CBaseCombatCharacter::sub_10323770()
{
	ScopeTrace trace("CBaseCombatCharacter::RemoveFromComfortList", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	EHANDLE h = this;
	g_10937af4.FindAndRemove(h);
	m_iComfortingCount = 0;
}
// END FUNCTION

// FUNCTION: 0x10323930 size=0x48
short __fastcall sub_10323a70(char *p);
struct CBCCView {
    bool sub_10323930(CBCCView *pOther);
};
bool CBCCView::sub_10323930(CBCCView *pOther)
{
    if (sub_10323a70((char *)this) != -1 && pOther) {
        if (sub_10323a70((char *)pOther) != -1) {
            if (sub_10323a70((char *)pOther) == sub_10323a70((char *)this))
                return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x103239a0 size=0x99
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
struct NameTable { short sub_1000a72c(const char *name); };
extern NameTable g_10751140;
short __fastcall sub_10323a70(char *p);

short CBaseCombatCharacter::sub_103239a0(const char *pszName)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::AddToTeam";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (*pszName == '!')
        pszName++;
    *(short *)((char *)this + 0x10b0) = g_10751140.sub_1000a72c(pszName);
    short r = sub_10323a70((char *)this);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10323a70 size=0x8
short __fastcall sub_10323a70(char *p)
{
	return *(short *)(p + 0x10b0);
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

// FUNCTION: 0x10323cc0 size=0x2f4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "CUnknown10206400.h"
#include <string.h>

struct CUnkPlayer119 { char m_pad[0xa8]; CBaseCombatCharacter *m_pChar; CBaseCombatCharacter *GetChar() { return m_pChar; } };
struct CUnkItem258 { void sub_10258620(int a); };
CUnkPlayer119 *sub_101193b0();
void sub_1021fe50(CBaseCombatCharacter *pChar, const char *pszName, int n);

inline const char *EntryName(CUnknown10206340 *e) { return e->m_field0004 ? (const char *)e->m_field0004 : g_106b8540; }

void CBaseCombatCharacter::sub_10323cc0(int nStage, int nSetting, int nVendorState)
{
	(void)g_1074f01c;
	ScopeTrace trace("CBaseCombatCharacter::SyncVendorInventory", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	m_nVendorSettingE34 = nSetting;
	for (nSetting = 0; nSetting < g_1074f018; nSetting++)
	{
		if (_strcmpi(CUnknown10206400_FindById(nSetting)->GetName(), m_name26c ? m_name26c : g_106b8540) == 0)
		{
			m_nVendorE30 = nSetting;
			for (int j = 0; j < CUnknown10206400_FindById(nSetting)->m_nEntries; j++)
			{
				CUnknown10206340 *pEntry = CUnknown10206400_FindEntry(CUnknown10206400_FindById(nSetting), j);
				if (nStage >= pEntry->m_field000c && nVendorState >= pEntry->m_field0010)
				{
					if (!sub_1032d890(EntryName(pEntry), 0))
					{
						if (pEntry->m_field0008)
						{
							CUnkPlayer119 *pPlayer = sub_101193b0();
							if (!(!pPlayer ? 0 : pPlayer->GetChar())->sub_1032d890(EntryName(pEntry), 0))
								continue;
						}
						{ if ((int)j == -1) sub_1021fe50(this, EntryName(pEntry), 1); else sub_1021fe50(this, EntryName(pEntry), 1); }
					}
					else
					{
						CUnkItem258 *pItem = (CUnkItem258 *)sub_10335950(EntryName(pEntry));
						if (pItem)
							pItem->sub_10258620(0);
					}
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10324080 size=0xc1
#include "CBaseCombatCharacter.h"
extern char g_106b8540[];
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atexit(void (__cdecl *)(void));

struct CLootRecord	// entry of the global loot list (id at +0x1c, name at +0xc)
{
    int m_pad00[3];
    const char *m_pszName;	// 0x0c
    int m_pad10[3];
    int m_nId;	// 0x1c
    int m_pad20[3];

    CLootRecord *sub_10206400(int id);	// constructor (stub 0x1000aa9c)
};
void __cdecl sub_10014574();	// the destroy stub the game hands to atexit

extern int g_1074f018;
extern CLootRecord **g_1074f01c;
extern unsigned char g_109f07b1;	// guard byte of the static default record
extern CLootRecord g_109f07e0;	// the static default record

void __fastcall sub_10324080(CBaseCombatCharacter *self)
{
    int i = 0;
    if (g_1074f018 <= 0) {
        *(int *)((char *)self + 0xe30) = -1;
        return;
    }
    do {
        const char *pszMine = self->m_name26c ? self->m_name26c : g_106b8540;
        CLootRecord *pRec;
        int j = 0;
        if (g_1074f018 > 0) {
            do {
                if (g_1074f01c[j]->m_nId == i) {
                    pRec = g_1074f01c[j];
                    goto found;
                }
                j++;
            } while (j < g_1074f018);
        }
        if (!(g_109f07b1 & 1)) {
            g_109f07b1 |= 1;
            g_109f07e0.sub_10206400(-1);
            atexit(sub_10014574);
        }
        pRec = &g_109f07e0;
found:
        if (_strcmpi(pRec->m_pszName ? pRec->m_pszName : g_106b8540, pszMine) == 0) {
            *(int *)((char *)self + 0xe30) = i;
            return;
        }
        i++;
    } while (i < g_1074f018);
    *(int *)((char *)self + 0xe30) = -1;
}
// END FUNCTION

// FUNCTION: 0x10324190 size=0x203
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "CUnknown10206400.h"
#include <string.h>

extern "C" int __cdecl _strcmpi(const char *, const char *);

bool CBaseCombatCharacter::sub_10324190(CBaseCombatWeapon *pItem)
{
	if (!pItem) {
		return false;
	}
	for (int id = 0; id < g_1074f018; id++) {
		const char *pszName = m_name26c ? m_name26c : g_106b8540;
		if (!_strcmpi(CUnknown10206400_FindById(id)->GetName(), pszName)) {
			for (int j = 0; j < CUnknown10206400_FindById(id)->m_nEntries; j++) {
				CUnknown10206340 *pEntry = CUnknown10206400_FindEntry(CUnknown10206400_FindById(id), j);
				if (!_strcmpi(pEntry->m_pszName ? pEntry->m_pszName : g_106b8540, pItem->vfunc348())) {
					return true;
				}
			}
		}
	}
	return false;
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

// FUNCTION: 0x10324500 size=0x7e
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f1dc[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::sub_10324500(int action)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f1dc;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0xff0) = action;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103245a0 size=0x7e
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f20c[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::sub_103245a0(int translated)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f20c;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0xff4) = translated;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10324640 size=0xa
#include "ConVar.h"
ConVar g_10936e50("sv_draw_eye_orientation", "0", 0);
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

// FUNCTION: 0x10324ad0 size=0x98
#include "CUnknown10324ad0.h"
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

bool CUnknown10324ad0::sub_10324ad0()
{
	CScopeTrace trace("CBaseCombatCharacter::CanVampHeal_HOT", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	if (sub_10337f30() && m_field00a8)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10324ba0 size=0xa8
#include "CBaseCombatCharacter.h"
#include "CUnknown10324ad0.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_10324ba0()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::BeginVampHeal_HOT";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (((CUnknown10324ad0 *)this)->sub_10324ad0()) {
		double start = sub_10324c80(-1);
		*(float *)((char *)this + 0xa84) = (float)(engine->vfunc119(0) + start);
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10324c80 size=0x1ad
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
#include "CVStatList_t.h"
#include "ScopeTrace.h"

struct CVampHealFormula
{
	float sub_101e90f0(CBaseCombatCharacter *pChar);
	int sub_101e9470(CBaseCombatCharacter *pChar);
};
extern CVampHealFormula g_10739d08;

float CBaseCombatCharacter::sub_10324c80(int nType)
{
	ScopeTrace trace("CBaseCombatCharacter::VampHeal_HOT_Delay", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (nType == -1)
		nType = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);
	if (nType == 0)
		return 15.0f;
	float flBase = g_10739d08.sub_101e90f0(this);
	if (CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x10) > 0)
		return g_10739d08.sub_101e9470(this) * flBase * 0.01;
	return flBase;
}
// END FUNCTION

// FUNCTION: 0x10324ea0 size=0x1be
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
#include "CVStatList_t.h"
#include "CUnknown10324ad0.h"
#include "CUnknown10739d08.h"
#include "CUnknown1033c340.h"
#include "ScopeTrace.h"

extern CUnknown10739d08 g_10739d08;

void CBaseCombatCharacter::sub_10324ea0()
{
	ScopeTrace trace("CBaseCombatCharacter::UpdateVampHeal_HOT", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (((CUnknown10324ad0 *)this)->sub_10324ad0()) {
		double dNext = m_flNextVampHeal;
		if (engine->vfunc119(0) > dNext) {
			int nBase = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);
			if (nBase > 0) {
				int nScale = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x11);
				int nCost = g_10739d08.sub_101e9170(this, nBase, nScale);
				((CUnknown1033c340 *)this)->sub_1033c340(nCost);
			}
			float flDelay = sub_10324c80(nBase);
			m_flNextVampHeal = engine->vfunc119(0) + flDelay;
		}
	}
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

// FUNCTION: 0x10325620 size=0x278
#include "CEHandleGet.h"
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
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"
#include "Vector.h"

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

extern float g_104454c4;
extern float g_104454c0;

// TARGET: sub_10325620
void __fastcall sub_10325620(EyeSelf *self, int edx, float flInterval)
{
	ScopeTrace trace("CBaseCombatCharacter::MaintainScriptedEyeDirection", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc);
	EyeTarget *pTarget = (EyeTarget *)g_10566458->sub_100290c0(&self->m_hTarget);
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
// END FUNCTION

// FUNCTION: 0x10325940 size=0xb8
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
struct EntityFinder { void *sub_1000b4b5(int a, const char *name, void *activator, int b); };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern EntityFinder g_106eb5d8;

inline const char *VariantString(variant_t *v)
{
	const char *s;
	if (v->fieldType == 2) {
		s = v->iszValue;
		if (s == 0)
			s = g_106b8540;
	} else
		s = v->sub_10008805();
	return s;
}

void CBaseCombatCharacter::sub_10325940(inputdata_t *data)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InputLookAtEntityEye";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;

	const char *str = VariantString(&data->value);
	void *ent = g_106eb5d8.sub_1000b4b5(0, str, data->pActivator, 0);
	if (ent)
		sub_10325cb0(ent, 1);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10325a30 size=0xb8
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
struct EntityFinder { void *sub_1000b4b5(int a, const char *name, void *activator, int b); };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern EntityFinder g_106eb5d8;

inline const char *VariantString(variant_t *v)
{
	const char *s;
	if (v->fieldType == 2) {
		s = v->iszValue;
		if (s == 0)
			s = g_106b8540;
	} else
		s = v->sub_10008805();
	return s;
}

void CBaseCombatCharacter::sub_10325a30(inputdata_t *data)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InputLookAtEntityCenter";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;

	const char *str = VariantString(&data->value);
	void *ent = g_106eb5d8.sub_1000b4b5(0, str, data->pActivator, 0);
	if (ent)
		sub_10325cb0(ent, 1);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10325b20 size=0xb8
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
struct EntityFinder { void *sub_1000b4b5(int a, const char *name, void *activator, int b); };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern EntityFinder g_106eb5d8;

inline const char *VariantString(variant_t *v)
{
	const char *s;
	if (v->fieldType == 2) {
		s = v->iszValue;
		if (s == 0)
			s = g_106b8540;
	} else
		s = v->sub_10008805();
	return s;
}

void CBaseCombatCharacter::sub_10325b20(inputdata_t *data)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InputLookAtEntityOrigin";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;

	const char *str = VariantString(&data->value);
	void *ent = g_106eb5d8.sub_1000b4b5(0, str, data->pActivator, 0);
	if (ent)
		sub_10325cb0(ent, 3);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10325c10 size=0x7a
#include "inputdata_t.h"
#include "CBaseCombatCharacter.h"
struct SScope { const char *a; const char *b; const char *c; };
extern "C" __declspec(dllimport) SScope g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern char g_106b8540[];
void CBaseCombatCharacter::sub_10325c10(inputdata_t *data)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else {
		name = "NULL ENTITY";
	}
	g_ScopeTraceStack[g_ScopeTraceStackDepth].a = "CBaseCombatCharacter::InputLookAtEntityDefault";
	g_ScopeTraceStack[g_ScopeTraceStackDepth].b = name;
	g_ScopeTraceStack[g_ScopeTraceStackDepth].c = g_106b8540;
	g_ScopeTraceStackDepth++;
	sub_10325cb0(0, 0);
	g_ScopeTraceStackDepth--;
}
// END FUNCTION

// FUNCTION: 0x10325cb0 size=0xba
#include "CBaseCombatCharacter.h"
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

void CBaseCombatCharacter::sub_10325cb0(void *ent, int a)
{
    const char *name;
    if (this) {
        name = m_name26c;
        if (!name) name = g_106b8540;
    } else {
        name = g_105387dc;
    }
    ScopeTrace trace("CBaseCombatCharacter::SetScriptedEyeTarget", name, g_106b8540);
    unsigned int *pHandle = (unsigned int *)((char *)this + 0xe64);
    int *pMode = (int *)((char *)this + 0xe68);
    if (ent && a) {
        unsigned int h = *((CBaseEntity *)ent)->vfunc1();
        *pHandle = h;
        *pMode = a;
    } else {
        *pHandle = 0xffffffff;
        *pMode = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10325da0 size=0x95
#include "Vector.h"
#include "CBaseCombatCharacter.h"

bool CBaseCombatCharacter::sub_10325da0(const Vector *pTarget)
{
	Vector vecOrigin;
	Vector vecForward;
	sub_10331da0(&vecOrigin, &vecForward);
	Vector dir = *pTarget - vecOrigin;
	VectorNormalize(dir);
	if (DotProduct(dir, vecForward) > 0.866)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10325e70 size=0x62
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
extern int g_10937ccc;
int sub_10325e70()
{
	ScopeTrace trace("CBaseCombatCharacter::GetInteractionID", g_106b8540);
	return ++g_10937ccc;
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

// FUNCTION: 0x10326150 size=0xa
#include "ConVar.h"
ConVar g_10936f70("debug_view_cone_2d3d", "3", 0, "Set the view cone tests to be in 2d or 3d.", true, 2.0f, true, 3.0f);
// END FUNCTION

// FUNCTION: 0x103261f0 size=0x120
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

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CBCCSlotView
{
	SV100(a)
	SV10(b0) SV10(b1) SV10(b2) SV10(b3) SV10(b4) SV10(b5) SV10(b6) SV10(b7) SV10(b8)
	SV1(c0) SV1(c1) SV1(c2)
	virtual Vector vfunc193();
	SV100(d)
	SV10(e0) SV10(e1) SV10(e2) SV10(e3) SV10(e4) SV10(e5) SV10(e6)
	SV1(f0) SV1(f1) SV1(f2) SV1(f3) SV1(f4) SV1(f5) SV1(f6) SV1(f7)
	virtual Vector vfunc372();
};

bool CBaseCombatCharacter::sub_103261f0(Vector vecPos, float flScale, float flCone)
{
	ScopeTrace trace("CBaseCombatCharacter::FinViewCone2d", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	Vector vecDir = vecPos - ((CBCCSlotView *)this)->vfunc193();
	vecDir.z = 0;
	VectorNormalize(vecDir);
	Vector vecFacing = ((CBCCSlotView *)this)->vfunc372();
	float flDot = (vecDir.y * vecFacing.y + vecDir.z * vecFacing.z) + vecDir.x * vecFacing.x;
	flDot = flDot * flScale;
	if (flDot <= flCone)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10326360 size=0x118
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

bool CBaseCombatCharacter::sub_10326360(Vector vecPos, float flScale, float flCone)
{
	ScopeTrace trace("CBaseCombatCharacter::FinViewCone3d", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	Vector tmp;
	Vector dir = vecPos - *pSelf->slot193(&tmp);
	VectorNormalize(dir);
	Vector fwd;
	pSelf->slot373(&fwd);
	if (DotProduct(dir, fwd) * flScale <= flCone)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x103264d0 size=0x1fa
#include "CVTraitEffect_t.h"
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
#include "Vector.h"
#include "ConVar.h"
extern ConVar g_10937a88;

class CUnknown10937a8cView
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();
	int m_n4; int m_n8; int m_nc; int m_n10; int m_n14; int m_n18; int m_n1c; int m_n20; int m_n24;
	float m_fl28;
};
extern CUnknown10937a8cView *g_10937a8c;

#define BV(n) virtual void v##n();
#define BV10(p) BV(p##0) BV(p##1) BV(p##2) BV(p##3) BV(p##4) BV(p##5) BV(p##6) BV(p##7) BV(p##8) BV(p##9)
struct CViewCone103264d0
{
	BV(0) BV(1) BV(2) BV(3) BV(4) BV(5) BV(6) BV(7) BV(8) BV(9)
	BV10(1) BV10(2) BV10(3) BV10(4) BV10(5) BV10(6) BV10(7) BV10(8) BV10(9)
	BV10(10) BV10(11) BV10(12) BV10(13) BV10(14) BV10(15) BV10(16) BV10(17) BV10(18)
	BV(190) BV(191) BV(192)
	virtual Vector EyePosition();
	BV(194) BV(195) BV(196) BV(197) BV(198) BV(199)
	BV10(20) BV10(21) BV10(22) BV10(23) BV10(24) BV10(25) BV10(26) BV10(27) BV10(28) BV10(29)
	BV10(30) BV10(31) BV10(32) BV10(33) BV10(34) BV10(35) BV10(36)
	BV(370) BV(371) BV(372)
	virtual Vector EyeDirection3D();
};

char CBaseCombatCharacter::sub_103264d0(Vector pos, float flScale, int a)
{
	ScopeTrace trace("CBaseCombatCharacter::FinViewCone3dNew",
		this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CViewCone103264d0 *pView = (CViewCone103264d0 *)this;

	Vector los = pos - pView->EyePosition();
	Vector forward = pView->EyeDirection3D();
	if (DotProduct(los, forward) <= 0.0f)
		return false;

	double flOffset = g_10937a88.GetFloat();
	los = pos - (pView->EyePosition() - flOffset * pView->EyeDirection3D());
	los.NormalizeInPlace();
	float flDot = DotProduct(los, forward);
	if (flDot * flScale <= *(float *)&a)
		return false;
	return true;
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

// FUNCTION: 0x103268e0 size=0xf1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "ConVar.h"
#include "ScopeTrace.h"
extern ConVar *g_10936f74;

char CBaseCombatCharacter::sub_103268e0(const float *pos, int a)
{
	ScopeTrace trace("CBaseCombatCharacter::FInViewCone", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!g_10936f74->vfunc1() && g_10936f74->m_nValue == 2)
		return sub_103261f0(*(Vector *)pos, 1.0f, a);
	return sub_103264d0(*(Vector *)pos, 1.0f, a);
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
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

// TARGET: CBaseCombatCharacter::vfunc366
// slot 366 "CBaseCombatCharacter::HandleInteraction" (its scope name)
bool CBaseCombatCharacter::vfunc366(int a, int b, int c)
{
    char *self = (char *)this;
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HandleInteraction";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10326de0 size=0x554
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CVStatList_t.h"
#include "engineserver.h"
#include "Vector.h"
#include <string.h>
struct V {
	void sub_1000d283();
	void sub_1000923c(int, int);
	void sub_1000c94b(int, int);
	void sub_1000c3b5();
	void sub_100099fd();
	void sub_10002ddd();
	void sub_10015000();
	void sub_10004f93(int, void *);
	void sub_100089c2(int, void *);
	void sub_10012c6a();
	int sub_100092be();
	int sub_1000fb46(const char *);
	int sub_100038be(int, int);
	int sub_10013ccd();
	void sub_10013ba6(int);
	void sub_102008e0(int, int);
};
extern V g_106c7c34;
extern int g_10937000;
extern char g_10937b08;
extern V g_109f0b40;
extern unsigned char g_109f0b2a;
extern void *vt_1049e0dc[];
extern "C" int atexit(void (*)(void));
void sub_10012a8a();
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
struct HInv { int h; HInv() { h = -1; } };
struct UMem { int *m; int a; int g; UMem() : m(0), a(0), g(0) {} };
struct UVec { UMem mem; int sz; int *el; UVec() : sz(0) { el = mem.m; } };
#define D(o) (*(int *)((char *)p + (o)))
#define B(o) (*(char *)((char *)p + (o)))

struct CBCCView : V { void *sub_10326de0(); };
void *CBCCView::sub_10326de0()
{
	void *p = this;
	V *v = (V *)p;
	v->sub_1000d283();
	int *vec = (int *)((char *)p + 0xa88);
	((V *)vec)->sub_1000923c(0, 0);
	vec[3] = 0;
	vec[4] = vec[0];
	for (int i = 0; i < 20; i++)
		((V *)((char *)p + 0xca0 + i * 0x14))->sub_1000c94b(0, 0);
	((HInv *)((char *)p + 0xe64))->HInv::HInv();
	((HInv *)((char *)p + 0xe70))->HInv::HInv();
	((HInv *)((char *)p + 0xea4))->HInv::HInv();
	((HInv *)((char *)p + 0xea8))->HInv::HInv();
	((UVec *)((char *)p + 0xfb4))->UVec::UVec();
	((HInv *)((char *)p + 0xfe8))->HInv::HInv();
	for (int j = 0; j < 18; j++) ((HInv *)((char *)p + 0xff8 + j * 4))->HInv::HInv();
	((HInv *)((char *)p + 0x1040))->HInv::HInv();
	((UVec *)((char *)p + 0x10bc))->UVec::UVec();
	((HInv *)((char *)p + 0x10dc))->HInv::HInv();
	((HInv *)((char *)p + 0x10e0))->HInv::HInv();
	int *s = (int *)((char *)p + 0x13a8);
	V *st = (V *)s;
	s[0] = 1; s[1] = 0; s[4] = 0; s[5] = 0; s[6] = 0;
	((V *)((char *)p + 0x13dc))->sub_1000c3b5();
	((V *)((char *)p + 0x1460))->sub_100099fd();
	((HInv *)((char *)p + 0x149c))->HInv::HInv();
	((HInv *)((char *)p + 0x14ac))->HInv::HInv();
	((UVec *)((char *)p + 0x14c0))->UVec::UVec();
	((V *)((char *)p + 0x1504))->sub_10002ddd();
	((V *)((char *)p + 0x151c))->sub_10002ddd();
	((HInv *)((char *)p + 0x1538))->HInv::HInv();
	((HInv *)((char *)p + 0x1558))->HInv::HInv();
	((HInv *)((char *)p + 0x155c))->HInv::HInv();
	for (int k = 0; k < 224; k++) ((HInv *)((char *)p + 0x1624 + k * 4))->HInv::HInv();
	((HInv *)((char *)p + 0x19a4))->HInv::HInv();
	*(void ***)p = vt_1049e0dc;
	ScopeTrace scope("CBaseCombatCharacter::CBaseCombatCharacter", STRINGR(pcd_stage(*(const char **)((char *)p + 0x26c))));
	*(Vector *)((char *)p + 0x1578) = Vector(12.0f, 0.0f, 42.0f);
	D(0x19a4) = -1; D(0x10dc) = -1; D(0x10e0) = -1;
	v->sub_10015000();
	int ent = D(0x2e0);
	void *pOwn = (char *)p + 0x13dc;
	D(0x1598) = 0; D(0x159c) = 0; D(0x15a0) = 0;
	st->sub_10004f93(engine->vfunc35(ent), pOwn);
	D(0x1208) = (int)((char *)p + 0x10f0);
	D(0x120c) = (int)((char *)p + 0x117c);
	D(0x1278) = (int)((char *)p + 0x1210);
	D(0x127c) = (int)((char *)p + 0x1244);
	D(0x1308) = (int)((char *)p + 0x1280);
	D(0x130c) = (int)((char *)p + 0x12c4);
	D(0x1398) = (int)((char *)p + 0x1310);
	D(0x139c) = (int)((char *)p + 0x1354);
	st->sub_100089c2(0, (char *)p + 0x1208);
	st->sub_100089c2(1, (char *)p + 0x1278);
	st->sub_100089c2(2, (char *)p + 0x1308);
	st->sub_100089c2(3, (char *)p + 0x1398);
	{
		V *lst;
		for (int m = 0; m < s[5]; m++) {
			if (((int *)((V **)s[6])[m])[4] == 0) {
				lst = ((V **)s[6])[m];
				goto found;
			}
		}
		if (!(g_109f0b2a & 1)) {
			g_109f0b2a |= 1;
			g_109f0b40.sub_10013ba6(-1);
			atexit(sub_10012a8a);
		}
		lst = &g_109f0b40;
found:
		lst->sub_102008e0(0xb, 1);
	}
	D(0x13a0) = -1; D(0x149c) = -1;
	D(0x1468) = 0xffffd8f1; D(0x148c) = 0; D(0x1484) = 0;
	D(0x1488) = 0x3f800000; D(0x146c) = 0;
	B(0x1474) = 0; B(0x1475) = 0; D(0x1478) = 0; B(0x1476) = 0;
	B(0x14a9) = 0; B(0x14a8) = 0; B(0x14aa) = 0;
	((HInv *)((char *)p + 0x1538))->HInv::HInv();
	((HInv *)((char *)p + 0x153c))->HInv::HInv();
	sub_10012c6a();
	D(0x13cc) = v->sub_100092be() & 0xff;
	memset((char *)p + 0x14e4, 0, 32);
	D(0x13d0) = 0xbf800000; D(0x13d4) = 0xbf800000;
	D(0xeb0) = 0; D(0xeb4) = 0; D(0xeb8) = 0; D(0xebc) = 0;
	D(0xfb0) = 0; D(0xfcc) = 0;
	D(0xe80) = 0; D(0xe84) = 0; D(0xe8c) = 0; D(0xe90) = 0; D(0xe94) = 0;
	D(0x9c) = (int)p;
	B(0x1588) = 1;
	D(0xe30) = -1; D(0xe34) = 0; D(0xe38) = 0;
	D(0x1044) = -1; D(0x1048) = 0; D(0x1050) = 0; D(0x104c) = 0;
	D(0x1074) = 0x3f800000; D(0x1078) = 0; D(0x107c) = 0;
	D(0x1470) = 0; D(0xeac) = 0;
	B(0x1088) = 1; B(0x1480) = 0; B(0x1481) = 1; B(0x1482) = 0;
	if (!(g_10937b08 & 1)) {
		g_10937b08 |= 1;
		g_10937000 = g_106c7c34.sub_1000fb46("Float_Sound_Info");
	}
	V *so = (V *)g_106c7c34.sub_100038be(g_10937000, 2);
	D(0x10e8) = so->sub_10013ccd();
	D(0x10ec) = 0;
	B(0xfe0) = 0; D(0xfd0) = 2; D(0xfd4) = -1; B(0xfd8) = 0; D(0xfdc) = 0;
	D(0x14a0) = 0; D(0x14a4) = 0;
	D(0x156c) = D(0x1568) = 0x17;
	D(0xa9c) = 0xbf800000; D(0x158c) = 0; D(0xe68) = 0;
	D(0xe3c) = 0x3f59999a;
	*(unsigned short *)((char *)p + 0x10b0) = 0xffff;
	D(0x14e0) = 0; D(0xfe4) = 0; B(0xfc8) = 0; D(0x10d8) = -1;
	return p;
}
// END FUNCTION

// FUNCTION: 0x103274a0 size=0x1e
#include "CBaseCombatCharacter.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseCombatCharacter::vfunc5
CBaseEntity *CBaseCombatCharacter::vfunc5(unsigned int flags)
{
	sub_100078c4();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103274d0 size=0x221
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "utlmemory.h"

extern int vt_1049e0dc[];

struct CBCCOutput { void sub_100cd2d0(); };
struct CBCCVecA { CUtlMemory<int> m_Mem; int m_nSize; void *m_pElem; void sub_10184360(); void sub_10185100(); };
struct CBCCObjB { void sub_101f1bb0(); };
struct CBCCObjC { void sub_101f9690(); };
struct CBCCVecD { CUtlMemory<int> m_Mem; int m_nSize; void *m_pElem; void sub_1034a010(); void sub_10107480(); };
struct CBCCVecE { CUtlMemory<int> m_Mem; int m_nSize; void *m_pElem; void sub_10349ea0(); void sub_10349fd0(); };
struct CBCCVecF { CUtlMemory<int> m_Mem; int m_nSize; void *m_pElem; void sub_10349a00(); void sub_10349e60(); };
struct CBCCStatListDtor { void sub_103499d0(int a); };

// TARGET: CBaseCombatCharacter::sub_103274d0
void CBaseCombatCharacter::sub_103274d0()
{
	char *p = (char *)this;
	*(int **)this = vt_1049e0dc;
	{
		ScopeTrace scope("CBaseCombatCharacter::~CBaseCombatCharacter", *(char **)(p + 0x26c) ? *(char **)(p + 0x26c) : g_106b8540);
		*(int *)(p + 0x1208) = 0;
		*(int *)(p + 0x120c) = 0;
		*(int *)(p + 0x1278) = 0;
		*(int *)(p + 0x127c) = 0;
		*(int *)(p + 0x1308) = 0;
		*(int *)(p + 0x130c) = 0;
		*(int *)(p + 0x1398) = 0;
		*(int *)(p + 0x139c) = 0;
	}
	((CBCCOutput *)(p + 0x151c))->sub_100cd2d0();
	((CBCCOutput *)(p + 0x1504))->sub_100cd2d0();
	CBCCVecA *pA = (CBCCVecA *)(p + 0x14c0);
	pA->sub_10184360();
	pA->sub_10185100();
	pA->m_pElem = pA->m_Mem.m_pMemory;
	pA->m_Mem.Purge();
	((CBCCObjB *)(p + 0x1460))->sub_101f1bb0();
	((CBCCObjC *)(p + 0x13dc))->sub_101f9690();
	CVStatListSet *pSet = CVStatListSet::Of(this);
	if (pSet->m_pLists)
	{
		for (int i = 0; i < pSet->m_nLists; i++)
		{
			CBCCStatListDtor *pList = ((CBCCStatListDtor **)pSet->m_pLists)[i];
			if (pList)
				pList->sub_103499d0(1);
			pSet->m_pLists[i] = 0;
		}
		operator delete(pSet->m_pLists);
		pSet->m_pLists = 0;
	}
	*(int *)(p + 0x13ac) = 0;
	*(int *)(p + 0x13bc) = 0;
	*(int *)(p + 0x13b8) = 0;
	CBCCVecD *pD = (CBCCVecD *)(p + 0x10bc);
	pD->sub_1034a010();
	pD->sub_10107480();
	pD->m_pElem = pD->m_Mem.m_pMemory;
	pD->m_Mem.Purge();
	CBCCVecE *pE = (CBCCVecE *)(p + 0xfb4);
	pE->sub_10349ea0();
	pE->sub_10349fd0();
	pE->m_pElem = pE->m_Mem.m_pMemory;
	pE->m_Mem.Purge();
	CBCCVecA *pV = (CBCCVecA *)(p + 0xe30);
	int n = 20;
	do
	{
		pV--;
		pV->sub_10184360();
		pV->sub_10185100();
		pV->m_pElem = pV->m_Mem.m_pMemory;
		pV->sub_10185100();
		n--;
	} while (n != 0);
	CBCCVecF *pF = (CBCCVecF *)(p + 0xa88);
	pF->sub_10349a00();
	pF->sub_10349e60();
	pF->m_pElem = pF->m_Mem.m_pMemory;
	pF->sub_10349e60();
	sub_100b5970();
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

// FUNCTION: 0x10327960 size=0x7e
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f878[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::sub_10327960(int color)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f878;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x1570) = color;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10327a00 size=0xa
#include "ConVar.h"
ConVar g_109371c0("gib_xz_vel", "200.0", 0, "Gib Vel");
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

// FUNCTION: 0x103281b0 size=0xe3
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }
static inline float FRet(const float &f) { return f; }

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CEntityOriginAngleSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5)
	SV(60) SV(61)
	virtual void s62(float *pOrigin);
	SV(63) SV(64)
	virtual void s65(float x, float y, float z);
};

void CBaseCombatCharacter::sub_103281b0(int boneName, char bSetOrigin, char bSetAngles)
{
	ScopeTrace trace("CBaseCombatCharacter::MoveToBoneOriginAngles", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	sub_100976e0();
	int bone = sub_10092550(boneName);
	if (bone >= 0) {
		float ang[3];
		float pos[3];
		sub_100926e0(bone, pos, ang);
		if (bSetOrigin)
			((CEntityOriginAngleSlotsX *)this)->s62(pos);
		if (bSetAngles)
			((CEntityOriginAngleSlotsX *)this)->s65(*(float *)((char *)this + 0x428), FRet(ang[1]), *(float *)((char *)this + 0x430));
	}
}
// END FUNCTION

// FUNCTION: 0x103282e0 size=0x7e
#include "CBaseCombatCharacter.h"

struct Ent { bool sub_10336920(); };

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name, const char *ent)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = ent;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int CBaseCombatCharacter::sub_103282e0()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    CScopeGuard guard("CBaseCombatCharacter::GetGrappleSize", n);
    return ((Ent *)this)->sub_10336920() != 0;
}
// END FUNCTION

// FUNCTION: 0x10328380 size=0x1a4
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

struct CGrappleView {
	char pad[0x1538];
	EHANDLE m_h1538;
	int m_n153c;
	char pad1540[4];
	int m_n1544;
};

int CBaseCombatCharacter::sub_10328380(int a, int b, CBaseCombatCharacter *pOther, int c)
{
	CGrappleView *pView = (CGrappleView *)this;
	ScopeTrace trace("CBaseCombatCharacter::TranslateBaseGrappleActivity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (b == -1) {
		if (!pView->m_h1538.Get() || (b = pView->m_n153c) == -1)
			return a;
	}
	if (!pOther) {
		if (pView->m_n153c == -1 || !(pOther = (CBaseCombatCharacter *)pView->m_h1538.Get()))
			return a;
	}
	int bGrappling = pOther->sub_103282e0();
	if (c == -1) {
		if (!pView->m_h1538.Get() || pView->m_n153c == -1 || (c = pView->m_n1544) == -1)
			return a;
	}
	a++;
	if (bGrappling == 1)
		a++;
	if (b == 1)
		a += 2;
	if (c == 1)
		a += 4;
	return a;
}
// END FUNCTION

// FUNCTION: 0x103285a0 size=0x438
template <class T> __forceinline T pcd_stage(T x) { return x; }
#define sub_10348d00() sub_10348d00(); bool sub_103285a0(CBaseCombatCharacter *pTarget, int nType, int nArg)
#include "CEHandleGet.h"
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
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "UTIL_Trace.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "CStealthKillRules.h"
#include "CUnknown10739d08.h"

#undef sub_10348d00
struct CUnknown1004f860 { void *sub_1004f860(); };
struct C10739d08V : CUnknown10739d08 { float sub_101e8b10(); };
#define GS(n) virtual void gs##n();
#define GS10(p) GS(p##0) GS(p##1) GS(p##2) GS(p##3) GS(p##4) GS(p##5) GS(p##6) GS(p##7) GS(p##8) GS(p##9)
#define GS100(p) GS10(p##0) GS10(p##1) GS10(p##2) GS10(p##3) GS10(p##4) GS10(p##5) GS10(p##6) GS10(p##7) GS10(p##8) GS10(p##9)
struct CGrappleSlots
{
	GS(0) GS(1) GS(2) GS(3) GS(4) GS(5) GS(6) GS(7) GS(8) GS(9)
	GS10(1) GS10(2) GS10(3) GS10(4) GS10(5) GS10(6) GS10(7) GS10(8) GS10(9)
	GS100(1) GS100(2)
	GS10(30) GS10(31) GS10(32) GS10(33) GS10(34) GS10(35) GS10(36)
	GS(370) GS(371) GS(372) GS(373) GS(374) GS(375) GS(376)
	virtual char slot377(CGrappleSlots *pTarget, int nType);
	virtual char slot378(CGrappleSlots *pOther, int nType);
};
extern CStealthKillRules g_1072c540;
extern CUnknown10739d08 g_10739d08;

// TARGET: CBaseCombatCharacter::sub_103285a0
bool CBaseCombatCharacter::sub_103285a0(CBaseCombatCharacter *pTarget, int nType, int nArg)
{
	ScopeTrace trace("CBaseCombatCharacter::CanStartGrappleAttack", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!pTarget)
		return false;
	CBaseEntity *pPlayer = (CBaseEntity *)m_pA8;
	if (pPlayer && (pPlayer->sub_100b3700() & 2)) {
		Vector maxs(16.0f, 16.0f, 72.0f);
		Vector mins(-16.0f, -16.0f, 0.0f);
		CEntityVSlots *pSlots = (CEntityVSlots *)pPlayer;
		Vector *pEnd = pSlots->slot220();
		Vector *volatile pStart = pSlots->slot220();
		Ray_t ray;
		((CUnknown1004f860 *)&ray)->sub_1004f860();
		ray.sub_1006dec0(*pStart, &pEnd->x, &mins.x, &maxs.x, 1, 0);
		CTraceFilterSimple filter(pPlayer, 0);
		CGameTrace tr;
		g_1070b254->vfunc4(&ray, 0x201400b, (CTraceFilterNoCharacterCollide *)&filter, &tr);
		if (g_10738960.sub_1005f190())
			sub_10146570((const Vector *)&tr.m_startpos, (const Vector *)&tr.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
		if (tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid)
			return false;
	}
	if (!((CGrappleSlots *)this)->slot377((CGrappleSlots *)pTarget, nType))
		return false;
	if (!((CGrappleSlots *)pTarget)->slot378((CGrappleSlots *)this, nType))
		return false;
	CGlobalEntityList *pList = g_10566458;
	if (pTarget->m_nTarget153c != -1 && pList->sub_100290c0((const unsigned int *)&pTarget->m_hTarget1538)) {
		if (pList->sub_100290c0((const unsigned int *)&pTarget->m_hTarget1538) == this) {
			int idx;
			if (pList->sub_100290c0((const unsigned int *)&m_hTarget1538) && m_nTarget153c != -1) idx = m_nTargetMode1540; else idx = -1;
			if (idx != nType)
				return false;
			return true;
		}
		return false;
	}
	EHandleEntityList *pEL = (EHandleEntityList *)pList;
	if (m_nTarget153c != -1 && pEL->LookupEntity(m_hTarget1538)) {
		if (!pEL->LookupEntity(m_hTarget1538) || m_nTarget153c != 0)
			return false;
		if ((int)nType == -1)
			sub_10329560();
		else
			sub_10329560();
	}
	float flRange;
	switch (nType) {
	case 5:
	case 7:
		flRange = 144.0f;
		break;
	case 3:
	case 4:
		flRange = g_1072c540.sub_101be1d0(pcd_stage((CBaseEntity *)m_pA8));
		break;
	case 8:
		flRange = ((C10739d08V *)&g_10739d08)->sub_101e8b10();
		break;
	case 6:
		flRange = 120.0f;
		break;
	case 2:
		flRange = 0.0f;
		break;
	default:
		flRange = 64.0f;
		break;
	}
	if (flRange > 0.0f) {
		Vector *pT = ((CEntityVSlots *)pTarget)->slot217();
		Vector *pM = ((CEntityVSlots *)this)->slot217();
		float dx = pM->x - pT->x;
		float dy = pM->y - pT->y;
		if (dy * dy + dx * dx > flRange * flRange)
			return false;
	}
	int nSlot = sub_10328af0(pTarget, nType, nArg);
	if (nSlot == -1)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10328af0 size=0x139
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"

// TARGET: CBaseCombatCharacter::sub_10328af0
int CBaseCombatCharacter::sub_10328af0(CBaseCombatCharacter *pOther, int a, int b)
{
	ScopeTrace trace("CBaseCombatCharacter::CheckAndTranslateGrapplePosition", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int type = sub_10328c80(a);
	int pos;
	for (a = 0; a < 2; a++) {
		pos = (a + b) % 2;
		int act = pOther->sub_10328380(type, 1, this, pos);
		act = ((CEntityVSlots *)this)->slot381(act);
		if (((CBaseAnimating *)pOther)->sub_1008dd30(act, -1) >= 0) {
			act = sub_10328380(type, 0, pOther, pos);
			act = ((CEntityVSlots *)this)->slot381(act);
			if (((CBaseAnimating *)this)->sub_1008dd30(act, -1) >= 0)
				break;
		}
	}
	if (a >= 2)
		return -1;
	return pos;
}
// END FUNCTION

// FUNCTION: 0x10328c80 size=0x118
#include "CBaseCombatCharacter.h"
extern int *g_109f3680;
extern int *g_109f3620;
extern char g_106b8540[];

int CBaseCombatCharacter::sub_10328c80(int type)
{
    int r;
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680 * 3] = (int)"CBaseCombatCharacter::GetInitialGrappleAct";
    g_109f3620[*g_109f3680 * 3 + 1] = (int)name;
    g_109f3620[*g_109f3680 * 3 + 2] = (int)g_106b8540;
    ++*g_109f3680;
    switch (type) {
    case 0:
    case 1:
        r = 0xf5b;
        break;
    case 2:
        r = 0xfa5;
        break;
    case 3:
        r = 0x1015;
        break;
    case 4:
        r = 0x101e;
        break;
    case 5:
        r = 0xf40;
        break;
    case 6:
        r = 0x1027;
        break;
    case 7:
        r = 0x94;
        break;
    case 8:
        r = 0xfca;
        break;
    default:
        __assume(0);
    }
    --*g_109f3680;
    return r;
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

// FUNCTION: 0x10329560 size=0x189
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
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
int sub_10431c2f(char *, const char *, ...);

struct CDevFlagObj {
	virtual void v0();
	virtual bool vfunc1();
	char m_pad[0x2c - 4];
	int m_n2c;
};
extern CDevFlagObj *g_10937034;

struct CGrappleAI {
	void sub_10175400(int a);
};

struct CGrappleFields {
	char m_pad[0xa8];
	CGrappleAI *m_pAI;
	char m_pad2[0x1538 - 0xac];
	unsigned int m_hTarget;
	int m_n153c;
	int m_nTargetMode1540;
};

struct CSlotEnt {
	CBCC_SLOTS10(a0) CBCC_SLOTS10(a1) CBCC_SLOTS10(a2) CBCC_SLOTS10(a3) CBCC_SLOTS10(a4)
	CBCC_SLOTS10(a5) CBCC_SLOTS10(a6) CBCC_SLOTS10(a7) CBCC_SLOTS10(a8) CBCC_SLOTS10(a9)
	CBCC_SLOTS10(b0) CBCC_SLOTS10(b1) CBCC_SLOTS10(b2) CBCC_SLOTS10(b3) CBCC_SLOTS10(b4)
	CBCC_SLOTS10(b5) CBCC_SLOTS10(b6) CBCC_SLOTS10(b7) CBCC_SLOTS10(b8) CBCC_SLOTS10(b9)
	CBCC_SLOTS10(c0) CBCC_SLOTS10(c1) CBCC_SLOTS10(c2) CBCC_SLOTS10(c3) CBCC_SLOTS10(c4)
	CBCC_SLOTS10(c5) CBCC_SLOTS10(c6) CBCC_SLOTS10(c7) CBCC_SLOTS10(c8) CBCC_SLOTS10(c9)
	CBCC_SLOTS10(d0) CBCC_SLOTS10(d1) CBCC_SLOTS10(d2) CBCC_SLOTS10(d3) CBCC_SLOTS10(d4)
	CBCC_SLOTS10(d5) CBCC_SLOTS10(d6) CBCC_SLOTS10(d7)
	virtual void vfunc380();
};

// TARGET: CBaseCombatCharacter::sub_10329560
void CBaseCombatCharacter::sub_10329560()
{
	ScopeTrace trace("CBaseCombatCharacter::EndGrapple", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CGrappleFields *f = (CGrappleFields *)this;
	if (!g_10937034->vfunc1() && g_10937034->m_n2c) {
		char buf[256];
		CBaseEntity *pEnt;
		if (f->m_hTarget != 0xffffffff) {
			CGlobalEntityList_Slot *s = &g_10566458->m_Slots[f->m_hTarget & 0x1fff];
			if (s->m_Serial == (int)(f->m_hTarget >> 13))
				pEnt = (CBaseEntity *)s->m_pEntity;
			else
				pEnt = 0;
		} else
			pEnt = 0;
		sub_10431c2f(buf, "%s EndGrapple with %s", sub_100ab4f0(), pEnt->sub_100ab4f0());
		sub_103221b0(buf);
	}
	if (f->m_pAI && f->m_hTarget != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[f->m_hTarget & 0x1fff];
		if (s->m_Serial == (int)(f->m_hTarget >> 13) && s->m_pEntity && f->m_n153c != -1 && f->m_nTargetMode1540 == 8)
			f->m_pAI->sub_10175400(0);
	}
	if (f->m_hTarget != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[f->m_hTarget & 0x1fff];
		if (s->m_Serial == (int)(f->m_hTarget >> 13) && s->m_pEntity)
			((CSlotEnt *)s->m_pEntity)->vfunc380();
	}
	((CSlotEnt *)this)->vfunc380();
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
	m_vecGrapple1548 = *(Vector *)vfunc220();
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

// FUNCTION: 0x1032a100 size=0x2c5
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
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "CDevFlagObj.h"
extern CDevFlagObj *g_10937034;
extern "C" int sprintf(char *, const char *, ...);
__declspec(dllimport) void Warning(const char *, ...);
const char *sub_1025d730(int act);

struct string_tv
{
	const char *pszValue;
	string_tv() {}
	const char *ToCStr() const { return pszValue ? pszValue : g_106b8540; }
};

struct CModelNameView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual string_tv GetModelName();
};

void CBaseCombatCharacter::sub_1032a100(int nAct)
{
	ScopeTrace scope("CBaseCombatCharacter::SetGrappleActivity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc, g_106b8540);

	CBaseCombatCharacter *att;
	CBaseCombatCharacter *vic;
	if (m_hTarget1538.Get() && m_nTarget153c == 0) {
		att = this;
		vic = (CBaseCombatCharacter *)m_hTarget1538.Get();
	} else {
		vic = this;
		if (m_nTarget153c == -1)
			return;
		att = (CBaseCombatCharacter *)m_hTarget1538.Get();
	}
	if (!att || !vic)
		return;
	if (!g_10937034->vfunc1() && g_10937034->m_n2c) {
		char buf[256];
		sprintf(buf, "%s SetGrappleActivity - att=%s vict=%s (act=%d)", sub_100ab4f0(), att->sub_100ab4f0(), vic->sub_100ab4f0(), nAct);
		sub_103221b0(buf);
	}
	int n1 = att->sub_10328380(nAct, -1, 0, -1);
	int n2 = vic->sub_10328380(nAct, -1, 0, -1);
	n1 = ((CEntityVSlots *)att)->slot381(n1);
	n2 = ((CEntityVSlots *)att)->slot381(n2);
	int s1 = ((CBaseAnimating *)att)->sub_1008dc40(n1, -1);
	int s2 = ((CBaseAnimating *)vic)->sub_1008dc40(n2, -1);
	if (s1 >= 0) {
		att->m_IdealActivity = nAct;
		att->m_Activity = n1;
		((CAI_BaseNPC *)att)->sub_10260a50(s1);
		*(int *)((char *)att + 0x6f8) = 0;
	} else {
		Warning("Attacker could not find sequence for activity: %s (%s)\n", sub_1025d730(n1), ((CModelNameView *)this)->GetModelName().ToCStr());
		att->sub_10329560();
	}
	if (s2 >= 0) {
		vic->m_Activity = n2;
		vic->m_IdealActivity = nAct;
		((CAI_BaseNPC *)vic)->sub_10260a50(s2);
		*(int *)((char *)vic + 0x6f8) = 0;
	} else {
		Warning("Victim could not find sequence for activity: %s (%s)\n", sub_1025d730(n2), ((CModelNameView *)this)->GetModelName().ToCStr());
		att->sub_10329560();
	}
}
// END FUNCTION

// FUNCTION: 0x1032a490 size=0x388
#include <math.h>
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
#include "UTIL_Trace.h"
#include "CCollisionProperty.h"
#include "globalvars.h"
#include "CTraceFilterSimpleTwoEnt.h"

void sub_100c5d10(void *pHdr, int nSeq, float flOld, float flNow, const float *pPose, Vector &deltaPos, Vector &deltaAngles);
extern float g_1049e030;

#define S10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
#define S100(n) S10(n##0) S10(n##1) S10(n##2) S10(n##3) S10(n##4) S10(n##5) S10(n##6) S10(n##7) S10(n##8) S10(n##9)
struct CNpc94View
{
	S100(a) S100(b) S100(c) S100(d) S10(e0)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5();
	virtual void vfunc416(int a);
	S100(g)
	virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4();
	virtual float vfunc522();
};

inline int GetSequenceOf(CBaseCombatCharacter *p) { return p->m_nSequence6f0; }
inline const float *GetPoseParameterArrayOf(CBaseCombatCharacter *p) { return (const float *)((char *)p + 0x690); }

inline Vector AddV(const Vector &a, const Vector &b)
{
	Vector r;
	r.x = a[0] + b.x;
	r.y = a.y + b.y;
	r.z = a[2] + b.z;
	return r;
}

namespace block_1032a490 {
struct Ray_tView {
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_f34;
};
#pragma auto_inline(off)
struct RayInit : Ray_t { void sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b); };
void RayInit::sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b)
{
	const Vector &end = *(const Vector *)pEnd;
	Ray_tView *r = (Ray_tView *)this;
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
inline void TraceHullR(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, void *pFilter, CGameTrace *ptr, char a = 0, char b = 0)
{
	Ray_t ray;
	((RayInit *)&ray)->sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, a, b);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}
}
using namespace block_1032a490;
bool CBaseCombatCharacter::sub_1032a490()
{
	CNpc94View *pNpc = *(CNpc94View **)((char *)this + 0x94);
	Vector vecTemp;
	Vector vecLocal;
	if (m_flTimeA9c < 0.0f)
	{
		vecTemp.z = 0;
		vecTemp.y = 0;
		vecTemp.x = 0;
	}
	else
		sub_100c5d10((void *)sub_100952d0(-1), GetSequenceOf(this), m_flTimeA9c, gpGlobals->curtime, GetPoseParameterArrayOf(this), vecTemp, vecLocal);
	m_flTimeA9c = gpGlobals->curtime;
	float flHeight = g_1049e030;
	if (pNpc)
		flHeight = pNpc->vfunc522() + 0.5f;
	Vector vecEye = *(Vector *)vfunc217();
	vecEye[2] += flHeight;
	int nBone = sub_10092550((int)"Bip01");
	if (nBone >= 0)
	{
		Vector vecEnd;
		{
			Vector vecBoneAng;
			sub_100926e0(nBone, &vecEnd.x, &vecBoneAng.x);
		}
		vecEnd[2] = vecEye[2];
		vecEnd = AddV(vecTemp, vecEnd);
		if (vecEye != vecEnd)
		{
			CBaseEntity *pTarget = (m_nTarget153c != -1) ? m_hTarget1538.Get() : 0;
			CTraceFilterSimpleTwoEnt filter(this, pTarget, 0);
			CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
			CGameTrace tr;
			const Vector &mins = *(Vector *)pCol->vfunc1();
			const Vector &maxs = *(Vector *)pCol->vfunc2();
			{
				ScopeTrace scope("UTIL_TraceHull", g_106b8540, g_106b8540);
				TraceHullR(vecEye, vecEnd, mins, maxs, 0x202400b, &filter, &tr, 1, 0);
			}
			bool bRet;
			if (tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid)
			{
				VectorScale(vecEnd - vecEye, 1.0f - tr.m_fraction, vecEye);
				bRet = true;
				if (pNpc)
					pNpc->vfunc416(1);
				Vector vecNew = *(Vector *)vfunc220() - vecEye;
				vfunc62(&vecNew.x);
			}
			else
				bRet = false;
			return bRet;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1032a910 size=0xe3
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
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
struct EntInfo { CBaseCombatWeapon *ent; int serial; int pad; };
extern char *g_10566458;

void CBaseCombatCharacter::sub_1032a910(int a, int b)
{
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseCombatCharacter::Weapon_SetActivity", ent, g_106b8540);
    unsigned int h = *(unsigned int *)((char *)this + 0x19a4);
    if (h != 0xffffffff) {
        EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
        if (e->serial == (h >> 13) && e->ent) {
            unsigned int h2 = *(volatile unsigned int *)((char *)this + 0x19a4);
            CBaseCombatWeapon *pWeapon;
            if (h2 != 0xffffffff) {
                EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
                if (e2->serial == (h2 >> 13))
                    pWeapon = e2->ent;
                else
                    pWeapon = 0;
            } else
                pWeapon = 0;
            pWeapon->vfunc338(a, b);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1032aa40 size=0xd7
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct WeaponSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6) SL10(b7) SL10(b8) SL10(b9)
	SL10(c0) SL10(c1) SL10(c2) SL10(c3) SL10(c4) SL10(c5) SL10(c6) SL10(c7) SL10(c8) SL10(c9)
	SL10(d0) SL10(d1) SL10(d2) SL10(d3) SL10(d4) SL10(d5)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual void Weapon_FrameUpdate(CBaseEntity *pOwner);	// slot 369
};

struct WeaponHandle
{
	unsigned int m_Index;
	WeaponSlots *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
		return e->serial == (m_Index >> 13) ? (WeaponSlots *)e->ent : 0;
	}
};

void CBaseCombatCharacter::sub_1032aa40()
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Weapon_FrameUpdate";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (((WeaponHandle *)((char *)this + 0x19a4))->Get() != 0)
		((WeaponHandle *)((char *)this + 0x19a4))->Get()->Weapon_FrameUpdate(this);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1032ab60 size=0x167
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEntityVSlots.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

struct CBCCHullView : CEntityVSlots
{
    char pad0004[0x268];
    const char *m_name26c;
    CBaseEntity *sub_1032ad30(const Vector &vStart, const Vector &vEnd, const Vector &mins, const Vector &maxs, int iDamage, int iDmgType);	// the other CheckTraceHullAttack (stub 0x1000ebd3)
};
void sub_10139610(const Vector *angles, Vector *forward, Vector *right, Vector *up);

// TARGET: sub_1032ab60
CBaseEntity *__fastcall sub_1032ab60(CBCCHullView *pThis, int unused, float flDist, const Vector &mins, const Vector &maxs, int iDamage, int iDmgType)
{
    ScopeTrace trace("CBaseCombatCharacter::CheckTraceHullAttack", pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
    Vector forward;
    sub_10139610(pThis->slot221(), &forward, 0, 0);
    Vector vStart = *pThis->slot220();
    float flVerticalOffset = pThis->slot214()->z * 0.5;
    if (flVerticalOffset < maxs.z)
        flVerticalOffset = maxs.z + 1.0;
    vStart.z += flVerticalOffset;
    Vector vEnd = vStart + forward * flDist;
    return pThis->sub_1032ad30(vStart, vEnd, mins, maxs, iDamage, iDmgType);
}
// END FUNCTION

// FUNCTION: 0x1032ad30 size=0x19d
#include "CTraceFilterNoCharacterCollide.h"
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
#include "CEntityVSlots.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "CUnknown101c26d0.h"

void sub_10146570(const float *pStart, const float *pEnd, int r, int g, int b, int a, float flDuration);

// TARGET: CBaseCombatCharacter::sub_1032ad30
CBaseEntity *CBaseCombatCharacter::sub_1032ad30(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, int damage, int bitsDamageType)
{
	ScopeTrace trace("CBaseCombatCharacter::CheckTraceHullAttack", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	CGameTrace tr;
	{
		Ray_t ray;
		ray.sub_1006dec0(start, pEnd, pMins, pMaxs, 0, 0);
		CTraceFilterSimple filter(this, 0);
		g_1070b254->vfunc4(&ray, 0x600400b, (CTraceFilterNoCharacterCollide *)&filter, &tr);
	}
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570(tr.m_startpos, tr.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
	if (!tr.m_startsolid && tr.m_pEnt)
	{
		CBaseEntity *pHit = tr.m_pEnt;
		if (pHit->m_nTakeDamage)
		{
			if (((CEntityVSlots *)this)->slot404(pHit) == 1 && damage > 0)
			{
				CUnknown101c26d0 info;
				pHit->sub_100a1250(info.sub_101c26d0(this, this, (float)damage, bitsDamageType, 0, 0, -1));
			}
			return pHit;
		}
	}
	return 0;
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

// FUNCTION: 0x1032b170 size=0xa
#include "ConVar.h"
ConVar g_10936fb8("debug_force_scale", "3", 0);
// END FUNCTION

// FUNCTION: 0x1032b200 size=0xa
#include "ConVar.h"
ConVar g_10936f28("debug_upward_hit_force", ".1", 0);
// END FUNCTION

// FUNCTION: 0x1032b290 size=0x564
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
#include "CTakeDamageInfo.h"
#include "CEntityVSlots.h"
#include "CVDmg_t.h"
#include "CVariantCopy.h"
#include "ScopeTrace.h"
#include "Tier1.h"
#include "Vector.h"
#include "QAngle.h"

extern "C" __declspec(dllimport) int RandomInt(int iMinVal, int iMaxVal);

struct CConVarF
{
	virtual void v0();
	virtual char v1();
	char m_pad[0x24];
	float m_f28;
};
extern CConVarF *g_10936f2c;
extern CConVarF *g_10936fbc;
extern float g_1070d1b0[3];
extern float g_104454c4;

float __fastcall sub_10251790(void *pThis);
Vector *sub_1032b960();
void __cdecl sub_10012a8a();

struct CPhysicsObj
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual float s12();
	virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16();
	virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20();
	virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24();
	virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28();
	virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32();
	virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36();
	virtual void s37(); virtual void s38(); virtual void s39();
	virtual void s40(Vector *pVelocity, int a);
};

extern unsigned char g_109f0b2a;
extern CVStatList_t g_109f0b40;
inline void *operator new(unsigned int, void *p) { return p; }
extern "C" int atexit(void (__cdecl *pfn)(void));

inline CVStatList_t *FindStatList(CVStatListSet *pSet, int type)
{
	for (int i = 0; i < pSet->m_nLists; i++)
	{
		if (pSet->m_pLists[i]->m_field10 == type)
			return pSet->m_pLists[i];
	}
	if (!(g_109f0b2a & 1))
	{
		g_109f0b2a = g_109f0b2a | 1;
		new (&g_109f0b40) CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}

void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);

Vector CBaseCombatCharacter::sub_1032b290(void *pInfoRaw)
{
	CTakeDamageInfo *pInfo = (CTakeDamageInfo *)pInfoRaw;

	ScopeTrace scope("CBaseCombatCharacter::CalcDamageForceVector", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	CVDmgSource_t *pAttacker = (CVDmgSource_t *)pInfo->m_pAttacker;
	if (!pAttacker)
		pAttacker = (CVDmgSource_t *)pInfo->m_pInflictor;

	if (pAttacker)
	{
		float flMagnitude;
		CBaseCombatCharacter *pCharacter;
		if (((CTakeDamageAttacker *)pAttacker)->m_pWeapon)
		{
			flMagnitude = sub_10251790(((CTakeDamageAttacker *)pAttacker)->m_pWeapon);
		}
		else if ((pCharacter = (CBaseCombatCharacter *)pAttacker->m_pCharacter) != 0)
		{
			CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)pCharacter->sub_1032e7b0();
			if (pWeapon && sub_10251790(pWeapon) > g_104454c4)
			{
				flMagnitude = sub_10251790(pWeapon);
			}
			else
			{
				if (pInfo->m_pVDmg00)
					flMagnitude = (float)pInfo->m_pVDmg00->sub_101faa70() * 150.0f;
				else
					flMagnitude = pInfo->m_flDamage * 150.0f;
			}
			if (pWeapon && (((CEntityVSlots *)pWeapon)->slot360() & 0x18000))
			{
				int n9 = FindStatList(CVStatListSet::Of(pCharacter), 3)->sub_102012d0(9);
				if (n9 > 5)
					n9 = 5;
				else
					n9 = n9 < 0 ? 0 : n9;
				int n1 = FindStatList(CVStatListSet::Of(pCharacter), 0)->sub_102012d0(1);
				if (n1 > 5)
					n1 = 5;
				else
					n1 = n1 < 0 ? 0 : n1;
				flMagnitude += (float)(((RandomInt(0, n9) + n9) * 2 + (RandomInt(0, n1) + n1)) * 50);
			}
		}
		else
		{
			if (pInfo->m_pVDmg00)
				flMagnitude = (float)pInfo->m_pVDmg00->sub_101faa70() * 150.0f;
			else
				flMagnitude = pInfo->m_flDamage * 150.0f;
		}

		int flags = pInfo->m_pVDmg00 ? (pInfo->m_pVDmg00->m_field10 | pInfo->m_nFlags38) : pInfo->m_nFlags38;

		Vector forceVector;
		if (flags & 0x40)
		{
			forceVector = *((CEntityVSlots *)this)->slot220() + Vector(0, 0, ((CEntityVSlots *)this)->slot214()->z) - *((CEntityVSlots *)pAttacker)->slot220();
			VectorNormalize(forceVector);
			forceVector *= 1.5f;
		}
		else if (*(int *)((char *)this + 0x2e0) == pAttacker->m_pEdict)
		{
			::sub_10139610((const QAngle *)((CEntityVSlots *)this)->slot219(), &forceVector, 0, 0);
			forceVector *= -1.0f;
		}
		else if (((CEntityVSlots *)pAttacker)->slot94() == 7)
		{
			CPhysicsObj *pPhys = *(CPhysicsObj **)((char *)this + 0x36c);
			if (!pPhys)
				pPhys = *(CPhysicsObj **)((char *)pAttacker + 0x36c);
			pPhys->s40(&forceVector, 0);
			flMagnitude = pPhys->s12();
		}
		else
		{
			Vector *pSize = sub_1032b960();
			pSize->x = *(float *)((char *)this + 0x280) - *(float *)((char *)this + 0x274);
			pSize->y = *(float *)((char *)this + 0x284) - *(float *)((char *)this + 0x278);
			pSize->z = *(float *)((char *)this + 0x288) - *(float *)((char *)this + 0x27c);
			forceVector = *((CEntityVSlots *)this)->slot220() + Vector(0, 0, (g_10936f2c->v1() ? g_104454c4 : g_10936f2c->m_f28) * pSize->z) - *((CEntityVSlots *)pAttacker)->slot220();
			VectorNormalize(forceVector);
		}

		float flScale = (g_10936fbc->v1() ? g_104454c4 : g_10936fbc->m_f28) * flMagnitude;
		return forceVector * *(Vector *)&pInfo->m_fl04 * flScale;
	}
	return *(Vector *)g_1070d1b0;
}
// END FUNCTION

// FUNCTION: 0x1032b960 size=0x3c
#include "TempVector.h"

Vector *sub_1032b960()
{
    return &AllocTempVector();
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

// FUNCTION: 0x1032be80 size=0x1db
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
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct Obj
{
	void sub_102ca6c0(CBaseEntity *pOwner, CBaseEntity *pCorpse);
};
extern Obj *g_109253f8;

struct CFlagsUnit
{
	void sub_100dc580(int flags);
};

CEntityVSlots *sub_100a9ab0(const char *pszClassname, const float *vecOrigin, const float *vecAngles, CEntityVSlots *pOwner);

CBaseEntity *CBaseCombatCharacter::sub_1032be80()
{
	ScopeTrace trace("CBaseCombatCharacter::SpawnStaticCorpse", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	CBaseEntity *pCorpse = (CBaseEntity *)sub_100a9ab0("prop_base", (const float *)pSlots->slot217(), (const float *)pSlots->slot219(), 0);
	if (pCorpse) {
		((CBaseAnimating *)pCorpse)->sub_10097310((CBaseAnimating *)this);
		pCorpse->vfunc103();
		((CBaseAnimating *)pCorpse)->sub_10097310((CBaseAnimating *)this);
		pCorpse->sub_100a9470(0);
		{
			ScopeTrace traceSolid("CBaseEntity::SetSolid", pCorpse->m_name26c ? pCorpse->m_name26c : g_106b8540);
			((CCollisionProperty *)((char *)pCorpse + 0x270))->sub_100dc480(0);
		}
		{
			ScopeTrace traceFlags("CBaseEntity::SetSolidFlags", pCorpse->m_name26c ? pCorpse->m_name26c : g_106b8540);
			((CFlagsUnit *)((char *)pCorpse + 0x270))->sub_100dc580(0);
		}
		*(unsigned int *)((char *)pCorpse + 0x19c) = *(unsigned int *)((char *)this + 0x19c) | 0xb0;
		pCorpse->sub_1009d1e0();
		if (g_109253f8)
			g_109253f8->sub_102ca6c0(this, pCorpse);
	}
	return pCorpse;
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
		sub_10090180(pForce, bone, 0);
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

void CBaseCombatCharacter::vfunc300(CBaseEntity  *a, char b, int c)
{
#define a ((int)a)
    ScopeTrace trace("CBaseCombatCharacter::Event_TookLife", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (*(unsigned char *)((char *)this + 0xe38) & 4) {
        for (int i = 0; i < sub_1032e890(); i++) {
            CWeaponNameUnit *pWeapon = (CWeaponNameUnit *)sub_1032e8b0(i);
            if (pWeapon && !_strcmpi(pWeapon->GetClassname(), "item_p_occult_regen"))
                pWeapon->sub_103f9160(a);
        }
    }
#undef a
}
// END FUNCTION

// FUNCTION: 0x1032c6a0 size=0x22c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern Vector g_1070d1b0;
void sub_101cf5c0(CBaseEntity *pObject, int value, int flag);
int sub_101cf600(int pObject);
// TARGET: CBaseCombatCharacter::sub_1032c6a0
void CBaseCombatCharacter::sub_1032c6a0(CBaseEntity *pObject)
{
  ScopeTrace trace("CBaseCombatCharacter::ObjectHand_Attach",
     this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
  if (pObject)
  {
  CEntityVSlots *pObj = (CEntityVSlots *)pObject;
  pObj->slot93(0xb, 0);
  { ScopeTrace trace2("CBaseEntity::AddSolidFlags",
        pObject->m_name26c ? pObject->m_name26c : g_106b8540);
    ((CCollisionProperty *)((char *)pObject + 0x270))->AddSolidFlags(4); }
  pObj->slot62((const float *)&g_1070d1b0);
  pObject->sub_1009ee80(this);
  pObj->slot202((CEntityVSlots *)this);
  if (pObject->m_hAimEnt37c.Get()) {
     Vector vecDir;
     ((CEntityVSlots *)this)->slot368(&vecDir);
     vecDir = vecDir * 60.0f;
     {
     Vector vecResult = vecDir + ((CEntityVSlots *)this)->slot389(
         *((Vector *)((CEntityVSlots *)this)->slot220()));
     sub_101cf5c0(pObject, (int)&vecResult, 0);
     }
  }
  pObject->m_pfnTouch = 0;
  pObject->sub_100ac4e0(0, 0, 0);
  sub_101cf600((int)pObject);
  }
}
// END FUNCTION

// FUNCTION: 0x1032c960 size=0x1f6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
// TARGET: CBaseCombatCharacter::sub_1032c960
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void __cdecl sub_101cf5c0(CBaseEntity *pObject, int pVec, int a);
int sub_101cf600(int pObject);

void CBaseCombatCharacter::sub_1032c960(CBaseEntity *pObject)
{
	ScopeTrace scope("CBaseCombatCharacter::ObjectHand_Detach",
	                 this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (pObject)
	{
		if (pObject->vfunc96())
		{
			Vector vecPos;
			((CEntityVSlots *)this)->slot368(&vecPos);
			vecPos = vecPos * 30.0f;
			{
				Vector vecOut = vecPos + ((CEntityVSlots *)this)->slot389(*((CEntityVSlots *)this)->slot220());
				sub_101cf5c0(pObject, (int)&vecOut, 0);
			}
		}

		pObject->sub_1009ee80(0);
		((CEntityVSlots *)pObject)->slot202(0);
		pObject->vfunc93(6, 0);
		*(float *)((char *)pObject + 0x3ec) = 1.0f;
		{
			ScopeTrace scopeSolid("CBaseEntity::SetSolid",
			                      pObject->m_name26c ? pObject->m_name26c : g_106b8540);
			((CCollisionProperty *)((char *)pObject + 0x270))->sub_100dc480(2);
		}
		sub_101cf600((int)pObject);
		pObject->sub_100b3640(1);
		pObject->vfunc67();
	}
}
// END FUNCTION

// FUNCTION: 0x1032cbe0 size=0x1d8
template <class T> __forceinline T pcd_stage(T x) { return x; }
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

// TARGET: CBaseCombatCharacter::sub_1032cbe0
bool CBaseCombatCharacter::sub_1032cbe0(CBaseCombatWeapon *pWeapon)
{
	ScopeTrace trace("CBaseCombatCharacter::Weapon_Detach", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	for (int i = 0; i < 0xe0; i++) {
		if (pWeapon == sub_1032e8b0(i)) {
			pWeapon->vfunc300();
			sub_1032e9f0(i, 0);
			((CAI_BaseNPC *)pWeapon)->sub_10252470(0);
			if ((CBaseEntity *)pWeapon == m_hActiveWeapon19a4.Get())
				m_hActiveWeapon19a4 = (CBaseEntity *)0;

			int slot = i;
			for (int k = 0; k < pWeapon->sub_10255cf0() - 1; k++)
				i -= vfunc298(k);
			i %= vfunc298(pWeapon->sub_10255cf0());
			int n = vfunc298(pWeapon->sub_10255cf0()) - i - 1;
			while (n > 0) {
				int next = slot + 1;
				sub_1032e9f0(slot, pcd_stage((CBaseEntity *)sub_1032e8b0(next)));
				if (!sub_1032e8b0(slot))
					break;
				CBaseEntity *pMoved = (CBaseEntity *)sub_1032e8b0(slot);
				*(int *)((char *)pMoved + 0x73c) = slot;
				sub_1032e9f0(next, 0);
				n--;
				slot++;
			}
			return true;
		}
	}
	return false;
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

// FUNCTION: 0x1032d890 size=0xd5
#include "CBaseCombatCharacter.h"
extern "C" int _strcmpi(const char *, const char *);
struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct StringRef_t
{
    const char *m_psz;
    const char *Get() { return m_psz ? m_psz : g_106b8540; }
};
struct WeaponNamed_t
{
    char m_pad[0x11c];
    StringRef_t m_classname;
};

void *CBaseCombatCharacter::sub_1032d890(const char *pszClassname, int unused)
{
    const char *pszName;
    if (this) {
        pszName = m_name26c;
        if (!pszName)
            pszName = g_106b8540;
    } else {
        pszName = "NULL ENTITY";
    }
    g_109f3620[*g_109f3680].m_pszName = "CBaseCombatCharacter::Weapon_OwnsThisType";
    g_109f3620[*g_109f3680].m_pszEnt = pszName;
    g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
    (*g_109f3680)++;
    for (int i = 0; i < 0xe0; i++) {
        if (sub_1032e8b0(i)) {
            if (!_strcmpi(((WeaponNamed_t *)sub_1032e8b0(i))->m_classname.Get(), pszClassname)) {
                void *w = sub_1032e8b0(i);
                (*g_109f3680)--;
                return w;
            }
        }
    }
    (*g_109f3680)--;
    return 0;
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

// FUNCTION: 0x1032db60 size=0x1f2
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
#include "CEHandleGet.h"
#include "CUnknown100290c0.h"
#include "ScopeTrace.h"
#include "utlvector.h"
#include <string.h>

#define SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SCanSwitchWeapon
{
	SLOTS10(a0) SLOTS10(a1) SLOTS10(a2) SLOTS10(a3) SLOTS10(a4) SLOTS10(a5) SLOTS10(a6) SLOTS10(a7) SLOTS10(a8) SLOTS10(a9)
	SLOTS10(b0) SLOTS10(b1) SLOTS10(b2) SLOTS10(b3) SLOTS10(b4) SLOTS10(b5) SLOTS10(b6) SLOTS10(b7) SLOTS10(b8) SLOTS10(b9)
	SLOTS10(c0) SLOTS10(c1) SLOTS10(c2) SLOTS10(c3) SLOTS10(c4) SLOTS10(c5) SLOTS10(c6) SLOTS10(c7) SLOTS10(c8) SLOTS10(c9)
	SLOTS10(d0)
	virtual void d10();
	virtual void d11();
	virtual char vfunc312();
	virtual char vfunc313();
	virtual char vfunc314();

	char m_pad0004[0x11c - 4];
	const char *m_classname11c;
	char sub_102585c0();
};

struct SCanSwitchPlayer
{
	char m_pad0000[0x1040];
	unsigned int m_h1040;
};

struct Holder;
bool __fastcall sub_101681a0(Holder *p);
int sub_1023bd00();
struct CMsgPlayerView;
void sub_101cebc0(CMsgPlayerView *pPlayer, int a, int b);

extern CUtlVector<EHANDLE> g_109370bc;
extern char g_1061f05c[];
namespace block_1032db60 {
// 0x103234a0 "CBaseCombatCharacter::RemoveFromPresenceList", the unit's first function that declines the header
// inline LookupEntity (its FindAndRemove), so the COMDAT is compiled before the target
void __fastcall sub_103234a0(CBaseCombatCharacter *pThis)
{
	ScopeTrace trace(g_1061f05c, pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
	EHANDLE h = pThis;
	g_109370bc.FindAndRemove(h);
}
}

inline bool ActiveCanHolster(CBaseCombatCharacter *p)
{
	if (p->m_hActiveWeapon19a4) {
		if (!((SCanSwitchWeapon *)p->m_hActiveWeapon19a4.Get())->vfunc313())
			return false;
	}
	return true;
}
bool CBaseCombatCharacter::sub_1032db60(void *pWeapon)
{
	ScopeTrace trace("CBaseCombatCharacter::Weapon_CanSwitchTo", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY", g_106b8540);
	SCanSwitchWeapon *pNew = (SCanSwitchWeapon *)pWeapon;
	if (pNew) {
		if (!pNew->vfunc312())
			return false;
		if (!pNew->vfunc314())
			return false;
	}
	if (!ActiveCanHolster(this))
		return false;
	SCanSwitchPlayer *p = *(SCanSwitchPlayer **)((char *)this + 0xa8);
	if (p && pNew && pNew->sub_102585c0()) {
		if (EHandle_Get((const unsigned int &)p->m_h1040))
			return false;
		if (sub_101681a0((Holder *)p)) {
			if (sub_1023bd00()) {
				if (*(int *)(sub_1023bd00() + 0x49c) == 2) {
					if (strcmpi(pNew->m_classname11c ? pNew->m_classname11c : g_106b8540, "item_w_unarmed") != 0)
						sub_101cebc0((CMsgPlayerView *)p, 0x3d, 0);
				}
			}
			return false;
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

// FUNCTION: 0x1032e120 size=0xbf
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <string.h>
#include "CBaseCombatCharacter.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

extern "C" int _strcmpi(const char *, const char *);
CBaseEntity *sub_100a99d0(const char *pszName, const float *pOrigin, const float *pAngles, CBaseEntity *pOwner);

// TARGET: CBaseCombatCharacter::sub_1032e120
void *CBaseCombatCharacter::sub_1032e120(const char *pszName)
{
	ScopeTrace trace("CBaseCombatCharacter::Weapon_Create", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!_strcmpi(pszName, "Nothing"))
		return 0;
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	return sub_100a99d0(pszName, &pSelf->slot220()->x, &pSelf->slot221()->x, this);
}
// END FUNCTION

// FUNCTION: 0x1032e210 size=0xde
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct WeaponSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6) SL10(b7) SL10(b8) SL10(b9)
	SL10(c0) SL10(c1) SL10(c2) SL10(c3) SL10(c4) SL10(c5) SL10(c6) SL10(c7) SL10(c8) SL10(c9)
	SL10(d0) SL10(d1) SL10(d2) SL10(d3) SL10(d4) SL10(d5)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9();
	virtual void Weapon_HandleAnimEvent(void *pEvent, CBaseEntity *pOwner);	// slot 370
};

struct WeaponHandle
{
	unsigned int m_Index;
	WeaponSlots *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
		return e->serial == (m_Index >> 13) ? (WeaponSlots *)e->ent : 0;
	}
};

void CBaseCombatCharacter::sub_1032e210(void *pEvent)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::Weapon_HandleAnimEvent";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (((WeaponHandle *)((char *)this + 0x19a4))->Get() != 0)
		((WeaponHandle *)((char *)this + 0x19a4))->Get()->Weapon_HandleAnimEvent(pEvent, this);
	--*g_109f3680;
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

// FUNCTION: 0x1032e7b0 size=0xa8
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

CBaseEntity *__fastcall sub_1032e7b0(CBaseEntity *pThis)
{
	ScopeTrace trace("CBaseCombatCharacter::GetActiveWeapon", pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
	return (CBaseEntity *)EHandle_Get(*(unsigned int *)((char *)pThis + 0x19a4));
}
// END FUNCTION

// FUNCTION: 0x1032e890 size=0x6
int sub_1032e890()
{
    return 0xe0;
}
// END FUNCTION

// FUNCTION: 0x1032e8b0 size=0xf7
#include "CBaseCombatCharacter.h"
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
struct EntInfo { void *ent; int serial; int pad; };
struct WeaponEnt { char pad[0x73c]; int m_state; };
struct WeaponSlots { char pad[0x1624]; unsigned int m_hWeapon[1]; };
extern char *g_10566458;

void *CBaseCombatCharacter::sub_1032e8b0(int index)
{
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseCombatCharacter::GetWeapon", ent, g_106b8540);
    WeaponSlots *s = (WeaponSlots *)this;
    unsigned int h = s->m_hWeapon[index];
    if (h != 0xffffffff) {
        EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
        if (e->serial == (h >> 13) && e->ent) {
            unsigned int h2 = *(volatile unsigned int *)&s->m_hWeapon[index];
            WeaponEnt *pWeapon;
            if (h2 != 0xffffffff) {
                EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
                if (e2->serial == (h2 >> 13))
                    pWeapon = (WeaponEnt *)e2->ent;
                else
                    pWeapon = 0;
            } else
                pWeapon = 0;
            if (pWeapon->m_state != 0xff)
                return pWeapon;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1032e9f0 size=0xa8
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct SHandle
{
	unsigned int m_Index;
	void operator=(CBaseEntity *pEnt)
	{
		if (pEnt)
			m_Index = *pEnt->vfunc1();
		else
			m_Index = 0xffffffff;
	}
};

void CBaseCombatCharacter::sub_1032e9f0(int index, CBaseEntity *pWeapon)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SetWeapon";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	((SHandle *)((char *)this + 0x1624))[index] = pWeapon;
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1032ead0 size=0xb2
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106203c4[];
extern char g_106b8540[];
extern char g_105387dc[];
void CBaseCombatCharacter::sub_1032ead0()
{
    const char *name;
    if (this)
        name = m_name26c ? m_name26c : g_106b8540;
    else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106203c4;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x19a4) = -1;
    for (int i = 0; i < 0xe0; i++) {
        if (sub_1032e8b0(i)) {
            ((CBaseCombatWeapon *)sub_1032e8b0(i))->vfunc359();
            sub_1032e9f0(i, 0);
        }
    }
    --*g_109f3680;
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

// FUNCTION: 0x1032ec90 size=0x239
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
#include "CEnvParticle.h"
#include "CBaseEntityUnit100fbaf0.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "ScopeTrace.h"

extern char g_1070d9d0[];
extern char g_1070d1b0[];
extern const char *g_10619e50[5];
CEnvParticle *sub_100fbc90(const char *name, const char *a, const char *b, float f);

#define TEV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CTempEntsView20
{
	TEV10(a0) TEV10(a1)
	virtual void vfunc20(const CRecipientFilter *pFilter, int a, const Vector *pOrigin, int r, int g, int b, int e, float radius, float time, float decay);
};
extern CTempEntsView20 *g_10540528;

void CBaseCombatCharacter::sub_1032ec90(int nType, int bFlag, int unused)
{
	ScopeTrace trace("CBaseCombatCharacter::CreatePotenceHitEffect", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if ((nType >= 0 || nType <= 4) && bFlag)
	{
		CEnvParticle *pParticle = sub_100fbc90(g_10619e50[nType], g_1070d1b0, g_1070d9d0, -1.0f);
		if (pParticle)
		{
			char *pModel = (char *)((CBaseAnimating *)this)->sub_100952d0(-1);
			if (pModel)
			{
				char *hdr = pModel + *(int *)(pModel + 0x104);
				int *rec = !hdr ? 0 : (int *)(*(int *)(hdr + 8) + m_nHitBoxSet1594 * 0x20 + hdr);
				int nBone = *rec;
				pParticle->sub_100fb1f0((CBaseEntity *)this, 4, nBone);
				((CBaseEntityUnit100fbaf0 *)pParticle)->sub_100fbaf0(10.0f);
				CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
				filter.MakeReliable();
				int edict = m_pEdict2e0;
				if (nType == 4)
					enginesound->vfunc3(&filter, engine->vfunc35(edict), 0, "disciplines/potence/melee_hit_deathblow.wav", 1.0f, 0.8f, 1, 100, 0, 0, 1, 0);
				else
					enginesound->vfunc3(&filter, engine->vfunc35(edict), 0, "disciplines/potence/melee_hit.wav", 1.0f, 0.8f, 1, 100, 0, 0, 1, 0);
				Vector vecOrigin;
				Vector vecAngles;
				((CBaseAnimating *)this)->sub_100926e0(nBone, (int)&vecOrigin, (int)&vecAngles);
				g_10540528->vfunc20(&filter, 0, &vecOrigin, 200, 200, 255, 0, 500.0f, 0.5f, 100.0f);
			}
		}
	}
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

int CBaseCombatCharacter::vfunc142(struct CTakeDamageInfo *pInfo)
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

// FUNCTION: 0x1032f550 size=0x1ac
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
#include "CEnvParticle.h"
#include "ScopeTrace.h"

extern char g_1070d9d0[];
extern char g_1070d1b0[];
CEnvParticle *sub_100fbc90(const char *name, const char *a, const char *b, float f);

#ifndef min
#define min(a, b) (((a) < (b)) ? (a) : (b))
#endif

struct mstudiobbox_t
{
	int bone;
	int group;
	float bbmin[3];
	float bbmax[3];
};

struct mstudiohitboxset_t
{
	int sznameindex;
	int numhitboxes;
	int hitboxindex;
	mstudiobbox_t *pHitbox(int i) const { return (mstudiobbox_t *)(((char *)this) + hitboxindex) + i; }
};

struct CFireStudioHdr
{
	char m_pad0000[0x104];
	int hitboxsetindex;	// 0x104
	mstudiohitboxset_t *pHitboxSet(int i) const { return (mstudiohitboxset_t *)(((char *)this) + hitboxsetindex) + i; }
	mstudiobbox_t *pHitbox(int i, int set) const
	{
		mstudiohitboxset_t const *s = pHitboxSet(set);
		if (!s)
			return 0;
		return s->pHitbox(i);
	}
};

void *CBaseCombatCharacter::sub_1032f550(int nHitBox)
{
	ScopeTrace trace("CBaseCombatCharacter::GetFireParticleForHBox", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!m_b1480)
		return 0;
	CFireStudioHdr *pStudioHdr = (CFireStudioHdr *)((CBaseAnimating *)this)->sub_100952d0(-1);
	if (!pStudioHdr)
		return 0;
	mstudiohitboxset_t *set = pStudioHdr->pHitboxSet(0);
	CEnvParticle *pParticle = 0;
	int nFree = -1;
	int nBone = pStudioHdr->pHitbox(nHitBox, 0)->bone;
	int nCount = min(set->numhitboxes, 18);
	for (int i = 0; i < nCount; i++) {
		CBaseEntity *pEnt = m_hFireEmitters[i].Get();
		if (!pEnt) {
			if (nFree == -1)
				nFree = i;
		} else if (*(int *)((char *)pEnt + 0x460) == nBone)
			break;
	}
	if (nFree != -1) {
		pParticle = sub_100fbc90("DMGFX_body_fire_emitter", g_1070d1b0, g_1070d9d0, -1.0f);
		if (pParticle) {
			pParticle->sub_100fb1f0((CBaseEntity *)this, 4, nBone);
			m_hFireEmitters[nFree] = (CBaseEntity *)pParticle;
		}
	}
	return pParticle;
}
// END FUNCTION

// FUNCTION: 0x1032f770 size=0x15d
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
#include "CEnvParticle.h"
#include "ScopeTrace.h"
#include "StudioHdr.h"
#include <math.h>

extern float g_1049e034;

inline StudioHitbox *StudioHdr_pHitbox(StudioHdr *pHdr, int i, int set)
{
	StudioHitboxSet *s = pHdr->HitboxSet(set);
	if (!s)
		return 0;
	return s->Hitbox(i);
}

struct CEnvParticleUnit1032f770 : CEnvParticle
{
	void sub_100fbac0(float flSize, float flScale);
	void sub_100fbb40(int a, int b);
};

struct CBCCUnit1032f770 : CBaseCombatCharacter
{
	CEnvParticle *sub_1032f550(int nHitbox);
	void sub_1032f770(int nHitbox, int a, int b);
	StudioHdr *sub_100952d0(int nModel);
};

void CBCCUnit1032f770::sub_1032f770(int nHitbox, int a, int b)
{
	ScopeTrace trace("CBaseCombatCharacter::BurnHitbox", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CEnvParticle *pEmitter = sub_1032f550(nHitbox);
	if (pEmitter)
	{
		if (!pEmitter->m_unk484)
		{
			StudioHdr *pHdr = sub_100952d0(-1);
			Vector vecMax = StudioHdr_pHitbox(pHdr, nHitbox, 0)->m_vecMaxs;
			Vector vecMin = StudioHdr_pHitbox(pHdr, nHitbox, 0)->m_vecMins;
			float flSize = (fabs(vecMax.x - vecMin.x) * fabs(vecMax.y - vecMin.y) * fabs(vecMax.z - vecMin.z)) / g_1049e034;
			((CEntityVSlots *)pEmitter)->slot241();
			((CEnvParticleUnit1032f770 *)pEmitter)->sub_100fbac0(flSize, 0.5f);
		}
		((CEnvParticleUnit1032f770 *)pEmitter)->sub_100fbb40(a, b);
	}
}
// END FUNCTION

// FUNCTION: 0x1032f930 size=0x86
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

void CBaseCombatCharacter::sub_1032f930(int amount)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IncrementStealthModifier";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	m_nStealthModifier += amount;
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1032f9f0 size=0x86
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

void CBaseCombatCharacter::sub_1032f9f0(int amount)
{
	ScopeTrace trace("CBaseCombatCharacter::DecrementStealthModifier",
	                 this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	m_nStealthModifier -= amount;
}
// END FUNCTION

// FUNCTION: 0x1032fab0 size=0x96
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

static inline int Clamp(int v, int lo, int hi)
{
	if (v > hi)
		return hi;
	if (v < lo)
		return lo;
	return v;
}

int CBaseCombatCharacter::sub_1032fab0()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetStealthModifier";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = Clamp(m_nStealthModifier, -10, 10);
	(*g_109f3680)--;
	return r;
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

// FUNCTION: 0x103300c0 size=0x101
#include "CBaseCombatCharacter.h"

extern "C" int __cdecl atexit(void (__cdecl *)(void));
void __cdecl sub_10012a8a();	// the game's destructor stub of the shared default stat list
extern unsigned char g_109f0b2a;	// its guard byte
extern CVStatList_t g_109f0b40;	// the shared default stat list

inline void *operator new(unsigned int, void *p) { return p; }

// The game's inlined stat-list lookup by id with the function-local default list spelled out.
static inline CVStatList_t *StatListById(CBaseCombatCharacter *pChar, int nId)
{
	for (int i = 0; i < pChar->m_nStatLists; i++) {
		if (pChar->m_pStatLists[i]->m_field10 == nId)
			return pChar->m_pStatLists[i];
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		new (&g_109f0b40) CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}

char CBaseCombatCharacter::sub_103300c0()
{
	if (sub_10337f30())
		return StatListById(this, 3)->sub_10010609(7) > 0;
	return StatListById(this, 3)->sub_10010609(0xd) > 0;
}
// END FUNCTION

// FUNCTION: 0x10330220 size=0x8b
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "CVStatList_t.h"

struct CBCCMiscFlagView { char sub_1033c900(int flags); };
inline bool HasStat(CBaseCombatCharacter *p) { return p->sub_10337f30() && CVStatListSet::Of(p)->Find(0)->sub_102012d0(0x19) > 0; }
inline bool HasFlag(CBaseCombatCharacter *p, int f) { return (bool)((CBCCMiscFlagView *)p)->sub_1033c900(f); }

bool CBaseCombatCharacter::sub_10330220()
{
	if (!HasStat(this)) return HasFlag(this, 0x20000);
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

// FUNCTION: 0x10330ce0 size=0xd
#include "CUnknown10330ce0.h"
// TARGET: CUnknown10330ce0::sub_10330ce0
void CUnknown10330ce0::sub_10330ce0(char value)
{
	m_unkfc8 = value;
}
// END FUNCTION

// FUNCTION: 0x10330d00 size=0x704
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
#include "CAI_BaseNPCTroika.h"
#include "CPASFilter.h"
#include "CPVSFilter.h"
#include "CTakeDamageInfo.h"
#include "CUnknown101c2770.h"
#include "CVDmg_t.h"
#include "CUtlVector76.h"
#include "CEntityVSlots.h"
#include "engineiface.h"
#include "engineserver.h"

extern void *g_10540528;
void __cdecl sub_1034a170(void *pDest, void *pSrc);
extern int (*g_109f3868)(int lo, int hi);

struct CBccSlots
{
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
	virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
	virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
	virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39();
	virtual void d40(); virtual void d41(); virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47(); virtual void d48(); virtual void d49();
	virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53(); virtual void d54(); virtual void d55(); virtual void d56(); virtual void d57(); virtual void d58(); virtual void d59();
	virtual void d60(); virtual void d61(); virtual void d62(); virtual void d63(); virtual void d64(); virtual void d65(); virtual void d66(); virtual void d67(); virtual void d68(); virtual void d69();
	virtual void d70(); virtual void d71(); virtual void d72(); virtual void d73(); virtual void d74(); virtual void d75(); virtual void d76(); virtual void d77(); virtual void d78(); virtual void d79();
	virtual void d80(); virtual void d81(); virtual void d82(); virtual void d83(); virtual void d84(); virtual void d85(); virtual void d86(); virtual void d87(); virtual void d88(); virtual void d89();
	virtual void d90(); virtual void d91(); virtual void d92(); virtual void d93(); virtual void d94(); virtual void d95(); virtual void d96(); virtual void d97(); virtual void d98(); virtual void d99();
	virtual void d100(); virtual void d101(); virtual void d102(); virtual void d103(); virtual void d104(); virtual void d105(); virtual void d106(); virtual void d107(); virtual void d108(); virtual void d109();
	virtual void d110(); virtual void d111(); virtual void d112(); virtual void d113(); virtual void d114(); virtual void d115(); virtual void d116(); virtual void d117(); virtual void d118(); virtual void d119();
	virtual void d120(); virtual void d121(); virtual void d122(); virtual void d123(); virtual void d124(); virtual void d125(); virtual void d126(); virtual void d127(); virtual void d128(); virtual void d129();
	virtual void d130(); virtual void d131(); virtual void d132(); virtual void d133(); virtual void d134(); virtual void d135(); virtual void d136(); virtual void d137(); virtual void d138(); virtual void d139();
	virtual void d140(); virtual void d141(); virtual void d142(); virtual void d143(); virtual void d144(); virtual void d145(); virtual void d146(); virtual void d147(); virtual void d148(); virtual void d149();
	virtual void d150(); virtual void d151(); virtual void d152(); virtual void d153(); virtual void d154(); virtual void d155(); virtual void d156(); virtual void d157(); virtual void d158(); virtual void d159();
	virtual void d160(); virtual void d161(); virtual void d162(); virtual void d163(); virtual void d164(); virtual void d165(); virtual void d166(); virtual void d167(); virtual void d168(); virtual void d169();
	virtual void slot170(const Vector *pVec); virtual void d171(); virtual void d172(); virtual void d173(); virtual void d174(); virtual void d175(); virtual void d176(); virtual void d177(); virtual void d178(); virtual void d179();
	virtual void d180(); virtual void d181(); virtual void d182(); virtual void d183(); virtual void d184(); virtual void d185(); virtual void d186(); virtual void d187(); virtual void d188(); virtual void d189();
	virtual void d190(); virtual void d191(); virtual Vector slot192(); virtual void d193(); virtual void d194(); virtual void d195(); virtual void d196(); virtual void d197(); virtual void d198(); virtual void d199();
	virtual void d200(); virtual void d201(); virtual void d202(); virtual void d203(); virtual void d204(); virtual void d205(); virtual void d206(); virtual void d207(); virtual void d208(); virtual void d209();
	virtual void d210(); virtual void d211(); virtual void d212(); virtual void d213(); virtual void d214(); virtual void d215(); virtual void d216(); virtual void d217(); virtual void d218(); virtual void d219();
	virtual void d220(); virtual void d221(); virtual void d222(); virtual void d223(); virtual void d224(); virtual void d225(); virtual void d226(); virtual void d227(); virtual void d228(); virtual void d229();
	virtual void d230(); virtual void d231(); virtual void d232(); virtual void d233(); virtual void d234(); virtual void d235(); virtual void d236(); virtual void d237(); virtual void d238(); virtual void d239();
	virtual void d240(); virtual void d241(); virtual void d242(); virtual void d243(); virtual void d244(); virtual void d245(); virtual void d246(); virtual void d247(); virtual void d248(); virtual void d249();
	virtual void d250(); virtual void d251(); virtual void d252(); virtual void d253(); virtual void d254(); virtual void d255(); virtual void d256(); virtual void d257(); virtual void d258(); virtual void d259();
	virtual void d260(); virtual void d261(); virtual void d262(); virtual void d263(); virtual void d264(); virtual void d265(); virtual void d266(); virtual void d267(); virtual void d268(); virtual void d269();
	virtual void d270(); virtual void d271(); virtual void d272(); virtual void d273(); virtual void d274(); virtual void d275(); virtual void d276(); virtual void d277(); virtual void d278(); virtual void d279();
	virtual void d280(); virtual void d281(); virtual void d282(); virtual void d283(); virtual void d284(); virtual void d285(); virtual void d286(); virtual void d287(); virtual void d288(); virtual void d289();
	virtual void d290(); virtual void d291(); virtual void d292(); virtual void d293(); virtual void d294(); virtual void d295(); virtual void d296(); virtual void d297(); virtual void d298(); virtual void d299();
	virtual void d300(); virtual void d301(); virtual void d302(); virtual void d303(); virtual void d304(); virtual void d305(); virtual void d306(); virtual void d307(); virtual void d308(); virtual void d309();
	virtual void d310(); virtual void d311(); virtual void d312(); virtual void d313(); virtual void d314(); virtual void d315(); virtual void d316(); virtual void d317(); virtual void d318(); virtual void d319();
	virtual void d320(); virtual void d321(); virtual void d322(); virtual void d323(); virtual void d324(); virtual void d325(); virtual void d326(); virtual void d327(); virtual void d328(); virtual void d329();
	virtual void d330(); virtual void d331(); virtual void d332(); virtual void d333(); virtual void d334(); virtual void d335(); virtual void d336(); virtual void d337(); virtual void d338(); virtual void d339();
	virtual void d340(); virtual void d341(); virtual void d342(); virtual void d343(); virtual void d344(); virtual void d345(); virtual void d346(); virtual void d347(); virtual void d348(); virtual void d349();
	virtual void d350(); virtual void d351(); virtual void d352(); virtual void d353(); virtual void d354(); virtual void d355(); virtual void d356(); virtual void d357(); virtual void d358(); virtual void d359();
	virtual void d360(); virtual void d361(); virtual void d362(); virtual void d363(); virtual void d364(); virtual void d365(); virtual void d366(); virtual void d367(); virtual Vector c368(); virtual void d369();
	virtual void d370(); virtual void d371(); virtual void d372(); virtual void d373(); virtual void d374(); virtual void d375(); virtual void d376(); virtual void d377(); virtual void d378(); virtual void d379();
	virtual void d380(); virtual void d381(); virtual void d382(); virtual void d383(); virtual void d384(); virtual void d385(); virtual void d386(); virtual void d387(); virtual void d388(); virtual void d389();
	virtual void d390(); virtual void d391(); virtual void d392(); virtual void d393(); virtual void d394(); virtual void d395(); virtual void d396(); virtual void d397(); virtual void d398(); virtual void d399();
	virtual void d400(); virtual void d401(); virtual void d402(); virtual void d403(); virtual void d404(); virtual void d405(); virtual void d406(); virtual void d407(); virtual void d408(); virtual void d409();
	virtual void d410(); virtual void d411(); virtual void d412(); virtual void d413(); virtual void d414(); virtual void d415(); virtual void d416(); virtual void d417(); virtual void d418(); virtual void d419();
	virtual void d420(); virtual void d421(); virtual void d422(); virtual void d423(); virtual void d424(); virtual void d425(); virtual void d426(); virtual void d427(); virtual void d428(); virtual void d429();
	virtual void d430(); virtual void d431(); virtual void d432(); virtual void d433(); virtual void d434(); virtual void d435(); virtual void d436(); virtual void d437(); virtual void d438(); virtual void d439();
	virtual void d440(); virtual void d441(); virtual void d442(); virtual void d443(); virtual void d444(); virtual void d445(); virtual void d446(); virtual void d447(); virtual void d448(); virtual void d449();
	virtual void d450(); virtual void d451(); virtual void d452(); virtual void d453(); virtual void d454(); virtual void d455(); virtual void d456(); virtual void d457(); virtual void d458(); virtual void d459();
	virtual void d460(); virtual void d461(); virtual void d462(); virtual void d463(); virtual void d464(); virtual void d465(); virtual void d466(); virtual void d467(); virtual void d468(); virtual void d469();
	virtual void d470(); virtual void d471(); virtual void d472(); virtual void d473(); virtual void d474(); virtual void d475(); virtual void d476(); virtual void d477(); virtual void d478(); virtual void d479();
	virtual void d480(); virtual void d481(); virtual void d482(); virtual void d483(); virtual void d484(); virtual void d485(); virtual void d486(); virtual void d487(); virtual void d488(); virtual void d489();
	virtual void d490(); virtual void d491(); virtual void d492(); virtual void d493(); virtual void d494(); virtual void d495(); virtual void d496(); virtual void d497(); virtual void d498(); virtual void d499();
	virtual void d500(); virtual void d501(); virtual void d502(); virtual void d503(); virtual void d504(); virtual void d505(); virtual void d506(); virtual void d507(); virtual void d508(); virtual void d509();
	virtual void d510(); virtual void d511(); virtual void d512(); virtual void d513(); virtual void d514(); virtual void d515(); virtual void d516(); virtual void d517(); virtual void d518(); virtual void d519();
	virtual void d520(); virtual void d521(); virtual void d522(); virtual void d523(); virtual void d524(); virtual void d525(); virtual void d526(); virtual void d527(); virtual void d528(); virtual void d529();
	virtual void d530(); virtual void d531(); virtual void d532(); virtual void d533(); virtual void d534(); virtual void d535(); virtual void d536(); virtual void d537(); virtual void d538(); virtual void d539();
	virtual void d540(); virtual void d541(); virtual void d542(); virtual void d543(); virtual void d544(); virtual void d545(); virtual void d546(); virtual void d547(); virtual void d548(); virtual void d549();
	virtual void d550(); virtual void d551(); virtual void d552(); virtual void d553(); virtual void d554(); virtual void d555(); virtual void d556(); virtual void d557(); virtual void d558(); virtual void d559();
	virtual void d560(); virtual void d561(); virtual void d562(); virtual void d563(); virtual void d564(); virtual void d565(); virtual void d566(); virtual void d567(); virtual void d568(); virtual void d569();
	virtual void d570(); virtual void d571(); virtual void d572(); virtual void d573(); virtual void d574(); virtual void d575(); virtual void d576(); virtual void d577(); virtual void d578(); virtual void d579();
	virtual void d580(); virtual void d581(); virtual void d582(); virtual void d583(); virtual void d584(); virtual void d585(); virtual void d586(); virtual void d587(); virtual void d588(); virtual void d589();
	virtual void d590(); virtual void d591(); virtual void d592(); virtual void d593(); virtual void d594(); virtual void d595(); virtual void d596(); virtual void d597(); virtual void d598(); virtual void d599();
	virtual void d600(); virtual void d601(); virtual void d602(); virtual void d603(); virtual void d604(); virtual void d605(); virtual void d606(); virtual void d607(); virtual void d608(); virtual void d609();
	virtual void d610(); virtual void d611(); virtual void d612(); virtual void d613(); virtual void d614(); virtual char slot615();
};
struct CTempEntsView
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3(IRecipientFilter *pFilter, float delay, CBaseEntity *pEnt, int a, int b, const char *pszName);
	virtual void vfunc4(IRecipientFilter *pFilter, float delay, void *pEnt, int a, int b, const char *pszName);
};

struct CBBoxView
{
	int m_bone;
	int m_pad[7];
};

struct CHitboxSetView
{
	int m_sznameindex;
	int m_numhitboxes;
	int m_hitboxindex;
	CBBoxView *pHitbox(int i) const { return (CBBoxView *)(((char *)this) + m_hitboxindex) + i; }
};

struct CStudioHdrView
{
	char m_pad00[0xf0];
	int m_numbones;		// 0xf0
	int m_boneindex;	// 0xf4
	char m_padf8[0x100 - 0xf8];
	int m_numhitboxsets;	// 0x100
	int m_hitboxsetindex;	// 0x104
	CHitboxSetView *pHitboxSet(int i) const { return (CHitboxSetView *)(((char *)this) + m_hitboxsetindex) + i; }
	CBBoxView *pHitbox(int i, int set) const { CHitboxSetView const *s = pHitboxSet(set); if (!s) return 0; return s->pHitbox(i); }
	int iHitboxCount(int set) const { CHitboxSetView const *s = pHitboxSet(set); return s->m_numhitboxes; }
};

struct CBoneView
{
	int m_sznameindex;
	int m_parent;
	int m_pad[0x26];
};

struct CDmgNPCView
{
	void sub_10344f80(const Vector *pDir, int a, int b);
};

inline int DamageTypeOf(CTakeDamageInfo *pInfo)
{
	return pInfo->m_pVDmg00 ? (pInfo->m_pVDmg00->m_field10 | pInfo->m_nFlags38) : pInfo->m_nFlags38;
}

inline float DamageOf(CTakeDamageInfo *pInfo)
{
	float f;
	if (pInfo->m_pVDmg00)
		f = pInfo->m_pVDmg00->sub_101faa70();
	else
		f = pInfo->m_flDamage;
	return f;
}

inline float ApplyDmg(CVDmg_t *pDmg, int idx, CTakeDamageInfo *pInfo)
{
	return (float)pDmg->sub_101fb200(idx, pInfo->sub_101c29b0());
}

inline void SetDamage(CTakeDamageInfo *p, float f) { p->m_flDamage = f; }
inline float GetDamage(CTakeDamageInfo *p) { return p->m_flDamage; }
struct EntIdx : CBaseEntity { int edict() { return m_pEdict2e0; } int entindex() { return engine->vfunc35(edict()); } };
inline CAI_BaseNPCTroika *MyNPC(CBaseCombatCharacter *p) { return p->m_pNPC98; }
inline void *MyPlayer(CBaseCombatCharacter *p) { return p->m_pA8; }
inline void ApplyImpulse(CBccSlots *pEnt, Vector v)
{
	pEnt->slot170(&v);
}

void CBaseCombatCharacter::vfunc299(void *pInfoArg, char *pbOut)
{
	CTakeDamageInfo *pInfo = (CTakeDamageInfo *)pInfoArg;
	CBccSlots *pThis = (CBccSlots *)this;

	ScopeTrace scope("CBaseCombatCharacter::CreateDamageEffects", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (!m_b1480)
		return;

	CPASFilter pasFilter(pThis->slot192());
	CPVSFilter pvsFilter(pThis->slot192());

	CAI_BaseNPCTroika *pNPC = MyNPC(this);
	void *pPlayer = MyPlayer(this);
	CStudioHdrView *pStudioHdr = (CStudioHdrView *)sub_100952d0(-1);

	if (!pStudioHdr || (!pPlayer && !pNPC))
		return;

	*pbOut = 0;
	int hitbox = pInfo->sub_101c2a30();
	int bone;
	if (pStudioHdr->m_numhitboxsets > 0 && hitbox < pStudioHdr->iHitboxCount(0))
	{
		if (hitbox <= 0)
			goto lookup;
		bone = pStudioHdr->pHitbox(hitbox, 0)->m_bone;
	}
	else
	{
		if (pNPC) { hitbox = -1; goto lookup2; }
		hitbox = -1;
	lookup:
	lookup2:
		bone = sub_10092550((int)"bip01 spine2");
	}

	const char *pszSound = 0;
	int pitch = g_109f3868(0x5a, 0x6e);

	if ((DamageTypeOf(pInfo) & 8) && hitbox > 0 && (pPlayer || (pNPC && ((CBccSlots *)pNPC)->slot615())))
	{
		while (bone > 0 && bone < pStudioHdr->m_numbones && bone != m_nHeadBone1080)
		{
			int nHitbox = ((CBaseAnimating *)this)->sub_10097000(bone);
			float flScale = enginerandom->vfunc1(4.0f, 5.5f);
			sub_1032f770(nHitbox, flScale, 1.0f);
			bone = ((CBoneView *)((char *)pStudioHdr + pStudioHdr->m_boneindex) + bone)->m_parent;
		}
		pszSound = "environmental/fire/fire_hit.wav";
		if (pNPC && ((CBccSlots *)pNPC)->slot615())
		{
			CTakeDamageInfo infoCopy;
			((CUnknown101c2770 *)&infoCopy)->sub_101c2690();
			infoCopy = *pInfo;
			{ float flDmg; if (infoCopy.m_pVDmg00) flDmg = ApplyDmg(infoCopy.m_pVDmg00, ((EntIdx *)this)->entindex(), pInfo); else flDmg = infoCopy.m_flDamage; infoCopy.m_flDamage = flDmg; }
			infoCopy.m_pVDmg00 = 0;
			infoCopy.sub_101c2a10(-1);

			CUtlVector76 *pVec = (CUtlVector76 *)((char *)pNPC + 0x65a8);
			int count = pVec->m_size;
			pVec->sub_1034a030(1);
			pVec->sub_1034a100(count, 1);
			sub_1034a170(pVec->m_pMemory + count * 76, &infoCopy);
			pNPC->m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\BaseCombatCharacter.cpp";
			pNPC->m_nLine1b34 = 0x18c7;
			pNPC->sub_102ae750(0x151, 0);
			*pbOut = 1;
		}
	}

	if (DamageTypeOf(pInfo) & 0x10)
	{
		((CTempEntsView *)g_10540528)->vfunc3(&pvsFilter, 0, this, 1, -1, "DMGFX_body_freeze_emitter");
		if (pPlayer)
			((CTempEntsView *)g_10540528)->vfunc4(&pvsFilter, 0, pPlayer, 0xe, 0, "DMGFX_hud_freeze_emitter");
		pszSound = "interface/stealth_discovered.wav";
	}

	if (DamageTypeOf(pInfo) & 0x100)
	{
		((CTempEntsView *)g_10540528)->vfunc3(&pvsFilter, 0, this, 1, -1, "DMGFX_body_shock_emitter");
		if (pPlayer)
			((CTempEntsView *)g_10540528)->vfunc4(&pvsFilter, 0, pPlayer, 0xe, 0, "DMGFX_hud_shock_emitter");
		pszSound = "disciplines/potence/melee_hit.wav";
	}

	if (DamageTypeOf(pInfo) & 0x40)
	{
		Vector vecDir;
		Vector vecCenter = pThis->slot192();
		if (pInfo->m_pAttacker)
			vecDir = vecCenter - ((CBccSlots *)pInfo->m_pAttacker)->slot192();
		else if (pInfo->m_pInflictor)
			vecDir = vecCenter - ((CBccSlots *)pInfo->m_pInflictor)->slot192();
		else
			vecDir = pThis->c368() * -1.0f;
		VectorNormalize(vecDir);
		if (MyNPC(this))
			((CDmgNPCView *)this)->sub_10344f80(&vecDir, 2, 1);
		else if (MyPlayer(this))
		{
			float flForce = (DamageOf(pInfo) * 50.0 > 1000.0) ? 1000.0 : ((DamageOf(pInfo) * 50.0 < 200.0) ? 200.0 : DamageOf(pInfo) * 50.0);
			Vector vecForce;
			vecForce = vecDir * flForce;
			vecForce.z *= 3.0f;
			ApplyImpulse(pThis, vecForce);
		}
	}

	if (pszSound)
	{
		int pEdict = (int)m_pEdict2e0;
		enginesound->vfunc2(&pasFilter, engine->vfunc35(pEdict), 0, pszSound, 1.0f, 0x4b, 0, pitch, 0, 0, 1, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x103315e0 size=0x79
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

// TARGET: CBaseCombatCharacter::vfunc391
// slot 391 "CBaseCombatCharacter::OnTakeDamage_Dying" (its scope name)
int CBaseCombatCharacter::vfunc391(int a)
{
    char *self = (char *)this;
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

// FUNCTION: 0x10331770 size=0xca
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

// TARGET: sub_10331770
float __fastcall sub_10331770(CBaseCombatCharacter *pThis, int, float flDamage)
{
    ScopeTrace trace("CBaseCombatCharacter::DamageForce", pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
    CEntityVSlots *p = (CEntityVSlots *)pThis;
    float flForce = (float)(73728.0 / (p->slot214()->x * p->slot214()->z * p->slot214()->y) * flDamage * 5.0);
    if (flForce > 1000.0)
        flForce = 1000.0f;
    return flForce;
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

// FUNCTION: 0x10331da0 size=0x1eb
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "matrix3x4_t.h"
#include "CEntityVSlots.h"
struct CalcLookModel
{
	char m_pad00[0xf0];
	int m_nBones;
	int m_nBoneIndex;
};
void sub_10137fe0(const float *in1, const float *in2, float *out);
void sub_101381b0(const float *in1, const float *in2, float *out);
void sub_10139550(const QAngle &angles, Vector *forward);

char CBaseCombatCharacter::sub_10331da0(Vector *pOrigin, Vector *pForward)
{
	ScopeTrace trace("CBaseCombatCharacter::CalcLookData", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CalcLookModel *pModel = (CalcLookModel *)sub_100952d0(-1);
	if (pModel && m_nHeadBone1080 < pModel->m_nBones && m_nHeadBone1080 >= 0)
	{
		if (engine->vfunc120() != m_nHeadTime108c)
		{
			m_nHeadTime108c = engine->vfunc120();
			float mat[12];
			Vector tmp;
			char *pBone = (char *)pModel + pModel->m_nBoneIndex + m_nHeadBone1080 * 0xa0;
			vfunc256(m_nHeadBone1080, mat);
			sub_10137fe0(&((float *)this)[0x184 / 4], (float *)(pBone + 0x58), &tmp.x);
			sub_10137fe0(&tmp.x, mat, &m_vecHeadPos1090.x);
			sub_101381b0(&m_vecHeadAxis1074.x, mat, &m_vecHeadDir109c.x);
		}
		if (pOrigin)
			*pOrigin = m_vecHeadPos1090;
		if (pForward)
			*pForward = m_vecHeadDir109c;
		return 1;
	}
	if (pOrigin)
	{
		Vector tmp;
		*pOrigin = *((CEntityVSlots *)this)->slot193(&tmp);
	}
	if (pForward)
		sub_10139550(((CEntityVSlots *)this)->slot367(), pForward);
	return 0;
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

// FUNCTION: 0x103322e0 size=0xbd
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
#include "CBasePlayer.h"

CBasePlayer *sub_1000ac8b(int index);

void CBaseCombatCharacter::sub_103322e0(int a, int b)
{
	ScopeTrace trace("CBaseCombatCharacter::SetAsCameraTarget", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	m_b10d4 = (char)a;
	*(int *)((char *)this + 0x10d0) = b;
	for (int i = 1; i <= gpGlobals->maxClients; i++) {
		CBasePlayer *pPlayer = sub_1000ac8b(i);
		if (pPlayer)
			pPlayer->sub_1017d460((CBaseEntity *)this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x103323d0 size=0x9b
#include "CUnknown103323d0.h"
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

void CUnknown103323d0::sub_103323d0(inputdata_t *pInput)
{
	CScopeTrace trace("CBaseCombatCharacter::InputFadeHeadAsCameraTarget", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	inputdata_t *pIn = pInput;
	volatile int *pSlot = (int *)&pInput;
	if (pIn->value.fieldType == 1)
		*pSlot = pIn->value.iValue;
	else
		*pSlot = 0;
	sub_103322e0(1, *pSlot);
}
// END FUNCTION

// FUNCTION: 0x103324a0 size=0x9b
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

// TARGET: CBaseCombatCharacter::sub_103324a0
void CBaseCombatCharacter::sub_103324a0(inputdata_t *data)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (name == 0)
            name = g_106b8540;
    } else
        name = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InputFadeBodyAsCameraTarget";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    float t;
    if (data->value.fieldType == 1)
        t = data->value.flValue;
    else
        t = 0;
    sub_103322e0(0, *(int *)&t);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10332570 size=0x7a
#include "inputdata_t.h"
#include "CBaseCombatCharacter.h"
struct SScope { const char *a; const char *b; const char *c; };
extern "C" __declspec(dllimport) SScope g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern char g_106b8540[];
void CBaseCombatCharacter::sub_10332570(inputdata_t *data)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else {
		name = "NULL ENTITY";
	}
	g_ScopeTraceStack[g_ScopeTraceStackDepth].a = "CBaseCombatCharacter::InputSetHeadAsCameraTarget";
	g_ScopeTraceStack[g_ScopeTraceStackDepth].b = name;
	g_ScopeTraceStack[g_ScopeTraceStackDepth].c = g_106b8540;
	g_ScopeTraceStackDepth++;
	sub_103322e0(1, 0);
	g_ScopeTraceStackDepth--;
}
// END FUNCTION

// FUNCTION: 0x10332610 size=0x7a
#include "inputdata_t.h"
#include "CBaseCombatCharacter.h"
struct SScope { const char *a; const char *b; const char *c; };
extern "C" __declspec(dllimport) SScope g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern char g_106b8540[];
void CBaseCombatCharacter::sub_10332610(inputdata_t *data)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else {
		name = "NULL ENTITY";
	}
	g_ScopeTraceStack[g_ScopeTraceStackDepth].a = "CBaseCombatCharacter::InputSetBodyAsCameraTarget";
	g_ScopeTraceStack[g_ScopeTraceStackDepth].b = name;
	g_ScopeTraceStack[g_ScopeTraceStackDepth].c = g_106b8540;
	g_ScopeTraceStackDepth++;
	sub_103322e0(0, 0);
	g_ScopeTraceStackDepth--;
}
// END FUNCTION

// FUNCTION: 0x103326b0 size=0xf9
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *name; const char *ent; const char *extra; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern char g_10620b4c[];

struct CSlowUnk
{
	void sub_10013ba6(int);
	void sub_1000e66a(int, int);
	char pad[0x10];
	int m_f10;
};
extern unsigned char g_109f0b2a;
extern CSlowUnk g_109f0b40;
void sub_10430923(void (*)());
void sub_10012a8a();

// TARGET: CBaseCombatCharacter::sub_103326b0
void CBaseCombatCharacter::sub_103326b0(float amount)
{
	const char *name;
	if (this) {
		name = *(const char **)((char *)this + 0x26c);
		if (!name)
			name = g_106b8540;
	} else {
		name = g_105387dc;
	}
	g_109f3620[*g_109f3680].name = g_10620b4c;
	g_109f3620[*g_109f3680].ent = name;
	g_109f3620[*g_109f3680].extra = g_106b8540;
	++*g_109f3680;

	int i = 0;
	float *pf = (float *)((char *)this + 0x10a8);
	*pf = amount + *pf;
	CSlowUnk *p;
	int n;
	if ((n = *(int *)((char *)this + 0x13bc)) > 0) {
		CSlowUnk **list = *(CSlowUnk ***)((char *)this + 0x13c0);
		CSlowUnk **q = list;
		do {
			int f = (*q)->m_f10;
			if (f == 0) {
				p = list[i];
				goto done;
			}
			i++;
			q++;
		} while (i < n);
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		g_109f0b40.sub_10013ba6(-1);
		sub_10430923(sub_10012a8a);
	}
	p = &g_109f0b40;
done:
	p->sub_1000e66a(0x1a, (int)amount);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103327f0 size=0xf9
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CBaseCombatCharacter::sub_103327f0(float amount)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::EndSlowEntity";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	CVStatList_t **ppList = 0;
	int i = 0;
	float *pSlow = (float *)((char *)this + 0x10a8);
	*pSlow = *pSlow - amount;
	CVStatList_t *pList = CVStatListSet::Of(this)->Find(0);
	pList->sub_10201100(0x1a, (int)amount);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10332930 size=0x11d
#include "CBaseCombatCharacter.h"
extern int *g_109f3680;
extern int *g_109f3620;
extern char g_106b8540[];
extern "C" __declspec(dllimport) void __cdecl Warning(const char *, ...);

struct SRelView {
    char pad[0x1598];
    int *m_pTable;
    int m_nCapacity;
    int m_nUsed;
};

bool CBaseCombatCharacter::sub_10332930()
{
    SRelView *v = (SRelView *)this;
    int *pNew;
    int i;
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680 * 3] = (int)"CBaseCombatCharacter::ExpandRelationshipTable";
    g_109f3620[*g_109f3680 * 3 + 1] = (int)name;
    g_109f3620[*g_109f3680 * 3 + 2] = (int)g_106b8540;
    ++*g_109f3680;
    v->m_nCapacity += 5;
    pNew = new int[v->m_nCapacity];
    if (!pNew) {
        Warning("CBCC->ExpandRelationshipTable:  Not enough memory to create %i relationships\n", v->m_nCapacity);
        --*g_109f3680;
        return false;
    }
    i = 0;
    if (v->m_nUsed > 0) {
        do {
            i++;
            pNew[i - 1] = v->m_pTable[i - 1];
        } while (i < v->m_nUsed);
    }
    i = v->m_nUsed;
    if (i < v->m_nCapacity) {
        do {
            pNew[i] = 0;
            i++;
        } while (i < v->m_nCapacity);
    }
    delete v->m_pTable;
    v->m_pTable = pNew;
    --*g_109f3680;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10332aa0 size=0x181
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

struct CRelationRecord
{
	EHANDLE entity;
	int classType;
	int disposition;
	int priority;
	int m_field10;
};

void CBaseCombatCharacter::sub_10332aa0(int class_type, int disposition, int priority)
{
	ScopeTrace scope("CBaseCombatCharacter::AddClassRelationship", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	for (int i = 0; i < m_nRelationships15a0; i++)
	{
		if (m_ppRelationships1598[i]->classType == class_type)
		{
			m_ppRelationships1598[i]->disposition = disposition;
			m_ppRelationships1598[i]->priority = priority;
			return;
		}
	}
	if (m_nRelationships15a0 == m_nMaxRelationships159c)
	{
		if (!sub_10332930())
			return;
	}
	m_ppRelationships1598[m_nRelationships15a0] = new CRelationRecord;
	m_ppRelationships1598[m_nRelationships15a0]->classType = class_type;
	m_ppRelationships1598[m_nRelationships15a0]->entity = 0;
	m_ppRelationships1598[m_nRelationships15a0]->disposition = disposition;
	m_ppRelationships1598[m_nRelationships15a0]->m_field10 = 0;
	m_ppRelationships1598[m_nRelationships15a0]->priority = priority;
	m_nRelationships15a0++;
}
// END FUNCTION

// FUNCTION: 0x10332ca0 size=0x1c3
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

struct CBCCRelationship	// one record of the relationship table (0x14 bytes)
{
	EHANDLE m_hEntity;	// 0x00
	int m_nClass;	// 0x04
	int m_nDisposition;	// 0x08
	int m_nPriority;	// 0x0c
	int m_n10;	// 0x10
};

struct CBCCRelationView
{
	char m_pad0000[0x1598];
	CBCCRelationship **m_ppRelationships;	// 0x1598
	int m_nAllocated;	// 0x159c
	int m_nUsed;	// 0x15a0
};

void CBaseCombatCharacter::sub_10332ca0(CBaseEntity *pEntity, int disposition, int priority)
{
	ScopeTrace trace("CBaseCombatCharacter::AddEntityRelationship", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBCCRelationView *p = (CBCCRelationView *)this;
	for (int i = 0; i < p->m_nUsed; i++) {
		if (p->m_ppRelationships[i]->m_hEntity.Get() == pEntity) {
			p->m_ppRelationships[i]->m_nDisposition = disposition;
			p->m_ppRelationships[i]->m_nPriority = priority;
			return;
		}
	}
	if (p->m_nUsed == p->m_nAllocated) {
		if (!sub_10332930())
			return;
	}
	p->m_ppRelationships[p->m_nUsed] = new CBCCRelationship;
	p->m_ppRelationships[p->m_nUsed]->m_nClass = 0;
	p->m_ppRelationships[p->m_nUsed]->m_hEntity = pEntity;
	p->m_ppRelationships[p->m_nUsed]->m_nDisposition = disposition;
	p->m_ppRelationships[p->m_nUsed]->m_n10 = 0;
	p->m_ppRelationships[p->m_nUsed]->m_nPriority = priority;
	p->m_nUsed++;
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

// FUNCTION: 0x10332fc0 size=0xe7
#include "CUnknown10332fc0.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

struct SpeakerHandle
{
	unsigned int m_Index;
	void *Get() const
	{
		if (m_Index != 0xffffffff) {
			HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
			if (e->serial == (m_Index >> 13))
				return e->ent;
		}
		return 0;
	}
};

int CUnknown10332fc0::sub_10332fc0(void *pSpeaker)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetDialogReactionModifier";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	for (int i = 0; i < m_nRecords; i++) {
		if (pSpeaker == ((SpeakerHandle *)m_pRecords[i])->Get()) {
			int value = m_pRecords[i]->m_nModifier;
			--*g_109f3680;
			return value;
		}
	}
	--*g_109f3680;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103330f0 size=0x1cd
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

struct SRelRecord
{
	EHANDLE m_hEntity;	// 0x00
	int m_n04;
	int m_n08;
	int m_nPriority;	// 0x0c
	int m_nModifier;	// 0x10
};

struct SRelView
{
	char m_pad0000[0x1598];
	SRelRecord **m_ppRecords;	// 0x1598
	int m_nAlloc;	// 0x159c
	int m_nUsed;	// 0x15a0
};

void CBaseCombatCharacter::sub_103330f0(CBaseEntity *pEntity, int nModifier)
{
	ScopeTrace trace("CBaseCombatCharacter::SetDialogReactionModifier", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	SRelView *v = (SRelView *)this;
	for (int i = 0; i < v->m_nUsed; i++) {
		if (v->m_ppRecords[i]->m_hEntity.Get() == pEntity) {
			v->m_ppRecords[i]->m_nModifier = nModifier;
			return;
		}
	}
	if (v->m_nUsed == v->m_nAlloc && !sub_10332930())
		return;
	v->m_ppRecords[v->m_nUsed] = new SRelRecord;
	v->m_ppRecords[v->m_nUsed]->m_n04 = 0;
	SRelRecord *pRec = v->m_ppRecords[v->m_nUsed];
	pRec->m_hEntity = pEntity;
	v->m_ppRecords[v->m_nUsed]->m_n08 = 4;
	v->m_ppRecords[v->m_nUsed]->m_nModifier = ((CEntityVSlots *)this)->slot404(pEntity);
	v->m_ppRecords[v->m_nUsed]->m_nPriority = ((CEntityVSlots *)this)->slot405(pEntity);
	v->m_nUsed++;
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

// FUNCTION: 0x10333ad0 size=0x542
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
#include <math.h>
#include "ScopeTrace.h"
#include "UTIL_Trace.h"
#include "CCollisionProperty.h"
int sub_101cca80(CBaseEntity **pList, int nMax, const Vector *pMins, const Vector *pMaxs, int a, int b);

#define S10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
#define S100(n) S10(n##0) S10(n##1) S10(n##2) S10(n##3) S10(n##4) S10(n##5) S10(n##6) S10(n##7) S10(n##8) S10(n##9)
struct CSlot382View
{
	S100(a) S100(b) S100(c) S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6) S10(d7)
	virtual void e0(); virtual void e1();
	virtual char vfunc382(CBaseCombatWeapon *pWeapon);
};

__forceinline void VSub(const Vector &a, const Vector &b, Vector &c)
{
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
}
__forceinline void VScale(Vector &v, float fl)
{
	v.x *= fl;
	v.y *= fl;
	v.z *= fl;
}

struct BoxRay_t
{
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_n34;

	__forceinline void Init(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, char a, char b)
	{
		VSub(end, start, m_Delta);
		m_IsSwept = (m_Delta.LengthSqr() != g_104454c4);
		VSub(maxs, mins, m_Extents);
		VScale(m_Extents, 0.5f);
		m_IsRay = (m_Extents.LengthSqr() < 1e-6);
		m_StartOffset.x = mins[0] + maxs.x;
		m_StartOffset.y = mins.y + maxs.y;
		m_StartOffset.z = mins.z + maxs[2];
		VScale(m_StartOffset, 0.5f);
		VectorAdd(start, m_StartOffset, m_Start);
		VScale(m_StartOffset, -1.0f);
		m_b32 = b;
		m_b33 = 0;
		m_n34 = 0;
		if (a && !m_IsRay)
		{
			float fl = (float)sqrt(m_Extents.x * m_Extents.x + m_Extents.y * m_Extents.y);
			m_n34 = fl;
			if (m_n34 > 1e-6)
				m_b33 = 1;
		}
	}
};

__forceinline void UTIL_TraceHull_Box(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr)
{
	BoxRay_t ray;
	ray.Init(vecAbsStart, vecAbsEnd, hullMin, hullMax, 1, 0);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4((Ray_t *)&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

CBaseCombatWeapon *CBaseCombatCharacter::sub_10333ad0(const Vector &range)
{
	ScopeTrace trace("CBaseCombatCharacter::Weapon_FindUsable", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	Vector mins = *(Vector *)vfunc220() - range;
	Vector maxs = *(Vector *)vfunc220() + range;
	CBaseCombatWeapon *pBest = 0;
	float flBest = 0;
	CBaseEntity *list[64];
	int nCount = sub_101cca80(list, 64, &mins, &maxs, 0, 0);
	for (int i = 0; i < nCount; i++)
	{
		if (list[i]->sub_100b3700() & 0x2080)
			continue;
		if ((*(Vector *)list[i]->m_vel3d4).LengthSqr() > 1.0f)
			continue;
		CBaseCombatWeapon *pWeapon = dynamic_cast<CBaseCombatWeapon *>(list[i]);
		if (!pWeapon)
			continue;
		if (pWeapon->sub_102521f0())
			continue;
		if (!((CSlot382View *)this)->vfunc382(pWeapon))
			continue;
		CBaseCombatCharacter *pWepChar = (CBaseCombatCharacter *)pWeapon;
		float flDist = (*(Vector *)pWepChar->vfunc220() - *(Vector *)vfunc220()).Length();
		if (pBest)
		{
			if (!(pWeapon->vfunc360() & 0x6000) || flDist > flBest)
				continue;
		}
		Vector vecStart = *(Vector *)pWepChar->vfunc220();
		Vector vecEnd = *(Vector *)pWepChar->vfunc220();
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
		const Vector *pMins = (const Vector *)pCol->vfunc1();
		const Vector *pMaxs = (const Vector *)pCol->vfunc2();
		float h = (pMaxs->z - pMins->z) * 0.5;
		vecStart.z += h;
		vecEnd.z += h + 1.0;
		CGameTrace tr;
		pMins = (const Vector *)pCol->vfunc1();
		pMaxs = (const Vector *)pCol->vfunc2();
		UTIL_TraceHull_Box(vecStart, vecEnd, *pMins, *pMaxs, 0x200400b, pWeapon, 0, &tr);
		if ((!tr.m_startsolid && !(tr.m_fraction < 1.0)) || tr.m_pEnt == this)
		{
			pBest = pWeapon;
			flBest = flDist;
		}
	}
	return pBest;
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

// FUNCTION: 0x103343f0 size=0xc9
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
extern char g_10620e54[];
extern char g_10620e7c[];
extern void (*g_109f3628)(const char *fmt, ...);
#define AV(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct AmmoDef { int sub_1000df3f(); };
struct AmmoDefs
{
    AV(a0) AV(a1) AV(a2) AV(a3) AV(a4)
    virtual void a50(); virtual void a51(); virtual void a52(); virtual void a53(); virtual void a54();
    virtual AmmoDef *vfunc55(const char *name);
};
extern AmmoDefs *g_1070ba0c;
int CBaseCombatCharacter::sub_103343f0(int count, const char *pszAmmoName)
{
    ScopeTrace t(g_10620e54, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    int index = g_1070ba0c->vfunc55(pszAmmoName)->sub_1000df3f();
    if (index == -1) {
        g_109f3628(g_10620e7c, pszAmmoName);
        return 0;
    }
    return vfunc374(count, index, 0);
}
// END FUNCTION

// FUNCTION: 0x10334500 size=0x9d
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_10334500(int amount, int ammoIndex)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::RemoveAmmo";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (amount > 0)
	{
		int *pAmmo = (int *)((char *)this + 0x15a4);
		pAmmo[ammoIndex] -= amount;
		if (pAmmo[ammoIndex] < 0)
			pAmmo[ammoIndex] = 0;
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103345d0 size=0x12
struct CZeroFields103345d0 {
    char pad0[0x15a4];
    unsigned int field15a4[32];
    void sub_103345d0();
};
void CZeroFields103345d0::sub_103345d0()
{
    int i;
    for (i = 0; i < 32; i++) {
        field15a4[i] = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10334600 size=0x83
#include "CBaseCombatCharacter.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_10334600(int count, int ammoIndex)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseCombatCharacter::SetAmmoCount";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x15a4 + ammoIndex * 4) = count;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103346c0 size=0x94
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseCombatCharacter::sub_103346c0(int ammoIndex)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetAmmoCount";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (ammoIndex == -1) {
		(*g_109f3680)--;
		return 0;
	}
	int count = *(int *)((char *)this + 0x15a4 + ammoIndex * 4);
	(*g_109f3680)--;
	return count;
}
// END FUNCTION

// FUNCTION: 0x10334790 size=0x98
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CAmmoDefX {
	int sub_104274b0(const char *pszName);	// index of the ammo type with this name (-1 when none)
};
struct CGameRulesX {
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6();
	virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13();
	virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20();
	virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27();
	virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34();
	virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41();
	virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48();
	virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54();
	virtual CAmmoDefX *slot55();
};
extern CGameRulesX *g_1070ba0c;

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

int CBaseCombatCharacter::sub_10334790(const char *pszAmmoName)
{
	CScopeTrace trace("CBaseCombatCharacter::GetAmmoCount", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	return sub_103346c0(g_1070ba0c->slot55()->sub_104274b0(pszAmmoName));
}
// END FUNCTION

// FUNCTION: 0x10334860 size=0xaf
#include "CBaseCombatCharacter.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CBCCSlots2 {
	S100(c0) S100(c1) S100(c2)
	S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6) S10(d7)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7();
	virtual char Slot388(void *weapon, int a);
};
struct GlobalSlots20 {
	S10(a0) S10(a1)
	virtual void *Slot20(void *pOwner, void *pCurrent);
};
extern GlobalSlots20 *g_1070ba0c;
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

char CBaseCombatCharacter::sub_10334860(void *pCurrent)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SwitchToNextBestWeapon";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    void *next = g_1070ba0c->Slot20(this, pCurrent);
    if (next && next != pCurrent) {
        char r = ((CBCCSlots2 *)this)->Slot388(next, 0);
        (*g_109f3680)--;
        return r;
    }
    (*g_109f3680)--;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10334940 size=0xc4
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

extern float g_10619e68[];
extern const float g_104454c4;
extern "C" __declspec(dllimport) void Msg(const char *pMsg, ...);

float sub_10334940(const float *pTable, int nEntries, float flValue)
{
    ScopeTrace trace("ReadDamageTable", g_106b8540);
    int i = 0;
    if (nEntries > 0) {
        do {
            if (flValue < pTable[i * 2])
                break;
            i++;
        } while (i < nEntries);
        if (i > 0) {
            i--;
            Msg("Damge %.0f, energy %.0f\n", (double)g_10619e68[i * 2], (double)FastSqrt(flValue));
            return pTable[i * 2 + 1];
        }
    }
    return g_104454c4;
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

// FUNCTION: 0x10334b10 size=0xc8
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

void sub_101cd940(void *pEntity);

// TARGET: CBaseCombatCharacter::sub_10334b10
void CBaseCombatCharacter::sub_10334b10()
{
	ScopeTrace trace("CBaseCombatCharacter::Inventory_Destroy", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	for (int i = 0; i < 0xe0; i++)
	{
		if (sub_1032e8b0(i))
		{
			sub_101cd940(sub_1032e8b0(i));
			*(int *)((char *)sub_1032e8b0(i) + 0x73c) = 0xff;
			sub_1032e9f0(i, 0);
		}
	}
	*(int *)((char *)this + 0x19a4) = -1;
	*(int *)((char *)this + 0x10dc) = -1;
}
// END FUNCTION

// FUNCTION: 0x10334c20 size=0x1c4
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

void sub_101cebc0(int a, int b, int c);

struct CInvObjView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual const char *vfunc5();
};

struct CInvUnknownView
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual CInvObjView *vfunc3();
};

struct CInvEdictView
{
	char m_pad0000[0x40];
	CInvUnknownView *m_pUnknown;
};

struct CInvOwnerView
{
	char m_pad0000[0x4fea8];
	int m_nLimit;
};

struct CInvWeaponView : public CBaseCombatWeapon
{
	char m_pad08d0[0x8d0 - sizeof(CBaseCombatWeapon)];
	int m_n08d0;
};

bool CBaseCombatCharacter::sub_10334c20(CBaseCombatWeapon *pWeapon)
{
	ScopeTrace trace("CBaseCombatCharacter::Inventory_Can_Insert", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pWeapon) {
		int nSection = pWeapon->sub_10255cf0();
		int nBase = 0;
		for (int i = 0; i < nSection; i++)
			nBase += vfunc298(i);
		CInvEdictView *pEdict = (CInvEdictView *)pWeapon->m_pEdict2e0;
		const char *pszClass;
		if (!pEdict->m_pUnknown)
			pszClass = g_106b8540;
		else
			pszClass = pEdict->m_pUnknown->vfunc3()->vfunc5();
		CBaseCombatWeapon *pOwned = (CBaseCombatWeapon *)sub_1032d890(pszClass, pWeapon->vfunc296());
		if (pOwned) {
			if (pOwned->vfunc371() && pOwned->sub_102517b0()) {
				if (((CInvWeaponView *)pOwned)->m_n08d0 < ((CInvOwnerView *)pOwned->sub_102517b0())->m_nLimit)
					return true;
				return false;
			}
			if (pOwned->m_nAmmoType >= 0) {
				if (pOwned->sub_102525e0(this))
					return false;
				return true;
			}
		}
		for (int j = 0; j < vfunc298(nSection); j++, nBase++) {
			if (!sub_1032e8b0(nBase))
				return true;
		}
		sub_101cebc0(*(int *)((char *)this + 0xa8), 6, 0);
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10334e70 size=0x35c
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
#include "CBaseCombatWeapon.h"
#include "CWeaponOwner.h"
extern char g_10588eac[];
extern char g_105869b8[];
extern char g_1055f710[];
void __cdecl sub_101cd940(void *p);
void __fastcall sub_1033d970(void *p);
char __fastcall sub_102585c0(CBaseCombatWeapon *p);
CWeaponOwner * __fastcall sub_102517b0(void *p);

#define IV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define IV100(p) IV10(p##0) IV10(p##1) IV10(p##2) IV10(p##3) IV10(p##4) IV10(p##5) IV10(p##6) IV10(p##7) IV10(p##8) IV10(p##9)
struct CInvVT
{
	IV100(a) IV100(b) IV100(c)
	IV10(d0) IV10(d1) IV10(d2) IV10(d3) IV10(d4) IV10(d5) IV10(d6) IV10(d7)
	virtual void e0(); virtual void e1(); virtual void e2();
	virtual void v383(void *pItem, int n);
};

struct CInvPlayer { char pad[0x245c]; void *m245c; };
struct CInvNetworkable { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual const char *GetClassName(); };
struct CInvUnknown { virtual void v0(); virtual void v1(); virtual void v2(); virtual CInvNetworkable *GetNetworkable(); };
struct CInvEdict
{
	char pad[0x40]; CInvUnknown *m_pUnk;
	const char *GetClassName() const
	{
		if (!m_pUnk)
			return g_106b8540;
		return m_pUnk->GetNetworkable()->GetClassName();
	}
};
struct CInvWpn
{
	char pad[0x2e0]; CInvEdict *m2e0; char pad2[0x73c - 0x2e4]; int m73c; char pad3[0x8d0 - 0x740]; int m8d0;
	CInvEdict *edict() { return m2e0; }
};
struct CInvRing { void sub_10407c40(const char *name, void *p); void sub_10408220(void *p); };
struct CInvSS { void sub_10408480(void *p); };
struct CInvPl { void sub_101836d0(void *p); };
struct CInvInfo { int m0; int m4; int m8; char pad[0x114 - 0xc]; int m114; };
struct CInvBlk { char pad[0x20]; int m20; };

void CBaseCombatCharacter::sub_10334e70(CBaseCombatWeapon *pWeapon)
{
	ScopeTrace scope("CBaseCombatCharacter::Inventory_Insert", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!pWeapon)
		return;
	if (*(int *)((char *)this + 0x98) && sub_102585c0(pWeapon)) {
		CWeaponOwner *o = sub_102517b0(pWeapon);
		CInvInfo *info = (CInvInfo *)&o->m_n2668;
		int n = info->m8;
		if (n < 1)
			n = 1;
		if (info->m0 == -1)
			vfunc374(n, info->m114, 0);
		else
			*(int *)((char *)pWeapon + 0x74c) = n;
	}
	sub_1033c6b0(0x80);
	CInvWpn *pKey = (CInvWpn *)__RTDynamicCast(pWeapon, 0, g_1055f710, g_10588eac, 0);
	if (pKey) {
		CInvPlayer *pPlayer = *(CInvPlayer **)((char *)this + 0xa8);
		CInvRing *pRing = (CInvRing *)__RTDynamicCast((void *)sub_10335950("item_g_keyring"), 0, g_1055f710, g_105869b8, 0);
		if (!pRing) {
			if (pPlayer && pPlayer->m245c) {
				CBaseCombatWeapon *pNew = (CBaseCombatWeapon *)sub_1032e120("item_g_keyring");
				if (pNew) {
					pRing = (CInvRing *)__RTDynamicCast(pNew, (int)pRing, g_1055f710, g_105869b8, (int)pRing);
					if (pRing) {
						((CInvVT *)this)->v383(pRing, 1);
						((CInvSS *)pPlayer->m245c)->sub_10408480(pRing);
						goto keyring;
					}
					pNew->sub_1024f7b0();
				}
			}
			goto normal;
		}
keyring:
		pRing->sub_10407c40(pKey->edict()->GetClassName(), (char *)sub_102517b0(pKey) + 0x88);
		sub_101cd940(pKey);
		if (pPlayer && pPlayer->m245c) {
			((CInvPl *)pPlayer)->sub_101836d0(pRing);
			pRing->sub_10408220(pPlayer->m245c);
		}
		return;
	}
normal:
	{
		CWeaponOwner *o = sub_102517b0(pWeapon);
		CInvBlk *blk = (CInvBlk *)((char *)o + 0x5eb20);
		if (blk->m20)
			sub_1033d970(this);
		int sections = pWeapon->sub_10255cf0();
		int idx = 0;
		for (int i = 0; i < sections; i++)
			idx += vfunc298(i);
		for (int count = 0; count < vfunc298(pWeapon->sub_10255cf0()); count++, idx++) {
			if (!sub_1032e8b0(idx)) {
				sub_1032e9f0(idx, (CBaseEntity *)pWeapon);
				CInvWpn *w = (CInvWpn *)pWeapon;
				w->m73c = idx;
				if (pWeapon->vfunc371()) {
					CInvWpn *p = (CInvWpn *)sub_1032d890(w->edict()->GetClassName(), pWeapon->vfunc296());
					if (!p || p == w) {
						w->m8d0 = 1;
						return;
					}
					p->m8d0++;
					sub_101cd940(pWeapon);
				}
				return;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103352b0 size=0x15e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "inputdata_t.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

extern CGlobalEntityList *g_10566458;

// TARGET: CBaseCombatCharacter::sub_103352b0
void CBaseCombatCharacter::sub_103352b0(inputdata_t &data)
{
	ScopeTrace t("CBaseCombatCharacter::InputInventory_Remove", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!data.value.Entity(&g_10566458))
		return;
	sub_10335470(data.value.Entity(&g_10566458));
}
// END FUNCTION

// FUNCTION: 0x10335470 size=0x266
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

int __fastcall sub_102517b0(void *pWeapon);
void __fastcall sub_1033d990(void *pThis);

// TARGET: CBaseCombatCharacter::sub_10335470
void CBaseCombatCharacter::sub_10335470(void *pEnt)
{
	int bFound;
	ScopeTrace trace("CBaseCombatCharacter::Inventory_Remove", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)pEnt;
	if (!pWeapon)
		return;
	int nType = pWeapon->sub_10255cf0();
	int idx = 0;
	bFound = 0;
	for (int i = 0; i < nType; i++)
		idx += vfunc298(i);
	int k = 0;
	for (; k < vfunc298(pWeapon->sub_10255cf0()); k++, idx++) {
		if (sub_1032e8b0(idx) == pWeapon) {
			*(int *)((char *)pWeapon + 0x73c) = 0xff;
			sub_1032e9f0(idx, 0);
			bFound = 1;
			break;
		}
	}
	while (k < vfunc298(pWeapon->sub_10255cf0()) - 1) {
		int j = idx + 1;
		if (!sub_1032e8b0(j))
			break;
		if (sub_1032e8b0(idx))
			sub_1032e8b0(idx);
		sub_1032e8b0(j);
		((CBaseEntity *)sub_1032e8b0(j))->sub_1009d1e0();
		sub_1032e9f0(idx, (CBaseEntity *)sub_1032e8b0(j));
		*(int *)((char *)sub_1032e8b0(idx) + 0x73c) = idx;
		k++;
		idx++;
	}
	if (bFound) {
		sub_1032e9f0(idx, 0);
		if (sub_1032e7b0() == pWeapon)
			*(int *)((char *)this + 0x19a4) = -1;
		else if (sub_10341510() == pWeapon)
			*(int *)((char *)this + 0x10dc) = -1;
		char *pInfo = (char *)sub_102517b0(pWeapon) + 0x5eb20;
		if (*(int *)(pInfo + 0x20)) {
			int i;
			for (i = 0; i < 0xe0; i++) {
				void *w = sub_1032e8b0(i);
				if (w) {
					char *pWInfo = (char *)sub_102517b0(w) + 0x5eb20;
					if (*(int *)(pWInfo + 0x20))
						break;
				}
			}
			if (i >= 0xe0)
				sub_1033d990(this);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10335780 size=0x16c
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

extern char g_106210d4[];

#define D(x) virtual void x();
#define T(p) D(p##0) D(p##1) D(p##2) D(p##3) D(p##4) D(p##5) D(p##6) D(p##7) D(p##8) D(p##9)
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)

struct CCharacterSlots298
{
	H(a0) H(b0)
	T(c0) T(c1) T(c2) T(c3) T(c4) T(c5) T(c6) T(c7) T(c8)
	D(d0) D(d1) D(d2) D(d3) D(d4) D(d5) D(d6) D(d7)
	virtual int slot298(int type);
};

struct CWeaponUnit
{
	int sub_10255cf0();	// stub 0x10001eab
};

void CBaseCombatCharacter::sub_10335780(CBaseEntity *pWeapon)
{
	ScopeTrace trace(g_106210d4, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pWeapon) {
		int nTypes = ((CWeaponUnit *)pWeapon)->sub_10255cf0();
		int slot = 0;
		for (int i = 0; i < nTypes; i++)
			slot += ((CCharacterSlots298 *)this)->slot298(i);
		if ((CBaseEntity *)sub_1032e8b0(slot) != pWeapon) {
			int found = 0;
			if (((CCharacterSlots298 *)this)->slot298(((CWeaponUnit *)pWeapon)->sub_10255cf0()) > 0) {
				do {
					if ((CBaseEntity *)sub_1032e8b0(slot) == pWeapon) {
						int cur = slot;
						for (int j = found; j > 0; j--) {
							int prev = cur - 1;
							sub_1032e9f0(cur, (CBaseEntity *)sub_1032e8b0(prev));
							*(int *)((char *)sub_1032e8b0(cur) + 0x73c) = cur;
							cur = prev;
						}
						*(int *)((char *)pWeapon + 0x73c) = cur;
						sub_1032e9f0(cur, pWeapon);
						break;
					}
					found++;
					slot++;
				} while (found < ((CCharacterSlots298 *)this)->slot298(((CWeaponUnit *)pWeapon)->sub_10255cf0()));
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10335950 size=0xd5
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_10621108[];
extern char g_106b8540[];
extern char g_105387dc[];
extern "C" int __cdecl _strcmpi(const char *, const char *);
void *CBaseCombatCharacter::sub_10335950(const char *pszClassname)
{
    const char *name;
    if (this)
        name = m_name26c ? m_name26c : g_106b8540;
    else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10621108;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    for (int i = 0; i < 0xe0; i++) {
        if (sub_1032e8b0(i)) {
            const char **pcn = &((CBaseEntity *)sub_1032e8b0(i))->m_classname11c;
            const char *cn = *pcn;
            if (!cn)
                cn = g_106b8540;
            if (_strcmpi(cn, pszClassname) == 0) {
                void *w = sub_1032e8b0(i);
                --*g_109f3680;
                return w;
            }
        }
    }
    --*g_109f3680;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10335a70 size=0xc7
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


class CUnknown1073a300
{
public:
	bool sub_101ed0f0(int a, int b);
};
extern CUnknown1073a300 g_1073a300;

// TARGET: CBaseCombatCharacter::sub_10335a70
bool CBaseCombatCharacter::sub_10335a70(CBaseEntity *pOther)
{
	ScopeTrace trace("CBaseCombatCharacter::Inventory_Can_Wield", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pOther)
	{
		int edictOther = pOther->m_pEdict2e0;
		int edictThis = m_pEdict2e0;
		int a = engine->vfunc35(edictThis);
		int b = engine->vfunc35(edictOther);
		return g_1073a300.sub_101ed0f0(a, b);
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10335b80 size=0x1d5
#include "CBaseCombatCharacter.h"
#include "CEntityVSlots.h"
#include "CGameRules.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern CGameRules *g_1070ba0c;

void CBaseCombatCharacter::sub_10335b80()
{
	ScopeTrace trace("CBaseCombatCharacter::Inventory_Wield_Update", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	EHANDLE &hPreferred = *(EHANDLE *)((char *)this + 0xea4);
	CBaseEntity *pBest;
	CBaseEntity *pPreferred;
	if (sub_1032e7b0()) {
		if (sub_10335a70((CBaseEntity *)sub_1032e7b0()))
			goto done;
		pPreferred = hPreferred.Get();
		if (pPreferred && sub_10335a70(pPreferred)) {
			((CEntityVSlots *)this)->slot388((int)pPreferred, 0);
			goto done;
		}
		((CEntityVSlots *)this)->slot388(0, 0);
		pBest = g_1070ba0c->vfunc20((CBaseEntity *)this, 0);
		((CEntityVSlots *)this)->slot388((int)pBest, 0);
	} else {
		pPreferred = hPreferred.Get();
		if (pPreferred && sub_10335a70(pPreferred)) {
			((CEntityVSlots *)this)->slot388((int)pPreferred, 0);
			if (sub_1032e7b0() == pPreferred)
				goto done;
		}
		pBest = g_1070ba0c->vfunc20((CBaseEntity *)this, 0);
		if (pBest) {
			((CEntityVSlots *)this)->slot388((int)pBest, 0);
		} else {
			pBest = (CBaseEntity *)sub_10335950("item_w_unarmed");
			if (pBest)
				((CEntityVSlots *)this)->slot388((int)pBest, 0);
		}
	}
done:
	if (!sub_10341510()) {
		CBaseEntity *pArmed = (*(EHANDLE *)((char *)this + 0x10e0)).Get();
		if (pArmed && sub_10335a70(pArmed))
			((CEntityVSlots *)this)->slot388((int)pArmed, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10335de0 size=0x8f
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

struct CWieldWeapon { void sub_102562b0(); };
struct CWieldManager { void sub_10207dd0(CBaseCombatCharacter *pChar, int a); };
extern CWieldManager g_1074f028;

void CBaseCombatCharacter::sub_10335de0(CBaseEntity *pWeapon)
{
	ScopeTrace trace("CBaseCombatCharacter::Inventory_Wield", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pWeapon) {
		((CWieldWeapon *)pWeapon)->sub_102562b0();
		g_1074f028.sub_10207dd0(this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10335ea0 size=0x8f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "CUnknown10207dd0.h"

extern CUnknown10207dd0 g_1074f028;
void __fastcall sub_1000c41e(CBaseEntity *pWeapon);	// stub 0x1000c41e for 0x10256300: lets the weapon update its owner's records

// TARGET: CBaseCombatCharacter::sub_10335ea0
void CBaseCombatCharacter::sub_10335ea0(CBaseEntity *pWeapon)
{
	ScopeTrace trace("CBaseCombatCharacter::Inventory_Unwield", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pWeapon)
	{
		sub_1000c41e(pWeapon);
		g_1074f028.sub_10207dd0(this, 0);
	}
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

// FUNCTION: 0x103360a0 size=0xa0
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_1062128c[];
extern char g_106b8540[];
extern char g_105387dc[];
bool CBaseCombatCharacter::sub_103360a0()
{
    const char *name;
    if (this)
        name = m_name26c ? m_name26c : g_106b8540;
    else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1062128c;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    for (int i = 0; i < 0xe0; i++) {
        if (sub_1032e8b0(i)) {
            --*g_109f3680;
            return false;
        }
    }
    --*g_109f3680;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10336170 size=0x1af
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "CUnknown1070b22c.h"
#include "ScopeTrace.h"

extern "C" __declspec(dllimport) void Msg(const char *pMsg, ...);
extern "C" int __cdecl sprintf(char *, const char *, ...);
extern CUnknown1070b22c *g_1070b22c;

static inline const char *GetClassname(const char *const *ppszClassname)
{
	return *ppszClassname ? *ppszClassname : g_106b8540;
}

struct CInvPlayerView
{
	char m_pad0000[0xa8];
	CBasePlayer *m_pPlayer;
	char m_pad00ac[0x2e0 - 0xac];
	int m_pEdict;

	int GetEdict() { return m_pEdict; }
};

void CBaseCombatCharacter::sub_10336170()
{
	CInvPlayerView *pView = (CInvPlayerView *)this;
	ScopeTrace trace("CBaseCombatCharacter::Inventory_Debug_Print", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char szBuf[128];
	Msg("Printing inventory for: %s\n", sub_1000b5cd());
	for (int i = 0; i < 0xe0; i++)
	{
		if (sub_1032e8b0(i))
		{
			sprintf(szBuf, "%d: (%d) %s\n", i, g_1070b22c->vfunc35(pView->GetEdict()), GetClassname(&((CBaseEntity *)sub_1032e8b0(i))->m_classname11c));
			Msg(szBuf);
		}
	}
	if (sub_1032e7b0())
	{
		sprintf(szBuf, "ActiveWeapon: %s\n", GetClassname(&((CBaseEntity *)sub_1032e7b0())->m_classname11c));
		Msg(szBuf);
	}
	if (sub_10341510())
	{
		sprintf(szBuf, "ActiveArmor: %s\n", GetClassname(&((CBaseEntity *)sub_10341510())->m_classname11c));
		Msg(szBuf);
	}
	if (pView->m_pPlayer)
	{
		CEntityVSlots *pHands = (CEntityVSlots *)pView->m_pPlayer->sub_1015d680(1);
		if (pHands)
		{
			int nTemp;
			sprintf(szBuf, "Hands: %s\n", *pHands->slot9(&nTemp));
			Msg(szBuf);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10336390 size=0x462
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "CItemGKeyring.h"
#include "FileSystemViews.h"
#include "ScopeTrace.h"
#include <string.h>

extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);

#define LOGF1(fmt) { Q_snprintf(szBuf, 0x80, fmt); g_1070b238->vfunc3(szBuf, strlen(szBuf), hFile); }
#define LOGF2(fmt, a) { Q_snprintf(szBuf, 0x80, fmt, a); g_1070b238->vfunc3(szBuf, strlen(szBuf), hFile); }
#define LOGF3(fmt, a, b) { Q_snprintf(szBuf, 0x80, fmt, a, b); g_1070b238->vfunc3(szBuf, strlen(szBuf), hFile); }
#define LOGF4(fmt, a, b, c) { Q_snprintf(szBuf, 0x80, fmt, a, b, c); g_1070b238->vfunc3(szBuf, strlen(szBuf), hFile); }

static inline const char *GetClassname(const char *const *ppszClassname)
{
	return *ppszClassname ? *ppszClassname : g_106b8540;
}

struct CInvPlayerView2
{
	char m_pad0000[0xa8];
	CBasePlayer *m_pPlayer;
};

struct CKeyringView
{
	char m_pad0000[0x914];
	char *m_pRecords;
	int m_n918;
	int m_n91c;
	int m_nCount;
};

void CBaseCombatCharacter::sub_10336390(int hFile)
{
	ScopeTrace trace("CBaseCombatCharacter::Inventory_Debug_Log", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char szBuf[128];
	if (!hFile)
		return;
	if (sub_1032e7b0())
		LOGF2("Active Weapon: %s\n", GetClassname(&((CBaseEntity *)sub_1032e7b0())->m_classname11c))
	else
		LOGF1("Active Weapon: NONE\n")
	if (sub_10341510())
		LOGF2("Active Armor: %s\n", GetClassname(&((CBaseEntity *)sub_10341510())->m_classname11c))
	else
		LOGF1("Active Armor: NONE\n")
	if (this && ((CInvPlayerView2 *)this)->m_pPlayer) {
		CBasePlayer *pPlayer = ((CInvPlayerView2 *)this)->m_pPlayer;
		CEntityVSlots *pVM = (CEntityVSlots *)pPlayer->sub_1015d680(0);
		if (pVM) {
			int nTemp;
			LOGF2("Viewmodel 0: %s\n", *pVM->slot9(&nTemp))
		}
		pVM = (CEntityVSlots *)pPlayer->sub_1015d680(1);
		if (pVM) {
			int nTemp;
			LOGF2("Viewmodel 1: %s\n", *pVM->slot9(&nTemp))
		}
	}
	LOGF1("Items: \n")
	for (int i = 0; i < 0xe0; i++) {
		if (sub_1032e8b0(i))
			LOGF3("%d: %s\n", i, GetClassname(&((CBaseEntity *)sub_1032e8b0(i))->m_classname11c))
	}
	CItemGKeyring *pKeyring = dynamic_cast<CItemGKeyring *>((CBaseCombatWeapon *)sub_10335950("item_g_keyring"));
	if (pKeyring) {
		LOGF1("Keyring: \n")
		CKeyringView *pView = (CKeyringView *)pKeyring;
		for (int j = 0; j < pView->m_nCount; j++)
			LOGF4("%d: (%-32s) %s\n", j, pView->m_pRecords + j * 0xc0, pView->m_pRecords + j * 0xc0 + 0x60)
	} else
		LOGF1("ERROR: invalid keyring!!\n")
}
// END FUNCTION

// FUNCTION: 0x10336920 size=0xe7
struct TraceEnt { const char *a; const char *b; const char *c; };
extern TraceEnt *g_109f3620;
extern int *g_109f3680;
extern char g_1062147c[];
extern char g_105387dc[];
extern char g_106b8540[];
extern unsigned char g_109f0b2a;
void sub_10012a8a();
int sub_10430923(void (*)());

struct Slot {
	int pad[4];
	int field10;
	void sub_10013ba6(int);
	int sub_10010609(int);
};
extern Slot g_109f0b40;

struct Ent {
	char pad[0x26c];
	const char *name;
	char pad2[0x13bc - 0x270];
	int count;
	Slot **slots;
	bool sub_10336920();
};

bool Ent::sub_10336920()
{
	const char *n;
	if (this != 0) {
		n = name;
		if (!n)
			n = g_106b8540;
	} else
		n = g_105387dc;
	g_109f3620[*g_109f3680].a = g_1062147c;
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	Slot *s;
	for (int i = 0; i < count; i++) {
		if (slots[i]->field10 == 0) {
			s = slots[i];
			goto call;
		}
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		g_109f0b40.sub_10013ba6(-1);
		sub_10430923(sub_10012a8a);
	}
	s = &g_109f0b40;
call:
	if (s->sub_10010609(11) == 1) {
		--*g_109f3680;
		return true;
	}
	--*g_109f3680;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10336a50 size=0xfc
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106214a0[];
extern char g_106b8540[];
extern char g_105387dc[];
extern int g_10619eb4[];
extern int g_10619d28[];
extern int g_10937cd0[];
#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
#define V64(a) V16(a##a) V16(a##b) V16(a##c) V16(a##d)
struct E298 {
    V64(p) V64(q) V64(r) V64(s) V16(u) V16(v) V4(x) V4(y)
    virtual void m0(); virtual void m1();
    virtual int f(int type);
};
// the header declares sub_10336a50 as int (vfunc307 is matched that way); the game returns a bool in al
struct BCCView : CBaseCombatCharacter { bool sub_10336a50(); };
bool BCCView::sub_10336a50()
{
    const char *name;
    if (this)
        name = m_name26c ? m_name26c : g_106b8540;
    else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106214a0;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int *p = g_10619eb4;
    for (int v = *p; v != -1; v = p[1], p++) {
        int type = g_10619d28[*p];
        if (type >= 0) {
            int i = g_10937cd0[*p];
            int end = ((E298 *)this)->f(type) + i;
            for (; i < end; i++) {
                if (sub_1032e8b0(i) && (((CBaseCombatWeapon *)sub_1032e8b0(i))->vfunc360() & 0x18000)) {
                    --*g_109f3680;
                    return true;
                }
            }
        }
    }
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10336b90 size=0xfa
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106214cc[];
extern char g_106b8540[];
extern char g_105387dc[];
extern int g_10619eb4[];
extern int g_10619d28[];
extern int g_10937cd0[];
#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
#define V64(a) V16(a##a) V16(a##b) V16(a##c) V16(a##d)
struct E298 {
    V64(p) V64(q) V64(r) V64(s) V16(u) V16(v) V4(x) V4(y)
    virtual void m0(); virtual void m1();
    virtual int f(int type);
};
bool CBaseCombatCharacter::sub_10336b90()
{
    const char *name;
    if (this)
        name = m_name26c ? m_name26c : g_106b8540;
    else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106214cc;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int *p = g_10619eb4;
    for (int v = *p; v != -1; v = p[1], p++) {
        int type = g_10619d28[*p];
        if (type >= 0) {
            int i = g_10937cd0[*p];
            int end = ((E298 *)this)->f(type) + i;
            for (; i < end; i++) {
                if (sub_1032e8b0(i) && (((CBaseCombatWeapon *)sub_1032e8b0(i))->vfunc360() & 0x6000)) {
                    --*g_109f3680;
                    return true;
                }
            }
        }
    }
    --*g_109f3680;
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

// FUNCTION: 0x10336f20 size=0x103
#include "CBaseCombatCharacter.h"
#include "CBCCSlotViews.h"

extern int *g_109f3680;
extern int *g_109f3620;
extern char g_106b8540[];
extern int g_10619eb4[];
extern int g_10619d28[];
extern int g_10937cd0[];

void *CBaseCombatCharacter::sub_10336f20()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680 * 3] = (int)"CBaseCombatCharacter::GetBestMeleeWeapon";
    g_109f3620[*g_109f3680 * 3 + 1] = (int)name;
    g_109f3620[*g_109f3680 * 3 + 2] = (int)g_106b8540;
    ++*g_109f3680;
    for (int *p = g_10619eb4; *p != -1; p++) {
        int slotType = g_10619d28[*p];
        if (slotType >= 0) {
            int i = g_10937cd0[*p];
            int last = ((CCombatCharSlotView *)this)->vfunc298(slotType) + i;
            for (; i < last; i++) {
                if (sub_1032e8b0(i)) {
                    if (((CWeaponSlotView *)sub_1032e8b0(i))->vfunc360() & 0x18000) {
                        void *w = sub_1032e8b0(i);
                        --*g_109f3680;
                        return w;
                    }
                }
            }
        }
    }
    --*g_109f3680;
    return 0;
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

// FUNCTION: 0x10337230 size=0x9b
#include "CBaseCombatCharacter.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

char CBaseCombatCharacter::sub_10337230()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::ChooseBestMeleeWeapon";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	void *weapon = sub_10336f20();
	if (weapon) {
		typedef void (CBaseCombatCharacter::*Fn)(void *, int);
		struct U { void **vt; };
		void **vt = *(void ***)this;
		union { void *p; Fn f; } u;
		u.p = vt[388];
		(this->*u.f)(weapon, 0);
		(*g_109f3680)--;
		return 1;
	}
	(*g_109f3680)--;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10337300 size=0xa1
#include "CBaseCombatCharacter.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CBCCSlots {
	S100(c0) S100(c1) S100(c2)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
	virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8();
	virtual void *Slot309();
	S10(e0) S10(e1) S10(e2) S10(e3) S10(e4) S10(e5) S10(e6)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
	virtual void f5(); virtual void f6(); virtual void f7();
	virtual void Slot388(void *weapon, int a);
};
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

char CBaseCombatCharacter::sub_10337300()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::ChooseBestRangedWeapon";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    void *weapon = ((CBCCSlots *)this)->Slot309();
    if (weapon) {
        ((CBCCSlots *)this)->Slot388(weapon, 0);
        (*g_109f3680)--;
        return 1;
    }
    (*g_109f3680)--;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103373e0 size=0x2fb
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CHL2_Player.h"
#include "CVStatList_t.h"
#include "CVStatInfoList_t.h"

// TARGET: CHL2_Player::sub_103373e0
void CHL2_Player::sub_103373e0()
{
	int n = ((CVStatInfoList_t *)CVStatListSet::Of(this)->Find(3)->m_field0c)->m_nStats;
	for (int i = 0; i < n; i++) {
		int v = CVStatListSet::Of(this)->Find(3)->sub_102012d0(i);
		if (v > 0)
			CVStatListSet::Of(this)->Find(3)->sub_10201100(i, v);
	}
	CVStatListSet::Of(this)->Find(0)->sub_102009b0(0xc);
	CVStatListSet::Of(this)->Find(0)->sub_102009b0(0xe);
	CVStatListSet::Of(this)->Find(0)->sub_102009b0(0xf);
	CVStatListSet::Of(this)->Find(0)->sub_102009b0(0x10);
}
// END FUNCTION

// FUNCTION: 0x103377a0 size=0x87
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
extern CStatDefault3List g_10738d10;
struct SD3X { int sub_101d4d80(); };
struct CBCCUnit : CBaseCombatCharacter {
    int sub_10337860();
    int sub_103377a0();
};

// TARGET: CBCCUnit::sub_103377a0
int CBCCUnit::sub_103377a0()
{
    ScopeTrace trace("CBaseCombatCharacter::Clan", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    return ((SD3X *)g_10738d10.sub_101d5e80(sub_10337860()))->sub_101d4d80();
}
// END FUNCTION

// FUNCTION: 0x10337860 size=0xde
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

int CBaseCombatCharacter::sub_10337860()
{
	ScopeTrace t("CBaseCombatCharacter::GetCharTemplate", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CVStatList_t *pList = CVStatListSet::Of(this)->Find(0);
	return pList->sub_10010609(10);
}
// END FUNCTION

// FUNCTION: 0x10337980 size=0xa7
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
struct CUnk1074f894 { void sub_1021e750(int a, CBaseEntity *p); void sub_1000b79e(int a, CBaseEntity *p); };
extern CUnk1074f894 g_1074f894;

void __fastcall sub_10337980(CBaseCombatCharacter *self, int, int idx)
{
	const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SetVHistory";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (self->m_field13a0 != -1)
		g_1074f894.sub_1000b79e(self->m_field13a0, self);
	self->m_field13a0 = idx;
	if (idx != -1)
		g_1074f894.sub_1021e750(idx, self);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10337a60 size=0x79
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106216b0[];
extern char g_105387dc[];
extern char g_106b8540[];
int CBaseCombatCharacter::sub_10337a60()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106216b0;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int v = m_field13a0;
    --*g_109f3680;
    return v;
}
// END FUNCTION

// FUNCTION: 0x10337b00 size=0x9d
#include "CBaseCombatCharacter.h"
#include "StatDefault.h"

struct StatOwner {
    int sub_1006cf30(const char *pszName);
    StatDefault *sub_1006cff0(int id);
};
extern StatOwner g_106c7c34;

int CBaseCombatCharacter::sub_10337b00(int a)
{
    int nValue = GetActiveStatList()->sub_10010609(0);
    int id = g_106c7c34.sub_1006cf30("Attribute_Order_Lookups");
    int index = a + nValue * 3;
    return g_106c7c34.sub_1006cff0(id)->sub_1006cb60(index);
}
// END FUNCTION

// FUNCTION: 0x10337bd0 size=0x9d
#include "CBaseCombatCharacter.h"
#include "StatDefault.h"

struct StatOwner {
    int sub_1006cf30(const char *pszName);
    StatDefault *sub_1006cff0(int id);
};
extern StatOwner g_106c7c34;

int CBaseCombatCharacter::sub_10337bd0(int a)
{
    int nValue = GetActiveStatList()->sub_10010609(0);
    int id = g_106c7c34.sub_1006cf30("Ability_Order_Lookups");
    int index = a + nValue * 3;
    return g_106c7c34.sub_1006cff0(id)->sub_1006cb60(index);
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

// FUNCTION: 0x10337e40 size=0xbe
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

char CBaseCombatCharacter::sub_10337e40()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IsKine";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (vfunc70()) {
		(*g_109f3680)--;
		return 0;
	}
	if (sub_10337f30()) {
		(*g_109f3680)--;
		return 0;
	}
	if (*(int *)((char *)this + 0xac)) {
		(*g_109f3680)--;
		return 0;
	}
	(*g_109f3680)--;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10337f30 size=0x86
#include "CBaseCombatCharacter.h"
#include "CStatDefault3List.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern CStatDefault3List g_10738d10;

char CBaseCombatCharacter::sub_10337f30()
{
	const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IsKindred";
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char r = *((char *)g_10738d10.sub_101d5e80(sub_10337860()) + 0x8c);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10337ff0 size=0xa2
#include "CBaseCombatCharacter.h"
#include "CStatDefault3List.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern CStatDefault3List g_10738d10;

char CBaseCombatCharacter::sub_10337ff0()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IsSupernatural";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (sub_10337f30()) {
		(*g_109f3680)--;
		return 1;
	}
	char result = g_10738d10.sub_101d5e80(sub_10337860())->m_8c[3];
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x103380d0 size=0x86
#include "CStatDefault3List.h"
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern CStatDefault3List g_10738d10;

char CBaseCombatCharacter::sub_103380d0()
{
	const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IsBossMonster";
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char r = *((char *)g_10738d10.sub_101d5e80(sub_10337860()) + 0x90);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10338190 size=0x213
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
#include "CUnknown10204e90.h"

extern void (__cdecl *g_109f3650)(int level, const char *fmt, ...);
int sub_10202780(int kind);

// TARGET: CBaseCombatCharacter::sub_10338190
bool CBaseCombatCharacter::sub_10338190(CUnknown10204e90 *pRef)
{
	ScopeTrace trace("CBaseCombatCharacter::VStatBuy", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3650(4, "VStatBuy: %s %d\n", pRef->sub_102043a0(), 1);
	int nCost = pRef->sub_10205100(this);
	if (nCost <= CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x22)) {
		int nIndex = pRef->m_nIndex;
		if (CVStatListSet::Of(this)->Find(sub_10202780(pRef->m_nKind))->sub_10200d60(nIndex)) {
			CVStatListSet::Of(this)->Find(0)->sub_10201100(0x22, nCost);
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10338440 size=0xf0
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

int sub_10202780(int a);

void CBaseCombatCharacter::sub_10338440(const int *pStat)
{
	ScopeTrace t("CBaseCombatCharacter::VStatGet", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int value = pStat[1];
	int id = sub_10202780(pStat[0]);
	CVStatList_t *pList = CVStatListSet::Of(this)->Find(id);
	pList->sub_10200d60(value);
}
// END FUNCTION

// FUNCTION: 0x10338570 size=0x1b1
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
#include "CUnknown10205030.h"
#include "CUnknown102043a0.h"
#include "CVStatList_t.h"
#include "ScopeTrace.h"
extern void (*g_109f3650)(int level, const char *fmt, ...);
int sub_10202780(int kind);

bool CBaseCombatCharacter::sub_10338570(const int *pStat)
{
	ScopeTrace trace("CBaseCombatCharacter::VStatSell", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3650(4, "VStatSell: %s %d\n", ((CUnknown102043a0 *)pStat)->sub_102043a0(), 1);
	int cost = ((CUnknown10205030 *)pStat)->sub_10205240(this);
	if (cost > 0) {
		int id = pStat[1];
		CVStatList_t *pList = CVStatListSet::Of(this)->Find(sub_10202780(pStat[0]));
		if (pList->sub_10200ea0(id)) {
			GetActiveStatList()->sub_10200fc0(0x22, cost);
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x103387a0 size=0xf9
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CVStatList_t.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "ScopeTrace.h"
void sub_100138c2(void *p, int a, int b);
void CBaseCombatCharacter::sub_103387a0(int value)
{
	ScopeTrace trace("CBaseCombatCharacter::AbilityBonus", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CVStatListSet::Of(this)->Find(1)->sub_10200d60(value);
	if (*(void **)((char *)this + 0xa8))
		sub_100138c2(*(void **)((char *)this + 0xa8), 0x19, 0);
}
// END FUNCTION

// FUNCTION: 0x103388e0 size=0x8
namespace lifted {
int __stdcall sub_100153a7(int);
}
int sub_103388e0()
{
    return lifted::sub_100153a7(0x40);
}
// END FUNCTION

// FUNCTION: 0x10338900 size=0xb
unsigned int __fastcall sub_1033c9c0(void *pThis);
unsigned char __fastcall sub_10338900(void *pThis)
{
    unsigned char b;
    b = (unsigned char)(sub_1033c9c0(pThis) >> 6);
    b &= 1;
    return b;
}
// END FUNCTION

// FUNCTION: 0x10338920 size=0x17
struct CUnk10338920 {
    void sub_1033c770(int a);
    void sub_101d7460(void *p);
    void sub_10338920();
};

extern CUnk10338920 g_10738cf0;

void CUnk10338920::sub_10338920()
{
    sub_1033c770(0x40);
    g_10738cf0.sub_101d7460(this);
}
// END FUNCTION

// FUNCTION: 0x10338950 size=0x150
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
char CBaseCombatCharacter::sub_10338950()
{
	ScopeTrace trace("CBaseCombatCharacter::IsBloodPoolFull", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int nMax = GetActiveStatList()->sub_10200b10(0xc);
	if (nMax == GetActiveStatList()->sub_10010609(0xc))
		return 1;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10338b00 size=0x141
#include "CBaseCombatCharacter.h"
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
void CBaseCombatCharacter::sub_10338b00()
{
	ScopeTrace trace("CBaseCombatCharacter::FillBloodPool", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CVStatListSet::Of(this)->Find(0)->sub_10200be0(0xc, CVStatListSet::Of(this)->Find(0)->sub_10200b10(0xc));
}
// END FUNCTION

// FUNCTION: 0x10338cb0 size=0xf1
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

extern "C" int __cdecl atexit(void (__cdecl *)(void));
void __cdecl sub_10012a8a();	// the game's destructor stub of the shared default stat list
extern unsigned char g_109f0b2a;	// its guard byte
extern CVStatList_t g_109f0b40;	// the shared default stat list

inline void *operator new(unsigned int, void *p) { return p; }

// The game's inlined GetActiveStatList with its function-local static spelled out.
static inline CVStatList_t *ActiveStatList(CBaseCombatCharacter *pChar)
{
	for (int i = 0; i < pChar->m_nStatLists; i++) {
		if (pChar->m_pStatLists[i]->m_field10 == 0)
			return pChar->m_pStatLists[i];
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		new (&g_109f0b40) CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}

char CBaseCombatCharacter::sub_10338cb0()
{
	ScopeTrace trace("CBaseCombatCharacter::IncBloodPool", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char bResult = ActiveStatList(this)->sub_10200d60(0xc);
	vfunc111();
	return bResult;
}
// END FUNCTION

// FUNCTION: 0x10338df0 size=0x3c9
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
#include "CVStatList_t.h"
#include "CStatDefault3List.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"

extern CStatDefault3List g_10738d10;

bool CBaseCombatCharacter::sub_10338df0(char bAll)
{
	ScopeTrace trace("CBaseCombatCharacter::DecBloodPool", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (CVStatListSet::Of(this)->Find(0)->sub_10200ea0(0xc)) {
		vfunc111();
		int cur = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);
		int mx = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x11);
		int blood = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xc);
		StatDefault3 *pDef = g_10738d10.sub_101d5f10(this);
		int div = pDef->m_d0[0][12];
		int thr = (int)((float)(mx / div) * (div - blood));
		if (cur < thr) {
			CVStatListSet::Of(this)->Find(0)->sub_102008e0(0xf, thr);
			m_iHealth = c348();
		}
		if (bAll) {
			if (!CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xc)) {
				if (sub_10337e40()) {
					CBaseEntity *pTarget = 0;
					if (m_pNPC98)
						pTarget = (CBaseEntity *)g_10566458->sub_100290c0((const unsigned int *)((char *)m_pNPC98 + 0x628c));
					sub_103392c0(pTarget, 0, 0);
					return true;
				}
				sub_103394a0(0, 0, 0);
			}
		}
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x103392c0 size=0x17f
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
#include "CVDmg_t.h"
#include "CUnknown101c26d0.h"
#include "CUnknown101c2a90.h"
#include "ScopeTrace.h"

#define TV(n) virtual void v##n();
#define TV10(p) TV(p##0) TV(p##1) TV(p##2) TV(p##3) TV(p##4) TV(p##5) TV(p##6) TV(p##7) TV(p##8) TV(p##9)

struct SCharSlots
{
	TV10(0) TV10(1) TV10(2) TV10(3) TV10(4) TV10(5) TV10(6) TV10(7) TV10(8) TV10(9) TV10(10) TV10(11) TV10(12) TV10(13)
	TV(140) TV(141) TV(142) TV(143)
	virtual void vfunc144(void *pInfo);
	TV(145) TV(146) TV(147) TV(148) TV(149)
	TV10(15) TV10(16) TV10(17) TV10(18) TV10(19) TV10(20) TV10(21) TV10(22) TV10(23) TV10(24) TV10(25) TV10(26) TV10(27) TV10(28) TV10(29)
	TV10(30) TV10(31) TV10(32) TV10(33) TV10(34) TV10(35) TV10(36) TV10(37) TV10(38) TV10(39)
	TV(400) TV(401) TV(402)
	virtual void vfunc403();
};

void CBaseCombatCharacter::sub_103392c0(CBaseEntity *pInflictor, int a, int b)
{
	ScopeTrace trace("CBaseCombatCharacter::Die", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_field200 != 2) {
		CVDmg_t dmg;
		dmg.sub_101fa960((CVDmgSource_t *)this);
		dmg.m_field04 = 1;
		dmg.m_field0c = 1;
		CUnknown101c26d0 info;
		info.sub_101c26d0(0, pInflictor, 1.0f, 0, 0, (int)&dmg, -1);
		((CUnknown101c2a90 *)&info)->sub_101c2a90(a);
		((CUnknown101c2a90 *)&info)->sub_101c2ad0(b);
		CVStatListSet::Of(this)->Find(0)->sub_10200a70(0xf, 0x11);
		((SCharSlots *)this)->vfunc144(&info);
		((SCharSlots *)this)->vfunc403();
		dmg.sub_101fa680();
	}
}
// END FUNCTION

// FUNCTION: 0x103394a0 size=0x8d
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_103394a0(char begin, int a, int b)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::TorporBegin";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (begin)
		sub_103392c0(0, a, b);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10339560 size=0x6f
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106219d8[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::sub_10339560()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106219d8;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103395f0 size=0x199
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
#include "CVStatList_t.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

bool CBaseCombatCharacter::sub_103395f0()
{
	ScopeTrace trace("CBaseCombatCharacter::CanFeed", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (sub_10337f30()) {
		if (!m_h149c.Get() || (CVStatListSet::Of(m_h149c.Get())->Find(0)->sub_102012d0(0xc) && ((CEntityVSlots *)m_h149c.Get())->slot158()))
			return true;
	}
	return false;
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

// FUNCTION: 0x10339930 size=0x106
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
#include "CAI_BaseNPC.h"

__declspec(dllimport) void __cdecl DevMsg(const char *pszFormat, ...);

struct CStatRecord
{
	char m_pad0000[0x96];
	char m_bResistsFeeding;	// 0x96
};

struct CStatRecordMgr
{
	CStatRecord *sub_10207c40(CBaseCombatCharacter *pChar);	// stub 0x10001de8
};
extern CStatRecordMgr g_1074f028;

class CDevConVar
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();	// the convar is unset
	char m_pad0004[0x28];
	int m_n2c;
};
extern CDevConVar *g_1074f04c;

char CBaseCombatCharacter::sub_10339930()
{
	ScopeTrace trace("CBaseCombatCharacter::ResistsFeeding", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!g_1074f028.sub_10207c40(this)->m_bResistsFeeding) {
		if (!sub_1033c900(0x40000)) {
			CAI_BaseNPC *pNPC = *(CAI_BaseNPC **)((char *)this + 0x98);
			if (pNPC) {
				if (pNPC->vfunc464() == 2) {
					int pTarget = pNPC->vfunc167();
					if (pTarget && *(int *)(pTarget + 0xa8))
						return 1;
				}
			}
			if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
				DevMsg("Suppressing feed resist since NPC is not in combat with the player!\n");
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10339a90 size=0x8f
#include "CBaseCombatCharacter.h"
#include "StatDefault3.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CStatLookup {
	StatDefault3 *sub_10207c40(CBaseCombatCharacter *pChar);
};
extern CStatLookup g_1074f028;

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

bool CBaseCombatCharacter::sub_10339a90()
{
	CScopeTrace trace("CBaseCombatCharacter::CanBeFedUpon", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	if (!g_1074f028.sub_10207c40(this)->m_8c[9])
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10339b50 size=0x81
#include "CBaseCombatCharacter.h"

struct StatRecord {
	char pad[0x93];
	char flag93;
};
struct StatDB {
	StatRecord *sub_10207c40(CBaseEntity *pEnt);
};
extern StatDB g_1074f028;

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

char CBaseCombatCharacter::sub_10339b50()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IsBlueBlood";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char result = g_1074f028.sub_10207c40(this)->flag93;
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10339c10 size=0x81
#include "CBaseCombatCharacter.h"

struct StatRecord {
	char pad[0x94];
	char flag94;
};
struct StatDB {
	StatRecord *sub_10207c40(CBaseEntity *pEnt);
};
extern StatDB g_1074f028;

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

char CBaseCombatCharacter::sub_10339c10()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasBadBlood";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char result = g_1074f028.sub_10207c40(this)->flag94;
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10339cd0 size=0x81
#include "CBaseCombatCharacter.h"

struct StatRecord {
	char pad[0x93];
	char flag93;
};
struct StatDB {
	StatRecord *sub_10207c40(CBaseEntity *pEnt);
};
extern StatDB g_1074f028;

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

char CBaseCombatCharacter::sub_10339cd0()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::FeedsOnBlueBloodsOnly";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char result = g_1074f028.sub_10207c40(this)->flag93;
	(*g_109f3680)--;
	return result;
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

// FUNCTION: 0x1033a9e0 size=0x5af
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include <stdio.h>
#include <stdlib.h>
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }
struct CFoo1005f190 { int sub_1005f190(); };
extern CFoo1005f190 g_10937030;
void sub_10265680(int);
char sub_10265800();
CBaseEntity *sub_1023bd00();
const char *sub_101d3730(const char *fmt, ...);
struct CFeedFwd { void sub_10293e20(float); };
struct CFeedA8 { void sub_1017e150(int, float, const char *); };

#include "ehandle.h"
extern CUtlVector<EHANDLE> g_109370bc;
extern char g_1061f05c[];
namespace block_1033a9e0 {
// 0x103234a0 "CBaseCombatCharacter::RemoveFromPresenceList", the unit's first function that declines the header
// inline LookupEntity (its FindAndRemove), so the COMDAT is compiled before the target
void __fastcall sub_103234a0(CBaseCombatCharacter *pThis)
{
	ScopeTrace trace(g_1061f05c, pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
	EHANDLE h = pThis;
	g_109370bc.FindAndRemove(h);
}
}

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CFeedNpc
{
	V100(a) V100(b) V100(c) V100(d)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3();
	virtual int slot404(void *pOther);
	V100(f) V100(g) virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8();
	virtual void slot614();
	char m_pad[0x1b30 - 4];
	const char *m_pszFile1b30;
	int m_nLine1b34;
	void sub_102ae750(int a, int b);
};
struct CFeedChar : CBaseCombatCharacter
{
	char sub_10337f30();
	void sub_103394a0(int a, bool b, bool c);
	void sub_103392c0(CBaseCombatCharacter *p, bool b, bool c);
	CBaseCombatCharacter *GetGrappleTarget() { return m_nTarget153c != -1 ? (CBaseCombatCharacter *)m_hTarget1538.Get() : 0; }
	int GetGrappleType() { return (m_hTarget1538.Get() && m_nTarget153c != -1) ? m_nTargetMode1540 : -1; }
};

extern CVStatList_t g_109f0b40;
void __cdecl sub_10012a8a();
inline CVStatList_t *FindStatList(CVStatListSet *pSet, int type)
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
inline bool ModeIs(CBaseEntity *p, int m) { return *(int *)((char *)p + 0x49c) == m; }
struct CFeedSelf : CBaseCombatCharacter { void sub_1033a9e0(); };

// TARGET: CFeedSelf::sub_1033a9e0
void CFeedSelf::sub_1033a9e0()
{
	ScopeTrace trace("CBaseCombatCharacter::FeedInterrupt", this ? STRINGR_F(m_name26c) : g_105387dc);
	if (g_10937030.sub_1005f190()) {
		char buf[256];
		sprintf(buf, "%s FeedInterrupt with %s", (const char *)sub_100ab4f0(), m_h149c.Get() ? (const char *)((CBaseCombatCharacter *)m_h149c.Get())->sub_100ab4f0() : "**NULL**");
		sub_103221b0(buf);
	}
	if (m_b14a9)
		return;
	m_b14a9 = 1;
	m_b14a8 = 0;
	m_bCantBreakGrapple = 0;
	m_bIsFrenzyGrapple = 0;
	m_flBreakGrappleTimer = 0;
	EHANDLE *pFeed = &m_h149c;
	if (pFeed->Get()) {
		CFeedChar *self = (CFeedChar *)this;
		if (self->GetGrappleType() != 8) {
			sub_1033b100(7);
			sub_1033b100(3);
			if (FindStatList(CVStatListSet::Of(pFeed->Get()), 0)->sub_102012d0(0xc) > 0) {
				CFeedNpc *pNpc = (CFeedNpc *)pFeed->Get()->m_pNPC98;
				if (pNpc && pNpc->slot404(this) != 1) {
					pNpc->slot614();
					pNpc->m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\BaseCombatCharacter.cpp";
					pNpc->m_nLine1b34 = 0x24c6;
					pNpc->sub_102ae750(0xfb, 0);
				}
			} else {
				bool a = false;
				bool b = false;
				CBaseEntity *pPl = sub_1023bd00();
				if (pPl && *(int *)((char *)pPl + 0x49c) == 2 && self->GetGrappleType() == 2) {
					a = true;
					b = true;
				}
				if (((CFeedChar *)pFeed->Get())->sub_10337f30())
					((CFeedChar *)pFeed->Get())->sub_103394a0(1, a, b);
				else
					((CFeedChar *)pFeed->Get())->sub_103392c0(this, a, b);
			}
			sub_1033b100(3);
			((CBaseCombatCharacter *)pFeed->Get())->sub_1033b100(9);
			((CBaseCombatCharacter *)pFeed->Get())->sub_1033b100(5);
			((CBaseCombatCharacter *)pFeed->Get())->sub_1033b100(1);
		}
		((CBaseCombatCharacter *)pFeed->Get())->c355();
		*pFeed = 0;
		if (m_pA8 && !sub_10265800())
			sub_10265680(1);
	} else {
		CFeedChar *self = (CFeedChar *)this;
		if (self->GetGrappleTarget() && self->GetGrappleType() != 8 && self->GetGrappleType() != 2) {
			CFeedA8 *pA8 = *(CFeedA8 **)((char *)this + 0xa8);
			if (pA8) {
				CFeedFwd *pF = *(CFeedFwd **)((char *)self->GetGrappleTarget() + 0x98);
				if (pF)
					pF->sub_10293e20(3.0f);
				pA8->sub_1017e150(1, 2.0f, sub_101d3730("FeedInterrupt %s", self->GetGrappleTarget()->sub_100ab4f0()));
			}
		}
	}
	m_flFeedInterval1494 = 0;
	m_b14a9 = 0;
}
// END FUNCTION

// FUNCTION: 0x1033b100 size=0x328
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CDevFlagObj.h"
#include "CUnknown1073dc28.h"
#include "engineiface.h"
#include "engineserver.h"
#include "CVSoundActivityTable_t.h"

#define V4(n) virtual void n##a(); virtual void n##b(); virtual void n##c(); virtual void n##d();
#define V16(n) V4(n##a) V4(n##b) V4(n##c) V4(n##d)
struct GrappleObj { V16(a) V16(b) V16(c) V16(d) V16(e) V16(f) V16(g) V16(h) V16(i) V16(j) V16(k) V16(l) V16(m) V4(o) V4(p) V4(q) virtual int *vfunc220(); };

struct ByteBox { char c; };
struct Box4 { char c; char pad[3]; };
union UBox { char c; int i; };
extern CDevFlagObj *g_10937034;
extern CUnknown1073dc28 g_1073dc28;
extern int g_1072bc38;
extern ByteBox g_1072bcae;
void sub_101bac90(int type, int *origin, int vol, float dur, int flag, CBaseEntity *pEnt);
extern "C" int sprintf(char *, const char *, ...);
extern "C" int _strcmpi(const char *, const char *);
__declspec(dllimport) void DevMsg(const char *, ...);

static inline int FindGrappleId(const char *name)
{
	for (int i = 0; i < g_1073dc28.m_nRecords; i++) {
		if (!_strcmpi(g_1073dc28.m_ppRecords[i]->m_Name.Get(), name))
			return g_1073dc28.m_ppRecords[i]->m_nId;
	}
	return -1;
}

void CBaseCombatCharacter::sub_1033b100(int cmd)
{
	ScopeTrace t("CBaseCombatCharacter::GrappleSoundCmd", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!g_10937034->vfunc1() && g_10937034->m_n2c) {
		char buf[256];
		sprintf(buf, "%s GrappleSoundCmd %d", sub_100ab4f0(), cmd);
		sub_103221b0(buf);
	}
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	bool bLoop = true;
	const char *name = 0;
	switch (cmd) {
	case 8: {
		int edict = m_pEdict2e0;
		enginesound->vfunc3(&filter, engine->vfunc35(edict), 0, "Interface/heartbeat_loop.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		break;
	}
	case 9: {
		int edict = m_pEdict2e0;
		enginesound->vfunc7(engine->vfunc35(edict), 0, "Interface/heartbeat_loop.wav");
		break;
	}
	case 4:
	case 5:
		bLoop = cmd == 4;
		name = "Fed_Upon_Loop";
		break;
	case 6:
	case 7:
		bLoop = cmd == 6;
		name = "Feed_On_Loop";
		break;
	case 0: {
		name = "Fed_Upon_Start";
		GrappleObj *pObj = (GrappleObj *)m_pNPC98;
		if (pObj) {
			int vol = g_1072bc38;
			int flag;
			*(char *)&flag = g_1072bcae.c;
			sub_101bac90(8, pObj->vfunc220(), vol, 0.2f, flag, (CBaseEntity *)pObj);
		}
		break;
	}
	case 1: name = "Fed_Upon_End"; break;
	case 2: name = "Feed_On_Start"; break;
	case 3: name = "Feed_On_End"; break;
	default:
		DevMsg("Unrecognized grapple sound!\n");
		break;
	}
	if (name) {
		int id = FindGrappleId(name);
		if (bLoop)
			((CVActivitySound *)&g_1073dc28)->sub_101f5950((int)this, id, 2, 1.0f, 1.25f);
		else
			((CVActivitySound *)&g_1073dc28)->sub_101f5b60((int)this, id, 2);
	}

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

// FUNCTION: 0x1033b7c0 size=0x94
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool CBaseCombatCharacter::sub_1033b7c0()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InPrayer";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int state = *(int *)((char *)this + 0xfec);
	bool result;
	if (state >= 0x130 && state <= 0x133)
		result = true;
	else
		result = false;
	(*g_109f3680)--;
	return result;
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

// FUNCTION: 0x1033b980 size=0x17c
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

extern float g_104454c0;
extern float g_104454c4;
extern float g_104454d0;

struct CUnknown1033b980 : CBaseCombatCharacter {
	float sub_1033b980();
};

float CUnknown1033b980::sub_1033b980()
{
	ScopeTrace trace("CBaseCombatCharacter::BloodHealDelay", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int a = CVStatListSet::Of(this)->Find(0)->sub_10010609(0xf);
	if ((int)a > 0) {
		long b = CVStatListSet::Of(this)->Find(0)->sub_10010609(0x10);
		return a > b ? g_104454d0 : g_104454c0;
	}
	return g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x1033bb60 size=0x21c
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
#include "CEventQueue.h"
#include "CVStatList_t.h"
#include "CDisciplineParticle.h"
#include "CList_t.h"
#include "Vector.h"

struct CUnknown1033b980
{
	float sub_1033b980();
};

struct CBloodHealColor
{
	unsigned char r, g, b, a;
};

struct CBloodHealVec3
{
	float x, y, z;
};

struct CBloodHealVariant
{
	union
	{
		bool bVal;
		const char *iszVal;
		int iVal;
		float flVal;
		CBloodHealVec3 vecVal;
		CBloodHealColor rgbaVal;
	};
	unsigned int m_hEntity;
	int m_fieldType;

	CBloodHealVariant() { iVal = 0; m_hEntity = 0xffffffff; m_fieldType = 0; }
	CBloodHealVariant(const CBloodHealVariant &o)
	{
		bVal = o.bVal;
		iszVal = o.iszVal;
		iVal = o.iVal;
		flVal = o.flVal;
		vecVal = o.vecVal;
		rgbaVal = o.rgbaVal;
		m_hEntity = o.m_hEntity;
		m_fieldType = o.m_fieldType;
	}
	int Int() const { return (m_fieldType == 4) ? iVal : 0; }
	void SetInt(int val) { iVal = val; m_fieldType = 4; }
};

struct CEventQueueUnit : CEventQueue
{
	void sub_100ce5c0(CBloodHealVariant *pOut);
	bool sub_100ce710(CBloodHealVariant v);
};

extern CEventQueue g_106e7050;

// TARGET: CBaseCombatCharacter::sub_1033bb60
void CBaseCombatCharacter::sub_1033bb60()
{
	ScopeTrace trace("CBaseCombatCharacter::BloodHealBegin", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (CVStatListSet::Of(this)->Find(2)->sub_102012d0(2) > 0)
	{
		CDisciplineParticle::sub_10050d90((int)this, 2, 0x3f800000, 0x3f800000, 0x3f800000, (int)"D_BloodHealing_Emitter", 2, (int)"Bip01 Spine2", 0, 0);
		float f = ((CUnknown1033b980 *)this)->sub_1033b980();
		if (f > 0.0f)
		{
			if (!((CList_t *)&g_106e7050)->sub_100ce3c0((int)this, (int)"BloodHeal"))
			{
				CVariantCopy v;
				v.SetInt(1);
				g_106e7050.sub_100cdf10(this, "BloodHeal", v, f, this, this, 0, CEQExtra());
			}
			else
			{
				CBloodHealVariant v;
				((CEventQueueUnit *)&g_106e7050)->sub_100ce5c0(&v);
				v.SetInt(v.Int() + 1);
				((CEventQueueUnit *)&g_106e7050)->sub_100ce710(v);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1033be10 size=0xf5
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "inputdata_t.h"
#include "CEventQueue.h"
extern char g_106b8540[];
struct CUnknown1033b980
{
	float sub_1033b980();
};
extern CEventQueue g_106e7050;

void CBaseCombatCharacter::sub_1033be10(inputdata_t &data)
{
	ScopeTrace trace("CBaseCombatCharacter::BloodHealIn", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (data.value.fieldType == 4) {
		int n = data.value.iValue;
		if (n > 0) {
			sub_1033bf50(1);
			if (n > 1) {
				float f = ((CUnknown1033b980 *)this)->sub_1033b980();
				if (f > 0.0f) {
					CVariantCopy v;
					v.SetInt(n - 1);
					g_106e7050.sub_100cdf10(this, "BloodHeal", v, f, this, this, 0, CEQExtra());
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1033bf50 size=0x31c
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
#include "CVStatList_t.h"

void CBaseCombatCharacter::sub_1033bf50(int nAmount)
{
	ScopeTrace trace("CBaseCombatCharacter::BloodHeal", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (CVStatListSet::Of(this)->Find(2)->sub_102012d0(2) > 0 && nAmount > 0) {
		int n = nAmount;
		do {
			int nBlood = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);
			if (nBlood > 0) {
				if (nBlood < CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x11)) {
					int nCost = (nBlood <= CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x10)) + 1;
					if (nCost <= CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xc)) {
						CVStatListSet::Of(this)->Find(0)->sub_10201100(0xc, nCost);
						sub_1033c340(nAmount);
					}
				}
			}
		} while (--n);
	}
}
// END FUNCTION

// FUNCTION: 0x1033c340 size=0x2b1
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

// TARGET: CBaseCombatCharacter::sub_1033c340
void CBaseCombatCharacter::sub_1033c340(int nCount)
{
	ScopeTrace trace("CBaseCombatCharacter::HealthHeal", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	for (; nCount > 0; nCount--) {
		int nCur = GetActiveStatList()->sub_102012d0(0xf);
		if (nCur > 0) {
			int nMax = GetActiveStatList()->sub_102012d0(0x11);
			if (nCur < nMax) {
				int nBlood = GetActiveStatList()->sub_102012d0(0x10);
				int nFull = nCur <= nBlood;
				GetActiveStatList()->sub_10201100(0xf, 1);
				GetActiveStatList()->sub_10201100(0x10, nFull);
				m_iHealth = c348();
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1033c6b0 size=0x86
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_1033c6b0(unsigned int flags)
{
    const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::AddMiscFlag";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    *(unsigned int *)((char *)this + 0xfe4) |= flags;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033c770 size=0x88
#include "CBaseCombatCharacter.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CBaseCombatCharacter::sub_1033c770(unsigned int flags)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::RemoveMiscFlag";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	*(unsigned int *)((char *)this + 0xfe4) &= ~flags;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033c830 size=0x9e
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_1033c830(unsigned int flags)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::ToggleMiscFlag";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	unsigned int *pMisc = (unsigned int *)((char *)this + 0xfe4);
	unsigned int cur = *pMisc;
	if (flags & cur)
		*pMisc = ~flags & cur;
	else
		*pMisc = cur | flags;
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1033c900 size=0x87
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool CBaseCombatCharacter::sub_1033c900(unsigned int flags)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasMiscFlag";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	unsigned int cur = *(unsigned int *)((char *)this + 0xfe4);
	bool result = (flags & cur) != 0;
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x1033c9c0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_1033c9c0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetMiscFlags";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0xfe4);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1033ca60 size=0x7c
#include "CBaseCombatCharacter.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_1033ca60()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseCombatCharacter::ClearMiscFlags";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0xfe4) = 0;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1033cb00 size=0x34
extern const char *g_10619ec8[];
int _strcmpi(const char *a, const char *b);

// TARGET: sub_1033cb00
int sub_1033cb00(const char *pszName)
{
    int i = 0;
    do {
        if (_strcmpi(g_10619ec8[i], pszName) == 0)
            return 1 << i;
        i++;
    } while (i < 0x16);
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1033cb50 size=0x28
extern char *g_10619ec8[];
extern char g_105a695c[];

// TARGET: sub_1033cb50
char *sub_1033cb50(int nBits)
{
    if (nBits != 0) {
        int nIndex = 0;
        if ((nBits & 1) == 0) {
            do {
                nBits >>= 1;
                nIndex++;
            } while ((nBits & 1) == 0);
            if (nIndex >= 0x16)
                return g_105a695c;
        }
        return g_10619ec8[nIndex];
    }
    return g_105a695c;
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

void CBaseCombatCharacter::vfunc338(int a, char b, int c)
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

void CBaseCombatCharacter::vfunc339(int a, float b, int c)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::AddDisciplineEffect";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033ce10 size=0xaa
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool CBaseCombatCharacter::sub_1033ce10(unsigned int low, unsigned int high)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::HasDisciplineEffects";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	unsigned int *pEffects = (unsigned int *)((char *)this + 0xeb0);
	if ((low & pEffects[0]) == 0 && (pEffects[1] & high & 0x7fffffff) == 0)
	{
		--*g_109f3680;
		return false;
	}
	--*g_109f3680;
	return true;
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

// FUNCTION: 0x1033cfb0 size=0x176
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "ScopeTrace.h"
#include "CUtlMemory16.h"
#include "CUtlVector16.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct CDiscTable
{
	int sub_101e1720(unsigned int flag);
	int sub_101e1770(unsigned int flag);
};
struct CGlobalVarsLite { char pad[0xc]; float curtime; };
struct DiscRec
{
	unsigned int flag; int handle; unsigned int extra; int src;
	DiscRec() {}
	DiscRec(unsigned int f, int h, unsigned int e, int s) : flag(f), handle(h), extra(e), src(s) {}
};
extern CDiscTable g_10739a4c;
extern CGlobalVarsLite *g_1070b228;
void __fastcall sub_1034a1a0(CUtlMemory16 *p, int a, int b);
void *memmove(void *, const void *, unsigned int);
inline void *operator new(unsigned int, void *p) { return p; }

struct CDiscVec : CUtlVector16
{
	DiscRec &Element(int i) { return ((DiscRec *)m_pMemory)[i]; }
	void GrowVector()
	{
		if (m_size + 1 > m_allocationCount)
			sub_1034a1a0((CUtlMemory16 *)this, m_size + 1 - m_allocationCount, m_size + 1 - m_allocationCount);
		m_size++;
		m_pElements = m_pMemory;
	}
	void ShiftElementsRight(int elem)
	{
		int numToMove = m_size - elem - 1;
		if (numToMove > 0)
			memmove(&Element(elem + 1), &Element(elem), numToMove * sizeof(DiscRec));
	}
	int AddToTail(unsigned int flag, int handle, unsigned int extra, int src)
	{
		int elem = m_size;
		GrowVector();
		ShiftElementsRight(elem);
		new (&Element(elem)) DiscRec(flag, handle, extra, src);
		return elem;
	}
};

void CBaseCombatCharacter::sub_1033cfb0(unsigned int flag, float duration, CBaseEntity *pSource, unsigned int extra)
{
	ScopeTrace trace("CBaseCombatCharacter::AddDiscFlag", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	unsigned int *mask;
	unsigned int bits;
	if (!(flag & 0x80000000)) {
		mask = (unsigned int *)((char *)this + 0xeb0);
		bits = flag;
	} else {
		mask = (unsigned int *)((char *)this + 0xeb4);
		bits = *(volatile unsigned int *)&flag & 0x7fffffff;
	}
	if (bits & *mask)
		return;
	*mask |= flag;
	g_10739a4c.sub_101e1720(flag);
	int index = g_10739a4c.sub_101e1770(flag);
	*(float *)((char *)this + index * 4 + 0xec0) = duration + g_1070b228->curtime;
	DiscRec rec;
	rec.flag = flag;
	if (pSource)
		rec.handle = *(int *)pSource->vfunc1();
	else
		rec.handle = -1;
	rec.extra = extra;
	rec.src = *(int *)((char *)pSource + 0xfb0);
	((CDiscVec *)((char *)this + 0xfb4))->AddToTail(rec.flag, rec.handle, rec.extra, rec.src);
}
// END FUNCTION

// FUNCTION: 0x1033d190 size=0x109
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include "utlvector.h"

struct CBaseCombatCharacter_DiscRecord	// 16 bytes: the records of the discipline effect vector at +0xfb4 (AddDiscFlag)
{
	unsigned int m_nFlag;
	int m_hSource;
	unsigned int m_nExtra;
	int m_nSource;
};

struct CDiscListView
{
	unsigned int *m_pRecords;
	int m_nAlloc;
	int m_nGrow;
	int m_nCount;
};

void CBaseCombatCharacter::sub_1033d190(int flagArg)
{
	unsigned int flag = (unsigned int)flagArg;
	ScopeTrace trace("CBaseCombatCharacter::RemoveDiscFlag", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!(flag & 0x80000000))
		*(unsigned int *)((char *)this + 0xeb0) &= ~flag;
	else
		*(unsigned int *)((char *)this + 0xeb4) &= ~(flag & 0x7fffffff);
	CDiscListView *pList = (CDiscListView *)((char *)this + 0xfb4);
	for (int i = 0; i < pList->m_nCount; i++)
	{
		if (pList->m_pRecords[i * 4] == flag)
		{
			((CUtlVector<CBaseCombatCharacter_DiscRecord> *)((char *)this + 0xfb4))->Remove(i);
			return;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1033d2f0 size=0x2a
#include "CUnknown1033d2f0.h"

bool CUnknown1033d2f0::sub_1033d2f0(int nFlags)
{
    int mask;
    bool r;
    if (!(nFlags & 0x80000000)) {
        mask = m_nMaskPos;
    } else {
        nFlags &= 0x7fffffff;
        mask = m_nMaskNeg;
    }
    r = (nFlags & mask) != 0;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1033d330 size=0x3d
struct CUnk1033d330 {
	char m_pad0000[0xeb0];
	unsigned int m_n0eb0;
	unsigned int m_n0eb4;
	unsigned int m_n0eb8;
	unsigned int m_n0ebc;

	char sub_1033d330(unsigned int flags);
};

char CUnk1033d330::sub_1033d330(unsigned int flags)
{
	unsigned int mask;
	if (!(flags & 0x80000000))
		mask = m_n0eb8 | m_n0eb0;
	else {
		mask = m_n0ebc | m_n0eb4;
		flags &= 0x7fffffff;
	}
	return (flags & mask) != 0;
}
// END FUNCTION

// FUNCTION: 0x1033d380 size=0x69
struct SInner { char *ent; unsigned serial; };
struct SEnt { int pad; SInner in; };
extern SEnt *g_10566458;
struct SHandle {
    unsigned v;
    char *Get() const
    {
        if (v == 0xffffffff)
            return 0;
        SInner *e = &g_10566458[v & 0x1fff].in;
        if (e->serial != (v >> 13))
            return 0;
        return e->ent;
    }
};
struct SItem { int key; SHandle handle; int a; int b; };
struct S1033d380 {
    char pad0[0xfb4];
    SItem *m_items;
    char pad1[0xfc0 - 0xfb8];
    int m_count;
    int sub_1033d380(int key);
};
// TARGET: S1033d380::sub_1033d380
int S1033d380::sub_1033d380(int key)
{
    for (int i = 0; i < m_count; i++) {
        if (m_items[i].key == key) {
            char *ent = m_items[i].handle.Get();
            if (!ent)
                return 0;
            return *(int *)(ent + 0x9c);
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1033d410 size=0x3a
struct CLookupUnit1033d410
{
    char m_pad0000[0xfb4];
    int *m_pItems;
    int m_pad0fb8[2];
    int m_nCount;

    int sub_1033d410(int key);
};

// TARGET: sub_1033d410
int CLookupUnit1033d410::sub_1033d410(int key)
{
    int i = 0;
    if (m_nCount > 0)
    {
        int *p = m_pItems;
        do
        {
            if (*p == key)
            {
                return m_pItems[i * 4 + 2];
            }
            i++;
            p += 4;
        } while (i < m_nCount);
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1033d460 size=0x3a
struct CLookupUnit1033d460
{
    char m_pad0000[0xfb4];
    int *m_pItems;
    int m_pad0fb8[2];
    int m_nCount;

    int sub_1033d460(int key);
};

// TARGET: sub_1033d460
int CLookupUnit1033d460::sub_1033d460(int key)
{
    int i = 0;
    if (m_nCount > 0)
    {
        int *p = m_pItems;
        do
        {
            if (*p == key)
            {
                return m_pItems[i * 4 + 3];
            }
            i++;
            p += 4;
        } while (i < m_nCount);
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1033d4b0 size=0x9b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CUnknown101e3af0.h"
#include "ScopeTrace.h"
extern CUnknown101e3af0 g_10739a4c;

void CBaseCombatCharacter::sub_1033d4b0()
{
	ScopeTrace trace("CBaseCombatCharacter::BloodExplode", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!sub_103380d0()) {
		g_10739a4c.sub_101e3310(this, "Thaumaturgy_Bloodboil_Explode_Inner");
		g_10739a4c.sub_101e3310(this, "Thaumaturgy_Bloodboil_Explode_Outer");
	}
}
// END FUNCTION

// FUNCTION: 0x1033d580 size=0x8d
#include "CBaseCombatCharacter.h"

struct CDangerRecord {
	char m_pad0000[0x9b];
	char m_b9b;
	char m_b9c;
	char m_pad009d[0x49c - 0x9d];
	int m_nType;	// 0x49c
};

struct CDangerTable {
	CDangerRecord *sub_101d5f10(CBaseCombatCharacter *pChar);	// stub 0x100040b1
};
extern CDangerTable g_10738d10;
CDangerRecord *sub_1023bd00();

char CBaseCombatCharacter::sub_1033d580(int unused)
{
	CDangerRecord *pRec = g_10738d10.sub_101d5f10(this);
	if (pRec->m_b9b)
		return 1;
	if (!pRec->m_b9c && !sub_10337ff0() && !sub_103380d0() && !sub_1033c900(0x800)
		&& !*(int *)((char *)this + 0xa8) && !*(int *)((char *)this + 0xac)) {
		CDangerRecord *pEnemy = sub_1023bd00();
		if (pEnemy) {
			if (pEnemy->m_nType == 1)
				return 1;
			if (pEnemy->m_nType == 2)
				return 1;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1033d640 size=0x8f
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
void sub_1022dc30(CBaseCombatCharacter *pThis, int value);

// TARGET: CBaseCombatCharacter::sub_1033d640
void CBaseCombatCharacter::sub_1033d640(inputdata_t *data)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (name == 0)
            name = g_106b8540;
    } else
        name = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InputHumanityAdd";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    sub_1022dc30(this, data->value.fieldType == 4 ? data->value.iValue : 0);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1033d700 size=0x9a
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

// TARGET: CBaseCombatCharacter::sub_1033d700
void CBaseCombatCharacter::sub_1033d700(inputdata_t *data)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (name == 0)
            name = g_106b8540;
    } else
        name = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InputBloodloss";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int n = (data->value.fieldType == 4) ? data->value.iValue : 0;
    for (int i = 0; i < n; i++)
        sub_10338df0(1);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1033d7d0 size=0x98
#include "CUnknown1033d7d0.h"
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

void CUnknown1033d7d0::sub_1033d7d0(inputdata_t *pInput)
{
	CScopeTrace trace("CBaseCombatCharacter::InputBloodgain", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	int n = pInput->value.fieldType == 4 ? pInput->value.iValue : 0;
	for (int i = 0; i < n; i++)
		sub_10338cb0();
}
// END FUNCTION

// FUNCTION: 0x1033d8a0 size=0x76
#include "inputdata_t.h"
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_1033d8a0(inputdata_t *data)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InputClearActiveDisciplines";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_10147a60();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033d940 size=0x1f
#include "CStatusFlagList.h"

extern CStatusFlagList g_10739a4c;

struct CUnk1033d940
{
    float sub_1033d940(float flValue);
};
float CUnk1033d940::sub_1033d940(float flValue)
{
    if (g_10739a4c.sub_101e3f50((CStatusTarget *)this))
    {
        return flValue + flValue;
    }
    return flValue;
}
// END FUNCTION

// FUNCTION: 0x1033d970 size=0xb
namespace lifted {
int __stdcall sub_100153a7(int);
}
int sub_1033d970()
{
    return lifted::sub_100153a7(0x200);
}
// END FUNCTION

// FUNCTION: 0x1033d990 size=0xb
namespace lifted {
int __stdcall sub_10011531(int);
}
int sub_1033d990()
{
    return lifted::sub_10011531(0x200);
}
// END FUNCTION

// FUNCTION: 0x1033d9b0 size=0xb
namespace lifted {
int __stdcall sub_10012b61(int);
}
int sub_1033d9b0()
{
    return lifted::sub_10012b61(0x200);
}
// END FUNCTION

// FUNCTION: 0x1033d9d0 size=0x107
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
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SpecialDamageRecord
{
	char m_szName[0x20];	// 0x5eb20
	int m_nLevel;	// 0x5eb40
};

struct SpecialDamageWeaponInfo
{
	char m_pad0000[0x5eb20];
	SpecialDamageRecord m_record;
};

struct SpecialDamageWeapon
{
	SpecialDamageWeaponInfo *sub_102517b0();
};

int CBaseCombatCharacter::sub_1033d9d0(CBaseEntity *pOther)
{
	ScopeTrace trace("CBaseCombatCharacter::GetSpecialDamageModifier", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pOther && sub_1033d9b0()) {
		int best = 0;
		for (int i = 0; i < 0xe0; i++) {
			SpecialDamageWeapon *pWeapon = (SpecialDamageWeapon *)sub_1032e8b0(i);
			if (pWeapon) {
				SpecialDamageRecord *pRec = &pWeapon->sub_102517b0()->m_record;
				if (pRec->m_nLevel) {
					const char *pszName = pOther->m_classname11c ? pOther->m_classname11c : g_106b8540;
					if (!_strcmpi(pszName, pRec->m_szName) && best < pRec->m_nLevel)
						best = pRec->m_nLevel;
				}
			}
		}
		return best;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1033db30 size=0x212
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
#include <string.h>
#include "ScopeTrace.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "engineiface.h"
#include "engineserver.h"

struct CSpecialDmgRec
{
	char m_name[0x20];
	int m_iActive;
	char m_sound[0x20];
};
struct CSpecialDmgInfo
{
	char m_pad[0x5eb20];
	CSpecialDmgRec m_rec;
};
struct CSpecialWeaponView
{
	CSpecialDmgInfo *sub_102517b0();
};

void CBaseCombatCharacter::sub_1033db30(CBaseEntity *pAttacker)
{
	ScopeTrace scope("CBaseCombatCharacter::ApplySpecialDamageModifier", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pAttacker && sub_1033d9b0()) {
		bool bPlayed = false;
		for (int i = 0; i < 0xe0; i++) {
			CSpecialWeaponView *pWeapon = (CSpecialWeaponView *)sub_1032e8b0(i);
			if (pWeapon) {
				CSpecialDmgRec *pRec = &pWeapon->sub_102517b0()->m_rec;
				if (pRec->m_iActive) {
					const char *p = pAttacker->m_classname11c ? pAttacker->m_classname11c : g_106b8540;
					if (!_strcmpi(p, pRec->m_name)) {
						CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
						if (pRec->m_sound[0] && pRec->m_sound[0] != ' ') {
							enginesound->vfunc0(pRec->m_sound, 0);
							int edict = m_pEdict2e0;
							enginesound->vfunc3(&filter, engine->vfunc35(edict), 3, pRec->m_sound, 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
						}
						bPlayed = true;
					}
				}
			}
		}
		if (bPlayed)
			sub_1033c6b0(0x400);
	}
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

// FUNCTION: 0x1033df80 size=0xdb
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_1033df80()
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::ApplyDisciplineSpawnFlags";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	unsigned int spawnFlags = *(unsigned int *)((char *)this + 0x204);
	if ((unsigned char)(spawnFlags >> 5) & 1)
		*(unsigned int *)((char *)this + 0xeac) |= 1;
	if ((unsigned char)(spawnFlags >> 6) & 1)
		*(unsigned int *)((char *)this + 0xeac) |= 2;
	if ((unsigned char)(spawnFlags >> 12) & 1)
		*(unsigned int *)((char *)this + 0xeac) |= 4;
	if ((unsigned char)(spawnFlags >> 13) & 1)
		*(unsigned int *)((char *)this + 0xeac) |= 8;
	if ((unsigned char)(spawnFlags >> 14) & 1)
		*(unsigned int *)((char *)this + 0xeac) |= 0x10;
	if ((unsigned char)(spawnFlags >> 15) & 1)
		*(unsigned int *)((char *)this + 0xeac) |= 0x20;
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1033e0a0 size=0x196
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b248.h"
#include "CUnknown1074e098.h"
#include "ScopeTrace.h"

extern CUnknown1070b248 *g_1070b248;
extern CUnknown1074e098 g_1074e098;

struct S1033e0a0Name
{
	const char *m_psz;
	const char *Get() const { return m_psz ? m_psz : g_106b8540; }
};

struct S1033e0a0Record
{
	char m_pad0000[0xe4];
	S1033e0a0Name m_Sound;	// 0xe4
};

void CBaseCombatCharacter::sub_1033e0a0(int nDiscipline, int unused1, CBaseEntity *pUnused2)
{
	ScopeTrace trace("CBaseCombatCharacter::AddFakedDisciplineEffect", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	const char *pszSound = ((S1033e0a0Record *)g_1074e098.sub_10200370(nDiscipline))->m_Sound.Get();
	g_1070b248->vfunc0(pszSound, 0);
	if (*pszSound && *pszSound != ' ') {
		int edict = m_pEdict2e0;
		g_1070b248->vfunc3(&filter, engine->vfunc35(edict), 3, pszSound, 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1033e2b0 size=0x87
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool CBaseCombatCharacter::sub_1033e2b0()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IsBusyWithDiscipline";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (*((unsigned char *)this + 0x14b8) & 1) {
		(*g_109f3680)--;
		return true;
	}
	(*g_109f3680)--;
	return false;
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

// FUNCTION: 0x1033e960 size=0x7c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
struct CFrenzyPlayerData { char pad[0x146c]; int m_nField146c; void sub_1033eb60(int a); };
struct CFrenzyLocalPlayer { char pad[0xa8]; CFrenzyPlayerData *m_pData; };
CFrenzyLocalPlayer *sub_101193b0();
void sub_1033e960()
{
	ScopeTrace trace("CC_FrenzyPlayer", g_106b8540);
	CFrenzyLocalPlayer *pLocal = sub_101193b0();
	if (pLocal) {
		CFrenzyPlayerData *pData = pLocal->m_pData;
		if (pData) {
			pData->m_nField146c = 0;
			pData->sub_1033eb60(99999);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1033ea00 size=0xa
#include "ConCommand.h"
void sub_1033e960(void);
ConCommand g_10936e24("frenzyplayer", sub_1033e960, "yeah, kick player into frenzy", 0, 0);
// END FUNCTION

// FUNCTION: 0x1033ea90 size=0x99
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

void CBaseCombatCharacter::sub_1033ea90(inputdata_t *inputdata)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::InputFrenzyCheck";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	sub_1033eb60((inputdata->value.fieldType == 4) ? inputdata->value.iValue : 0);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033eb60 size=0x4f6
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
#include "CEHandleGet.h"
// TARGET: CBaseCombatCharacter::sub_1033eb60
#include "CBaseCombatCharacter.h"
#include "CStatDefault3List.h"
#include "CEventQueue.h"
#include "CUnknown101d88b0.h"
#include "CUnknown101d8a70.h"
#include "CVDmg_t.h"
#include "CVariantCopy.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"
#include "Tier1.h"

struct CDevMsgLevel
{
	virtual void v0();
	virtual char v1();
	char m_pad[0x28];
	int m_n2c;
};
extern CDevMsgLevel *g_109249d4;
extern void (*g_109f3650)(int level, const char *pMsg, ...);

struct CEnemyView { char sub_1023b570(); };
int sub_1023bd00();

struct CPlayerView
{
	char m_pad0000[0x168];
	int m_n168;
	char m_pad016c[0x1edc - 0x16c];
	char m_b1edc;
};

struct CTuningView
{
	float sub_101e8e00();
	float sub_101e8e20();
	float sub_101e8e40();
};
extern CTuningView g_10739d08;

struct CWeaponInventoryView
{
	void sub_101f9a00(CBaseEntity *pOwner, int nValue);
};
extern CWeaponInventoryView g_1074df78;
extern CStatDefault3List g_10738d10;
extern CEventQueue g_106e7050;

void sub_101cebc0(void *p, int a, int b);

extern unsigned char g_109f0b2a;
extern CVStatList_t g_109f0b40;
inline void *operator new(unsigned int, void *p) { return p; }
extern "C" int atexit(void (__cdecl *pfn)(void));
void __cdecl sub_10012a8a();

inline CVStatList_t *FindStatList(CVStatListSet *pSet, int type)
{
	for (int i = 0; i < pSet->m_nLists; i++)
	{
		if (pSet->m_pLists[i]->m_field10 == type)
			return pSet->m_pLists[i];
	}
	if (!(g_109f0b2a & 1))
	{
		g_109f0b2a = g_109f0b2a | 1;
		new (&g_109f0b40) CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}

void CBaseCombatCharacter::sub_1033eb60(int difficulty)
{
	ScopeTrace scope("CBaseCombatCharacter::FrenzyCheck", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (m_field146c > 0)
		return;

	CEnemyView *pEnemy = (CEnemyView *)sub_1023bd00();
	if (pEnemy && pEnemy->sub_1023b570())
	{
		if (!g_109249d4->v1() && g_109249d4->m_n2c)
			g_109f3650(2, "FrenzyCheck - No Frenzy Area\n");
		return;
	}

	if (g_10566458->sub_100290c0((const unsigned int *)&m_hTarget1538.m_Index) && m_nTarget153c != -1 && m_nTargetMode1540 == 8)
	{
		if (!g_109249d4->v1() && g_109249d4->m_n2c)
			g_109f3650(2, "FrenzyCheck - Being grappled by zombie\n");
		return;
	}

	if (m_flNextFrenzyTimeThreshhold > engine->vfunc119(0) && difficulty < 1000)
		return;

	if (m_hDialogPartnerFE8.Get())
	{
		if (!g_109249d4->v1() && g_109249d4->m_n2c)
			g_109f3650(2, "FrenzyCheck - In dialog\n");
		return;
	}

	if (!sub_10337f30())
		return;

	CPlayerView *pPlayer = (CPlayerView *)m_pA8;
	if (pPlayer && (pPlayer->m_n168 == 0x1e || pPlayer->m_b1edc))
	{
		m_flNextFrenzyTimeThreshhold = g_10739d08.sub_101e8e00() + engine->vfunc119(0);
		return;
	}

	g_109f3630("Computing frenzy check for %s of %d difficulty.", (const char *)sub_100ab4f0(), difficulty);

	difficulty -= FindStatList(CVStatListSet::Of(this), 0)->sub_102012d0(0x15);
	CVDmgBlock16_t block(0, 0x1b);
	int nDice = FindStatList(CVStatListSet::Of(this), 0)->sub_102012d0(0x1b);
	int statC = FindStatList(CVStatListSet::Of(this), 0)->sub_102012d0(0xc);
	int threshold = (int)g_10739d08.sub_101e8e40();
	if (statC < threshold)
		nDice += statC - threshold;

	CUnknown101d88b0 roll((CVDmgSource_t *)this, &block, nDice, difficulty);

	{
		int rollResult;
		if ((*(int *)((CUnknown101d8a70 *)&roll)->sub_101d8a70(&rollResult) <= 1 || difficulty > 1000) && vfunc360())
		{
			StatDefault3 *pItem = g_10738d10.sub_101d5e80(sub_10337860());
			g_1074df78.sub_101f9a00((CBaseEntity *)this, pItem->m_88);

			m_field146c = 10;
			CVariantCopy value;
			value.SetInt(1);
			g_106e7050.sub_100cdf10(this, "FrenzyUpdate", value, 1.0 / m_flFrenzyRate, this, this, 0, CEQExtra());

			m_flNextFrenzyTimeThreshhold = g_10739d08.sub_101e8e20() + engine->vfunc119(0);
		}
		else
		{
			if (statC < 4)
				sub_101cebc0(m_pA8, 1, 0);

			m_flNextFrenzyTimeThreshhold = g_10739d08.sub_101e8e00() + engine->vfunc119(0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1033f1a0 size=0x98
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

// TARGET: CBaseCombatCharacter::sub_1033f1a0
bool CBaseCombatCharacter::sub_1033f1a0(int value)
{
    const char *ent;
    if (this != 0) {
        ent = m_name26c;
        if (ent == 0)
            ent = g_106b8540;
    } else
        ent = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::FrenzyComparison";
    g_109f3620[*g_109f3680].b = ent;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    sub_1033eb60(value);
    if (*(int *)((char *)this + 0x146c) != 0) {
        --*g_109f3680;
        return true;
    }
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1033f270 size=0x12f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
#include "CEventQueue.h"
#include "ScopeTrace.h"

extern CEventQueue g_106e7050;
__declspec(dllimport) void DevMsg(const char *fmt, ...);

void CBaseCombatCharacter::sub_1033f270(inputdata_t *data)
{
	ScopeTrace trace("CBaseCombatCharacter::InputFrenzyTrigger", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_field146c <= 0) {
		if (sub_10337f30()) {
			DevMsg("Triggering frenzy for %s.", sub_100ab4f0());
			if (!vfunc360()) {
				DevMsg("****** FAILED TO FRENZY ON CALL TO Input FrenzyTrigger!!!   ******\n");
				DevMsg("****** FAILED TO FRENZY ON CALL TO Input FrenzyTrigger!!!   ******\n");
				DevMsg("****** FAILED TO FRENZY ON CALL TO Input FrenzyTrigger!!!   ******\n");
			}
			m_field146c = 10;
			CVariantCopy v;
			v.m_value = 1;
			v.m_fieldType = 4;
			g_106e7050.sub_100cdf10(this, "FrenzyUpdate", v, 1.0 / m_flFrenzyRate, this, this, 0, CEQExtra());
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1033f3f0 size=0x99
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

void CBaseCombatCharacter::sub_1033f3f0(inputdata_t *inputdata)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::InputHungerCheck";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	sub_1033eb60((inputdata->value.fieldType == 4) ? inputdata->value.iValue : 0);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033f4c0 size=0x9c
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

void CBaseCombatCharacter::sub_1033f4c0(int value)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : g_106b8540;
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::HungerCheck";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	if (m_field146c <= 0) {
		sub_1033eb60(value);
		if (m_field146c > 0)
			m_flag1474 = 1;
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1033f590 size=0x100
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
#include "CEventQueue.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern CEventQueue g_106e7050;
__declspec(dllimport) void DevMsg(const char *fmt, ...);

void CBaseCombatCharacter::sub_1033f590(inputdata_t *data)
{
	ScopeTrace trace("CBaseCombatCharacter::InputFrenzyUpdate", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	if (m_field146c > 0) {
		m_field146c--;
		if (m_field146c > 0) {
			CVariantCopy value;
			value.SetInt(1);
			g_106e7050.sub_100cdf10(this, "FrenzyUpdate", value, 1.0 / m_flFrenzyRate, this, this, 0, CEQExtra());
			DevMsg("Frenzy like the wind!\n");
			return;
		}
		sub_1033f6d0();
	}
}
// END FUNCTION

// FUNCTION: 0x1033f6d0 size=0x5a
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CStatDefault3List.h"

extern CStatDefault3List g_10738d10;

class SList2
{
public:
	void sub_10227a30(int a, int b);
};
extern SList2 g_10750cb4;

struct CTraitTableX
{
	void sub_101f9a40(CBaseEntity *pEnt, int nValue);
};
extern CTraitTableX g_1074df78;

void CBaseCombatCharacter::sub_1033f6d0()
{
	m_flag1474 = 0;
	m_field146c = 0;
	StatDefault3 *pStat = g_10738d10.sub_101d5e80(sub_10337860());
	g_1074df78.sub_101f9a40(this, *(int *)((char *)pStat + 0x88));
	CBaseEntity *pPlayer = *(CBaseEntity **)((char *)this + 0xa8);
	if (pPlayer)
	{
		((CBasePlayer *)pPlayer)->sub_101618e0(0, 0);
		g_10750cb4.sub_10227a30((int)pPlayer, 1);
	}
}
// END FUNCTION

// FUNCTION: 0x1033f750 size=0x811
#include <stdio.h>
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCameraShotTable.h"
#include "CUnknown10203240.h"
#include "CUnknown100eb870.h"
#include "CExpressionTable.h"
#include "CStealthKillRules.h"

struct SVecHolder;
void __fastcall sub_100729e0(SVecHolder *);
extern CUnknown100eb870 g_10924980;
extern CExpressionTable g_10709200;
extern CStealthKillRules g_1072c540;
extern CCameraShotTable g_106c8298;
extern CUnknown10203240 g_1074e968;
extern const char *g_10619f20[3];
extern const char *g_10619f2c[8];
extern int g_10937160[24];
void sub_10054400();
void sub_10340180();
void sub_101d0f10(const char *, const char *, int, int);

// TARGET: sub_1033f750
void sub_1033f750()
{
	ScopeTrace trace("CBaseCombatCharacter::PrecacheOnce", g_106b8540, g_106b8540);
	char name[200];
	int i;
	int n;
	g_10924980.sub_100ecbe0();
	g_10709200.sub_10104ea0();
	g_1072c540.sub_101be020();
	sub_100729e0((SVecHolder *)&g_106c8298);
	g_106c8298.sub_10072810("vdata/CameraShots/*.txt");
	int *p = g_10937160;
	for (const char **o = g_10619f20; (int)o < (int)g_10619f2c; o++)
		for (const char **in = g_10619f2c; (int)in < (int)(g_10619f2c + 8); in++) {
			sprintf(name, "D_AuspexAura_%s_%sEmitter", *in, *o);
			*p = engine->vfunc17(name, 1);
			p++;
		}
	enginesound->vfunc0("disciplines/presence/affected_loop.wav", 0);
	n = g_1074e968.sub_10203240("UI_Discipline_Targeting_Sounds")->m_nEntries;
	for (i = 0; i < n; i++) {
		const char *s = g_1074e968.sub_10203240("UI_Discipline_Targeting_Sounds")->sub_10202a10(i);
		if (*s && *s != ' ')
			enginesound->vfunc0(s, 0);
	}
	n = g_1074e968.sub_10203240("UI_Discipline_Targeting_ProgBar_Sounds")->m_nEntries;
	for (i = 0; i < n; i++) {
		const char *s = g_1074e968.sub_10203240("UI_Discipline_Targeting_ProgBar_Sounds")->sub_10202a10(i);
		if (*s && *s != ' ')
			enginesound->vfunc0(s, 0);
	}
	enginesound->vfunc0("character/vampire burning death.wav", 0);
	enginesound->vfunc0("Interface/heartbeat_loop.wav", 0);
	enginesound->vfunc0("disciplines/potence/melee_hit.wav", 0);
	enginesound->vfunc0("disciplines/potence/melee_hit_deathblow.wav", 0);
	engine->vfunc17("CigGlow_CIGINHALE_Emitter", 1);
	engine->vfunc17("CigSmoke_CIGINHALE_Emitter", 1);
	engine->vfunc17("CigGlow_Spark_Emitter", 1);
	engine->vfunc17("CigGlow_GlowStart_Emitter", 1);
	engine->vfunc17("CigGlow_SmokeBlow_Emitter", 1);
	engine->vfunc13("models/items/Cigarette/Cigarette_Female.mdl", 0);
	engine->vfunc13("models/items/Cigarette/Cigarette_Male.mdl", 0);
	engine->vfunc13("models/items/Cell_Phone/CellPhone_Female.mdl", 0);
	engine->vfunc13("models/items/Cell_Phone/CellPhone_Male.mdl", 0);
	engine->vfunc13("models/items/Can/Drink_Can_Male.mdl", 0);
	engine->vfunc13("models/items/Can/Drink_Can_Female.mdl", 0);
	engine->vfunc13("models/items/Bum_Bottle/Bum_Bottle_Male.mdl", 0);
	engine->vfunc13("models/items/Bum_Bottle/Bum_Bottle_Female.mdl", 0);
	engine->vfunc13("models/scenery/misc/wineglass/wineglass.mdl", 0);
	engine->vfunc13("models/items/cards/cards_left_hold.mdl", 0);
	engine->vfunc13("models/items/cards/cards_left_play.mdl", 0);
	engine->vfunc13("models/items/cards/cards_right_hold.mdl", 0);
	engine->vfunc13("models/items/cards/cards_right_play.mdl", 0);
	engine->vfunc13("models/items/walkie_talkie/walkie_talkie.mdl", 0);
	engine->vfunc17("D_Animalisim_BodySmoke_Emitter", 1);
	engine->vfunc17("D_Animalisim_Ground_Emitter", 1);
	engine->vfunc17("D_AuspexCast_Emitter", 1);
	engine->vfunc17("D_AuspexView_Emitter", 1);
	engine->vfunc17("D_BloodHealing_Emitter", 1);
	engine->vfunc17("D_FortitudeNew_Emitter", 1);
	engine->vfunc17("D_FortitudeView_Emitter", 1);
	engine->vfunc17("D_ObfuscateIn_Emitter", 1);
	engine->vfunc17("D_ObfuscateOut_Emitter", 1);
	engine->vfunc17("D_Potence_Emitter", 1);
	engine->vfunc17("D_Presence_Emitter", 1);
	engine->vfunc17("D_PresenceView_Emitter", 1);
	engine->vfunc17("D_ProteanView_Emitter", 1);
	engine->vfunc17("D_ThaumaturgyCast_Emitter", 1);
	engine->vfunc17("D_ProteanTransform_Emitter", 1);
	engine->vfunc17("D_Dominate_Ramp_Target", 1);
	engine->vfunc17("D_Dominate_Hit_Target", 1);
	engine->vfunc17("d_animalism_raven_trail_emitter", 1);
	engine->vfunc17("d_animalism_wolf_into_emitter", 1);
	engine->vfunc17("d_animalism_wolf_trail_emitter", 1);
	engine->vfunc17("d_animalism_wolf_bloodspray_emitter", 1);
	engine->vfunc17("d_animalism_wolf_outof_emitter", 1);
	engine->vfunc17("d_animalism_wolf_outof_emitter2", 1);
	engine->vfunc17("d_animalism_wolf_tail_emitter", 1);
	engine->vfunc17("d_animalism_bat_trail_emitter", 1);
	engine->vfunc17("d_animalism_bat_trail_emitter2", 1);
	engine->vfunc17("d_animalism_bat_trail_emitter3", 1);
	engine->vfunc17("D_Target_Aura_Emitter", 1);
	engine->vfunc17("BloodyEyes_Emitter", 1);
	engine->vfunc17("VomitBlood_Emitter", 1);
	engine->vfunc17("WaterSplash_Emitter", 1);
	engine->vfunc17("WaterBigSplash_Emitter", 1);
	engine->vfunc17("Stealth_baseballbat_emitter", 1);
	engine->vfunc17("Stealth_bushhook_emitter", 1);
	engine->vfunc17("Stealth_bushhook_emitter2", 1);
	engine->vfunc17("Stealth_claws_emitter", 1);
	engine->vfunc17("Stealth_katana_emitter", 1);
	engine->vfunc17("Stealth_knife_emitter", 1);
	engine->vfunc17("Stealth_sledgehammer_emitter", 1);
	engine->vfunc17("Stealth_stake_emitter", 1);
	sub_10054400();
	engine->vfunc17("impact_test", 1);
	engine->vfunc17("blood_emitter", 1);
	engine->vfunc17("force_feeding_emitter", 1);
	engine->vfunc17("HUD_targeting_emitter", 1);
	engine->vfunc17("DMGFX_body_fire_emitter", 1);
	engine->vfunc17("DMGFX_hud_fire_emitter", 1);
	enginesound->vfunc0("environmental/fire/fire_hit.wav", 0);
	engine->vfunc17("DMGFX_body_freeze_emitter", 1);
	engine->vfunc17("DMGFX_hud_freeze_emitter", 1);
	enginesound->vfunc0("interface/stealth_discovered.wav", 0);
	engine->vfunc17("DMGFX_body_shock_emitter", 1);
	engine->vfunc17("DMGFX_hud_shock_emitter", 1);
	enginesound->vfunc0("disciplines/potence/melee_hit.wav", 0);
	engine->vfunc13("models/character/npc/common/skeleton/skeleton_male.mdl", 1);
	engine->vfunc13("models/character/npc/common/skeleton/skeleton_female.mdl", 1);
	engine->vfunc13("models/character/monster/Animalism_Beastform/Animalism_Beastform.mdl", 1);
	engine->vfunc13("models/gibs/hgibs.mdl", 1);
	engine->vfunc13("models/gibs/hgibsjaw.mdl", 1);
	engine->vfunc13("models/gibs/hgibslarm.mdl", 1);
	engine->vfunc13("models/gibs/hgibslleg.mdl", 1);
	engine->vfunc13("models/gibs/hgibsrarm.mdl", 1);
	engine->vfunc13("models/gibs/hgibsskull.mdl", 1);
	sub_101d0f10("sound/Interesting_Places", ".wav", 0, 0);
	sub_101d0f10("sound/Interesting_Places/Male", ".wav", 0, 0);
	sub_101d0f10("sound/Interesting_Places/Female", ".wav", 0, 0);
	sub_101d0f10("sound/Interface", ".wav", 0, 0);
	sub_101d0f10("sound/Interface/Feeding", ".wav", 0, 0);
	sub_101d0f10("sound/Interface/Infobar", ".wav", 0, 0);
	sub_10340180();
}
// END FUNCTION

// FUNCTION: 0x10340180 size=0x17e
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
extern "C" int _strcmpi(const char *, const char *);
extern void (__cdecl *g_109f3630)(const char *, ...);
struct IdPart {
    int m_id;
};
struct NamePart {
    const char *m_pszName;
    const char *Get() { return m_pszName ? m_pszName : g_106b8540; }
};
struct SectionRec : public IdPart, public NamePart {
};
extern int g_1073a2dc;
extern SectionRec **g_1073a2e0;
extern int g_10619d28[8];
extern int g_10937cd0[8];
extern char g_10937cf0;

void sub_10340180()
{
    const char *names[8] = {
        "None", "Weapon_Melee", "Weapon_Ranged", "Weapon_Thrown",
        "Armor", "Generic", "Powerups", "Hidden"
    };
    void (__cdecl *msg)(const char *, ...) = g_109f3630;
    ScopeTrace trace("CBaseCombatCharacter::CacheInventorySections", g_106b8540, g_106b8540);
    for (int i = 0; i < 8; i++) {
        const char *name = names[i];
        int j = 0;
        int idx;
        if (g_1073a2dc > 0) {
            do {
                if (_strcmpi(g_1073a2e0[j]->Get(), name) == 0) {
                    idx = g_1073a2e0[j]->m_id;
                    goto found;
                }
                j++;
            } while (j < g_1073a2dc);
        }
        idx = -1;
    found:
        int v = idx - 1;
        g_10619d28[i] = v;
        if (v < 0 && i != 0) {
            msg("***************************************\n");
            msg("**   WARNING\n");
            msg("inventory section '%s' was not found.\n", name);
            msg("Perhaps the name was changed in vdata\\System\\Items.txt\n");
            msg("NPCs may be unable to switch to certain weapons until\n");
            msg("this is fixed.\n");
            msg("**   WARNING\n");
            msg("***************************************\n");
        }
        g_10937cd0[i] = 0;
        if (g_10619d28[i] > 0)
            g_10937cd0[i] = g_10619d28[i] << 5;
    }
    g_10937cf0 = 1;
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

// FUNCTION: 0x10340bd0 size=0x86
#include "inputdata_t.h"
#include "CBaseCombatCharacter.h"

#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

// The object pointed to by the entity field at +0x98; only its slot 507 is used here.
struct SPlayFloatTarget
{
	PV100(a0) PV100(a1) PV100(a2) PV100(a3) PV100(a4)
	virtual void a500(); virtual void a501(); virtual void a502(); virtual void a503();
	virtual void a504(); virtual void a505(); virtual void a506();
	virtual void slot507();
};

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

void CBaseCombatCharacter::sub_10340bd0(inputdata_t *data)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::InputPlayFloat";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	SPlayFloatTarget *pTarget = *(SPlayFloatTarget **)((char *)this + 0x98);
	if (pTarget)
		pTarget->slot507();
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10340c90 size=0xaa
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_106234a8[];

struct VT {
	union { float flValue; int iValue; };
	char m_pad04[8];
	unsigned int eVal;
	int fieldType;
};

void CBaseCombatCharacter::sub_10340c90(inputdata_t *pInput)
{
	const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc;
	g_109f3620[*g_109f3680].a = g_106234a8;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	volatile VT *pValue = (VT *)&pInput->value;
	if (pValue->fieldType == 4 && pValue->iValue != 0)
		sub_10340e50(pValue->fieldType == 4 ? pValue->iValue : 0);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10340d70 size=0xaa
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_106234d4[];

struct VT {
	union { float flValue; int iValue; };
	char m_pad04[8];
	unsigned int eVal;
	int fieldType;
};

void CBaseCombatCharacter::sub_10340d70(inputdata_t *pInput)
{
	const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc;
	g_109f3620[*g_109f3680].a = g_106234d4;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	volatile VT *pValue = (VT *)&pInput->value;
	if (pValue->fieldType == 4 && pValue->iValue != 0)
		sub_10341030(pValue->fieldType == 4 ? pValue->iValue : 0);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10340e50 size=0x172
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

extern char g_10623504[];
extern char g_10543c6c[];
extern char g_10538764[];	// RTTI type descriptor of CBaseEntity
extern char g_10560664[];	// RTTI type descriptor of CItemContainer
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long vfDelta, void *pSrcType, void *pTargetType, int isReference);
void sub_101cebc0(void *pPlayer, int type, int amount);

struct CEdictView
{
	char m_pad[0x40];
	CBaseEntity *m_pUnknown;	// 0x40: the IServerUnknown-like object; slot 4 gives the entity
};

struct CServerUnknownView
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual CBaseEntity *GetBaseEntity();
};

void CBaseCombatCharacter::sub_10340e50(int amount)
{
	ScopeTrace trace(g_10623504, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	*(int *)((char *)this + 0x13d8) += amount;
	char *pPlayer = *(char **)((char *)this + 0xa8);
	if (pPlayer && amount) {
		int iContainer = *(int *)(pPlayer + 0x1eb8);
		if (iContainer) {
			CEdictView *pEdict = (CEdictView *)engine->vfunc38(iContainer);
			CBaseEntity *pEntity;
			{
				ScopeTrace instanceTrace(g_10543c6c, g_106b8540);
				if (!pEdict)
					pEdict = (CEdictView *)engine->vfunc38(0);
				if (pEdict && pEdict->m_pUnknown)
					pEntity = ((CServerUnknownView *)pEdict->m_pUnknown)->GetBaseEntity();
				else
					pEntity = 0;
			}
			if (!__RTDynamicCast(pEntity, 0, g_10538764, g_10560664, 0))
				return;
		}
		sub_101cebc0(*(void **)((char *)this + 0xa8), 10, amount);
	}
}
// END FUNCTION

// FUNCTION: 0x10341030 size=0xb6
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_1062352c[];
void __cdecl sub_101cebc0(void *pObj, int a, int amount);

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

struct MoneyHolder {
	char pad0[0xa8];
	void *m_pObj;
	char pad1[0x13d8 - 0xac];
	int m_nMoney;
};

void CBaseCombatCharacter::sub_10341030(int amount)
{
	const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc;
	ScopeTraceGuard trace(g_1062352c, name, g_106b8540);
	MoneyHolder *p = (MoneyHolder *)this;
	p->m_nMoney -= amount;
	if (p->m_nMoney < 0)
		p->m_nMoney = 0;
	void *pObj = p->m_pObj;
	if (pObj && amount && *(int *)((char *)pObj + 0x1eb8) == 0)
		sub_101cebc0(pObj, 0xb, amount);
}
// END FUNCTION

// FUNCTION: 0x10341120 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_10341120(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::MoneyValueGet";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0x13d8);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x103411c0 size=0xbe
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CBarterView	// the bartering character: sub_1017c600(other, value, 0, 0, 0) (stub 0x1000f330)
{
    void sub_1017c600(CBarterView *pOther, int value, int a, int b, int c);
};

void CBaseCombatCharacter::sub_103411c0(int a, int b)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::BarterBegin";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    CBarterView *pOther = (CBarterView *)a;
    if (pOther) {
        if (*(int *)((char *)this + 0xa8)) {
            ((CBarterView *)this)->sub_1017c600(pOther, b, 0, 0, 0);
        } else if (*(int *)((char *)pOther + 0xa8)) {
            pOther->sub_1017c600((CBarterView *)this, b, 0, 0, 0);
        }
    }
    (*g_109f3680)--;
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

// FUNCTION: 0x10341370 size=0xb0
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

void CBaseCombatCharacter::sub_10341370(CBaseCombatCharacter *pPartner, int unused)
{
	ScopeTrace trace("CBaseCombatCharacter::BarterEnd", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pPartner) {
		if (*(int *)((char *)this + 0xa8)) {
			sub_10013070();
			sub_10010e60(this);
			return;
		}
		if (*(int *)((char *)pPartner + 0xa8))
			pPartner->sub_10013070();
	}
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

// FUNCTION: 0x10341510 size=0xa8
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

CBaseEntity *__fastcall sub_10341510(CBaseEntity *pThis)
{
	ScopeTrace trace("CBaseCombatCharacter::GetActiveArmor", pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
	return (CBaseEntity *)EHandle_Get(*(unsigned int *)((char *)pThis + 0x10dc));
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

// FUNCTION: 0x103418f0 size=0x9d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
#include "ScopeTrace.h"

static __inline bool WillTalk(inputdata_t *pData)
{
	return pData->value.fieldType == 4 && pData->value.iValue != 0;
}

void CBaseCombatCharacter::sub_103418f0(inputdata_t *pData)
{
	ScopeTrace trace("CBaseCombatCharacter::InputWillTalk",
		this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (!WillTalk(pData))
		*((char *)this + 0x1088) = 0;
	else
		*((char *)this + 0x1088) = 1;
}
// END FUNCTION

// FUNCTION: 0x103419c0 size=0xa8
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_1062377c[];
void __cdecl sub_1000b6a9(void *, int);

void CBaseCombatCharacter::sub_103419c0(inputdata_t *pInput)
{
	const char *name;
	if (this) {
		name = *(const char **)((char *)this + 0x26c);
		if (!name) name = g_106b8540;
	} else {
		name = g_105387dc;
	}
	g_109f3620[*g_109f3680].a = g_1062377c;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (pInput->value.fieldType == 4) {
		int n = pInput->value.iValue;
		while (n != 0) {
			if (n > 0) { sub_1000b6a9(this, 1); n--; }
			else { sub_1000b6a9(this, -1); n++; }
		}
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10341aa0 size=0x87
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool CBaseCombatCharacter::sub_10341aa0()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IsUnconscious";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if ((*((unsigned char *)this + 0xfe4) & 1) == 0) {
		(*g_109f3680)--;
		return false;
	}
	(*g_109f3680)--;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10341b60 size=0x9e
#include "CBaseCombatCharacter.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_10341b60(char unconscious)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::SetUnconscious";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	unsigned int *pMisc = (unsigned int *)((char *)this + 0xfe4);
	if (unconscious)
		*pMisc = *pMisc | 1;
	else
		*pMisc = *pMisc & 0xfffffffe;
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10341c30 size=0x68b
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
#include "UTIL_Trace.h"
#include "CUnknown101cccf0.h"
#include "CUnknown100b5190.h"
#include "CUnknown1003ff80.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "Tier1.h"
#include "engineserver.h"

struct FEFStr { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual const char *v5(); };
struct FEFObj { virtual void v0(); virtual void v1(); virtual void v2(); virtual FEFStr *v3(); };
struct FEFEdict
{
	char pad[0x40];
	FEFObj *m_p40;
	__forceinline const char *GetClassName()
	{
		if (!m_p40)
			return g_106b8540;
		return m_p40->v3()->v5();
	}
};
struct FEFSlots {
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18)
	EVS(190) EVS(191)
	virtual Vector WorldSpaceCenter();
	virtual Vector EyePosition();
	EVS(194) EVS(195) EVS(196) EVS(197) EVS(198) EVS(199)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35)
	EVS(360) EVS(361) EVS(362) EVS(363) EVS(364) EVS(365) EVS(366) EVS(367) EVS(368)
	virtual Vector BodyDirection3D();
};

CBaseEntity *CBaseCombatCharacter::sub_10341c30(bool (*pfnFilter)(CBaseEntity *, CBaseEntity *), float flRange, float flMinDot, bool bFlat, float flPullback, int nTraceMask)
{
	ScopeTrace trace("CBaseCombatCharacter::FindEntityFOV", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseEntity *pBest = 0;
	CGameTrace tr;
	((CUnknown1003ff80 *)&tr)->sub_1003ff80();
	float flBest = flMinDot;
	Vector vecForward;
	Vector vecStart;
	if (bFlat) {
		vecStart = ((FEFSlots *)this)->WorldSpaceCenter();
		vecForward = ((FEFSlots *)this)->BodyDirection3D();
		vecForward.z = 0;
		VectorNormalize(vecForward);
	} else {
		vecStart = ((FEFSlots *)this)->EyePosition();
		vecForward = ((FEFSlots *)this)->BodyDirection3D();
	}
	UTIL_TraceLine_Calls(vecStart, vecForward * flRange + vecStart, nTraceMask, this, 0, &tr);
	CBaseEntity *pHit = tr.m_pEnt;
	if (pHit && !pHit->sub_100a52a0()) {
		CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)pHit->m_p9c;
		if (pChar) {
			if (!pChar->m_b1480)
				g_109f3630("FindEntityFOV found non targetable BCC %s(%s).\n", pChar->sub_1000b5cd(), ((FEFEdict *)pChar->m_pEdict2e0)->GetClassName());
			if (((CUnknown100b5190 *)pChar)->sub_100b5190())
				g_109f3630("FindEntityFOV found ScriptHidden BCC %s(%s).\n", pChar->sub_1000b5cd(), ((FEFEdict *)pChar->m_pEdict2e0)->GetClassName());
		}
		if (pfnFilter) {
			if (pfnFilter(this, pHit))
				return pHit;
		} else {
			int edict = pHit->m_pEdict2e0;
			if (engine->vfunc35(edict) > 0)
				return pHit;
		}
	}
	CUnknown101cccf0 sphere;
	CBaseEntity *pEnt;
	Vector vecTarget;
	float flDot;
	Vector vecDir;
	for (sphere.sub_101cccf0((int)&vecStart, *(int *)&flRange, 0, 0); (pEnt = sphere.sub_101ccd40()) != 0; ++sphere.m_nIndex) {
		if (pEnt->sub_100a52a0() || pEnt == this)
			continue;
		if (!bFlat && (pEnt->sub_100b3700() & 0x2080)) {
			if (pEnt->m_p9c)
				((CBaseCombatCharacter *)pEnt->m_p9c)->sub_10331da0(&vecTarget, 0);
			else
				vecTarget = ((FEFSlots *)pEnt)->EyePosition();
		} else
			vecTarget = ((FEFSlots *)pEnt)->WorldSpaceCenter();
		vecDir = vecTarget - (vecStart - vecForward * flPullback);
		VectorNormalize(vecDir);
		flDot = vecDir.Dot(vecForward);
		if (!(flDot > flBest)) {
			((CCollisionProperty *)((char *)pEnt + 0x270))->sub_100dd000(vecStart, vecTarget);
			vecDir = vecTarget - (vecStart - vecForward * flPullback);
			VectorNormalize(vecDir);
			flDot = vecDir.Dot(vecForward);
			if (!(flDot > flBest))
				continue;
		}
		if (flPullback != 0.0f) {
			vecDir = vecTarget - vecStart;
			VectorNormalize(vecDir);
			flDot = vecDir.Dot(vecForward);
			if (!(flDot > 0.0f))
				continue;
		}
		if (pfnFilter && !pfnFilter(this, pEnt))
			continue;
		if (pEnt->vfunc45(this, vecStart, vecTarget, nTraceMask)) {
			pBest = pEnt;
			flBest = flDot;
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x10342470 size=0xdd
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct UseFilterHelper	// the object at +0x94 of the used entity
{
	SL100(a) SL100(b) SL10(c0) SL10(c1) SL10(c2) SL10(c3) SL10(c4) SL10(c5) SL10(c6) SL10(c7) SL10(c8)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
	virtual bool Filter(void *pPlayer);	// slot 295
};

struct UsedEntity
{
	SL10(a0) SL10(a1) SL10(a2)
	virtual void b0(); virtual void b1();
	virtual bool CanUse(void *pPlayer);	// slot 32
	SL10(c0) SL10(c1) SL10(c2) SL10(c3) SL10(c4) SL10(c5) SL10(c6) SL10(c7)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
	virtual unsigned int ObjectCaps();	// slot 117
	char m_pad0004[0x90];
	UseFilterHelper *m_pHelper;	// 0x94
};

struct UserEntity
{
	char m_pad0000[0xa8];
	void *m_pPlayer;	// 0xa8
};

bool sub_10342470(UserEntity *pUser, UsedEntity *pUsed)
{
	g_109f3620[*g_109f3680].a = "PlayerUseFilter";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (pUsed->m_pHelper && pUsed->m_pHelper->Filter(pUser == 0 ? 0 : pUser->m_pPlayer)) {
		--*g_109f3680;
		return true;
	}
	if (pUsed->ObjectCaps() & 0x38) {
		--*g_109f3680;
		return true;
	}
	if (pUsed->CanUse(pUser == 0 ? 0 : pUser->m_pPlayer)) {
		--*g_109f3680;
		return true;
	}
	--*g_109f3680;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10342590 size=0xe0
#include "CBaseEntity.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};

bool sub_10342590(CBaseEntity *pEnt, CBaseEntity *pPlayer)
{
    ScopeTrace trace("PlayerUseIconFilter", g_106b8540, g_106b8540);
    if (pPlayer->vfunc32(!pEnt ? 0 : *(int *)((char *)pEnt + 0xa8)))
        return true;
    if (pPlayer->vfunc35(!pEnt ? 0 : *(int *)((char *)pEnt + 0xa8)) > 0)
        return true;
    int obj = (int)pEnt;
    if (pEnt)
        obj = *(int *)((char *)pEnt + 0xa8);
    if (pPlayer->vfunc34(obj) > 0)
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x103426b0 size=0x6f
struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

struct STeamFilter {
	int sub_10008d7d(int a);
};

int sub_103426b0(STeamFilter *pFilter, char *pEnt)
{
	g_109f3620[*g_109f3680].m_pszFunc = "TeamFilter";
	g_109f3620[*g_109f3680].m_pszName = "";
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	int v = (int)pEnt;
	if (v)
		v = *(int *)(v + 0x9c);
	int r = pFilter->sub_10008d7d(v);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10342740 size=0x8d
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
// stand-in for the first 342 slots of an entity's virtual table
struct Slots342 {
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7) D10(a8) D10(a9)
	D10(b0) D10(b1) D10(b2) D10(b3) D10(b4) D10(b5) D10(b6) D10(b7) D10(b8) D10(b9)
	D10(c0) D10(c1) D10(c2) D10(c3) D10(c4) D10(c5) D10(c6) D10(c7) D10(c8) D10(c9)
	D10(d0) D10(d1) D10(d2) D10(d3)
	virtual void e340(); virtual void e341();
	virtual bool vfunc342(void *a);
};
struct HasFilter {
	char pad[0x9c];
	Slots342 *m_pFilter;
};

bool sub_10342740(void *a, HasFilter *b)
{
	g_109f3620[*g_109f3680].a = "FeedVictimFilter";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (!b->m_pFilter) {
		(*g_109f3680)--;
		return false;
	}
	if (!b->m_pFilter->vfunc342(a)) {
		(*g_109f3680)--;
		return false;
	}
	(*g_109f3680)--;
	return true;
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

// FUNCTION: 0x10342910 size=0x2ba
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
#include "StudioHdr.h"
#include "ScopeTrace.h"
#include "matrix3x4_t.h"

void sub_101381b0(const Vector &in, const matrix3x4_t &matrix, Vector &out);
void sub_10139b90(const QAngle &angles, matrix3x4_t &matrix);
void sub_1013c8c0(const Vector &mins, const Vector &maxs, const Vector &point, Vector &out);

int CBaseCombatCharacter::sub_10342910(void *pfnCallback, CBaseEntity *pEntity, bool bIntersect, bool bInvert, Vector vecMins, Vector vecMaxs)
{
	ScopeTrace trace("CBaseCombatCharacter::HitboxesInAABB", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!pfnCallback || !pEntity)
		return 0;
	StudioHdr *pStudioHdr = (StudioHdr *)((CBaseAnimating *)this)->sub_100952d0(-1);
	if (!pStudioHdr)
		return 0;
	StudioHitboxSet *pSet = pStudioHdr->HitboxSet(*(int *)((char *)this + 0x680));
	if (!pSet)
		return 0;
	int nHit = 0;
	for (int i = 0; i < pSet->m_nHitboxes; i++)
	{
		StudioHitbox *pBox = pSet->Hitbox(i);
		Vector vecOrigin;
		QAngle angBone;
		((CBaseAnimating *)this)->sub_100926e0(pBox->m_iBone, (int)&vecOrigin, (int)&angBone);
		matrix3x4_t boneToWorld;
		sub_10139b90(angBone, boneToWorld);
		Vector vecMin;
		Vector vecMax;
		sub_101381b0(pBox->m_vecMins, boneToWorld, vecMin);
		vecMin.x = vecMin.x + vecOrigin.x;
		vecMin.y = vecMin.y + vecOrigin.y;
		vecMin.z = vecMin.z + vecOrigin.z;
		sub_101381b0(pBox->m_vecMaxs, boneToWorld, vecMax);
		VectorAdd(vecMax, vecOrigin, vecMax);
		Vector c;
		sub_1013c8c0(vecMins, vecMaxs, vecMin, c);
		bool bMinIn = (vecMin == c);
		sub_1013c8c0(vecMins, vecMaxs, vecMax, c);
		bool bMaxIn = (vecMax == c);
		bool bHit;
		if (bIntersect)
			bHit = bMinIn || bMaxIn;
		else
			bHit = bMinIn && bMaxIn;
		if (bInvert)
			bHit = !bHit;
		if (bHit)
		{
			nHit++;
			((void (__cdecl *)(CBaseCombatCharacter *, CBaseEntity *, int))pfnCallback)(this, pEntity, i);
		}
	}
	return nHit;
}
// END FUNCTION

// FUNCTION: 0x10342c80 size=0x1f9
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
#include "StudioHdr.h"
#include "ScopeTrace.h"
#include "matrix3x4_t.h"

void sub_101381b0(const Vector &in, const matrix3x4_t &matrix, Vector &out);
void sub_10139b90(const QAngle &angles, matrix3x4_t &matrix);
bool sub_10139f90(const Vector &vecCenter, float flRadius, const Vector &vecMin, const Vector &vecMax);

int CBaseCombatCharacter::sub_10342c80(void (*pCallback)(CBaseCombatCharacter *, int, int), int nArg, bool bInvert, Vector vecCenter, float flRadius)
{
	ScopeTrace trace("CBaseCombatCharacter::HitboxesInSphere", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!pCallback || !nArg)
		return 0;
	StudioHdr *pStudioHdr = (StudioHdr *)((CBaseAnimating *)this)->sub_100952d0(-1);
	if (!pStudioHdr)
		return 0;
	StudioHitboxSet *pSet = pStudioHdr->HitboxSet(*(int *)((char *)this + 0x680));
	if (!pSet)
		return 0;
	int nHit = 0;
	for (int i = 0; i < pSet->m_nHitboxes; i++)
	{
		StudioHitbox *pBox = pSet->Hitbox(i);
		Vector vecOrigin;
		QAngle angBone;
		((CBaseAnimating *)this)->sub_100926e0(pBox->m_iBone, (int)&vecOrigin, (int)&angBone);
		matrix3x4_t boneToWorld;
		sub_10139b90(angBone, boneToWorld);
		Vector vecMin;
		Vector vecMax;
		sub_101381b0(pBox->m_vecMins, boneToWorld, vecMin);
		VectorAdd(vecMin, vecOrigin, vecMin);
		sub_101381b0(pBox->m_vecMaxs, boneToWorld, vecMax);
		VectorAdd(vecMax, vecOrigin, vecMax);
		bool bHit = sub_10139f90(vecCenter, flRadius, vecMin, vecMax);
		if (bInvert)
			bHit = !bHit;
		if (bHit)
		{
			nHit++;
			pCallback(this, nArg, i);
		}
	}
	return nHit;
}
// END FUNCTION

// FUNCTION: 0x10342f00 size=0xa
#include "ConVar.h"
ConVar g_10936d78("meleedebug", "0", 0);
// END FUNCTION

// FUNCTION: 0x10342f90 size=0xa
#include "ConVar.h"
ConVar g_10936ee0("debug_allow_melee_ff", "0", 0);
// END FUNCTION

// FUNCTION: 0x10343020 size=0x1464
#include "utllinkedlist.h"
#include "utlrbtree.h"
#include "CNPC_VTzimisce.h"
#include "CSprayCan.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Quaternion.h"
#include "StudioHdr.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
#include "UTIL_Trace.h"
#include "CUtlVector4.h"
#include "CBaseHandle.h"
#include "QAngle.h"
#include <math.h>
#include "ConVar.h"
#include "ehandle.h"
extern float g_104454c4;
extern float g_104454c0;
namespace block_10343020 {
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
extern ConVar g_10936d78;

struct StudioHdr;
struct matrix3x4_t { float m[3][4]; };
struct CQuat16 { float q[4]; };
class CUnknown100c81b0 { public: void sub_100c7f30(void *pHdr, int mask); char m_pad[0x30]; };	// stub 0x1000c31f

struct CMeleeBox	// a hit box record of the sequence (0x44 bytes)
{
	float m_flStart;
	float m_flEnd;
	int m_iBone;
	Vector m_vecMins;
	Vector m_vecMaxs;
	char m_pad24[0xbc - 0x24];
};
struct CMeleeSeq
{
	char m_pad[0x2c4];
	int m_numboxes;	// 0x2c4
	int m_boxindex;	// 0x2c8
	CMeleeBox *pBox(int i) { return (CMeleeBox *)((char *)this + m_boxindex) + i; }
};

struct MeleeRay : Ray_t
{
	void Init(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, char a, char b)
	{
		m_Delta[0] = end.x - start.x;
		m_Delta[1] = end.y - start.y;
		m_Delta[2] = end.z - start.z;
		m_IsSwept = (m_Delta[0] * m_Delta[0] + m_Delta[1] * m_Delta[1] + m_Delta[2] * m_Delta[2]) != g_104454c4;
		Vector &extents = *(Vector *)m_StartOffset;
		Vector &offset = *(Vector *)m_Extents;
		VectorSubtract(maxs, mins, extents);
		VectorScale(extents, 0.5f, extents);
		m_IsRay = ((extents.x * extents.x + extents.y * extents.y + extents.z * extents.z) < 1e-6);
		VectorAdd(mins, maxs, offset);
		VectorScale(offset, 0.5f, offset);
		VectorAdd(start, offset, *(Vector *)m_Start);
		VectorScale(offset, -1.0f, offset);
		m_b32 = a;
		m_b33 = b;
		m_n34 = 0;
	}
};

struct CMeleeLastBox { Vector m_vecMin; Vector m_vecMax; };
template <class T> inline void MeleeDestruct(T *p) { p->~T(); }
struct CMeleeList : CUtlVector4 { int AddToTail(const int &src) { return sub_10217080(m_size, &src); } void RemoveAll() { for (int i = m_size; --i >= 0; ) MeleeDestruct(&m_pMemory[i]); m_size = 0; } };

struct OOLScope
{
	OOLScope(const char *f, const char *name) { ((ScopeTrace *)this)->ScopeTrace::ScopeTrace(f, name, g_106b8540); }
	~OOLScope() { (*g_109f3680)--; }
};

struct STView { void sub_10037300(const char *f, const char *name, const char *line); };
struct OOLScope2
{
	OOLScope2(const char *f, const char *name) { ((STView *)this)->sub_10037300(f, name, g_106b8540); }
	~OOLScope2() { (*g_109f3680)--; }
};

struct CMeleeChar
{
	virtual void v0();
	char m_pad[0x1480 - 4];
	char m_b1480;
};

struct CMeleeEnt
{
	char m_pad0[0x9c];
	CMeleeChar *m_pChar;	// 0x9c
	char m_pad1[0x26c - 0xa0];
	const char *m_name26c;	// 0x26c
	char m_pad2[0x2b0 - 0x270];
	int m_nSolidType;	// 0x2b0
	unsigned char m_nSolidFlags;	// 0x2b4
	bool IsSolidFlagSet(int flag)
	{
		OOLScope2 trace("CBaseEntity::IsSolidFlagSet", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		return (m_nSolidFlags & flag) != 0;
	}
	bool IsSolid()
	{
		OOLScope trace("CBaseEntity::IsSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		return m_nSolidType != 0 && !(m_nSolidFlags & 4);
	}
};

struct CBCCView { bool sub_10323930(void *p); };
struct CUnknown100b5190 { char sub_100b5190(); };
struct CUnknown100290c0 { unsigned int sub_100290c0(unsigned int *p); };
extern CUnknown100290c0 *g_10566458;
struct TEnt;
TEnt *sub_1012c9c0(TEnt *p);

struct CMV
{
	virtual void s0();
	virtual unsigned int *s1();
	virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21();
	virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31();
	virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41();
	virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51();
	virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61();
	virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71();
	virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79(); virtual void s80(); virtual void s81();
	virtual void s82(); virtual void s83(); virtual void s84(); virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88(); virtual void s89(); virtual void s90(); virtual void s91();
	virtual void s92(); virtual void s93(); virtual void s94(); virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99(); virtual void s100(); virtual void s101();
	virtual void s102(); virtual void s103(); virtual void s104(); virtual void s105(); virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109(); virtual void s110(); virtual void s111();
	virtual void s112(); virtual void s113(); virtual void s114(); virtual void s115(); virtual void s116(); virtual void s117(); virtual void s118(); virtual void s119(); virtual void s120(); virtual void s121();
	virtual void s122(); virtual void s123(); virtual void s124(); virtual void s125(); virtual void s126(); virtual void s127(); virtual void s128(); virtual void s129(); virtual void s130(); virtual void s131();
	virtual void s132(); virtual void s133(); virtual void s134(); virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139(); virtual void s140(); virtual void s141();
	virtual void s142(); virtual void s143(); virtual void s144(); virtual void s145(); virtual void s146(); virtual void s147(); virtual void s148(); virtual void s149(); virtual void s150(); virtual void s151();
	virtual void s152(); virtual void s153(); virtual void s154(); virtual void s155(); virtual void s156(); virtual void s157(); virtual void s158(); virtual void s159(); virtual void s160(); virtual void s161();
	virtual void s162(); virtual void s163(); virtual void s164(); virtual void s165(); virtual void s166(); virtual void s167(); virtual void s168(); virtual void s169(); virtual void s170(); virtual void s171();
	virtual void s172(); virtual void s173(); virtual void s174(); virtual void s175(); virtual void s176(); virtual void s177(); virtual void s178(); virtual void s179(); virtual void s180(); virtual void s181();
	virtual void s182(); virtual void s183(); virtual void s184(); virtual void s185(); virtual void s186(); virtual void s187(); virtual void s188(); virtual void s189(); virtual void s190(); virtual void s191();
	virtual void s192(); virtual void s193(); virtual void s194(); virtual void s195(); virtual void s196(); virtual void s197(); virtual void s198(); virtual void s199(); virtual void s200(); virtual void s201();
	virtual void s202(); virtual void s203(); virtual void s204(); virtual void s205(); virtual void s206(); virtual void s207(); virtual void s208(); virtual void s209(); virtual void s210(); virtual void s211();
	virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216();
	virtual Vector *s217();
	virtual void s218(); virtual void s219(); virtual void s220();
	virtual QAngle *s221();
	virtual void s222(); virtual void s223(); virtual void s224(); virtual void s225(); virtual void s226(); virtual void s227(); virtual void s228(); virtual void s229(); virtual void s230(); virtual void s231();
	virtual void s232(); virtual void s233(); virtual void s234(); virtual void s235(); virtual void s236(); virtual void s237(); virtual void s238(); virtual void s239(); virtual void s240(); virtual void s241();
	virtual void s242(); virtual void s243(); virtual void s244(); virtual void s245(); virtual void s246(); virtual void s247(); virtual void s248(); virtual void s249(); virtual void s250(); virtual void s251();
	virtual void s252(); virtual void s253(); virtual void s254(); virtual void s255(); virtual void s256(); virtual void s257(); virtual void s258(); virtual void s259(); virtual void s260(); virtual void s261();
	virtual void s262(); virtual void s263(); virtual void s264(); virtual void s265(); virtual void s266(); virtual void s267(); virtual void s268(); virtual void s269();
	virtual void s270(CGameTrace *pTrace, void *pBox);
	virtual void s271(); virtual void s272(); virtual void s273(); virtual void s274(); virtual void s275(); virtual void s276(); virtual void s277(); virtual void s278(); virtual void s279(); virtual void s280();
	virtual void s281(); virtual void s282(); virtual void s283(); virtual void s284(); virtual void s285(); virtual void s286(); virtual void s287(); virtual void s288(); virtual void s289(); virtual void s290();
	virtual void s291(); virtual void s292(); virtual void s293(); virtual void s294(); virtual void s295(); virtual void s296(); virtual void s297(); virtual void s298(); virtual void s299(); virtual void s300();
	virtual void s301(); virtual void s302(); virtual void s303(); virtual void s304(); virtual void s305(); virtual void s306(); virtual void s307(); virtual void s308(); virtual void s309(); virtual void s310();
	virtual void s311(); virtual void s312(); virtual void s313(); virtual void s314(); virtual void s315(); virtual void s316(); virtual void s317(); virtual void s318();
	virtual void s319(int a, int b, int c);
	virtual void s320(); virtual void s321(); virtual void s322(); virtual void s323(); virtual void s324(); virtual void s325(); virtual void s326(); virtual void s327();
	virtual char s328();
	virtual char s329();
	virtual void s330(); virtual void s331(); virtual void s332(); virtual void s333(); virtual void s334(); virtual void s335(); virtual void s336(); virtual void s337(); virtual void s338(); virtual void s339();
	virtual void s340(); virtual void s341(); virtual void s342(); virtual void s343(); virtual void s344(); virtual void s345(); virtual void s346(); virtual void s347(); virtual void s348(); virtual void s349();
	virtual void s350(); virtual void s351(); virtual void s352(); virtual void s353(); virtual void s354(); virtual void s355(); virtual void s356(); virtual void s357(); virtual void s358(); virtual void s359();
	virtual void s360(); virtual void s361(); virtual void s362(); virtual void s363(); virtual void s364(); virtual void s365(); virtual void s366(); virtual void s367(); virtual void s368(); virtual void s369();
	virtual void s370(); virtual void s371(); virtual void s372(); virtual void s373(); virtual void s374(); virtual void s375(); virtual void s376(); virtual void s377(); virtual void s378(); virtual void s379();
	virtual void s380(); virtual void s381(); virtual void s382(); virtual void s383(); virtual void s384(); virtual void s385(); virtual void s386(); virtual void s387(); virtual void s388(); virtual void s389();
	virtual void s390(); virtual void s391(); virtual void s392(); virtual void s393(); virtual void s394(); virtual void s395(); virtual void s396(); virtual void s397(); virtual void s398(); virtual void s399();
	virtual void s400(); virtual void s401(); virtual void s402(); virtual void s403();
	virtual int s404(void *pEntity);
};

int sub_100c77d0(void *pHdr, int iSequence, int iBone);
void sub_100c3600(void *pHdr, const float *pAngles, const float *pOrigin, const float *pPos, const float *pQ, int iBone, matrix3x4_t *pBones, CUnknown100c81b0 *pMask);
void sub_10137fe0(const float *pIn, const float *pMatrix, float *pOut);
void sub_10142e90(const Vector *pStart, const Vector *pEnd, int r, int g, int b, unsigned char noDepthTest, float flDuration);
float sub_10146150(const Vector *p);
void sub_10142aa0(const Vector *pOrigin, const Vector *pMins, const Vector *pMaxs, int r, int g, int b, int a, float flDuration);
int sub_101cca80(CMeleeEnt **pList, int nMax, const float *pMins, const float *pMaxs, unsigned int mask, int b);
void sub_101d2530(Ray_t *pRay, int mask, CMeleeEnt *pEnt, CGameTrace *pTrace);
void sub_101cfef0(CGameTrace *pTrace, int a, int b, void *pWeapon, int c);
extern float (*g_1057966c)(Vector &v);	// pfVectorNormalize
extern float (*g_10579660)(float f);	// pfSqrt
extern Vector g_1070d1b0;	// vec3_origin

struct CMeleeCvar { virtual void v0(); virtual char vfunc1(); char m_pad[0x2c - 4]; int m_n2c; };
extern CMeleeCvar *g_10936d7c;
extern CFoo1005f190 g_10936ee0;

extern const float g_1049e038;
struct CMeleeSwingView : CBaseCombatCharacter {
	void sub_10343020(const Vector *pOrigin, const Vector *pAngles, float flFrom, float flTo);
	CMeleeLastBox &LastBox(int i) { return *(CMeleeLastBox *)((char *)this + 0xac0 + i * 0x18); }
};

#define MELEE_LIST(i) (*(CUtlVector4 *)((char *)this + 0xca0 + (i) * 0x14))

// TARGET: CMeleeSwingView::sub_10343020
void CMeleeSwingView::sub_10343020(const Vector *pOrigin, const Vector *pAngles, float flFrom, float flTo)
{
	Vector pos[350];
	CQuat16 q[350];
	matrix3x4_t bones[350];
	CUnknown100c81b0 boneMask;
	CMeleeEnt *pList[100];
	CGameTrace tr;
	ScopeTrace trace("CBaseCombatCharacter::MeleeSwingStep", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	void *pOwnerRaw = *(void **)((char *)this + 0x94);
	void *pHdr = ((CBaseAnimating *)this)->sub_100952d0(-1);
	if (!pHdr)
		return;
	char *pSeq = (char *)((CBaseAnimating *)this)->sub_1008d990(m_nSequence6f0);
	if (!pSeq)
		return;
	int nBoxes = (*(int *)(pSeq + 0x2c4) < 20) ? *(int *)(pSeq + 0x2c4) : 20;
	boneMask.sub_100c7f30(pHdr, 8);
	((CBaseAnimating *)this)->sub_1008e770(pos, (Quaternion *)q, m_nSequence6f0, *(int *)&flTo, (float *)((char *)this + 0x690), &boneMask);
	int iLastBone = -1;
	void *pWeapon;
	pWeapon = sub_1032e7b0();
	int i;
	for (i = 0; i < nBoxes; i++) {
		int iBone = sub_100c77d0(pHdr, m_nSequence6f0, ((CMeleeSeq *)pSeq)->pBox(i)->m_iBone);
		if (iBone < 0)
			continue;
		if (iLastBone != iBone) {
			iLastBone = iBone;
			sub_100c3600(pHdr, &pAngles->x, &pOrigin->x, &pos[0].x, q[0].q, iBone, bones, &boneMask);
		}
		Vector vBox[2];
		sub_10137fe0(&((CMeleeSeq *)pSeq)->pBox(i)->m_vecMins.x, &bones[iBone].m[0][0], &vBox[0].x);
		sub_10137fe0(&((CMeleeSeq *)pSeq)->pBox(i)->m_vecMaxs.x, &bones[iBone].m[0][0], &vBox[1].x);
		if (g_10936d78.GetInt() == 1)
			sub_10142e90(&vBox[0], &vBox[1], 0, 255, 255, 1, 0);
		Vector vDelta = vBox[1] - vBox[0];
		int nSteps = (int)ceil(sub_10146150(&vDelta) * 0.16666667f);
		if (nSteps < 2) {
			nSteps = 1;
			vBox[0] = vBox[1] = (vBox[0] + vBox[1]) * 0.5f;
		}
		if (m_bMeleeSwingIsLive && ((CMeleeSeq *)pSeq)->pBox(i)->m_flStart <= flTo && ((CMeleeSeq *)pSeq)->pBox(i)->m_flEnd >= flFrom) {
			int j;
			if (g_10936d78.GetInt() == 1) {
				for (j = 0; j < nSteps; j++) {
					float t = (nSteps > 1) ? 1.0f - (float)j / (float)(nSteps - 1) : g_104454c4;
					Vector a = vBox[0] + (vBox[1] - vBox[0]) * t;
					Vector b = LastBox(i).m_vecMin + (LastBox(i).m_vecMax - LastBox(i).m_vecMin) * t;
					sub_10142e90(&b, &a, 0, 255, 0, 0, 0.5f);
				}
			}
			Vector bmin, bmax;
			VectorMin(vBox[0], vBox[1], bmin);
			CMeleeLastBox &last = LastBox(i);
			bmin.x = (bmin.x < last.m_vecMin.x) ? bmin.x : last.m_vecMin.x;
			bmin.y = (bmin.y < last.m_vecMin.y) ? bmin.y : last.m_vecMin.y;
			bmin.z = (bmin.z < last.m_vecMin.z) ? bmin.z : last.m_vecMin.z;
			bmin.x = (bmin.x < last.m_vecMax.x) ? bmin.x : last.m_vecMax.x;
			bmin.y = (bmin.y < last.m_vecMax.y) ? bmin.y : last.m_vecMax.y;
			bmin.z = (bmin.z < last.m_vecMax.z) ? bmin.z : last.m_vecMax.z;
			VectorMax(vBox[0], vBox[1], bmax);
			bmax.x = (bmax.x > last.m_vecMin.x) ? bmax.x : last.m_vecMin.x;
			bmax.y = (bmax.y > last.m_vecMin.y) ? bmax.y : last.m_vecMin.y;
			bmax.z = (bmax.z > last.m_vecMin.z) ? bmax.z : last.m_vecMin.z;
			bmax.x = (bmax.x > last.m_vecMax.x) ? bmax.x : last.m_vecMax.x;
			bmax.y = (bmax.y > last.m_vecMax.y) ? bmax.y : last.m_vecMax.y;
			bmax.z = (bmax.z > last.m_vecMax.z) ? bmax.z : last.m_vecMax.z;
			if (g_10936d78.GetInt() == 2) {
				Vector center = (bmax + bmin) * 0.5f;
				Vector mins = bmin - center;
				Vector maxs = bmax - center;
				sub_10142aa0(&center, &mins, &maxs, 0, 255, 0, 40, 0.5f);
			}
			int nEnts = sub_101cca80(pList, 100, &bmin.x, &bmax.x, 0x22102080, 1);
			for (int k = 0; k < nEnts; k++) {
				CMeleeEnt *pEnt = pList[k];
				CMeleeChar *pChar = pEnt->m_pChar;
				CMV *pOwner = (CMV *)pOwnerRaw;
				if (pOwner && !g_10936ee0.sub_1005f190() && pChar && (void *)pChar != (void *)pOwner) {
					int r = pOwner->s404(pChar);
					if (r != 1 && r != 2)
						continue;
					if (((CBCCView *)pOwner)->sub_10323930(pChar))
						continue;
				}
				if (!pEnt->IsSolid())
					continue;
				if (((CMeleeEnt *)this)->IsSolidFlagSet(4))
					continue;
				if (((CUnknown100b5190 *)pEnt)->sub_100b5190())
					continue;
				if (pChar && !pChar->m_b1480)
					continue;
				int n = MELEE_LIST(i).m_size;
				while (n--) {
					if (((const CBaseHandle *)&MELEE_LIST(i).m_pMemory[n])->Get() == (IHandleEntity *)pEnt)
						break;
				}
				if (n >= 0)
					continue;
				if (sub_1012c9c0((TEnt *)pEnt) == (TEnt *)this) {
					CBaseHandle h;
					h = (IHandleEntity *)pEnt;
					((CMeleeList *)&MELEE_LIST(i))->AddToTail(*(int *)&h);
					continue;
				}
				if (pChar && !((CMV *)pChar)->s329()) {
					for (j = 0; j < nSteps; j++) {
						float t = (nSteps > 1) ? 1.0f - (float)j / (float)(nSteps - 1) : g_104454c4;
						Vector cur = vBox[0] + (vBox[1] - vBox[0]) * t;
						Vector prev = LastBox(i).m_vecMin + (LastBox(i).m_vecMax - LastBox(i).m_vecMin) * t;
						MeleeRay ray;
						ray.Init(prev, cur, g_1070d1b0, g_1070d1b0, 1, 0);
						sub_101d2530(&ray, 0x200400b, pEnt, &tr);
						if (tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid) {
							CBaseHandle h;
							h.m_Index = *((CMV *)pEnt)->s1();
							float flStart = ((CMeleeSeq *)pSeq)->pBox(i)->m_flStart;
							float flEnd = ((CMeleeSeq *)pSeq)->pBox(i)->m_flEnd;
							for (int b = 0; b < nBoxes; b++) {
								if (flStart <= ((CMeleeSeq *)pSeq)->pBox(b)->m_flEnd && flEnd >= ((CMeleeSeq *)pSeq)->pBox(b)->m_flStart)
									((CMeleeList *)&MELEE_LIST(b))->AddToTail(*(int *)&h);
							}
							if (pWeapon)
								((CMV *)pWeapon)->s270(&tr, ((CMeleeSeq *)pSeq)->pBox(i));
							break;
						}
					}
				} else {
					CGameTrace tr2;
					tr2.m_pEnt = (CBaseEntity *)pEnt;
					*(Vector *)tr2.m_endpos = *((CMV *)pEnt)->s217();
					*(Vector *)tr2.m_startpos = *((CMV *)this)->s217();
					tr2.m_physicsbone = 0;
					tr2.m_hitbox = 0;
					tr2.m_hitgroup = 0;
					for (int b = 0; b < nBoxes; b++) {
						CBaseHandle h;
						h.m_Index = *((CMV *)pEnt)->s1();
						((CMeleeList *)&MELEE_LIST(b))->AddToTail(*(int *)&h);
					}
					if (pWeapon)
						((CMV *)pWeapon)->s270(&tr2, ((CMeleeSeq *)pSeq)->pBox(i));
				}
			}
			if (((CMV *)this)->s328()) {
				for (j = 0; j < nSteps; j++) {
					float t = (nSteps > 1) ? 1.0f - (float)j / (float)(nSteps - 1) : g_104454c4;
					Vector prev = LastBox(i).m_vecMin + (LastBox(i).m_vecMax - LastBox(i).m_vecMin) * t;
					Vector cur = vBox[0] + (vBox[1] - vBox[0]) * t;
					Vector delta = cur - prev;
					CGameTrace wtr;
					{ Vector vecStart = prev, vecEnd = cur; UTIL_TraceLine_Calls(vecStart, vecEnd, 0x400b, this, 0, &wtr); }
					Vector end = prev + delta * wtr.m_fraction;
					if (wtr.m_fraction < 1.0f || wtr.m_allsolid || wtr.m_startsolid) {
						if ((*(Vector *)wtr.m_planeNormal).LengthSqr() > g_104454c4 && (float)fabs(DotProduct((*(Vector *)wtr.m_planeNormal), Vector(0, 0, 1))) < 0.3f) {
							Vector fwd;
							::sub_10139610(*((CMV *)this)->s221(), &fwd, 0, 0);
							fwd.z = 0;
							if (fwd.LengthSqr() > g_1049e038 * g_1049e038) {
								VectorNormalize(fwd);
								if ((float)fabs((*(Vector *)wtr.m_planeNormal).Dot(fwd)) > 0.70710677f) {
									const Vector &o = *((CMV *)this)->s217();
									float dx = end.x - o.x;
									float dy = end.y - o.y;
									if (g_10579660(dx * dx + dy * dy) < 20.0f) {
										((CMV *)this)->s319(0, 0, 0);
										break;
									}
								}
							}
							if (!*((char *)this + 0xaa0)) {
								if (pWeapon)
									sub_101cfef0(&wtr, 0x80, 1, pWeapon, 0);
								*((char *)this + 0xaa0) = 1;
							}
						}
					}
				}
			}
		} else
			((CMeleeList *)&MELEE_LIST(i))->RemoveAll();
		LastBox(i).m_vecMin = vBox[0];
		{ LastBox(i).m_vecMax = vBox[1]; }
	}
	for (; i < 20; i++)
		((CMeleeList *)&MELEE_LIST(i))->RemoveAll();
}
// END FUNCTION

// FUNCTION: 0x103449b0 size=0x23c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown10344c80.h"
#include "CUnknown1073dc28.h"
// TARGET: CBaseCombatCharacter::sub_103449b0
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "Vector.h"
#include "QAngle.h"
#include <stdlib.h>
#include "CBCCSlotViews.h"
#include "ScopeTrace.h"

extern void (*g_109f362c)(const char *pszFormat, ...);	// Warning
extern int (*g_109f3868)(int nMin, int nMax);	// RandomInt
float sub_101d2c70(const Vector *pVec);

class CUnknown10344da0
{
public:
	bool sub_10344da0(int a);
};

class CSlot192View
{
public:
	VIEW_SLOT100(0)
	VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13) VIEW_SLOT10(14)
	VIEW_SLOT10(15) VIEW_SLOT10(16) VIEW_SLOT10(17) VIEW_SLOT10(18)
	VIEW_SLOT(190) VIEW_SLOT(191)
	virtual float *vfunc192(float *pOut);
};

class CSlot218View
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1)
	VIEW_SLOT10(20)
	VIEW_SLOT(210) VIEW_SLOT(211) VIEW_SLOT(212) VIEW_SLOT(213) VIEW_SLOT(214)
	VIEW_SLOT(215) VIEW_SLOT(216) VIEW_SLOT(217)
	virtual void vfunc218(const QAngle &angles);
	virtual const QAngle &vfunc219();
};

class CSlot323View
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2)
	VIEW_SLOT10(30) VIEW_SLOT10(31)
	VIEW_SLOT(320) VIEW_SLOT(321) VIEW_SLOT(322)
	virtual int vfunc323(const Vector *pDir);
};

class CSlot401View
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2) VIEW_SLOT100(3)
	VIEW_SLOT(400)
	virtual int vfunc401(int a);
};

struct CKnockbackInfo
{
	char m_pad00[0x28];
	int m_nCount[4];	// 0x28
	int m_nActivity[4][4];	// 0x38
	int m_nNameOfs[4][4];	// 0x78

	void PickActivity(CSlot401View *pChar, int &side, int &activity)
	{
		if (m_nCount[side] <= 0)
			side = 0;
		int nRand;
		if (m_nCount[side] > 0)
		{
			nRand = g_109f3868(0, abs(m_nCount[side]) - 1);
			activity = m_nActivity[side][nRand];
		}
		else
		{
			nRand = -1;
			activity = pChar->vfunc401(side);
		}
		if (activity == -1 && nRand >= 0)
			g_109f362c("melee attack sequence has knockback activity '%s' which is undefined in code\n",
				(char *)this + m_nNameOfs[side][nRand]);
	}
};

inline float anglemod(float a)
{
	a = (360.f / 65536) * ((int)(a * (65536.f / 360.0f)) & 65535);
	return a;
}

int CBaseCombatCharacter::sub_103449b0(CBaseEntity *pAttacker, CBaseEntity *pOther, void *pInfo)
{
	ScopeTrace trace("CBaseCombatCharacter::GetKnockbackActivity",
		this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	float vecOther[3];
	float vecThis[3];
	float *pOtherPos = ((CSlot192View *)pOther)->vfunc192(vecOther);
	float *pThisPos = ((CSlot192View *)this)->vfunc192(vecThis);
	Vector vecDelta = *(Vector *)pThisPos - *(Vector *)pOtherPos;

	int side = ((CSlot323View *)this)->vfunc323(&vecDelta);
	int activity;
	if (pInfo)
		((CKnockbackInfo *)pInfo)->PickActivity((CSlot401View *)this, side, activity);
	else
		activity = 0x8b;

	if (this->m_pA8)
		activity = ((CUnknown10344c80 *)this)->sub_10344c80(activity);

	if (((CUnknown10344da0 *)this)->sub_10344da0(activity))
		side = 0;

	if (this->m_pA8 == 0)
	{
		float flAngle = sub_101d2c70(&vecDelta);
		switch (side)
		{
		case 0:
			flAngle += 180.0f;
			break;
		case 1:
			flAngle += 270.0f;
			break;
		case 3:
			flAngle += 90.0f;
			break;
		}

		QAngle ang = ((CSlot218View *)this)->vfunc219();
		ang.y = anglemod(flAngle);
		((CSlot218View *)this)->vfunc218(ang);
	}

	return activity;
}
// END FUNCTION

// FUNCTION: 0x10344c80 size=0xe0
#include "CUnknown10344c80.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CUnknown10344c80::sub_10344c80(int activity)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::TranslateFlyingKnockbackActivity";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	switch (activity) {
	case 0x8b:
		--*g_109f3680;
		return 0x87;
	case 0x8c:
		--*g_109f3680;
		return 0x88;
	case 0x8d:
		--*g_109f3680;
		return 0x89;
	case 0x8e:
		--*g_109f3680;
		return 0x8a;
	default:
		--*g_109f3680;
		return activity;
	}
}
// END FUNCTION

// FUNCTION: 0x10344da0 size=0x1c
// TARGET: sub_10344da0
bool __stdcall sub_10344da0(int a)
{
	if (a >= 0x8b && a <= 0x93)
		return true;
	return false;
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

// FUNCTION: 0x10344f80 size=0x1c5
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "CStatDefault3List.h"
#include "CUnknown10344c80.h"

extern CStatDefault3List g_10738d10;
bool sub_1013d900(int nSide, int nStrength, int nHeight, int *pSequences);
float sub_101d2c70(const Vector *pDirection);

#define SV1(p) virtual void p();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct SKnockbackView
{
	SV100(sa) SV100(sb) SV10(sc0) SV1(sc10) SV1(sc11) SV1(sc12) SV1(sc13) SV1(sc14) SV1(sc15) SV1(sc16) SV1(sc17)
	virtual void vfunc218(const QAngle &angles);
	virtual const QAngle &vfunc219();
	SV100(sd)
	virtual void vfunc320(int a, int nActivity);
	SV1(se0) SV1(se1) SV1(se2)
	SV10(sf0) SV10(sf1) SV10(sf2) SV10(sf3) SV10(sf4) SV10(sf5) SV10(sf6) SV1(sg0) SV1(sg1) SV1(sg2) SV1(sg3) SV1(sg4) SV1(sg5)
	virtual char vfunc400();
};

namespace block_10344f80 {
#pragma auto_inline(off)
struct CBCCUnit : CBaseCombatCharacter { char sub_10344da0(int a); };
char CBCCUnit::sub_10344da0(int a)
{
	if (a >= 0x8b && a <= 0x93)
		return true;
	return false;
}
#pragma auto_inline(on)
}
using namespace block_10344f80;
inline float anglemod(float a)
{
	a = (360.0f / 65536) * ((int)(a * (65536 / 360.0f)) & 65535);
	return a;
}

void CBaseCombatCharacter::sub_10344f80(const Vector *pDirection, int nHeight, int nStrength)
{
	SKnockbackView *pThis = (SKnockbackView *)this;
	if (pThis->vfunc400() || (!g_10738d10.sub_101d5f10(this)->m_98[6] && !CVStatListSet::Of(this)->Find(0)->sub_102017b0(0xf, 0x11))) {
		int nSide = vfunc323(pDirection);
		int nSeq[4];
		if (sub_1013d900(nSide, nStrength, nHeight, nSeq)) {
			int nActivity = ((CBaseAnimating *)this)->sub_1008f6c0(nSeq[0]);
			if (m_pA8) {
				nActivity = ((CUnknown10344c80 *)this)->sub_10344c80(nActivity);
			}
			char bOwn;
			bOwn = ((CBCCUnit *)this)->sub_10344da0(nActivity);
			if (bOwn) nSide = 0;
			if (!m_pA8) {
				float flYaw = sub_101d2c70(pDirection);
				switch (nSide) {
				case 0:
					flYaw += 180.0f;
					break;
				case 1:
					flYaw += 270.0f;
					break;
				case 3:
					flYaw += 90.0f;
					break;
				}
				QAngle angles = pThis->vfunc219();
				angles.y = anglemod(flYaw);
				pThis->vfunc218(angles);
			}
			pThis->vfunc320(0, nActivity);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103451d0 size=0x10b
#include "CNPC_VTzimisce.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

struct MeleeSeqEvent
{
	float m_flStart;
	float m_flEnd;
	char m_pad08[0xbc - 8];
};

struct MeleeSeqDesc
{
	char m_pad000[0x2c4];
	int m_nEvents;
	int m_nEventIndex;
	MeleeSeqEvent *pEvent(int i) { return (MeleeSeqEvent *)((char *)this + m_nEventIndex) + i; }
};

bool CBaseCombatCharacter::sub_103451d0(float flTime)
{
	ScopeTrace trace("CBaseCombatCharacter::IsMeleeSwingActive", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_100952d0(-1);
	MeleeSeqDesc *pSeq = (MeleeSeqDesc *)((CBaseAnimating *)this)->sub_1008d990(m_nSequence6f0);
	if (!sub_1032e7b0())
		return true;
	int nEvents = (pSeq->m_nEvents < 20) ? pSeq->m_nEvents : 20;
	int i;
	if (nEvents > 0) {
		for (i = 0, flTime = m_fl6f8 - flTime; i < nEvents; i++)
		{
			if (flTime >= pSeq->pEvent(i)->m_flStart && flTime < pSeq->pEvent(i)->m_flEnd)
				return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10345330 size=0xed
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
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

extern char g_10623af4[];

struct CBCC_SeqEvent
{
	int m_n0;
	float cycle;
	int m_n8[45];
};

struct CBCC_SeqDesc
{
	char m_pad0[0x2c4];
	int numevents;
	int eventindex;
	CBCC_SeqEvent *pEvent(int i) const { return (CBCC_SeqEvent *)(((unsigned char *)this) + eventindex) + i; }
};

// TARGET: CBaseCombatCharacter::sub_10345330
bool CBaseCombatCharacter::sub_10345330()
{
	ScopeTrace trace(g_10623af4, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	((CBaseAnimating *)this)->sub_100952d0(-1);
	CBCC_SeqDesc *pSeq = (CBCC_SeqDesc *)((CBaseAnimating *)this)->sub_1008d990(m_nSequence6f0);
	if (sub_1032e7b0())
	{
		int n = pSeq->numevents < 20 ? pSeq->numevents : 20;
		if (n > 0)
		{
			for (int i = 0; i < n; i++)
			{
				if (m_fl6f8 < pSeq->pEvent(i)->cycle)
					return false;
			}
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10345460 size=0x3
#include "CBaseCombatCharacter.h"
char CBaseCombatCharacter::vfunc327()
{
	return (char)(true);
}
// END FUNCTION

// FUNCTION: 0x10345480 size=0x2e
#include "CBaseAnimating.h"
struct SeqDesc { char pad[0x2e8]; int off; };
int __fastcall sub_10345480(CBaseAnimating *pThis)
{
    SeqDesc *p = (SeqDesc *)pThis->sub_1008d990(*(int *)((char *)pThis + 0x6f0));
    if (p && p->off >= 0)
        return pThis->sub_1008f7b0((const char *)p + p->off);
    return -1;
}
// END FUNCTION

// FUNCTION: 0x103454c0 size=0x2e
#include "CBaseAnimating.h"
struct SeqDesc { char pad[0x2ec]; int off; };
int __fastcall sub_103454c0(CBaseAnimating *pThis)
{
    SeqDesc *p = (SeqDesc *)pThis->sub_1008d990(*(int *)((char *)pThis + 0x6f0));
    if (p && p->off >= 0)
        return pThis->sub_1008f7b0((const char *)p + p->off);
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10345500 size=0x5
extern const float g_1049e044;
extern const float g_10457f5c;
float g_10937b10 = g_10457f5c + g_1049e044;
// END FUNCTION

// FUNCTION: 0x10345550 size=0x5
extern const float g_1049e044;
extern const float g_1049e8a8;
float g_1093715c = g_1049e8a8 + g_1049e044;
// END FUNCTION

// FUNCTION: 0x103455a0 size=0x15b
#include "CBaseCombatCharacter.h"
#include "QAngle.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CSlotView192
{
	SV100(a) SV10(b0) SV10(b1) SV10(b2) SV10(b3) SV10(b4) SV10(b5) SV10(b6) SV10(b7) SV10(b8) SV1(c0) SV1(c1)
	virtual Vector vfunc192();
};

struct CWeaponInfoView
{
	char m_pad0000[0xb8];
	signed char m_nKind;
	char m_pad00b9;
	signed char m_nClass;
};

extern Vector g_1070d1b0;
extern float g_1049e044;
extern float g_10937b10;
extern float g_1093715c;

float sub_101d2c70(const Vector *pVec);
void sub_10139550(const QAngle &angles, Vector *pForward);

void CBaseCombatCharacter::sub_103455a0(CBaseEntity *pTarget, void *pInfo, Vector *pOut)
{
	if (!pTarget)
	{
		*pOut = g_1070d1b0;
		return;
	}
	CWeaponInfoView *pView = (CWeaponInfoView *)pInfo;
	int nKind = pView->m_nKind;
	float flFactor = g_1049e044;
	switch (pView->m_nClass)
	{
	case 1:
		flFactor = g_10937b10;
		break;
	case 2:
		flFactor = g_1093715c;
		break;
	}
	float flAttack = sub_10346070() * 0.1f;
	flAttack = flAttack * 0.39999998f;
	float flScale = (flAttack + 1.0f) * flFactor;
	Vector vecDelta = ((CSlotView192 *)pTarget)->vfunc192() - ((CSlotView192 *)this)->vfunc192();
	float flYaw = sub_101d2c70(&vecDelta);
	switch (nKind)
	{
	case 1:
		flYaw += 270.0f;
		break;
	case 2:
		flYaw += 180.0f;
		break;
	case 3:
		flYaw += 90.0f;
		break;
	}
	QAngle angles(-45.0f, flYaw, 0.0f);
	sub_10139550(angles, pOut);
	pOut->x = flScale * pOut->x;
	pOut->y = flScale * pOut->y;
	pOut->z = flScale * pOut->z;
}
// END FUNCTION

// FUNCTION: 0x10345760 size=0xe9
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
extern const float g_1049e048;

#define SV1(p) virtual void p();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CCharOriginView
{
    SV100(a) SV100(b)
    SV10(c0)
    SV1(c10) SV1(c11) SV1(c12) SV1(c13) SV1(c14) SV1(c15) SV1(c16)
    virtual const Vector &GetAbsOrigin();
};
struct SeqDescX { char pad[0x2d0]; float flRange; };

bool CBaseCombatCharacter::sub_10345760(const Vector *pTarget)
{
    ScopeTrace trace("CBaseCombatCharacter::IsMeleeSwingInRange", this ? STRINGR(m_name26c) : g_105387dc);
    float flDist = (*pTarget - ((CCharOriginView *)this)->GetAbsOrigin()).Length2D();
    ((CBaseAnimating *)this)->sub_100952d0(-1);
    SeqDescX *pSeq = (SeqDescX *)((CBaseAnimating *)this)->sub_1008d990(*(int *)((char *)this + 0x6f0));
    if (flDist <= (pSeq->flRange + g_1049e048))
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10345890 size=0xb6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

void sub_10345890(const float *a, const float *b, float frac, float *out)
{
	ScopeTrace trace("AngleInterp", g_106b8540);
	for (int i = 0; i < 3; i++) {
		unsigned short v = (unsigned short)((b[i] - a[i] + 180.0f) * (65536.0f / 360.0f));
		out[i] = ((float)v * (360.0f / 65536.0f) - 180.0f) * frac + a[i];
	}
}
// END FUNCTION

// FUNCTION: 0x10345980 size=0xe3
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
struct SEntityEntry
{
    int m_pad;
    void *m_pEnt;
    unsigned int m_serial;
};

struct SMeleeRecord
{
    unsigned int m_hEnt;
    int m_data[3];
};

extern int *g_109f3680;
extern const char **g_109f3620;
extern const char g_105387dc[];
extern const char g_106b8540[];
extern const char g_10623b68[];
extern SEntityEntry *g_10566458;

static inline void *GetEnt(unsigned int h)
{
    if (h == 0xffffffff)
        return 0;
    void **q = &g_10566458[h & 0x1fff].m_pEnt;
    if ((unsigned int)q[1] == (h >> 13))
        return q[0];
    return 0;
}

// TARGET: CBaseCombatCharacter::sub_10345980
char *CBaseCombatCharacter::sub_10345980(CBaseEntity *pEnt)
{
    const char *name;
    if (this) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else {
        name = g_105387dc;
    }
    g_109f3620[*g_109f3680 * 3] = g_10623b68;
    g_109f3620[*g_109f3680 * 3 + 1] = name;
    g_109f3620[*g_109f3680 * 3 + 2] = g_106b8540;
    ++*g_109f3680;
    int i = 0;
    if (0 < *(int *)((char *)this + 0xa94)) {
        SMeleeRecord *recs = *(SMeleeRecord **)((char *)this + 0xa88);
        SMeleeRecord *p = recs;
        do {
            if (GetEnt(p->m_hEnt) == pEnt) {
                --*g_109f3680;
                return (char *)&recs[i];
            }
            i++;
            p++;
        } while (i < *(int *)((char *)this + 0xa94));
    }
    --*g_109f3680;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10345ab0 size=0x1c8
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
#include "Vector.h"
void sub_10139550(const float *ang, Vector *out);
char __fastcall sub_1000ebb5(void *p);
char __fastcall sub_1000f786(void *p);
char __fastcall sub_100040ed(void *p);
typedef char (__fastcall *PFN_B)(void *);
typedef float *(__fastcall *PFN_F)(void *);
extern float g_1049e024;
extern float g_104454c4;

// TARGET: CBaseCombatCharacter::sub_10345ab0
bool CBaseCombatCharacter::sub_10345ab0(CBaseEntity *pOther)
{
	ScopeTrace trace("CBaseCombatCharacter::WasMeleeBlocked", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pOther && ((PFN_B)(*(void ***)pOther)[324])(pOther) && ((CBaseCombatCharacter *)pOther)->sub_10345d00())
	{
		Vector fwd;
		sub_10139550(((PFN_F)(*(void ***)pOther)[219])(pOther), &fwd);
		const Vector *a = (const Vector *)((PFN_F)(*(void ***)pOther)[217])(pOther);
		const Vector *b = (const Vector *)((PFN_F)(*(void ***)this)[217])(this);
		Vector dir = *b - *a;
		if (!(VectorNormalize(dir) > g_1049e024) || !(dir.x * fwd.x + dir.y * fwd.y + dir.z * fwd.z <= g_104454c4))
		{
			if (*(void **)((char *)pOther + 0xa8))
			{
				if (sub_1000ebb5(*(void **)((char *)pOther + 0xa8)))
					return true;
				return false;
			}
			char *p = sub_10345980(pOther);
			if (p)
			{
				if (sub_1000f786(p))
					return true;
				if (sub_100040ed(p))
					return true;
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10345d00 size=0xa1
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool CBaseCombatCharacter::sub_10345d00()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::IsHoldingMeleeWeapon";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
	if (!pWeapon) {
		(*g_109f3680)--;
		return false;
	}
	if ((pWeapon->vfunc360() & 0x18000) == 0) {
		(*g_109f3680)--;
		return false;
	}
	(*g_109f3680)--;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10345de0 size=0xe5
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
struct SEntityEntry
{
    int m_pad;
    void *m_pEnt;
    unsigned int m_serial;
};

struct SMeleeRecord
{
    unsigned int m_hEnt;
    int m_data[3];
};

extern int *g_109f3680;
extern const char **g_109f3620;
extern const char g_105387dc[];
extern const char g_106b8540[];
extern const char g_10623bfc[];
extern SEntityEntry *g_10566458;

static inline void *GetEnt(unsigned int h)
{
    if (h == 0xffffffff)
        return 0;
    void **q = &g_10566458[h & 0x1fff].m_pEnt;
    if ((unsigned int)q[1] == (h >> 13))
        return q[0];
    return 0;
}

// TARGET: CBaseCombatCharacter::sub_10345de0
int CBaseCombatCharacter::sub_10345de0(CBaseEntity *pEnt)
{
    const char *name;
    if (this) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else {
        name = g_105387dc;
    }
    g_109f3620[*g_109f3680 * 3] = g_10623bfc;
    g_109f3620[*g_109f3680 * 3 + 1] = name;
    g_109f3620[*g_109f3680 * 3 + 2] = g_106b8540;
    ++*g_109f3680;
    int i = 0;
    if (0 < *(int *)((char *)this + 0xa94)) {
        SMeleeRecord *recs = *(SMeleeRecord **)((char *)this + 0xa88);
        SMeleeRecord *p = recs;
        do {
            if (GetEnt(p->m_hEnt) == pEnt) {
                int n = (*(SMeleeRecord **)((char *)this + 0xa88))[i].m_data[0];
                --*g_109f3680;
                return n;
            }
            i++;
            p++;
        } while (i < *(int *)((char *)this + 0xa94));
    }
    --*g_109f3680;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10345f10 size=0x9d
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
CBaseEntity * __stdcall sub_1008d990(unsigned int handle);

int CBaseCombatCharacter::sub_10345f10()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : g_106b8540;
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::GetBlockReactionActivity";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	CBaseEntity *pEnt = ::sub_1008d990(*(unsigned int *)((char *)this + 0x6f0));
	if (pEnt) {
		int act = pEnt->m_pEdict2e0;
		if (act >= 0) {
			(*g_109f3680)--;
			return act;
		}
	}
	(*g_109f3680)--;
	return 0x1153;
}
// END FUNCTION

// FUNCTION: 0x10345fe0 size=0xa
#include "ConVar.h"
ConVar g_10937208("raw_attack_value_forced", "-1.0", 0);
// END FUNCTION

// FUNCTION: 0x10346070 size=0x145
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "CNPC_VTzimisce.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "ConVar.h"
struct CAttackSource { int a, b, c, d; int sub_10204900(CBaseCombatCharacter *pChar); };
struct CAttackSourceSlot { CAttackSource src; char pad[0x34]; };
extern ConVar g_10937208;

// TARGET: CBaseCombatCharacter::sub_10346070
float CBaseCombatCharacter::sub_10346070()
{
    ScopeTrace trace("CBaseCombatCharacter::GetRawAttackValue", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
    if (!pWeapon)
        return 0.0f;
    if (g_10937208.GetFloat() >= 0.0f)
        return g_10937208.GetFloat();
    CAttackSource src = ((CAttackSourceSlot *)((char *)pWeapon + 0x7a0))[*pWeapon->sub_102517e0()].src;
    return (float)src.sub_10204900(this);
}
// END FUNCTION

// FUNCTION: 0x10346220 size=0x98
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBaseCombatCharacter.h"
#include "CVDmg_t.h"
#include "ScopeTrace.h"

// TARGET: CBaseCombatCharacter::sub_10346220
float CBaseCombatCharacter::sub_10346220()
{
	ScopeTrace trace("CBaseCombatCharacter::GetRawDefenseValue", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CVDmgBlock16_t block(4, 0xc);
	return (float)block.sub_10204900(this);
}
// END FUNCTION

// FUNCTION: 0x103462f0 size=0xa
#include "ConVar.h"
ConVar g_10937078("defense_bonus_cap", "10", 0);
// END FUNCTION

// FUNCTION: 0x10346380 size=0x30d
#include "CNPC_VTzimisce.h"
#define CVDmg_t() CVDmg_t(); ~CVDmg_t()
#include "CVDmg_t.h"
#undef CVDmg_t
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
#include "CUtlVector16.h"
#include "CVDmg_t.h"
#include "CUnknown101d8a70.h"
#include "CUnknown1028b190.h"
#include "CWeaponOwner.h"
#include "ScopeTrace.h"
#include "ConVar.h"
extern ConVar g_1074f048;
extern ConVar g_10937078;
extern void (*g_109f3630)(const char *pMsg, ...);
inline void *operator new(unsigned int, void *p) { return p; }
inline int MeleeFloor(int a) { if (a <= 0) return 0; return a; }

struct CMeleeDbgObj { virtual void v0(); virtual char v1(); char pad[0x28]; int m_n2c; };
extern CMeleeDbgObj *g_1074f04c;
extern CMeleeDbgObj *g_1093707c;
struct CMeleeRoll { EHANDLE m_hTarget; int m_nLethality; int m_nDefense; int m_nSoak; };
struct CMeleeLethal { int sub_10258290(CBaseCombatCharacter *p); };
int __cdecl sub_1022f4f0(CBaseEntity *pTarget, int a, int b);
struct CMeleeUnk101e8ef0 { int sub_101e8ef0(CBaseEntity *p); };
extern char g_10739d08[];
struct CMeleeOwner { char pad[0x98]; char *m_p98; };

int CBaseCombatCharacter::sub_10346380(CBaseEntity *pTarget)
{
	ScopeTrace scope("CBaseCombatCharacter::CalcAndStoreMeleeDiceRolls", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!pTarget)
		return -1;
	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
	if (!pWeapon)
		return -1;
	int *pSlot = (int *)pWeapon->sub_102517e0();
	int index = *(int *)((char *)this + 0xa94);
	CUtlVector16 *pRolls = (CUtlVector16 *)((char *)this + 0xa88);
	pRolls->sub_10349d50(1);
	pRolls->sub_10349e10(index, 1);
	new (&((CMeleeRoll *)pRolls->m_pMemory)[index]) CMeleeRoll;
	CMeleeRoll *pRoll = &((CMeleeRoll *)pRolls->m_pMemory)[index];
	if (!pRoll)
		return -1;
	*(unsigned int *)&pRoll->m_hTarget = *pTarget->vfunc1();
	pRoll->m_nLethality = ((CMeleeLethal *)pWeapon)->sub_10258290(this);
	if (g_1074f048.GetBool())
		g_109f3630("Melee Attack: (lethality) = %d\n", pRoll->m_nLethality);
	if (g_1074f048.GetBool())
		g_109f3630("Rolling Defense\n");
	int nSeed = ((CMeleeUnk101e8ef0 *)g_10739d08)->sub_101e8ef0(pTarget);
	CVDmgBlock16_t block(4, 0xc);
	CUnknown101d8a70 result;
	result.sub_101d8820((int)pTarget, 0, &block, nSeed);
	{
		int pv;
		result.sub_101d8a70(&pv);
	}
	pRoll->m_nDefense = MeleeFloor(result.m_n04 - result.m_n0c);
	if (m_pA8 && ((CMeleeOwner *)pTarget)->m_p98) {
		CUnknown1028b190 *pTable = (CUnknown1028b190 *)(((CMeleeOwner *)pTarget)->m_p98 + 0x6028);
		int bonus = pTable->sub_1028b300(this);
		if (bonus > g_10937078.GetInt())
			bonus = g_10937078.GetInt();
		if (g_1074f048.GetBool())
			g_109f3630("Added Defense Bonus of %d since player is using the same move on this NPC\n", bonus);
		pRoll->m_nDefense += bonus;
		pTable->sub_1028b190(this);
		pTarget = *(CBaseEntity *volatile *)&pTarget;
	}
	CVDmg_t dmg = *(CVDmg_t *)((char *)pWeapon + 0x77c + *pSlot * 0x44);
	if (g_1074f048.GetBool())
		g_109f3630("Rolling Soak\n");
	int nSoak = sub_1022f4f0(pTarget, dmg.m_pad0000, dmg.m_field10);
	if ((char)(int)pRoll == -1) pRoll->m_nSoak = nSoak; else pRoll->m_nSoak = nSoak;
	return index;
}
// END FUNCTION

// FUNCTION: 0x10346760 size=0x94
#include "CBaseCombatCharacter.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_10346760()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::ForceMeleeReset";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	*((char *)this + 0xaa1) = 1;
	*((char *)this + 0xaa2) = 0;
	*((char *)this + 0xaa3) = 0;
	*(int *)((char *)this + 0xa94) = 0;
	*((char *)this + 0xaa0) = 0;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10346830 size=0xad
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

#define MA_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SMeleeTarget
{
	char m_pad0000[0x9c];
	int m_n009c;
};

struct SMeleeActor
{
	MA_V10(a0) MA_V10(a1) MA_V10(a2) MA_V10(a3) MA_V10(a4) MA_V10(a5) MA_V10(a6) MA_V10(a7) MA_V10(a8) MA_V10(a9)
	MA_V10(b0) MA_V10(b1) MA_V10(b2) MA_V10(b3) MA_V10(b4) MA_V10(b5)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6();
	virtual SMeleeTarget *vfunc167();
	void sub_10346910(int n);
};

bool sub_10346830(SMeleeActor *pActor, SMeleeTarget *pTarget)
{
	ScopeTrace scope("MeleeRollAndSendNoticeCallback", g_106b8540);
	int n = pTarget ? pTarget->m_n009c : 0;
	if (!n)
		return false;
	if (pTarget == pActor->vfunc167())
		return false;
	pActor->sub_10346910(n);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10346910 size=0x14e
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
#include "CEntityVSlots.h"
#include "ConVar.h"
#include "CUnknown103498b0.h"
#include "utlvector.h"
#include "Tier1.h"

extern ConVar *g_1074f04c;

void CBaseCombatCharacter::sub_10346910(CBaseEntity *pTarget)
{
	ScopeTrace trace("CBaseCombatCharacter::MeleeRollAndSendNotice", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (pTarget) {
		int iRoll = sub_10346380(pTarget);
		if (iRoll >= 0) {
			CUtlVector<CUnknown103498b0> &rolls = *(CUtlVector<CUnknown103498b0> *)((char *)this + 0xa88);
			if (!g_1074f04c->vfunc1() && g_1074f04c->m_nValue) {
				g_109f3630("Incoming Attack: Defender should: dodge=(%d) and block=(%d)\n",
					rolls[iRoll].sub_10349970(),
					rolls[iRoll].sub_103499a0());
			}
			((CEntityVSlots *)pTarget)->slot316((CEntityVSlots *)this,
				rolls[iRoll].sub_10349970(),
				rolls[iRoll].sub_103499a0());
		} else {
			((CEntityVSlots *)pTarget)->slot316((CEntityVSlots *)this, 0, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10346ac0 size=0xc0
#include "CBaseCombatCharacter.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern int g_1049e04c;
void sub_10003585();

void CBaseCombatCharacter::sub_10346ac0()
{
	ScopeTrace trace("CBaseCombatCharacter::SendIncomingSwingNotice", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	sub_10341c30((void *)sub_10003585, g_1049e04c, 0.7f, 0, 0, 0x46004003);

	CBaseEntity *p = (CBaseEntity *)((CEntityVSlots *)this)->slot167();
	sub_10346910(!p ? p : *(CBaseEntity **)((char *)p + 0x9c));
}
// END FUNCTION

// FUNCTION: 0x10346bb0 size=0xa
#include "ConVar.h"
ConVar g_10936cc8("melee_swing_completion_percent", "0.8", 0);
// END FUNCTION

// FUNCTION: 0x10346c40 size=0xa
#include "ConVar.h"
ConVar g_109370d0("melee_swish_sound_time_offset", "-0.1", 0);
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

// FUNCTION: 0x10348100 size=0x15f
struct ScopeTraceEntry {
    const char *m_pszName;
    const char *m_pszEntity;
    const char *m_pszExtra;
};
extern "C" __declspec(dllimport) ScopeTraceEntry g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern const char g_106b8540[];

struct ScopeTrace {
    ScopeTrace(const char *name, const char *entity)
    {
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszName = name;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszEntity = entity;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszExtra = g_106b8540;
        g_ScopeTraceStackDepth++;
    }
    ~ScopeTrace() { g_ScopeTraceStackDepth--; }
};

extern int (__cdecl *g_109f3868)(int, int);

// TARGET: sub_10348100
int sub_10348100(int count, int *values, int *weights, unsigned int *flags, unsigned int mask)
{
    int list[2048];
    int wts[2048];
    int total = 0;
    int n = 0;
    ScopeTrace trace("ChooseSequenceFromList", g_106b8540);
    for (int i = 0; i < count; i++) {
        if ((flags[i] & mask) == mask) {
            list[n] = values[i];
            total += weights[i];
            wts[n] = weights[i];
            n++;
        }
    }
    if (n < 1)
        return -1;
    if (n == 1)
        return list[0];
    if (total < 1)
        return list[g_109f3868(0, n - 1)];
    int r = g_109f3868(0, total - 1);
    int k = 0;
    while (k < n - 1) {
        r -= wts[k];
        if (r < 0)
            break;
        k++;
    }
    return list[k];
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
bool CBaseCombatCharacter::vfunc326(int unused1, CBaseEntity  *unused2)
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

// FUNCTION: 0x103483c0 size=0x9c
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_103483c0(int a, int b, int c)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::BeginMeltEffect";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    *(int *)((char *)this + 0x19a8) = b;
    *(int *)((char *)this + 0x168) = 0x20;
    *(int *)((char *)this + 0x19ac) = c;
    ((CBaseAnimating *)this)->sub_10090890(*(float *)&a);
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10348490 size=0x9c
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_10348490(int a, int b, int c)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::BeginUnmeltEffect";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    *(int *)((char *)this + 0x19a8) = b;
    *(int *)((char *)this + 0x168) = 0x21;
    *(int *)((char *)this + 0x19ac) = c;
    ((CBaseAnimating *)this)->sub_10090890(*(float *)&a);
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10348560 size=0xe4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

extern "C" int atoi(const char *);
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

#define ECD10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CEngineCmd
{
public:
    ECD10(a) ECD10(b) ECD10(c) ECD10(d) ECD10(e) ECD10(f) ECD10(g) ECD10(h)
    virtual void i0(); virtual void i1(); virtual void i2(); virtual void i3();
    virtual const char *Argv(int n);
};

struct CPlayerUnit : public CBaseEntity
{
    void *sub_100952d0(int a);
    int sub_1008f7b0(const char *label);
    void sub_10090950();
};

extern CEngineCmd *g_1070b22c;
CPlayerUnit *sub_101cd9e0(int index);

void sub_10348560()
{
    ScopeTrace trace("CC_Player_Sequence", g_106b8540);
    CPlayerUnit *pPlayer = sub_101cd9e0(1);
    const char *pszArg = g_1070b22c->Argv(1);
    if (pPlayer && pszArg) {
        if (pPlayer->sub_100952d0(-1)) {
            int nSequence = atoi(pszArg);
            if (nSequence <= 0)
                nSequence = pPlayer->sub_1008f7b0(pszArg);
            if (nSequence > -1) {
                *(int *)((char *)pPlayer + 0x6f0) = nSequence;
                pPlayer->sub_10090950();
                *(int *)((char *)pPlayer + 0x6f8) = 0;
                return;
            }
            int nDummy;
            Msg("Could not find sequence named %s in player model:\n\t %s", pszArg, *pPlayer->vfunc9(&nDummy));
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10348690 size=0xa
#include "ConCommand.h"
void sub_10348560(void);
ConCommand g_10937acc("player_sequence", sub_10348560, "tells the local player to play a sequence", 0, 0);
// END FUNCTION

// FUNCTION: 0x10348720 size=0xa7
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
#include "CBaseAnimating.h"

void *sub_1000ac8b(int index);
char *sub_10172710(void *pPlayer);

// TARGET: sub_10348720
void sub_10348720()
{
	ScopeTrace trace("CC_Burn_Hitboxes", g_106b8540);
	char *pPlayer = sub_10172710(sub_1000ac8b(1));
	if (pPlayer) {
		CBaseCombatCharacter *pOwner = *(CBaseCombatCharacter **)(pPlayer + 0x9c);
		if (pOwner) {
			char *pHdr = (char *)((CBaseAnimating *)pOwner)->sub_100952d0(-1);
			int nHitboxes = *(int *)(pHdr + *(int *)(pHdr + 0x104) + 4);
			for (int i = 0; i < nHitboxes; i++)
				pOwner->sub_1032f770(i, 8.0f, 2.0f);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10348800 size=0xa
#include "ConCommand.h"
void sub_10348720(void);
ConCommand g_10937004("burn_hitboxes", sub_10348720, "burns the char's hitboxes", 0, 0);
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
