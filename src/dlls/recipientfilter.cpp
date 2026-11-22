// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 25 blocks
#include "vampire.h"

// FUNCTION: 0x1019ce00 size=0x23
#include "CRecipientFilter.h"
CRecipientFilter::CRecipientFilter()
{
	Reset();
}
// END FUNCTION

// FUNCTION: 0x1019ce40 size=0x68
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
extern int vt_10447108[];

struct TFilterX {
	int *vptr;
	int pad;
	void *p;
	int count;
	int grow;
	int size;
	void *elems;
	TFilterX *sub_1019ce40(unsigned char flags);
};

TFilterX *TFilterX::sub_1019ce40(unsigned char flags)
{
	size = 0;
	if (grow != -1) {
		if (p) {
			Plat_Free(p);
			p = 0;
		}
		count = 0;
	}
	void *e = p;
	int g = grow;
	elems = e;
	if (g != -1) {
		if (e) {
			Plat_Free(e);
			p = 0;
		}
		count = 0;
	}
	vptr = vt_10447108;
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1019ced0 size=0x1e
// TARGET: Reset
#include "CRecipientFilter.h"
void CRecipientFilter::Reset()
{
    m_bReliable = false;
    m_bInitMessage = false;
    m_1c = 0;
    m_20 = -1;
    m_24 = -1;
    m_Recipients.m_Size = 0;
    m_bUsingPredictionRules = false;
    m_bIgnorePredictionCull = false;
}
// END FUNCTION

// FUNCTION: 0x1019cf00 size=0x3f
#include "vampire.h"
#include "CRecipientFilter.h"

int sub_1000ac8b(int nClient);

// TARGET: CRecipientFilter::sub_1019cf00
void CRecipientFilter::sub_1019cf00()
{
    if (m_24 == -1)
    {
        m_24 = 0;
        for (int i = 1; i <= gpGlobals->maxClients; i++)
        {
            if (sub_1000ac8b(i))
            {
                m_24++;
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1019cf50 size=0x5
#include "CRecipientFilter.h"
void CRecipientFilter::MakeReliable()
{
    *(char *)((char *)this + 4) = 1;
}
// END FUNCTION

// FUNCTION: 0x1019cf70 size=0x4
#include "CRecipientFilter.h"
// TARGET: sub_1019cf70
char __fastcall sub_1019cf70(CRecipientFilter *p) { return p->m_bReliable; }
// END FUNCTION

// FUNCTION: 0x1019cf90 size=0x4
// TARGET: sub_1019cf90
int __fastcall sub_1019cf90(void *pFilter)
{
	return *(int *)((char *)pFilter + 0x14);
}
// END FUNCTION

// FUNCTION: 0x1019cfb0 size=0x28
#include "CRecipientFilter.h"

int CRecipientFilter::vfunc3(int slot)
{
	if (slot < 0 || slot >= vfunc2())
		return -1;
	return m_Recipients[slot];
}
// END FUNCTION

// FUNCTION: 0x1019cff0 size=0x3e
#include "CBasePlayer.h"
#include "utlrbtree.h"
#include "vampire.h"
#include "CRecipientFilter.h"

void *sub_1000ac8b(int nClient);

// TARGET: CRecipientFilter::AddAllPlayers
void CRecipientFilter::AddAllPlayers()
{
    m_Recipients.RemoveAll();
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        void *pPlayer = sub_1000ac8b(i);
        if (pPlayer)
        {
            AddRecipient((CBasePlayer *)pPlayer);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1019d040 size=0xbc
#include "CBaseEntity.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CRecipientFilter.h"
#include "CBasePlayer.h"
#include "engineserver.h"

struct CPredictionSystemView
{
	void *m_vptr;
	void *m_pNextSystem;
	bool m_bSuppressEvent;
	CBaseEntity *m_pSuppressHost;
	int m_nStatusPushed;

	bool DisableFiltering() const
	{
		return (m_nStatusPushed > 0) ? true : false;
	}
	CBaseEntity const *GetSuppressHost(void)
	{
		if (DisableFiltering())
		{
			return 0;
		}
		return m_pSuppressHost;
	}
};
extern CPredictionSystemView g_1072b3fc;

void CRecipientFilter::AddRecipient(CBasePlayer *player)
{
	int edict = *(int *)((char *)player + 0x2e0);
	int index = engine->vfunc35(edict);

	if (m_bUsingPredictionRules)
	{
		if (g_1072b3fc.GetSuppressHost() == (CBaseEntity *)player)
		{
			return;
		}
	}

	if (m_Recipients.Find(index) != m_Recipients.InvalidIndex())
		return;

	m_Recipients.AddToTail(index);
}
// END FUNCTION

// FUNCTION: 0x1019d130 size=0x6c
#include "CBaseEntity.h"
#include "CUnknown1019d130.h"
void sub_10430fa0(void *, const void *, unsigned);

void CUnknown1019d130::sub_1019d130(CBaseEntity *pEnt)
{
    int h = *(int *)((char *)pEnt + 0x2e0);
    int v = engine->vfunc35(h);
    int n = m_Size;
    int i = 0;
    for (; i < n; i++) {
        if (m_pData[i] == v)
            goto found;
    }
    return;
found:
    if (i != -1) {
        int c = n - i - 1;
        if (c > 0)
            sub_10430fa0(m_pData + i, m_pData + i + 1, c * 4);
        m_Size--;
    }
}
// END FUNCTION

// FUNCTION: 0x1019d1c0 size=0x3c
#include "CBasePlayer.h"
#include "CRecipientFilter.h"

CBasePlayer *sub_1000ac8b(int);

struct CUnk1019d1c0 {
    void sub_1019d1c0(unsigned int mask);
};

void CUnk1019d1c0::sub_1019d1c0(unsigned int mask)
{
    int i;
    CBasePlayer *pPlayer;

    for (i = 0; i < 0x20; i++) {
        if (mask & (1 << i)) {
            pPlayer = sub_1000ac8b(i + 1);
            if (pPlayer != 0) {
                ((CRecipientFilter *)this)->AddRecipient(pPlayer);
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1019d210 size=0x4e
#include "CRecipientFilter.h"
void CRecipientFilter::AddRecipientsByPVS(const Vector &origin)
{
	if (gpGlobals->maxClients == 1) {
		AddAllPlayers();
	} else {
		int playerbits = 0;
		engine->vfunc64(0, &origin.x, &playerbits);
		sub_1019d1c0(playerbits);
	}
}
// END FUNCTION

// FUNCTION: 0x1019d280 size=0x4e
#include "CRecipientFilter.h"
#include "Vector.h"
void CRecipientFilter::AddRecipientsByPAS(const Vector &origin)
{
	if (gpGlobals->maxClients == 1) {
		AddAllPlayers();
		return;
	}
	int playerbits = 0;
	engine->vfunc64(1, &origin.x, &playerbits);
	sub_1019d1c0(playerbits);
}
// END FUNCTION

// FUNCTION: 0x1019d2f0 size=0x11
struct CUnknown1019d2f0 { int sub_1019d2f0(int); };
int CUnknown1019d2f0::sub_1019d2f0(int a0)
{
    *(int *)((char *)this + 0x1c) = 1;
    *(int *)((char *)this + 0x20) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1019d320 size=0x8
#include "CRecipientFilter.h"

char CRecipientFilter::vfunc4()
{
	return m_1c == 1;
}
// END FUNCTION

// FUNCTION: 0x1019d340 size=0x4
#include "CRecipientFilter.h"
// TARGET: sub_1019d340
int __fastcall sub_1019d340(CRecipientFilter *p) { return p->m_20; }
// END FUNCTION

// FUNCTION: 0x1019d360 size=0x15
#include "CRecipientFilter.h"

// TARGET: sub_1019d360
char __fastcall sub_1019d360(CRecipientFilter *p)
{
	p->sub_1019cf00();
	return *(int *)((char *)p + 0x24) == *(int *)((char *)p + 0x14);
}
// END FUNCTION

// FUNCTION: 0x1019d390 size=0x4
#include "CRecipientFilter.h"
// TARGET: sub_1019d390
char __fastcall sub_1019d390(CRecipientFilter *p) { return p->m_bInitMessage; }
// END FUNCTION

// FUNCTION: 0x1019d3b0 size=0x5
struct CUnknown1019d3b0 { void sub_1019d3b0(); };
void CUnknown1019d3b0::sub_1019d3b0()
{
    *(char *)((char *)this + 5) = 1;
}
// END FUNCTION

// FUNCTION: 0x1019d3d0 size=0x5c
#include "CBaseEntity.h"
#include "CRecipientFilter.h"
#include "CUnknown1019d130.h"

struct CRecipientFilterSlotsView {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual int GetRecipientCount();
	virtual int GetRecipientIndex(int slot);
};
extern int g_1072b40c;
extern CBaseEntity *g_1072b408;
CBaseEntity *sub_101cd9e0(int);

void CRecipientFilter::UsePredictionRules()
{
	if (m_bUsingPredictionRules)
		return;
	m_bUsingPredictionRules = true;
	CRecipientFilterSlotsView *v = (CRecipientFilterSlotsView *)this;
	int count = v->GetRecipientCount();
	if (count) {
		for (int i = count - 1; i >= 0; i--) {
			CBaseEntity *p = sub_101cd9e0(v->GetRecipientIndex(i));
			if (p && (g_1072b40c > 0 ? 0 : g_1072b408) == p)
				((CUnknown1019d130 *)this)->sub_1019d130(p);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1019d450 size=0x4
struct CUnknown1019d450 { char sub_1019d450(); };
char CUnknown1019d450::sub_1019d450()
{
    return *(char *)((char *)this + 0x28);
}
// END FUNCTION

// FUNCTION: 0x1019d470 size=0x4
struct CUnknown1019d470 { char sub_1019d470(); };
char CUnknown1019d470::sub_1019d470()
{
    return *(char *)((char *)this + 0x29);
}
// END FUNCTION

// FUNCTION: 0x1019d490 size=0xa
#include "CUnknown1019d490.h"
void CUnknown1019d490::sub_1019d490(char value)
{
	m_unk29 = value;
}
// END FUNCTION

// FUNCTION: 0x1019d4b0 size=0x165
#include "CBaseEntity.h"
#include "CUnknown101cf0a0.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b22c.h"
#include "CUnknown1019d130.h"
#include "ScopeTrace.h"

extern CUnknown1070b22c *g_1070b22c;
extern float g_104454c4;

struct SFilterView
{
	virtual void v0();
	virtual void v1();
	virtual int GetRecipientCount();
	virtual int GetRecipientIndex(int slot);
};

struct SPlayerEnt { char m_pad[0xa8]; void *m_pPlayer; };

CBaseEntity *sub_100ab250(CUnknown1070b22c_Edict *pEdict);

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct SPlayerObj
{
	SV100(a0) SV100(a1) SV10(a20) SV10(a21)
	virtual float *vfunc220();
};

static inline CBaseEntity *Instance(CUnknown1070b22c_Edict *pEdict)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	if (!pEdict)
		pEdict = g_1070b22c->vfunc38(0);
	return sub_100ab250(pEdict);
}

static inline CBaseEntity *Instance(int iEnt)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	return Instance(g_1070b22c->vfunc38(iEnt));
}

void CPASAttenuationFilter::Filter(const Vector &origin, float attenuation)
{
	if (gpGlobals->maxClients == 1)
		return;
	if (attenuation <= g_104454c4)
		return;
	SFilterView *pView = (SFilterView *)this;
	for (int i = pView->GetRecipientCount() - 1; i >= 0; i--) {
		int index = pView->GetRecipientIndex(i);
		CBaseEntity *pEnt = Instance(index);
		if (pEnt) {
			SPlayerObj *pPlayer = (SPlayerObj *)((SPlayerEnt *)pEnt)->m_pPlayer;
			if (pPlayer) {
				Vector delta;
				delta = *(Vector *)pPlayer->vfunc220() - origin;
				if (!(delta.Length() <= 2000.0f / attenuation))
					((CUnknown1019d130 *)this)->sub_1019d130((CBaseEntity *)pPlayer);
			}
		}
	}
}
// END FUNCTION
