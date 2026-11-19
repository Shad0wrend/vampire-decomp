// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10051c10 size=0xfa
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAuspexAura.h"
#include "ScopeTrace.h"


char CAuspexAura::vfunc86(int a, int pEdict, int c, int d, int e)
{
	ScopeTrace trace("CAuspexAura::ShouldTransmit", g_106b8540, g_106b8540);
	EHANDLE &hTransmit = *(EHANDLE *)&m_hTransmitEnt;
	CBaseEntity *pEnt = hTransmit;
	if (!pEnt) {
		pEnt = *(EHANDLE *)&m_hTarget4b8;
		hTransmit = pEnt;
	}
	return pEnt && pEdict == pEnt->m_pEdict2e0;
}
// END FUNCTION

// FUNCTION: 0x10051d50 size=0xe2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAuspexAura.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"
extern char g_1053ea8c[];
extern CGlobalEntityList *g_10566458;
struct EntWithPlayer { char pad[0xa8]; void *m_pPlayer; };
void CAuspexAura::vfunc243(CBaseEntity *pEnt, int a, int b)
{
    ScopeTrace t(g_1053ea8c, g_106b8540);
    sub_10012508(pEnt, a, b);
    if (pEnt) {
        unsigned int h = m_hTarget4b8;
        char *pData = *(char **)((char *)pEnt + 0x9c);
        CGlobalEntityList_Ent *pTarget;
        if (h != -1) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
            if (s->m_Serial == (h >> 13))
                pTarget = s->m_pEntity;
            else
                pTarget = 0;
        } else {
            pTarget = 0;
        }
        if (pData && pTarget && ((EntWithPlayer *)pTarget)->m_pPlayer) {
            int idx = engine->vfunc35(*(int *)((char *)pTarget + 0x2e0)) - 1;
            if (idx >= 0 && (unsigned int)idx < 0x20)
                pData[idx + 0x14e4]++;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10051e80 size=0x14c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAuspexAura.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"

extern CGlobalEntityList *g_10566458;
extern int vt_1044bf04[];	// CAuspexAura::vftable
void sub_100aa7b0(void *p);

struct CAuraSlot
{
	char *m_pEntity;
	int m_Serial;
	int m_pad;
};

__forceinline char *Resolve(unsigned int h)
{
	if (h != 0xffffffff)
	{
		CAuraSlot *pSlot = (CAuraSlot *)((char *)g_10566458 + 4) + (h & 0x1fff);
		if (pSlot->m_Serial == (int)(h >> 13))
			return pSlot->m_pEntity;
	}
	return 0;
}

// TARGET: CAuspexAura::vfunc5
CBaseEntity *CAuspexAura::vfunc5(unsigned int flags)
{
	*(int **)this = vt_1044bf04;
	{
		ScopeTrace trace("CAuspexAura::~CAuspexAura", g_106b8540);
		volatile unsigned int *pOwner = (unsigned int *)((char *)this + 0x254);
		if (Resolve(*pOwner) != 0)
		{
			char *pPlayer = *(char **)(Resolve(*pOwner) + 0x9c);
			char *pTarget = Resolve(m_hTarget4b8);
			if (pPlayer && pTarget && *(int *)(pTarget + 0xa8))
			{
				int j = engine->vfunc35(*(int *)(pTarget + 0x2e0)) - 1;
				if (j >= 0 && (unsigned int)j < 0x20)
					pPlayer[0x14e4 + j]++;
			}
		}
	}
	sub_10051a40();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
