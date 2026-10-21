// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034d6e0 size=0xdb
#include "CScriptedTarget.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

// The entity's virtual table up to slot 217 (GetAbsOrigin).
struct CScriptedTargetSlots
{
	SV100(a) SV100(b) SV10(c)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual float *vfunc217();
};

int sub_10325e70();
extern int g_10938054;

// TARGET: CScriptedTarget::vfunc103
void CScriptedTarget::vfunc103()
{
    if (g_10938054 == 0)
        g_10938054 = sub_10325e70();
    {
        ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    }
    sub_100b3b00();
    float *pOrigin = ((CScriptedTargetSlots *)this)->vfunc217();
    m_vecOrigin5f44[0] = pOrigin[0];
    m_vecOrigin5f44[1] = pOrigin[1];
    m_vecOrigin5f44[2] = pOrigin[2];
    if (m_n5f50 == 0)
        sub_1034d5b0();
    sub_100b3840(0x10);
}
// END FUNCTION
