// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011be00 size=0xc
extern int g_1070b258;
void __fastcall sub_1011be00(void *, int, int value)
{
	g_1070b258 = value;
}
// END FUNCTION

// FUNCTION: 0x1011be20 size=0x69
#include "CServerGameEnts.h"
struct CServerGameEntsUnknown {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual CBaseEntity *GetBaseEntity();
};
struct CTraceRecord54 { char m_pad[0x54]; };
void sub_101cf210(CTraceRecord54 *p);

void CServerGameEnts::vfunc2(CServerGameEntsEdict *pFirst, CServerGameEntsEdict *pSecond)
{
    if (pFirst && pFirst->m_pUnk) {
        CBaseEntity *pEnt = pFirst->m_pUnk->GetBaseEntity();
        if (pEnt) {
            CTraceRecord54 rec;
            sub_101cf210(&rec);
            CBaseEntity *pOther = (pSecond && pSecond->m_pUnk) ? pSecond->m_pUnk->GetBaseEntity() : 0;
            pEnt->sub_1003e2e0(pOther, &rec);
        }
    }
}
// END FUNCTION
