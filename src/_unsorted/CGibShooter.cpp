// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f4730 size=0x23
#include "CGibShooter.h"
struct globalvars_t { int pad[3]; int curtime; };
extern globalvars_t *g_1070b228;
void CGibShooter::sub_100f4730(int a, int b, int c, int d)
{
	sub_100ac4e0(&CGibShooter::sub_1000913d, 0, 0);
	m_nNextThink = g_1070b228->curtime;
}
// END FUNCTION

// FUNCTION: 0x100f47b0 size=0xf2
#include "CBaseEntity.h"
#include "CGibShooter.h"
#include "CUnknown1070b22c.h"
#include "ScopeTrace.h"

extern CUnknown1070b22c *g_1070b22c;

struct CCollisionObj { void sub_1000428c(int solid); };

struct CGibShooterFields
{
	char m_pad0000[0x19c];
	unsigned int m_nFlags;	// 0x19c
	char m_pad01a0[0x26c - 0x1a0];
	const char *m_name26c;
	char m_pad0270[0x450 - 0x270];
	int m_n450;
	int m_n454;
	char m_pad0458[4];
	int m_n45c;
	char m_pad0460[8];
	float m_f468;
	int m_n46c;
	int m_n470;
	float m_f474;
};

void CGibShooter::vfunc103()
{
	((CBaseEntity *)this)->vfunc104();
	CGibShooterFields *f = (CGibShooterFields *)this;
	{
		ScopeTrace t("CBaseEntity::SetSolid", f->m_name26c ? f->m_name26c : g_106b8540);
		((CCollisionObj *)((char *)this + 0x270))->sub_1000428c(0);
	}
	f->m_nFlags |= 0x40;
	if (f->m_f474 == 0.0f)
		*(int *)&f->m_f474 = 0x3a83126f;
	if (f->m_f468 == 0.0f)
		*(int *)&f->m_f468 = 0x41c80000;
	f->m_n454 = f->m_n450;
	f->m_n470 = g_1070b22c->vfunc26(f->m_n45c);
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x100f5aa0 size=0x1e
#include "CGibShooter.h"

void sub_100aa7b0(void *p);

// TARGET: CGibShooter::vfunc5
CGibShooter *CGibShooter::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
