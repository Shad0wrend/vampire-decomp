// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x103158f0 size=0xab
#include "CBaseEntity.h"
#include "CUnknown103158f0.h"
#include "CGlobalEntityList.h"

extern void (*g_109f3630)(const char *pMsg, ...);

#define SQ_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SQ_V100(p) SQ_V10(p##0) SQ_V10(p##1) SQ_V10(p##2) SQ_V10(p##3) SQ_V10(p##4) SQ_V10(p##5) SQ_V10(p##6) SQ_V10(p##7) SQ_V10(p##8) SQ_V10(p##9)

// the vtable of an NPC up to slot 577, then slot 578
struct CSquadMemberSlots
{
	SQ_V100(a0) SQ_V100(a1) SQ_V100(a2) SQ_V100(a3) SQ_V100(a4)
	SQ_V10(b0) SQ_V10(b1) SQ_V10(b2) SQ_V10(b3) SQ_V10(b4) SQ_V10(b5) SQ_V10(b6)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
	virtual void OnSquadMemberRemoved(CBaseEntity *pMember);	// slot 578
};

struct SHandleSlot
{
	CSquadMemberSlots *m_pEntity;
	int m_Serial;
};

extern CGlobalEntityList *g_10566458;

void CUnknown103158f0::sub_103158f0(CBaseEntity *pMember)
{
	int i = 0;
	if (pMember) {
		int idx = sub_10316760(pMember);
		if (idx == -1) {
			g_109f3630("ERROR: Attempting to remove non-existing squad membmer!\n");
			return;
		}
		for (int j = idx; j < m_nMembers - 1; j++)
			m_aMembers[j] = m_aMembers[j + 1];
		m_nMembers--;
		if (m_nMembers < 0)
			m_nMembers = 0;
		for (; i < m_nMembers; i++) {
			unsigned int h = m_aMembers[i];
			if (h != 0xffffffff) {
				SHandleSlot *s = (SHandleSlot *)&g_10566458->m_Slots[h & 0x1fff].m_pEntity;
				if (s->m_Serial == (int)(h >> 13) && s->m_pEntity)
					s->m_pEntity->OnSquadMemberRemoved(pMember);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103159d0 size=0x6d
struct Squad;
struct Ent {
    virtual void v0();
    virtual int *v1();
    char pad[0x5da4 - 4];
    Squad *m_pSquad;
};
struct Squad {
    int pad0;
    int m_pName;
    char pad1[0x1c - 8];
    int m_Members[16];
    int m_Count;
};
extern void (*g_109f3630)(const char *, ...);

void __fastcall sub_103159d0(Squad *self, int, Ent *ent)
{
    if (self->m_Count + 1 >= 16) {
        g_109f3630("Error!! Squad %s is too big!!! Replacing last member\n", self->m_pName);
        self->m_Count--;
    }
    int *slot = &self->m_Members[self->m_Count];
    if (ent)
        *slot = *ent->v1();
    else
        *slot = -1;
    ent->m_pSquad = self;
    self->m_Count++;
}
// END FUNCTION

// FUNCTION: 0x10315a60 size=0x6
int __stdcall sub_10315a60(int a0)
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10315a80 size=0xe3
#include "CUnknown103160c0.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
struct SGroupMember { char m_pad[0x5bb0]; int m_nCounter; };
CBaseEntity *CUnknown103160c0::sub_10315a80(const Vector *pPos, float flRadius)
{
    for (int i = 0; i < m_nMembers; i++)
    {
        if (EHandle_Get(m_hMembers[i]) && ((SGroupMember *)EHandle_Get(m_hMembers[i]))->m_nCounter <= 0)
        {
            Vector *pOrigin = ((CEntityVSlots *)EHandle_Get(m_hMembers[i]))->slot220();
            if ((*pPos - *pOrigin).Length2D() <= flRadius)
                return (CBaseEntity *)EHandle_Get(m_hMembers[i]);
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10315bb0 size=0x18b
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "Vector.h"

struct CSquadNearest {
	char pad0[0x1c];
	unsigned int m_hMembers[1];
	char pad1[0x5c - 0x20];
	int m_nMembers;
	CBaseEntity *sub_10315bb0(CAI_BaseNPCTroika *pNPC);
};

CBaseEntity *CSquadNearest::sub_10315bb0(CAI_BaseNPCTroika *pNPC)
{
	if (!pNPC || pNPC->m_n5bb0 > 0)
		return 0;
	float flBest = 16384.0f;
	CBaseEntity *pBest = 0;
	Vector vecPos = *(Vector *)pNPC->vfunc220();
	for (int i = 0; i < m_nMembers; i++) {
		if (EHandle_Get(m_hMembers[i]) && ((CAI_BaseNPCTroika *)EHandle_Get(m_hMembers[i]))->m_n5bb0 <= 0) {
			Vector d = vecPos - *(Vector *)((CAI_BaseNPCTroika *)EHandle_Get(m_hMembers[i]))->vfunc220();
			float flDist = FastSqrt(d.y * d.y + (d.x * d.x + d.z * d.z));
			if ((CAI_BaseNPCTroika *)EHandle_Get(m_hMembers[i]) != pNPC && flDist < flBest) {
				flBest = flDist;
				pBest = (CBaseEntity *)EHandle_Get(m_hMembers[i]);
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x10315db0 size=0xc9
#include "CUnknown10315db0.h"

#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct EntSlots201 {
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7) D10(a8) D10(a9)
	D10(b0) D10(b1) D10(b2) D10(b3) D10(b4) D10(b5) D10(b6) D10(b7) D10(b8) D10(b9)
	virtual void c0();
	virtual char f201(EntSlots201 *pOther, int flags, int a, int b);
	char m_pad[0x5bb0 - 4];
	int m_nBlock;
};

int CUnknown10315db0::sub_10315db0(EntSlots201 *pEntity)
{
	int i = 0;
	if (pEntity && pEntity->m_nBlock <= 0) {
		int n = 0;
		for (i = 0; i < m_nMembers; i++) {
			CHandle<EntSlots201> *h = (CHandle<EntSlots201> *)&m_hMembers[i];
			if (h->Get() && pEntity != h->Get() && h->Get()->m_nBlock <= 0) {
				if (pEntity->f201(h->Get(), 0x2804091, 0, 0))
					n++;
			}
		}
		return n;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10315ec0 size=0x71
#include "CUnknown10315ec0.h"

struct SEnt { int pad; };
struct SHandleEntry { SEnt *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

bool CUnknown10315ec0::sub_10315ec0(CUnknown10315ec0Ent *pEnt)
{
    CUnknown10315ec0Owner *owner = pEnt->m_pOwner;
    if (owner && owner->m_count5bb0 <= 0) {
        for (int i = 0; i < m_numHandles; i++) {
            unsigned h = m_handles[i];
            SEnt *ent;
            if (h == 0xffffffff)
                ent = 0;
            else {
                SHandleEntry *he = &g_10566458->e[h & 0x1fff];
                ent = (he->serial == (h >> 13)) ? he->p : 0;
            }
            if ((void *)ent == (void *)owner)
                return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10315f60 size=0x58
#include "CEHandleGet.h"
struct CSquadNpcView { char m_pad[0x5bb0]; int m_nCount; };
struct CSquadView { char m_pad[0x1c]; unsigned int m_hMember; };
char __fastcall sub_10315f60(CSquadView *pSquad, int unused, CSquadNpcView *pNpc)
{
	if (!pNpc)
		return 0;
	if (pNpc->m_nCount > 0)
		return 0;
	return EHandle_Get(pSquad->m_hMember) == (void *)pNpc;
}
// END FUNCTION

// FUNCTION: 0x10315fe0 size=0x8d
#include "CUnknown10315fe0.h"

struct EntSub { void *ent; unsigned int serial; };
struct EntInfo { int pad; EntSub s; };
extern EntInfo *g_10566458;

struct CEntLike { char m_pad[0x5bb0]; int m_nCounter; };

struct CHandleLike {
	unsigned int m_index;
	void *Get() const
	{
		if (m_index == 0xffffffff)
			return 0;
		EntSub *s = &g_10566458[m_index & 0x1fff].s;
		if (s->serial == (m_index >> 13))
			return s->ent;
		return 0;
	}
};

class COverlay {
public:
	char m_pad[0x1c];
	CHandleLike m_hEntity;
	void *Resolve()
	{
		if (m_hEntity.Get() != 0) {
			if (((CEntLike *)m_hEntity.Get())->m_nCounter > 0)
				return 0;
		}
		return m_hEntity.Get();
	}
};

void *CUnknown10315fe0::sub_10315fe0()
{
	return ((COverlay *)this)->Resolve();
}
// END FUNCTION

// FUNCTION: 0x103160a0 size=0x4
struct CUnknown103160a0 { int sub_103160a0(); };
int CUnknown103160a0::sub_103160a0()
{
    return *(int *)((char *)this + 0x5c);
}
// END FUNCTION

// FUNCTION: 0x103160c0 size=0xaa
#include "CBaseEntity.h"
#include "CUnknown103160c0.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	int m_serial;
	int m_unused;
};
extern char *g_10566458;

struct GroupMember_t {
	char m_pad0000[0x5bb0];
	int m_n5bb0;
};

static inline CBaseEntity *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntInfo *e = &((EntInfo *)(g_10566458 + 4))[h & 0x1fff];
		if (e->m_serial == (int)(h >> 13))
			return e->m_pEntity;
	}
	return 0;
}

CBaseEntity *CUnknown103160c0::sub_103160c0(int index)
{
	if (index >= 0 && index < m_nMembers) {
		volatile unsigned int *pLeaderHandle = &m_hMembers[0];
		if (ResolveHandle(*pLeaderHandle)) {
			GroupMember_t *pLeader = (GroupMember_t *)ResolveHandle(*pLeaderHandle);
			if (pLeader->m_n5bb0 > 0)
				return 0;
		}
		return ResolveHandle(m_hMembers[index]);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103161a0 size=0xec
#include "CUnknown103160c0.h"
#include "CAI_BaseNPC.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
extern void (*g_109f3630)(const char *, ...);
extern char g_10614f4c[];
struct CSquadHook { virtual void vfunc0(); virtual void vfunc1(); };
extern CSquadHook *g_10924a6c;
void CUnknown103160c0::sub_103161a0(int pEnemy)
{
	if (!pEnemy) {
		g_109f3630(g_10614f4c);
		return;
	}
	for (int i = 0; i < m_nMembers; i++) {
		unsigned int h = m_hMembers[i];
		if (h == 0xffffffff)
			continue;
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial != (int)(h >> 13))
			continue;
		CAI_BaseNPC *pNPC = (CAI_BaseNPC *)s->m_pEntity;
		if (!pNPC)
			continue;
		if (*(int *)((char *)pNPC + 0x5bb0) <= 0 && pNPC->vfunc167() != pEnemy && !pNPC->sub_10269aa0(0x46) && (char *)pNPC->vfunc541() == (char *)this + 8) {
			pNPC->sub_10279a50(pEnemy);
			*(int *)((char *)pNPC + 0x5d9c) = 0;
			g_10924a6c->vfunc1();
			pNPC->sub_10269a20(0x54);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103162d0 size=0x31
struct CUnknown103162d0Node
{
	CUnknown103162d0Node *pNext;
	void sub_10316440();
};

extern CUnknown103162d0Node *g_10936c68;

// TARGET: sub_103162d0
void sub_103162d0()
{
	CUnknown103162d0Node *pNode = g_10936c68;
	while (pNode != 0) {
		CUnknown103162d0Node *pNext = pNode->pNext;
		pNode->sub_10316440();
		delete pNode;
		pNode = pNext;
	}
	g_10936c68 = 0;
}
// END FUNCTION

// FUNCTION: 0x10316320 size=0x90
#include "CUnknown10316320.h"

#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
// stand-in for the first 367 slots of the sub-object's virtual table
struct SubObj {
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7) D10(a8) D10(a9)
	D10(b0) D10(b1) D10(b2) D10(b3) D10(b4) D10(b5) D10(b6) D10(b7) D10(b8) D10(b9)
	D10(c0) D10(c1) D10(c2) D10(c3) D10(c4) D10(c5) D10(c6) D10(c7) D10(c8) D10(c9)
	D10(d0) D10(d1) D10(d2) D10(d3) D10(d4) D10(d5)
	virtual void e360(); virtual void e361(); virtual void e362(); virtual void e363(); virtual void e364(); virtual void e365();
	virtual void vfunc366(int a, int b, void *c);
	char m_pad[0x5bb0 - 4];
	int m_field5bb0;
};
struct HandleOwner {
	char m_pad[0x94];
	SubObj *m_pSub;
};
struct EntInfo { HandleOwner *p; unsigned int serial; int x; };
struct EntList { int pad; EntInfo e[1]; };
extern EntList *g_10566458;

static inline HandleOwner *LookupHandle(unsigned int h)
{
	if (h != 0xFFFFFFFF) {
		EntInfo *info = &g_10566458->e[h & 0x1fff];
		if (info->serial == (h >> 13))
			return info->p;
	}
	return 0;
}

int CUnknown10316320::sub_10316320(int a, int b, void *pExcept)
{
	if (m_nEntities == 0)
		return 0;
	for (int i = 0; i < m_nEntities; i++) {
		HandleOwner *ent = LookupHandle(m_hEntities[i]);
		SubObj *sub = ent->m_pSub;
		if (sub && sub != pExcept && sub->m_field5bb0 <= 0)
			sub->vfunc366(a, b, pExcept);
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x103163e0 size=0x5
char __stdcall sub_103163e0(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10316400 size=0x5
char __stdcall sub_10316400(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10316420 size=0x5
char __stdcall sub_10316420(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10316440 size=0x5c
struct CListNode {
    CListNode *next;
};
void __fastcall sub_100bf6a0(void *);
void __fastcall sub_102e0730(void *);
extern CListNode *g_10936c68;
void __fastcall sub_10316440(CListNode *p)
{
    if (g_10936c68 == p) {
        g_10936c68 = g_10936c68->next;
    } else {
        for (CListNode *q = g_10936c68; q; q = q->next) {
            if (q->next == p) {
                q->next = q->next->next;
                break;
            }
        }
    }
    sub_100bf6a0((char *)p + 0x64);
    sub_102e0730((char *)p + 8);
}
// END FUNCTION

// FUNCTION: 0x103164c0 size=0x73
#include "CUnknown103164c0.h"

// TARGET: CUnknown103164c0::CUnknown103164c0
CUnknown103164c0::CUnknown103164c0(const char *pszName)
{
	m_base.sub_102e06f0();
	for (int i = 0; i < 16; i++)
		m_hMembers[i] = 0xffffffff;
	CBitString *pBits = &m_bits;
	pBits->m_nBits = 32;
	pBits->m_nDwords = 1;
	pBits->m_pData = 0;
	pBits->sub_100bf5b0(1);
	if (pBits->m_pData)
		memset(pBits->m_pData, 0, pBits->m_nDwords * 4);
	m_n70 = -1;
	sub_103165f0(pszName);
}
// END FUNCTION

// FUNCTION: 0x10316560 size=0x6f
#include "CUnknown103164c0.h"

CUnknown103164c0 *CUnknown103164c0::sub_10316560()
{
	m_base.sub_102e06f0();
	for (int i = 0; i < 16; i++)
		m_hMembers[i] = 0xffffffff;
	CBitString *p = &m_bits;
	p->m_nBits = 0x20;
	p->m_nDwords = 1;
	p->m_pData = 0;
	p->sub_100bf5b0(1);
	if (p->m_pData)
		memset(p->m_pData, 0, p->m_nDwords * 4);
	m_n70 = -1;
	sub_103165f0(CSquadName());
	return this;
}
// END FUNCTION

// FUNCTION: 0x103165f0 size=0x4c
#include "CUnknown103164c0.h"
extern CUnknown103164c0 *g_10936c68;
void CUnknown103164c0::sub_103165f0(const char *pszName)
{
    m_pszName = pszName;
    for (int i = 0; i < 16; i++)
        m_hMembers[i] = 0xffffffff;
    *(int *)m_pad60 = 0;
    if (pszName) {
        m_pNext = g_10936c68;
        g_10936c68 = this;
    } else {
        m_pNext = 0;
    }
    *((char *)this + 0x10) = 1;
    *(CUnknown103164c0 **)((char *)this + 0xc) = this;
    m_nMembers = 0;
    m_n70 = -1;
    *(int *)((char *)this + 0x74) = 0;
}
// END FUNCTION

// FUNCTION: 0x10316660 size=0x34
#include "CUnknown10316660.h"


// TARGET: CUnknown10316660::sub_10316660
void CUnknown10316660::sub_10316660(CBaseEntity *pEnt)
{
    if (pEnt) {
        m_hEnt70 = *pEnt->vfunc1();
    } else {
        m_hEnt70 = -1;
    }
    m_flTime74 = gpGlobals->curtime + 15.0f;
}
// END FUNCTION

// FUNCTION: 0x103166b0 size=0x3b
#include "CEHandleGet.h"


CGlobalEntityList_Ent *__fastcall sub_103166b0(char *self)
{
    if (gpGlobals->curtime < *(float *)(self + 0x74)) {
        return EHandle_Get(*(const unsigned int *)(self + 0x70));
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10316700 size=0x3
void __stdcall sub_10316700(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10316720 size=0x2c
extern char g_10591ae8[];
extern char g_10614f80[];
int sub_100067f3(char *fmt, char *file, int line);

struct CUnknown102dfaa0_10316720 {
    void sub_10009c32(int a, int b);
};
struct CSquadUnit10316720 {
    char pad[8];
    CUnknown102dfaa0_10316720 m_sub;
    void sub_10316720(int a);
};

// TARGET: sub_10316720
void CSquadUnit10316720::sub_10316720(int a)
{
    int v = sub_100067f3(g_10591ae8, g_10614f80, 0x252);
    m_sub.sub_10009c32(a, v);
}
// END FUNCTION
