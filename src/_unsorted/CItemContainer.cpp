// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10207f20 size=0x6
#include "CItemContainer.h"
namespace lifted {
extern char g_105a93d0;
}
datamap_t *CItemContainer::vfunc82()
{
    return (datamap_t *)&lifted::g_105a93d0;
}
// END FUNCTION

// FUNCTION: 0x10208870 size=0x14
#include "CItemContainer.h"

// TARGET: CItemContainer::vfunc370
int CItemContainer::vfunc370(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CItemContainer::*pm)(int);
	} u;
	u.p = vt[368];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x102088a0 size=0x14
#include "CItemContainer.h"

// TARGET: CItemContainer::vfunc371
int CItemContainer::vfunc371(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CItemContainer::*pm)(int);
	} u;
	u.p = vt[369];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x102088d0 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc363(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102088f0 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc362(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10208910 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc365(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10208930 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc364(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10208950 size=0x3
#include "CItemContainer.h"
void CItemContainer::vfunc316(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x10208970 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc317(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10208990 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc318(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102089b0 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc319(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102089d0 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc320(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102089f0 size=0x3
#include "CItemContainer.h"
bool CItemContainer::vfunc408()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10208a10 size=0x3
#include "CItemContainer.h"
void CItemContainer::vfunc330(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10208a30 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc377(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10208a50 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc378(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10208a70 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc294(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10208a90 size=0x3
#include "CItemContainer.h"
bool CItemContainer::vfunc409()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10208ab0 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10208ad0 size=0x1e
#include "CItemContainer.h"

void sub_100aa7b0(void *p);

// TARGET: CItemContainer::vfunc5
CItemContainer *CItemContainer::vfunc5(unsigned int flags)
{
	sub_10005718();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10208b50 size=0x39
#include "CItemContainer.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	unsigned int m_serial;
	int m_pad;
};

struct EntList {
	int m_hdr;
	EntInfo m_entries[1];
};

extern EntList *g_10566458;

unsigned int CItemContainer::vfunc34(int unused)
{
	unsigned int h = *(unsigned int *)((char *)this + 0x1a28);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13) && info->m_pEntity)
			return 0;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10208ba0 size=0x3e
#include "CItemContainer.h"

extern char *g_10566458;

struct CItemContainerTail
{
	char m_pad0000[0x1a34];
	unsigned int m_n1a34;	// +0x1a34
};

// TARGET: CItemContainer::vfunc35
unsigned int CItemContainer::vfunc35(int unused)
{
	unsigned int hUser = m_hUser.m_Index;
	if (hUser != 0xffffffff) {
		char *pEntry = g_10566458 + 4 + (hUser & 0x1fff) * 12;
		if (*(unsigned int *)(pEntry + 4) == (hUser >> 13) && *(void **)pEntry != 0) {
			return 0;
		}
	}
	return ((CItemContainerTail *)this)->m_n1a34;
}
// END FUNCTION

// FUNCTION: 0x10208bf0 size=0x23
void *__fastcall sub_1000689d(void *pSelf);
char __fastcall sub_10001d2f(void *pSelf);

// TARGET: sub_10208bf0
void *__fastcall sub_10208bf0(void *pSelf, int unused, int flags)
{
    void *pFound = sub_1000689d(pSelf);
    if (pFound != 0 && sub_10001d2f(pFound)) {
        return pFound;
    }
    return pSelf;
}
// END FUNCTION

// FUNCTION: 0x10208c30 size=0x1f
#include "CItemContainer.h"

// TARGET: CItemContainer::vfunc406
void CItemContainer::vfunc406()
{
	int state = m_nState49c;
	if (state == 1)
	{
		sub_101c1bc0(state);
	}
	else if (state == 2)
	{
		sub_101c1bc0(3);
	}
}
// END FUNCTION

// FUNCTION: 0x10208c60 size=0x1f
#include "CItemContainer.h"

// TARGET: CItemContainer::vfunc407
void CItemContainer::vfunc407()
{
	int state = m_nState49c;
	if (state == 1)
	{
		sub_101c1bc0(0);
	}
	else if (state == 2)
	{
		sub_101c1bc0(state);
	}
}
// END FUNCTION

// FUNCTION: 0x10208fc0 size=0x1f
#include "CItemContainer.h"

// TARGET: CItemContainer::vfunc349
void CItemContainer::vfunc349(CBaseEntity **ppEnt)
{
	CBaseEntity *pEnt = *ppEnt;
	if (pEnt && pEnt->m_p9c)
		sub_103411c0((CBaseEntity *)pEnt->m_p9c, 1);
}
// END FUNCTION

// FUNCTION: 0x10208ff0 size=0x72
#include "CItemContainer.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

inline CBaseEntity *ResolveHandle(const unsigned int &h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return (CBaseEntity *)s->m_pEntity;
	}
	return 0;
}

void CItemContainer::vfunc350(int unused)
{
	if (ResolveHandle(m_hUser.m_Index))
		sub_1000e020(ResolveHandle(m_hUser.m_Index), 1);
}
// END FUNCTION

// FUNCTION: 0x10209330 size=0xa
unsigned char __fastcall sub_100b4320(void *pThis);

// TARGET: sub_10209330
unsigned char __fastcall sub_10209330(void *pThis)
{
	unsigned char bResult = sub_100b4320(pThis);
	bResult &= 0xfd;
	bResult |= 8;
	return bResult;
}
// END FUNCTION

// FUNCTION: 0x10209710 size=0x5d
#include "CItemContainer.h"
#include "engineserver.h"
#define V4(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3();
struct CICView
{
	V4(a) V4(b) 
	virtual const char **vfunc8(); 
	virtual const char **vfunc9(void *pOut);
	V4(c) V4(d) V4(e) V4(f) V4(g) V4(h) V4(i) V4(j) V4(k) V4(l) V4(m) V4(n) V4(o) V4(p)
	V4(q) 
	virtual void x0();
	virtual void vfunc71();
};
struct CICBase
{
	void sub_10340360();
};

// TARGET: CItemContainer::vfunc104
void CItemContainer::vfunc104()
{
	((CICBase *)this)->sub_10340360();
	void *pTmp;
	const char *psz = *((CICView *)this)->vfunc9(&pTmp);
	if (!psz)
		psz = "";
	engine->vfunc13(psz, 0);
	const char *pszBreak = m_pszBreakModel1a30;
	if (!pszBreak)
		pszBreak = "";
	if (*pszBreak)
		engine->vfunc13(pszBreak, 0);
	((CICView *)this)->vfunc71();
}
// END FUNCTION

// FUNCTION: 0x10209790 size=0x18b
#include "CItemContainer.h"

extern "C" int __cdecl sub_1043e780(const char*, const char*);
extern char g_106b8540[];

struct str_10209790
{
	const char* p;
	const char* ToCStr() const { return p ? p : g_106b8540; }
};

struct DoorSeqEntry_10209790
{
	int id;
	str_10209790 name;
};

struct DoorRegistry_10209790
{
	char pad[0x14];
	int count;
	DoorSeqEntry_10209790** items;

	int sub_10009331(void* ent, const char* name, int flags);

	int Lookup(const char* name)
	{
		for (int i = 0; i < count; i++)
		{
			if (sub_1043e780(items[i]->name.ToCStr(), name) == 0)
				return items[i]->id;
		}
		return -1;
	}
};

extern DoorRegistry_10209790 g_1074b308;
extern int g_1074f038;
extern int g_1074f034;
extern int g_1074f03c;
extern int g_1074f040;

// TARGET: CItemContainer::vfunc71
void CItemContainer::vfunc71()
{
	*(int*)((char*)this + 0xbc) = 0;
	*(int*)((char*)this + 0xb4) = g_1074b308.sub_10009331(this, ((str_10209790*)((char*)this + 0xc0))->ToCStr(), 0);
	g_1074f038 = g_1074b308.Lookup("close");
	g_1074f034 = g_1074b308.Lookup("open");
	g_1074f03c = g_1074b308.Lookup("swing");
	g_1074f040 = g_1074b308.Lookup("locked");
}
// END FUNCTION

// FUNCTION: 0x102099d0 size=0x5
#include "CItemContainer.h"
bool CItemContainer::vfunc388(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102099f0 size=0x14
#include "CItemContainer.h"

void sub_101c1dc0();

void CItemContainer::vfunc113()
{
	sub_100a0bc0();
	*(void **)((char *)this + 0x1f0) = (void *)&sub_101c1dc0;
}
// END FUNCTION

// FUNCTION: 0x10209c50 size=0x5f
#include "CItemContainer.h"
#include "CVDmg_t.h"
int CItemContainer::vfunc142(CItemDamageInfo *pInfo)
{
    if (m_nTakeDamage1fc) {
        float flDamage;
        if (pInfo->m_pDmg)
            flDamage = (float)pInfo->m_pDmg->sub_101faa70();
        else
            flDamage = pInfo->m_flDamage;
        m_iHealth = (int)(m_iHealth - flDamage);
        if (m_iHealth <= 0) {
            sub_10209b20(pInfo->m_pAttacker);
            return 0;
        }
    }
    return 1;
}
// END FUNCTION
