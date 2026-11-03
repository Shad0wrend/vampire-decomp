// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1013edb0 size=0x1e
#include "CMoveHelperServer.h"

// TARGET: CMoveHelperServer::vfunc14
CMoveHelperServer *CMoveHelperServer::vfunc14(unsigned int flags)
{
	sub_1000185c();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1013eec0 size=0xf
#include "CBaseEntity.h"
#include "CMoveHelperServer.h"

// TARGET: CMoveHelperServer::sub_1013eec0
void CMoveHelperServer::sub_1013eec0(CBaseEntity *pHost)
{
	m_pHost = pHost;
	vfunc1();
}
// END FUNCTION

// FUNCTION: 0x1013eee0 size=0x139
#include "CUnknown101cf0a0.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBaseEntitySlots.h"
#include "CGlobalEntityList.h"
#include "CUnknown1070b22c.h"
#include "ScopeTrace.h"
extern CGlobalEntityList g_106eb5d8;
extern CUnknown1070b22c *g_1070b22c;
extern char g_1057a19c[];
struct EntA { virtual void v0(); virtual void v1(); virtual void v2(); virtual EntA *v3(); virtual CUnknown1070b22c_Edict *v4(); };
struct EntB { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual const char **v9(unsigned int *o); };
struct CBX : CBaseEntity { const char *sub_100ab4f0(); };
struct PrivV { char pad[0x40]; EntA *p; };

// TARGET: sub_1013eee0
const char *__stdcall sub_1013eee0(unsigned int handle)
{
    *(volatile unsigned int *)&handle = handle;
    EntA *e = (EntA *)g_106eb5d8.sub_100290c0(&handle);
    CUnknown1070b22c_Edict *ed;
    if (e)
        ed = e->v3()->v4();
    else
        ed = 0;
    CBX *p;
    CUnknown1070b22c_Edict *ed2 = ed;
    g_109f3620[*g_109f3680].name = "CBaseEntity::Instance";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].line = g_106b8540;
    (*g_109f3680)++;
    if ((ed2 || (ed2 = g_1070b22c->vfunc38(0))) && ((PrivV *)ed2)->p)
        p = (CBX *)((PrivV *)ed2)->p->v4();
    else
        p = 0;
    (*g_109f3680)--;
    if (!g_1070b22c->vfunc35((int)ed)) {
        if (gpGlobals->mapname)
            return gpGlobals->mapname;
        return g_106b8540;
    }
    if (p->sub_1009f200())
        return p->sub_100ab4f0();
    if (p && *((EntB *)p)->v9(&handle)) {
        const char *s = *((EntB *)p)->v9(&handle);
        return s ? s : g_106b8540;
    }
    return g_1057a19c;
}
// END FUNCTION

// FUNCTION: 0x1013f070 size=0x8
#include "CMoveHelperServer.h"

void CMoveHelperServer::vfunc1()
{
	m_nTouchCount = 0;
}
// END FUNCTION

// FUNCTION: 0x1013f090 size=0x127
#include "utlvector.h"
#include "CMoveHelperServer.h"
#include "Vector.h"

struct CMHVec3X { float x, y, z; };

struct CMHPlaneX
{
	Vector normal;
	float dist;
	unsigned char type, signbits;
	unsigned char pad[2];
	void sub_1013f210(const CMHPlaneX &src);
};

struct CMHTraceX
{
	CMHVec3X startpos;
	Vector endpos;
	CMHPlaneX plane;
	float fraction;
	int contents;
	unsigned short dispFlags;
	unsigned char allsolid, startsolid;
	float fractionleftsolid;
	int surf0, surf1;
	int hitgroup;
	short physicsbone;
	void *m_pEnt;
	int hitbox;
	void sub_1003ff80();
};

struct CMHTouchX
{
	CMHVec3X delta;
	CMHTraceX trace;
};

struct CMHListX
{
	CMHTouchX *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	CMHTouchX *m_pElements;
	void sub_1013fd20(int num);
	void sub_1013fcb0(int elem, int num);

