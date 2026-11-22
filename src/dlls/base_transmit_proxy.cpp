// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 4 blocks
#include "vampire.h"

// FUNCTION: 0x10097b50 size=0x3c
#include "CBaseEntity.h"
#include "CBaseTransmitProxy.h"

extern int vt_10450004[];

CBaseTransmitProxy::CBaseTransmitProxy(CBaseEntity *pEnt)
{
    m_hEnt = 0xffffffff;
    m_vptr = vt_10450004;
    if (pEnt) {
        m_hEnt = *pEnt->vfunc1();
        m_sUnk = 0;
    } else {
        m_hEnt = 0xffffffff;
        m_sUnk = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10097ba0 size=0x1e
#include "CBaseTransmitProxy.h"

// TARGET: CBaseTransmitProxy::vfunc0
CBaseTransmitProxy *CBaseTransmitProxy::vfunc0(unsigned int flags)
{
	sub_10002428();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10097bd0 size=0x7e
#include "CGlobalEntityList.h"
#include "CBaseTransmitProxy.h"
struct S_sub { void sub_1000fe7f(int); };
extern CGlobalEntityList *g_10566458;
extern int vt_10450004[];

static inline char *GetEnt(CBaseTransmitProxy *t)
{
    unsigned h = t->m_hEnt;
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *e = &g_10566458->m_Slots[h & 0x1fff];
        if (e->m_Serial == (h >> 13))
            return (char *)e->m_pEntity;
    }
    return 0;
}

void CBaseTransmitProxy::sub_10097bd0()
{
    m_vptr = vt_10450004;
    if (GetEnt(this)) {
        m_sUnk = -1;
        char *p = GetEnt(this);
        ((S_sub *)(p + 0x2d4))->sub_1000fe7f(0);
    }
}
// END FUNCTION

// FUNCTION: 0x10097c70 size=0x5
#include "CBaseTransmitProxy.h"
bool CBaseTransmitProxy::vfunc1(int a0, int a1, int a2, int a3, int a4)
{
    return 0;
}
// END FUNCTION
