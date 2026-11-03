// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102124a0 size=0x6
#include "CGameSign.h"
namespace lifted {
extern char g_105ab98c;
}
datamap_t * CGameSign::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ab98c);
}
// END FUNCTION

// FUNCTION: 0x10212530 size=0x63
#include "CGameSign.h"
extern Vector g_1070d1b0;
// TARGET: CGameSign::CGameSign
CGameSign::CGameSign() : CBaseEntity(0)
{
    m_f458 = 0.5f;
    m_f45c = 0.5f;
    m_pszFile450 = 0;
    m_vecToucherPos = g_1070d1b0;
    m_pszFile450 = 0;
    m_b470 = 1;
}
// END FUNCTION

// FUNCTION: 0x102125c0 size=0x5
#include "CGameSign.h"
bool CGameSign::vfunc32(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x102125e0 size=0x7
#include "CGameSign.h"
namespace lifted {
extern float g_1044e674;
}
float CGameSign::vfunc37()
{
    return lifted::g_1044e674;
}
// END FUNCTION

// FUNCTION: 0x10212600 size=0x5
#include "CGameSign.h"
bool CGameSign::vfunc44(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10212620 size=0x1e
#include "CGameSign.h"

void sub_100aa7b0(void *p);

// TARGET: CGameSign::vfunc5
CGameSign *CGameSign::vfunc5(unsigned int flags)
{
	sub_1000726b();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10212c00 size=0x74
#include "CGameSign.h"
extern int g_105abb08;
struct CSignPlayerView {
    char m_pad[0x2090];
    unsigned int m_nFlags2090;
    void sub_10178590(Vector vLook);
    void sub_10167fd0();
};

void CGameSign::vfunc41(void *pPlayer)
{
    CSignPlayerView *p = (CSignPlayerView *)pPlayer;
    p->sub_10178590(*(Vector *)((char *)this + 0x464));
    if (m_flags204 & 1) {
        if (gpGlobals->curtime - *(float *)((char *)this + 0x460) > *(float *)((char *)this + 0x458) + 2.0f) {
            if ((p->m_nFlags2090 & g_105abb08) == g_105abb08)
                p->sub_10167fd0();
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10212ca0 size=0x95
#include "CGameSign.h"

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// the entity vtable up to slot 368
struct CTouchSlotsView
{
	SV10(a0) SV10(a1) SV10(a2) SV10(a3) SV10(a4) SV10(a5) SV10(a6) SV10(a7) SV10(a8) SV10(a9)
	SV10(b0) SV10(b1) SV10(b2) SV10(b3) SV10(b4) SV10(b5) SV10(b6) SV10(b7) SV10(b8)
	virtual void u190(); virtual void u191(); virtual void u192();
	virtual Vector vfunc193();
	SV10(c0) SV10(c1) SV10(c2) SV10(c3) SV10(c4) SV10(c5) SV10(c6) SV10(c7) SV10(c8) SV10(c9)
	SV10(d0) SV10(d1) SV10(d2) SV10(d3) SV10(d4) SV10(d5) SV10(d6)
	virtual void u364(); virtual void u365(); virtual void u366(); virtual void u367();
	virtual Vector vfunc368();
};

void CGameSign::vfunc39(CBaseEntity *pOther)
{
	sub_10212810(pOther);
	CBaseEntity::vfunc39(pOther);
	m_vecToucherPos = ((CTouchSlotsView *)pOther)->vfunc368() * 2000.0f + ((CTouchSlotsView *)pOther)->vfunc193();
}
// END FUNCTION

// FUNCTION: 0x10212d70 size=0x1b
#include "CBasePlayer.h"
#include "CGameSign.h"

// TARGET: CGameSign::vfunc42
void CGameSign::vfunc42(void *pEntity)
{
	sub_10212a30((CBasePlayer *)pEntity);
	sub_100a5030(pEntity);
}
// END FUNCTION