	int AddToTail()
	{
		int elem = m_size;
		if (m_size + 1 > m_allocationCount)
			sub_1013fd20(m_size + 1 - m_allocationCount);
		m_size += 1;
		m_pElements = m_pMemory;
		sub_1013fcb0(elem, 1);
		CMHTouchX *pElem = m_pMemory;
		pElem += elem;
		if (pElem)
			pElem->trace.sub_1003ff80();
		return elem;
	}
};

struct CMHServerX
{
	void *vtbl;
	void *m_pHost;
	CMHListX m_List;
};

// TARGET: CMoveHelperServer::vfunc2
bool CMoveHelperServer::vfunc2(const void *pTrace, const float *pVelocity)
{
	const CMHTraceX &tr = *(const CMHTraceX *)pTrace;
	CMHServerX *h = (CMHServerX *)this;
	void *pEnt = tr.m_pEnt;
	if (!pEnt)
		return false;
	if (pEnt == h->m_pHost)
		return false;
	for (int i = h->m_List.m_size - 1; i >= 0; i--) {
		if (h->m_List.m_pMemory[i].trace.m_pEnt == pEnt)
			return false;
	}
	int j = h->m_List.AddToTail();
	CMHTraceX &t = h->m_List.m_pMemory[j].trace;
	t.startpos.x = tr.startpos.x;
	t.startpos.y = tr.startpos.y;
	t.startpos.z = tr.startpos.z;
	t.endpos.sub_1003e4b0(tr.endpos);
	t.plane.sub_1013f210(tr.plane);
	t.fraction = tr.fraction;
	t.contents = tr.contents;
	t.dispFlags = tr.dispFlags;
	t.allsolid = tr.allsolid;
	t.startsolid = tr.startsolid;
	t.fractionleftsolid = tr.fractionleftsolid;
	t.surf0 = tr.surf0;
	t.surf1 = tr.surf1;
	t.hitgroup = tr.hitgroup;
	t.physicsbone = tr.physicsbone;
	t.m_pEnt = tr.m_pEnt;
	t.hitbox = tr.hitbox;
	CMHTouchX *pT = h->m_List.m_pMemory + j;
	pT->delta.x = pVelocity[0];
	pT->delta.y = pVelocity[1];
	pT->delta.z = pVelocity[2];
	return true;
}
// END FUNCTION

// FUNCTION: 0x1013f720 size=0x3
#include "CMoveHelperServer.h"
void CMoveHelperServer::vfunc6(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
}
// END FUNCTION

// FUNCTION: 0x1013f740 size=0x6
#include "CMoveHelperServer.h"
namespace lifted {
extern int g_10723944;
}
int CMoveHelperServer::vfunc9()
{
    return lifted::g_10723944;
}
// END FUNCTION

// FUNCTION: 0x1013f760 size=0x4c
#include "CMoveHelperServer.h"
#include <stdarg.h>

extern int (__cdecl *g_109f387c)(char *pDest, int maxLen, const char *pFormat, va_list params);

void CMoveHelperServer::vfunc4(int idx, const char *pszFormat, ...)
{
	va_list marker;
	char msg[0x2000];
	va_start(marker, pszFormat);
	g_109f387c(msg, 0x2000, pszFormat, marker);
	va_end(marker);
	engine->vfunc81(idx, msg);
}
// END FUNCTION

// FUNCTION: 0x1013f7d0 size=0x10f
#include "CBaseEntity.h"
#include "CGameRules.h"
#include "CGlobalEntityList.h"
#include "CVDmg_t.h"
#include "CTakeDamageInfo.h"
#include "CMoveHelperServer.h"

extern CGameRules *g_1070ba0c;

struct S1013f7d0Edict
{
	char m_pad[0x40];
	CGlobalEntityList_Ent *m_pEntity;
};

static inline CBaseEntity *GetWorldEntity()
{
	S1013f7d0Edict *pEdict = (S1013f7d0Edict *)engine->vfunc38(0);
	if (pEdict && pEdict->m_pEntity)
		return pEdict->m_pEntity->vfunc4();
	return 0;
}

