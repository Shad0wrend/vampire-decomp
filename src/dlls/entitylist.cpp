// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 35 blocks
#include "vampire.h"

// FUNCTION: 0x100f7460 size=0x266
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "ScopeTrace.h"

struct FindUnkView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void *vfunc4(); };
struct FindEdictView { char pad[0x40]; FindUnkView *m_pUnk; };
extern "C" int __cdecl _strcmpi(const char *a, const char *b);
__declspec(dllimport) void Warning(const char *pMsg, ...);
CBaseEntity *sub_101cd9e0(int n);
int sub_101d1800(int edict);
CBaseEntity *sub_100ab250(int edict);
CBaseEntity *sub_10172710(CBaseEntity *pPlayer);

// TARGET: sub_100f7460
CBaseEntity *sub_100f7460(const char *szName, CBaseEntity *pSearchingEntity, CBaseEntity *pActivator)
{
	if (szName[0] == '!')
	{
		const char *pName = szName + 1;
		if (!_strcmpi(pName, "player"))
		{
			return sub_101cd9e0(1);
		}
		else if (!_strcmpi(pName, "playercontroller"))
		{
			CBaseEntity *pPlayer = sub_101cd9e0(1);
			if (pPlayer)
				return ((CBasePlayer *)pPlayer)->sub_101618a0();
		}
		else if (!_strcmpi(pName, "pvsplayer"))
		{
			if (pSearchingEntity)
			{
				int edict = sub_101d1800(pSearchingEntity->m_pEdict2e0);
				ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
				if (!edict)
					edict = (int)engine->vfunc38(0);
				return sub_100ab250(edict);
			}
			else if (pActivator)
			{
				FindEdictView *pEdict = (FindEdictView *)sub_101d1800(pActivator->m_pEdict2e0);
				ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
				if (!pEdict)
					pEdict = (FindEdictView *)engine->vfunc38(0);
				return (pEdict && pEdict->m_pUnk) ? (CBaseEntity *)pEdict->m_pUnk->vfunc4() : 0;
			}
			else
			{
				return sub_101cd9e0(1);
			}
		}
		else if (!_strcmpi(pName, "activator"))
		{
			if (pActivator)
				return pActivator;
			else if (pSearchingEntity)
				return pSearchingEntity->m_hActivator10c.Get();
		}
		else if (!_strcmpi(pName, "picker"))
		{
			return sub_10172710(sub_101cd9e0(1));
		}
		else if (!_strcmpi(pName, "caller"))
		{
			if (pSearchingEntity)
				return pSearchingEntity->m_hCaller110.Get();
		}
		else
		{
			Warning("Invalid entity search name %s\n", szName);
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f7770 size=0xdf
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)
extern char g_106b8540[];
CBaseEntity *sub_100055ce(const char *szName, CBaseEntity *pActivator, CBaseEntity *pSearching);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

static inline bool NameMatchesX(CBaseEntity *pEnt, const char *szName)
{
	if (STRINGR(pEnt->m_name26c) == szName)
		return true;
	unsigned int len = strlen(szName);
	if (len == 0)
		return pEnt->m_name26c == 0;
	if (szName[len - 1] != '*')
		return _strcmpi(STRINGR(pEnt->m_name26c), szName) == 0;
	return _strnicmp(STRINGR(pEnt->m_name26c), szName, len - 1) == 0;
}

CBaseEntity *CGlobalEntityList::sub_100f7770(CBaseEntity *pStart, const char *szName, CBaseEntity *pSearching, CBaseEntity *pActivator)
{
	if (!szName || !*szName)
		return 0;
	if (*szName == '!') {
		if (!pStart)
			return sub_100055ce(szName, pActivator, pSearching);
		return 0;
	}
	for (CBaseEntity *pEnt = sub_100f7060(pStart); pEnt; pEnt = sub_100f7060(pEnt)) {
		if (!pEnt->m_name26c)
			continue;
		if (NameMatchesX(pEnt, szName))
			return pEnt;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f7890 size=0x77
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_106b8540[];

CBaseEntity *CGlobalEntityList::sub_100f7890(CBaseEntity *pStart, const char *szName)
{
	CBaseEntity *pEnt = sub_100f7060(pStart);
	if (!pEnt)
		return 0;
	const char *szTarget = szName;
	do {
		if (pEnt->m_pEdict2e0 && *pEnt->vfunc9((int *)&pStart)) {
			const char *pName = *pEnt->vfunc9((int *)&szName);
			if (!pName)
				pName = g_106b8540;
			if (!_strcmpi(pName, szTarget))
				return pEnt;
		}
		pEnt = sub_100f7060(pEnt);
	} while (pEnt);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f7930 size=0x58
#include <string.h>
extern char g_106b8540[];
static inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
struct CLinkedEnt100f7930 {
	char m_pad00[0x20c];
	const char *m_pszLinked;
};
struct CLinkedList100f7930 {
	CLinkedEnt100f7930 *sub_100f7060(CLinkedEnt100f7930 *pPrev);
	CLinkedEnt100f7930 *sub_100f7930(CLinkedEnt100f7930 *pStart, const char *pszName);
};
// TARGET: CLinkedList100f7930::sub_100f7930
CLinkedEnt100f7930 *CLinkedList100f7930::sub_100f7930(CLinkedEnt100f7930 *pStart, const char *pszName)
{
	CLinkedEnt100f7930 *p = sub_100f7060(pStart);
	while (p) {
		if (p->m_pszLinked && !_stricmp(STRINGR(p->m_pszLinked), pszName))
			return p;
		p = sub_100f7060(p);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f79b0 size=0x111
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"

struct ColView100f79b0 {
	virtual void v0();
	virtual const float *a1();
	virtual const float *a2();
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual const float *a8();
	virtual const float *a9(int a);
	virtual const float *a10();
	char pad[0x40 - 4];
	int m_nSolidType;
	unsigned short m_usSolidFlags;
};
struct EntView100f79b0 {
	char pad0[0x270];
	ColView100f79b0 m_col;
	char pad1[0x2e0 - 0x270 - 0x48];
	int m_pEdict;
};
extern Vector g_1070d9d0;
bool sub_1023fd00(const Vector &mins, const Vector &maxs, const Vector &center, float radius);
void sub_10138130(const float *in, const float *matrix, float *out);

inline void VectorITransformW(const Vector &in1, const float *in2, Vector &out)
{
	sub_10138130(&in1.x, in2, &out.x);
}

CBaseEntity *CGlobalEntityList::sub_100f79b0(CBaseEntity *pStart, const float *pCenter, float flRadius)
{
	for (CBaseEntity *pEnt = sub_100f7060(pStart); pEnt; pEnt = sub_100f7060(pEnt)) {
		EntView100f79b0 *e = (EntView100f79b0 *)pEnt;
		if (e->m_pEdict == 0)
			continue;
		Vector rel;
		ColView100f79b0 *col = &e->m_col;
		if ((col->m_usSolidFlags & 0x80) || col->m_nSolidType == 2 || col->m_nSolidType == 0
			|| *(Vector *)col->a9(0) == g_1070d9d0) {
			const float *o = col->a8();
			rel.x = pCenter[0] - o[0];
			rel.y = pCenter[1] - o[1];
			rel.z = pCenter[2] - o[2];
		} else {
			VectorITransformW(*(Vector *)pCenter, col->a10(), rel);
		}
		if (sub_1023fd00(*(Vector *)col->a1(), *(Vector *)col->a2(), rel, flRadius))
			return pEnt;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f7b20 size=0xc6
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "Vector.h"

extern CGlobalEntityList g_106eb5d8;

#define EV(n) virtual void ev##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)

struct EntV {
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV10(10) EV10(11) EV10(12) EV10(13) EV10(14) EV10(15) EV10(16) EV10(17) EV10(18) EV10(19)
	EV10(20)
	EV(210) EV(211) EV(212) EV(213) EV(214) EV(215) EV(216)
	virtual float *ev217();
	char m_pad[0x2e0 - 4];
	int m_pEdict;
};

CBaseEntity * __stdcall sub_100f7b20(const char *pszName, const Vector *pCenter, float flRadius, CBaseEntity *pActivator, CBaseEntity *pSearching)
{
	flRadius = flRadius * flRadius;
	CBaseEntity *pBest = 0;
	if (flRadius == 0.0f)
		flRadius = 3.2212255e+09f;
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszName, pSearching, pActivator); pEnt; pEnt = g_106eb5d8.sub_100f7770(pEnt, pszName, pSearching, pActivator)) {
		EntV *e = (EntV *)pEnt;
		if (e->m_pEdict) {
			Vector *pOrigin = (Vector *)e->ev217();
			float flDist = (*pOrigin - *pCenter).LengthSqr();
			if (flRadius > flDist) {
				pBest = pEnt;
				flRadius = flDist;
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x100f7c30 size=0xd9
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "Vector.h"

extern CGlobalEntityList g_106eb5d8;

#define EV(n) virtual void ev##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)

struct EntV {
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV10(10) EV10(11) EV10(12) EV10(13) EV10(14) EV10(15) EV10(16) EV10(17) EV10(18) EV10(19)
	EV10(20)
	EV(210) EV(211) EV(212) EV(213) EV(214) EV(215) EV(216)
	virtual float *ev217();
	char m_pad[0x2e0 - 4];
	int m_pEdict;
};

CBaseEntity * __stdcall sub_100f7c30(CBaseEntity *pStart, const char *pszName, const Vector *pCenter, float flRadius, CBaseEntity *pActivator, CBaseEntity *pSearching)
{
	float flRadiusSqr = flRadius * flRadius;
	if (flRadiusSqr == 0.0f)
		return g_106eb5d8.sub_100f7770(pStart, pszName, pSearching, pActivator);
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(pStart, pszName, pSearching, pActivator);
	while (pEnt) {
		EntV *e = (EntV *)pEnt;
		if (e->m_pEdict) {
			Vector *pOrigin = (Vector *)e->ev217();
			if (flRadiusSqr > (*pOrigin - *pCenter).LengthSqr())
				return pEnt;
		}
		pEnt = g_106eb5d8.sub_100f7770(pEnt, pszName, pSearching, pActivator);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f7d50 size=0xae
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern float g_104454c4;

// TARGET: sub_100f7d50
CBaseEntity * __stdcall sub_100f7d50(const char *name, const Vector &vecSrc, float flRadius)
{
	CBaseEntity *pSearch = 0;
	flRadius = flRadius * flRadius;
	if (flRadius == g_104454c4)
		flRadius = 3.2212255e+09f;
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7380(0, name); pEnt; pEnt = g_106eb5d8.sub_100f7380(pEnt, name))
	{
		if (pEnt->m_pEdict2e0)
		{
			Vector d = *((CEntityVSlots *)pEnt)->slot217() - vecSrc;
			float flDist2 = d.LengthSqr();
			if (flRadius > flDist2)
			{
				pSearch = pEnt;
				flRadius = flDist2;
			}
		}
	}
	return pSearch;
}
// END FUNCTION

// FUNCTION: 0x100f7e30 size=0xbf
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;

CBaseEntity * __stdcall sub_100f7e30(CBaseEntity *pStart, const char *szName, const Vector *pCenter, float flRadius)
{
	float flRadiusSqr = flRadius * flRadius;
	if (flRadiusSqr == 0.0f)
		return g_106eb5d8.sub_100f7380(pStart, szName);
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7380(pStart, szName);
	while (pEnt) {
		if (pEnt->m_pEdict2e0) {
			Vector *pOrigin = ((CEntityVSlots *)pEnt)->slot217();
			if (flRadiusSqr > pOrigin->DistToSqr(*pCenter))
				return pEnt;
		}
		pEnt = g_106eb5d8.sub_100f7380(pEnt, szName);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f7f20 size=0x35
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
extern CGlobalEntityList g_106eb5d8;
// TARGET: sub_100f7f20
void __stdcall sub_100f7f20(CBaseEntity *pStart, const char *szName, CBaseEntity *pActivator, CBaseEntity *pSearching)
{
	if (!g_106eb5d8.sub_100f7770(pStart, szName, pSearching, pActivator))
		g_106eb5d8.sub_100f7380(pStart, szName);
}
// END FUNCTION

// FUNCTION: 0x100f7f70 size=0x45
#include "CBaseEntity.h"
#include "Vector.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
void __stdcall sub_100f7f70(CBaseEntity *pStart, const char *szName, const Vector *pCenter, float flRadius, CBaseEntity *pSearching, CBaseEntity *pActivator)
{
	if (!g_106eb5d8.sub_100f7c30(pStart, szName, pCenter, flRadius, pSearching, pActivator))
		g_106eb5d8.sub_100f7e30(pStart, szName, pCenter, flRadius);
}
// END FUNCTION

// FUNCTION: 0x100f7fe0 size=0x3d
struct CUnknownGlobal100f7fe0
{
	int sub_100f7b20(int a, int b, int c, int d, int e);	// stub 0x10009b8d, called directly
	void sub_100f7d50(int a, int b, int c);	// stub 0x10005475, called directly
};

extern CUnknownGlobal100f7fe0 g_106eb5d8;

// TARGET: sub_100f7fe0
void __stdcall sub_100f7fe0(int a, int b, int c, int d, int e)
{
	if (g_106eb5d8.sub_100f7b20(a, b, c, d, e) == 0) {
		g_106eb5d8.sub_100f7d50(a, b, c);
	}
}
// END FUNCTION

// FUNCTION: 0x100f8030 size=0x153
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"
#include "Vector.h"
#include <string.h>

extern char g_106b8540[];	// the empty string

struct ConeEntView : CEntityVSlots
{
    char pad0004[0x11c - 4];
    const char *m_pszClassname;	// 0x11c
    char pad0120[0x2b8 - 0x120];
    float m_flField2b8;	// 0x2b8
};

// TARGET: CGlobalEntityList::sub_100f8030
CBaseEntity *CGlobalEntityList::sub_100f8030(const Vector *pOrigin, const Vector *pDir, float flThreshold, const char *pszClassname)
{
    float flBest = flThreshold;
    ConeEntView *pBest = 0;
    for (ConeEntView *pEnt = (ConeEntView *)sub_100f7060(0); pEnt; pEnt = (ConeEntView *)sub_100f7060((CBaseEntity *)pEnt))
    {
        if (pEnt->m_flField2b8 != 0.0f)
        {
            Vector vecDelta = *pEnt->slot217() - *pOrigin;
            VectorNormalize(vecDelta);
            float flDot = DotProduct(vecDelta, *pDir);
            if (flDot > flBest)
            {
                if (_strcmpi(pEnt->m_pszClassname ? pEnt->m_pszClassname : g_106b8540, pszClassname) == 0
                    && _strcmpi(pEnt->m_pszClassname ? pEnt->m_pszClassname : g_106b8540, "worldspawn") != 0
                    && _strcmpi(pEnt->m_pszClassname ? pEnt->m_pszClassname : g_106b8540, "soundent") != 0)
                {
                    flBest = flDot;
                    pBest = pEnt;
                }
            }
        }
    }
    return (CBaseEntity *)pBest;
}
// END FUNCTION

// FUNCTION: 0x100f81f0 size=0x127
#include "Vector.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CEntSlotView215
{
	SV100(a) SV100(b) SV10(c0) SV1(c10) SV1(c11) SV1(c12) SV1(c13) SV1(c14)
	virtual float *vfunc215();
};

int __cdecl _strcmpi(const char *, const char *);
extern char g_106b8540[];

CBaseEntity *CGlobalEntityList::sub_100f81f0(const Vector *pOrigin, const Vector *pDir, float flThreshold)
{
	float flBestDot = flThreshold;
	CBaseEntity *pBest = 0;
	for (CBaseEntity *pEnt = sub_100f7060(0); pEnt; pEnt = sub_100f7060(pEnt))
	{
		if (!pEnt->m_pEdict2e0)
			continue;
		Vector vecToEnt = *(Vector *)((CEntSlotView215 *)pEnt)->vfunc215() - *pOrigin;
		VectorNormalize(vecToEnt);
		float flDot = DotProduct(*pDir, vecToEnt);
		if (!(flDot <= flBestDot))
		{
			const char *pszClass = pEnt->m_classname11c ? pEnt->m_classname11c : g_106b8540;
			if (_strcmpi(pszClass, "worldspawn") == 0)
				continue;
			pszClass = pEnt->m_classname11c ? pEnt->m_classname11c : g_106b8540;
			if (_strcmpi(pszClass, "soundent") == 0)
				continue;
			flBestDot = flDot;
			pBest = pEnt;
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x100f8370 size=0x2e
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
// TARGET: CGlobalEntityList::sub_100f8370

CBaseEntity *CGlobalEntityList::sub_100f8370(CBaseEntity *pCurrent, unsigned int nFlags)
{
    CBaseEntity *pEnt = sub_100f7060(pCurrent);
    while (pEnt != 0)
    {
        if (*(unsigned int *)((char *)pEnt + 0x4c) & nFlags)
        {
            return pEnt;
        }
        pEnt = sub_100f7060(pEnt);
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100f83b0 size=0x50
struct CEnt { char pad[0x2e0]; int m_n2e0; };
struct CFinder { CEnt *sub_100f7060(CEnt *p); CEnt *sub_100f83b0(CEnt *p, int n); };
CEnt *CFinder::sub_100f83b0(CEnt *p, int n)
{
    CEnt *e = sub_100f7060(p);
    while (e) {
        if (engine->vfunc35(e->m_n2e0) == n)
            return e;
        e = sub_100f7060(e);
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100f8420 size=0x4d
#include "CGlobalEntityList.h"
#include "CAI_BaseNPCTroika.h"
struct S100f8420Ent { char m_pad[0x98]; CAI_BaseNPCTroika *m_pNpc98; };
struct S100f8420Npc { char m_pad[0x1480]; char m_b1480; };
// TARGET: CGlobalEntityList::sub_100f8420
CBaseEntity *CGlobalEntityList::sub_100f8420(CBaseEntity *pCurrent)
{
	CBaseEntity *pEnt = sub_100f7060(pCurrent);
	while (pEnt) {
		CAI_BaseNPCTroika *pNpc = ((S100f8420Ent *)pEnt)->m_pNpc98;
		if (pNpc && ((S100f8420Npc *)pNpc)->m_b1480 && !pNpc->sub_100b5190())
			return pEnt;
		pEnt = sub_100f7060(pEnt);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f8490 size=0xbf
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "Vector.h"

extern CGlobalEntityList g_106eb5d8;

#define EV(n) virtual void ev##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)

struct EntV {
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV10(10) EV10(11) EV10(12) EV10(13) EV10(14) EV10(15) EV10(16) EV10(17) EV10(18) EV10(19)
	EV10(20)
	EV(210) EV(211) EV(212) EV(213) EV(214) EV(215) EV(216)
	virtual float *ev217();
	char m_pad[0x2e0 - 4];
	int m_pEdict;
};

CBaseEntity * __stdcall sub_100f8490(CBaseEntity *pStart, unsigned int nFlags, const Vector *pCenter, float flRadius)
{
	float flRadiusSqr = flRadius * flRadius;
	if (flRadiusSqr == 0.0f)
		return g_106eb5d8.sub_100f8370(pStart, nFlags);
	CBaseEntity *pEnt = g_106eb5d8.sub_100f8370(pStart, nFlags);
	while (pEnt) {
		EntV *e = (EntV *)pEnt;
		if (e->m_pEdict) {
			Vector *pOrigin = (Vector *)e->ev217();
			if (flRadiusSqr > (*pOrigin - *pCenter).LengthSqr())
				return pEnt;
		}
		pEnt = g_106eb5d8.sub_100f8370(pEnt, nFlags);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100f8580 size=0xa6
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "Vector.h"

extern CGlobalEntityList g_106eb5d8;

#define EV(n) virtual void ev##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)

struct EntV {
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV10(10) EV10(11) EV10(12) EV10(13) EV10(14) EV10(15) EV10(16) EV10(17) EV10(18) EV10(19)
	EV10(20)
	EV(210) EV(211) EV(212) EV(213) EV(214) EV(215) EV(216)
	virtual float *ev217();
	char m_pad[0x2e0 - 4];
	int m_pEdict;
};

CBaseEntity * __stdcall sub_100f8580(const Vector *pPos, float flRadius)
{
	flRadius = flRadius * flRadius;
	CBaseEntity *pBest = 0;
	if (flRadius == 0.0f)
		flRadius = 3.2212255e+09f;
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f8420(0); pEnt; pEnt = g_106eb5d8.sub_100f8420(pEnt)) {
		EntV *e = (EntV *)pEnt;
		if (e->m_pEdict) {
			Vector *pOrigin = (Vector *)e->ev217();
			float flDist = (*pOrigin - *pPos).LengthSqr();
			if (flRadius > flDist) {
				pBest = pEnt;
				flRadius = flDist;
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x100f8660 size=0x56
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
void CGlobalEntityList::vfunc0(CGlobalEntityList_Ent *pEnt, unsigned int handle)
{
	int index = handle & 0x1fff;
	m_iNumEnts++;
	if (index > m_n1803c)
		m_n1803c = index;
	CBaseEntity *pBase = pEnt->vfunc4();
	for (int i = m_nListeners - 1; i >= 0; i--)
		m_ppListeners[i]->OnEntityCreated(pBase);
}
// END FUNCTION

// FUNCTION: 0x100f86e0 size=0x9
#include "CGlobalEntityList.h"
void CGlobalEntityList::vfunc1(int a, int b) { m_iNumEnts--; }
// END FUNCTION

// FUNCTION: 0x100f8700 size=0x59
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
void CGlobalEntityList::sub_100f8700(unsigned int hEnt)
{
	if (hEnt != 0xffffffff) {
		CGlobalEntityList_Slot *pSlot = &m_Slots[hEnt & 0x1fff];
		if (pSlot->m_Serial == (int)(hEnt >> 13) && pSlot->m_pEntity) {
			CBaseEntity *pEnt = pSlot->m_pEntity->vfunc4();
			if (pEnt) {
				for (int i = m_nListeners - 1; i >= 0; i--)
					m_ppListeners[i]->OnEntityDeleted(pEnt);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100f8780 size=0x78
#include "CBaseEntity.h"
#include "utlrbtree.h"
#include "CNotifyList.h"
#include "utlvector.h"

struct CNotifyList_Elem
{
	CBaseEntity *m_pNotify;
	CBaseEntity *m_pWatched;
};
struct CNotifyList_Ent { char pad[0x268]; unsigned int m_iEFlags; };

void *CNotifyList::vfunc0(CBaseEntity *pNotify, CBaseEntity *pWatched)
{
	((CNotifyList_Ent *)pWatched)->m_iEFlags |= 0x40;
	int index = ((CUtlVector<CNotifyList_Elem> *)((char *)this + 8))->AddToTail();
	CNotifyList_Elem &n = ((CUtlVector<CNotifyList_Elem> *)((char *)this + 8))->Element(index);
	n.m_pWatched = pWatched;
	n.m_pNotify = pNotify;
	return &n;
}
// END FUNCTION

// FUNCTION: 0x100f8820 size=0x54
#include "CBaseEntity.h"
#include "utlrbtree.h"
// TARGET: CNotifyList::vfunc1
#include "CNotifyList.h"
#include "utlvector.h"

struct notifylistentry_t
{
	CBaseEntity *pNotify;
	CBaseEntity *pWatched;
};

// CUtlVector::FastRemove as this build has it (memmove of the last element over elem)
template <class T>
inline void FastRemoveMove(CUtlVector<T> *v, int elem)
{
	Destruct(&v->Element(elem));
	if (v->m_Size > 0)
	{
		memmove(&v->Element(elem), &v->Element(v->m_Size - 1), sizeof(T));
		--v->m_Size;
	}
}

void CNotifyList::vfunc1(CBaseEntity *pNotify, CBaseEntity *pWatched)
{
	for (int i = m_nPairs - 1; i >= 0; --i)
	{
		if (m_pairs.m_pMemory[i].m_a == (int)pNotify && m_pairs.m_pMemory[i].m_b == (int)pWatched)
		{
			FastRemoveMove((CUtlVector<notifylistentry_t> *)&m_pairs, i);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100f88a0 size=0x81
#include "CBaseEntity.h"
#include "CNotifyList.h"
#include "CEntityVSlots.h"
struct S100f88a0Flags {
    unsigned int m_low : 6;
    unsigned int m_b6 : 1;
    unsigned int m_high : 25;
    char GetBit6() { return m_b6; }
};
void CNotifyList::vfunc2(CBaseEntity *pEntity, const char *pszEvent)
{
    CVariantCopy value;
    if (((S100f88a0Flags *)&pEntity->m_flags268)->GetBit6()) {
        for (int i = 0; i < m_nPairs; i++) {
            if ((int)((int *)m_pairs.m_pMemory)[i * 2 + 1] == (int)pEntity) {
                CEntityVSlots *pListener = (CEntityVSlots *)m_pairs.sub_100f97b0(i)->m_a;
                pListener->slot118(pszEvent, (CEntityVSlots *)pEntity, (CEntityVSlots *)pEntity, value, 0);
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100f8960 size=0x21
struct CUnknown100f6d80X
{
    void sub_100f6d80(void *p);
};

extern CUnknown100f6d80X g_106eb5d8;

// TARGET: sub_100f8960
void __fastcall sub_100f8960(int p)
{
    int a;
    if (p) {
        a = p + 4;
    } else {
        a = 0;
    }
    g_106eb5d8.sub_100f6d80((void *)a);
}
// END FUNCTION

// FUNCTION: 0x100f89a0 size=0x57
#include "utlrbtree.h"
#include "utlvector.h"

struct SBlockSetView {
	char m_pad[0x18048];
	CUtlVector<int> m_List;
	void sub_100f6e40(int elem);
};
extern SBlockSetView g_106eb5d8;

struct CListEntryBaseA { int m_n0; };
struct CListEntryBaseB { int m_n4; };
struct CListEntryView : CListEntryBaseA, CListEntryBaseB {
	CUtlVector<int> m_Vec;
	void sub_100f89a0();
};

void CListEntryView::sub_100f89a0()
{
	g_106eb5d8.sub_100f6e40((int)(CListEntryBaseB *)this);
	m_Vec.Purge();
}
// END FUNCTION

// FUNCTION: 0x100f8a20 size=0x3
void __stdcall sub_100f8a20(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100f8a40 size=0x30
struct COuter100f8a40
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual void v3(const char *fmt, int nArgs, int pArgs);
	virtual void v4(const char *fmt);
};
struct CInner100f8a40 { void sub_100f8a40(const char *fmt); };

// TARGET: CInner100f8a40::sub_100f8a40
void CInner100f8a40::sub_100f8a40(const char *fmt)
{
	char *ap = (char *)&fmt;
	COuter100f8a40 *pOuter = (COuter100f8a40 *)((char *)this - 4);
	const char *f = *(const char *volatile *)&fmt;
	pOuter->v3(f, 1, (int)&ap);
	pOuter->v4(f);
}
// END FUNCTION

// FUNCTION: 0x100f8a80 size=0x4e
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CBaseEntity.h"
#include "CNotifyList.h"
#include <string.h>

struct NotifyPair
{
	CBaseEntity *pNotify;
	CBaseEntity *pWatched;
};

struct NotifyPairVec
{
	NotifyPair *m_pMemory;
	int m_nAlloc;
	int m_nGrow;
	int m_Size;

	int Count() const { return m_Size; }
	NotifyPair &Element(int i) { return m_pMemory[i]; }
	const NotifyPair &operator[](int i) const { return ((const NotifyPair *)m_pMemory)[i]; }
	void FastRemove(int elem)
	{
		if (m_Size > 0)
		{
			memmove(&Element(elem), &Element(m_Size - 1), sizeof(NotifyPair));
			--m_Size;
		}
	}
};

// TARGET: CNotifyList::vfunc4
void CNotifyList::vfunc4(CBaseEntity *pEntity)
{
	NotifyPairVec &list = *(NotifyPairVec *)&m_pairs;
	for (int i = list.Count() - 1; i >= 0; --i)
	{
		if (m_pairs.m_pMemory[i].m_a == (int)pEntity || m_pairs.m_pMemory[i].m_b == (int)pEntity)
			list.FastRemove(i);
	}
}
// END FUNCTION

// FUNCTION: 0x100f8af0 size=0x52
#include "CNotifyList.h"
#include "CBaseEntity.h"

#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CListener183View {
    V100(0) V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17)
    V(180) V(181) V(182)
    virtual void vfunc183(CBaseEntity *pEntity, int a, int b);
};

static inline bool IsWatched(unsigned int flags) { return ((flags >> 6) & 1) != 0; }

void CNotifyList::vfunc3(CBaseEntity *pEntity, int a, int b)
{
    if (IsWatched(pEntity->m_flags268)) {
        for (int i = 0; i < m_nPairs; i++) {
            CUnknown100f97b0_Elem *p = &m_pairs.m_pMemory[i];
            if (p->m_b == (int)pEntity)
                ((CListener183View *)p->m_a)->vfunc183(pEntity, a, b);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100f8b70 size=0xa
#define PCD_INITIALIZERS
#include "CNotifyList.h"
CNotifyList g_10703634;
// END FUNCTION

// FUNCTION: 0x100f8c70 size=0xa
#define PCD_INITIALIZERS
#include "CEntityTouchManager.h"
CEntityTouchManager g_107036b0;
// END FUNCTION

// FUNCTION: 0x100f8cd0 size=0x3
#include "CEntityTouchManager.h"

void CEntityTouchManager::OnEntityCreated(CBaseEntity *pEntity) {}
// END FUNCTION

// FUNCTION: 0x100f8cf0 size=0x61
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CEntityTouchManager.h"
#include "CEntityListSystem.h"
#include <string.h>

template <class T>
inline void FastRemoveMove(CUtlVector<T> &v, int elem)
{
	if (v.m_Size > 0) {
		memmove(&v.Element(elem), &v.Element(v.m_Size - 1), sizeof(T));
		--v.m_Size;
	}
}

void CEntityTouchManager::OnEntityDeleted(CBaseEntity *pEntity)
{
	if (((CEntityListSystem_Ent *)pEntity)->m_bFlags & 1) {
		int i = m_List.Find(pEntity);
		if (m_List.IsValidIndex(i))
			FastRemoveMove(m_List, i);
	}
}
// END FUNCTION
