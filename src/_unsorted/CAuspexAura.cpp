// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10051d50 size=0xe2
#include "CAuspexAura.h"
#include "CGlobalEntityList.h"
#include "IVEngineServer.h"
#include "ScopeTrace.h"
extern char g_1053ea8c[];
extern CGlobalEntityList *g_10566458;
extern IVEngineServer *g_1070b22c;
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
            int idx = g_1070b22c->vfunc35(*(int *)((char *)pTarget + 0x2e0)) - 1;
            if (idx >= 0 && (unsigned int)idx < 0x20)
                pData[idx + 0x14e4]++;
        }
    }
}
// END FUNCTION
