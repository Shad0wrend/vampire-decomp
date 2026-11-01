// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10211910 size=0x6
namespace lifted {
extern char g_105ab83c;
}
datamap_t *CPropSign::vfunc82()
{
    return (datamap_t *)&lifted::g_105ab83c;
}
// END FUNCTION

// FUNCTION: 0x10211ac0 size=0x1e
#include "CPropSign.h"

void sub_100aa7b0(void *p);

// TARGET: CPropSign::vfunc5
CPropSign *CPropSign::vfunc5(unsigned int flags)
{
	sub_10001a0a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10211b40 size=0xd2
#include "CPropSign.h"
#include "ScopeTrace.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CPropSignSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8)
	SV(90) SV(91) SV(92)
	virtual void s93(int moveType, int moveCollide);
};

void CPropSign::vfunc103()
{
	sub_1018df70();
	char *pStudioHdr = (char *)sub_100952d0(-1);
	if (pStudioHdr) {
		((CPropSignSlotsX *)this)->s93(0, 0);
		{
			ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
			m_Collision.sub_100dc480(3);
		}
		sub_100adf10((float *)(pStudioHdr + 0xb4), (float *)(pStudioHdr + 0xc0));
		sub_100aaa40(1);
		m_Collision.sub_100ddd90();
		sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x10211c60 size=0x7f
#include "CPropSign.h"
struct Sub { void *pEnt; unsigned int serial; };
struct EntInfo { int pad; Sub s; };
extern EntInfo *g_10566458;
static inline void *HGet(const CPropSignHandle *h)
{
    if (h->m_Index != 0xffffffff) {
        Sub *e = &g_10566458[h->m_Index & 0x1fff].s;
        if (e->serial == (h->m_Index >> 13))
            return e->pEnt;
    }
    return 0;
}
bool CPropSign::vfunc32(void *pEntity)
{
    if (pEntity == HGet(&m_hAttached))
        return true;
    return HGet(&m_hAttached) == 0;
}
// END FUNCTION

// FUNCTION: 0x10211d00 size=0x6
int CPropSign::vfunc33()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10211d20 size=0x9
int CPropSign::vfunc35(int a) { return m_field768; }
// END FUNCTION

// FUNCTION: 0x10211d40 size=0x16
#include "CPropSign.h"

bool CPropSign::vfunc34(int a)
{
	return vfunc35(a) != 0;
}
// END FUNCTION

// FUNCTION: 0x10211e00 size=0x50
#include "CBasePlayer.h"
struct CBasePlayerView208c { char pad[0x208c]; int m_n208c; };

void CPropSign::vfunc41(CBasePlayer *pPlayer)
{
	if (((CBasePlayerView208c *)pPlayer)->m_n208c) {
		pPlayer->sub_10167fd0();
		return;
	}
	pPlayer->sub_10178590(((CBasePlayer *)this)->vfunc192());
}
// END FUNCTION

// FUNCTION: 0x10211e70 size=0x72
#include "CPropSign.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"

// TARGET: CPropSign::vfunc42
void CPropSign::vfunc42(CBasePlayer *pPlayer)
{
	sub_100a5030(pPlayer);
	m_Users74c.sub_100cd660(pPlayer, this, 0);
	sub_102120c0((CBaseEntity *)pPlayer);
	pPlayer->sub_10178590(((CEntityVSlots *)this)->slot192());
	pPlayer->sub_1015ef40();
	pPlayer->sub_1015ef60();
	pPlayer->sub_101815b0(1);
}
// END FUNCTION