bool CMoveHelperServer::vfunc7()
{
	float flFall = g_1070ba0c->vfunc30((int)m_pHost);
	CVDmg_t dmg;
	int nFall = (int)flFall;
	if (nFall < 10)
		dmg.sub_101fa8d0(0, 0, nFall);
	else
		dmg.sub_101fa8d0(1, 0x20, nFall);
	int edict = m_pHost->m_pEdict2e0;
	dmg.sub_101fb200(engine->vfunc35(edict), 0);
	float flDamage = (float)dmg.sub_101faa70();
	if (flDamage > 0.0f) {
		CTakeDamageInfo info;
		m_pHost->sub_100a1250(info.sub_101c26d0(GetWorldEntity(), GetWorldEntity(), flDamage, 0x20, 0, 0, -1));
	}
	dmg.sub_101fa680();
	return true;
}
// END FUNCTION

// FUNCTION: 0x1013f930 size=0x3
#include "CMoveHelperServer.h"
void CMoveHelperServer::vfunc8(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1013f950 size=0x131
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CMoveHelperServer.h"
#include "ScopeTrace.h"
#include "ehandle.h"


struct EdictUnk_t {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void *GetBaseEntity();
};
struct EdictView_t {
	char m_pad0000[0x40];
	EdictUnk_t *m_pUnk;
};

static inline void *InstanceOf(EdictView_t *pent)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
	if (!pent)
		pent = (EdictView_t *)engine->vfunc38(0);
	return (pent && pent->m_pUnk) ? pent->m_pUnk->GetBaseEntity() : 0;
}

static inline void *InstanceOfIndex(int n)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
	return InstanceOf((EdictView_t *)engine->vfunc38(n));
}

// TARGET: CMoveHelperServer::vfunc10
bool CMoveHelperServer::vfunc10(const unsigned int *pHandle)
{
	void *pWorld = InstanceOfIndex(0);
	return ((const EHANDLE *)pHandle)->Get() == pWorld;
}
// END FUNCTION

// FUNCTION: 0x1013fae0 size=0x8d
#include "CMoveHelperServer.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SoundRecord
{
	int m_Id;
	const char *m_pszName;
};
struct SoundSystem { void sub_100119fa(int a, int b, int c, float d, float e); };
extern int g_1073dc3c;
extern SoundRecord **g_1073dc40;
extern SoundSystem g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(const char *const *p)
{
	return *p ? *p : g_106b8540;
}

static inline int FindSound(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(NameOf(&g_1073dc40[i]->m_pszName), name))
			return g_1073dc40[i]->m_Id;
	}
	return -1;
}

void CMoveHelperServer::vfunc12()
{
	static int s_nSound = FindSound("Exert_Heavy");
	g_1073dc28.sub_100119fa(*(int *)((char *)this + 4), s_nSound, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x1013fba0 size=0x8d
#include "CMoveHelperServer.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SoundName_t
{
	const char *m_psz;

	const char *Get() const { return m_psz ? m_psz : ""; }
};

struct SoundEntry_t
{
	int m_nIndex;
	SoundName_t m_Name;
};

struct SoundMgr_t
{
	void sub_101f5950(int pEnt, int nSound, int a, float flVolume, float flPitch);	// stub 0x100119fa
};

extern int g_1073dc3c;	// number of sounds
extern SoundEntry_t **g_1073dc40;	// the sound table
extern SoundMgr_t g_1073dc28;

static inline int FindSound(const char *pszName)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(g_1073dc40[i]->m_Name.Get(), pszName))
			return g_1073dc40[i]->m_nIndex;
	}
	return -1;
}

void CMoveHelperServer::vfunc11()
{
	static int s_nSound = FindSound("Exert_Light");
	g_1073dc28.sub_101f5950(*(int *)((char *)this + 4), s_nSound, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x1013fc60 size=0x3c
#include "CMoveHelperServer.h"
#include "CBaseAnimating.h"

struct CUnk1013fc60Obj {
    float sub_10091080(int a);
};

float CMoveHelperServer::vfunc13(int param_2)
{
    int iVar1;

    if (*(int *)((char *)this + 4) == 0) {
        return 0.0f;
    }
    iVar1 = ((CBaseAnimating *)*(int *)((char *)this + 4))->sub_1008dd30(param_2, -1);
    if (iVar1 == -1) {
        return 0.0f;
    }
    return ((CUnk1013fc60Obj *)*(int *)((char *)this + 4))->sub_10091080(iVar1);
}
// END FUNCTION
