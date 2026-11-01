// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10148370 size=0x1
#include "CGravityPellet.h"
void CGravityPellet::vfunc104()
{
}
// END FUNCTION

// FUNCTION: 0x10148390 size=0xdc
#include "CBaseEntity.h"
#include "CGravityPellet.h"
#include "ScopeTrace.h"

struct CCollisionObj { void sub_1000428c(int solid); };

struct CGravityPelletFields
{
	char m_pad0000[0x19c];
	unsigned int m_nFlags;	// 0x19c
	unsigned char m_r, m_g, m_b;	// 0x1a0
	char m_pad01a3[0x734 - 0x1a3];
	unsigned char m_b734;
};

void CGravityPellet::vfunc103()
{
	CBaseEntity *e = (CBaseEntity *)this;
	e->vfunc104();
	int tmp;
	const char *s = *e->vfunc9(&tmp);
	e->vfunc105(s ? s : g_106b8540);
	{
		ScopeTrace t("CBaseEntity::SetSolid", e->m_name26c ? e->m_name26c : g_106b8540);
		((CCollisionObj *)((char *)e + 0x270))->sub_1000428c(0);
	}
	e->vfunc93(0, 0);
	CGravityPelletFields *f = (CGravityPelletFields *)this;
	f->m_nFlags |= 0x20;
	f->m_r = 0xff;
	f->m_g = 0;
	f->m_b = 0;
	f->m_b734 = 0;
}
// END FUNCTION

// FUNCTION: 0x10148500 size=0x6
#include "CGravityPellet.h"
namespace lifted {
extern char g_1057b7c0;
}
datamap_t *CGravityPellet::vfunc82()
{
    return (datamap_t *)&lifted::g_1057b7c0;
}
// END FUNCTION

// FUNCTION: 0x10148720 size=0x1e
#include "CGravityPellet.h"

void sub_100aa7b0(void *p);

// TARGET: CGravityPellet::vfunc5
CGravityPellet *CGravityPellet::vfunc5(unsigned int flags)
{
	sub_10004e1c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
