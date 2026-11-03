// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011bd60 size=0x20
#include "vampire.h"
extern char g_10462780;
void sub_10430964(void *p);
struct CUnk1011bd60
{
    void *sub_1011bd60(unsigned char bFree);
};
// TARGET: CUnk1011bd60::sub_1011bd60
void *CUnk1011bd60::sub_1011bd60(unsigned char bFree)
{
    *(void **)this = &g_10462780;
    if (bFree & 1) {
        sub_10430964(this);
    }
    return this;
}
// END FUNCTION

// FUNCTION: 0x1011be00 size=0xc
extern int g_1070b258;
void __fastcall sub_1011be00(void *, int, int value)
{
	g_1070b258 = value;
}
// END FUNCTION

// FUNCTION: 0x1011be20 size=0x69
#include "CBaseEntity.h"
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

// FUNCTION: 0x1011beb0 size=0xe
// TARGET: sub_1011beb0
void sub_10136600(int x);

void __stdcall sub_1011beb0(int x)
{
    sub_10136600(x);
}
// END FUNCTION
