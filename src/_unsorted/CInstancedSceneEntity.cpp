// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10084a30 size=0x3
#include "CInstancedSceneEntity.h"
void CInstancedSceneEntity::vfunc270(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10084a50 size=0x3
#include "CInstancedSceneEntity.h"
void CInstancedSceneEntity::vfunc261(int a0, int a1, int a2, int a3, int a4)
{
}
// END FUNCTION

// FUNCTION: 0x10084a70 size=0x3
#include "CInstancedSceneEntity.h"
void CInstancedSceneEntity::vfunc271(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10084a90 size=0x3
#include "CInstancedSceneEntity.h"
void CInstancedSceneEntity::vfunc272(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10084c80 size=0x148
#include "CInstancedSceneEntity.h"
#include "CSceneEntity.h"
#include "CEHandleGet.h"
#include "CUnknown1007e5a0.h"
#include "CUnknown1007ce20.h"

void sub_101cd940(CSceneEntity *pEnt);

inline void DoThink(CSceneEntity *pThis, float frametime)
{
	((CUnknown1007e5a0 *)pThis->m_pScene4bc)->sub_1007e5a0(pThis->sub_10080ac0());
	((CSceneEntityScene *)pThis->m_pScene4bc)->sub_1007d7f0(pThis->m_f4a0);
	frametime += pThis->m_f4a0;
	pThis->m_f4a0 = frametime;
	if (!((CSceneEntityScene *)pThis->m_pScene4bc)->sub_1007d1e0())
		return;
	((CUnknown1007ce20 *)pThis->m_pScene4bc)->sub_1007cfc0(1, 0, 0);
	pThis->m_bPlaying498 = 0;
	pThis->m_bPlaying499 = 0;
	pThis->m_f4a0 = 0;
	pThis->sub_10084170(pThis->m_pScene4bc);
	sub_101cd940(pThis);
}

// TARGET: CInstancedSceneEntity::vfunc134
void CInstancedSceneEntity::vfunc134()
{
	CSceneEntity *pThis = (CSceneEntity *)this;
	if (pThis->m_pScene4bc && pThis->m_bPlaying498 && EHandle_Get(pThis->m_h580))
	{
		pThis->m_flNextThink = gpGlobals->curtime;
		if (pThis->m_bPlaying499)
		{
			pThis->vfunc241();
			return;
		}
		float e = gpGlobals->curtime - pThis->sub_100ac720(0);
		DoThink(pThis, (0.1 < e) ? 0.1 : e);
		return;
	}
	sub_101cd940(pThis);
}
// END FUNCTION

// FUNCTION: 0x10084e30 size=0x70
#include "CInstancedSceneEntity.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
struct S10084e30Ent { char pad[0x94]; int m_v94; };
int CInstancedSceneEntity::vfunc267(int a)
{
    unsigned int h = *(unsigned int *)((char *)this + 0x580);
    CGlobalEntityList_Ent *p = 0;
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        if (s->m_Serial == (int)(h >> 13))
            p = s->m_pEntity;
    }
    if (p) {
        unsigned int h2 = *(volatile unsigned int *)((char *)this + 0x580);
        S10084e30Ent *e;
        if (h2 != 0xffffffff) {
            CGlobalEntityList_Slot *s2 = &g_10566458->m_Slots[h2 & 0x1fff];
            e = s2->m_Serial == (int)(h2 >> 13) ? (S10084e30Ent *)s2->m_pEntity : 0;
        } else
            e = 0;
        int v = e->m_v94;
        if (v)
            return v;
    }
    return sub_10083c90(a);
}
// END FUNCTION

// FUNCTION: 0x10084ec0 size=0x88
#include "CInstancedSceneEntity.h"

#define SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SLOTS100(p) SLOTS10(p##0) SLOTS10(p##1) SLOTS10(p##2) SLOTS10(p##3) SLOTS10(p##4) \
	SLOTS10(p##5) SLOTS10(p##6) SLOTS10(p##7) SLOTS10(p##8) SLOTS10(p##9)

struct CSceneRequestObject
{
	SLOTS100(a) SLOTS100(b) SLOTS100(c) SLOTS100(d) SLOTS100(e)
	SLOTS10(f0) SLOTS10(f1) SLOTS10(f2) SLOTS10(f3) SLOTS10(f4)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
	virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8();
	virtual int vfunc559(int a);
};

struct CSceneFollowEnt
{
	char pad[0x94];
	CSceneRequestObject *m_pObj94;
};

struct CInstancedView580
{
	char pad[0x580];
	CHandle<CSceneFollowEnt> m_h580;
};

int CInstancedSceneEntity::vfunc269(int a)
{
	CInstancedView580 *v = (CInstancedView580 *)this;
	if (v->m_h580.Get()) {
		CSceneFollowEnt *ent = v->m_h580.Get();
		CSceneRequestObject *obj = ent->m_pObj94;
		if (obj) {
			int r = obj->vfunc559(a);
			if (r)
				return r;
		}
	}
	return sub_10083cd0(a, 0);
}
// END FUNCTION

// FUNCTION: 0x10084f80 size=0x1e
#include "CInstancedSceneEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CInstancedSceneEntity::vfunc5
CInstancedSceneEntity *CInstancedSceneEntity::vfunc5(unsigned int flags)
{
	sub_1000b1ef();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
