// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a5db0 size=0x6
extern char g_10593628[];

// TARGET: sub_101a5db0
void *sub_101a5db0()
{
	return g_10593628;
}
// END FUNCTION

// FUNCTION: 0x101a6d20 size=0x8
#include "CBaseEntity.h"
#include "CCineNPC.h"

char CCineNPC::vfunc117()
{
	char caps = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
	caps &= 0xfd;
	return caps;
}
// END FUNCTION

// FUNCTION: 0x101a6d40 size=0x14
#include "CCineNPC.h"

int CCineNPC::vfunc370(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CCineNPC::*pm)(int);
	} u;
	u.p = vt[368];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x101a6d70 size=0x14
#include "CCineNPC.h"

int CCineNPC::vfunc371(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CCineNPC::*pm)(int);
	} u;
	u.p = vt[369];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x101a6da0 size=0x5
// TARGET: sub_101a6da0
bool __stdcall sub_101a6da0(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x101a6dc0 size=0x5
#include "CCineNPC.h"
// TARGET: CCineNPC::vfunc362
bool CCineNPC::vfunc362(int unused)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x101a6de0 size=0x5
#include "CCineNPC.h"

// TARGET: CCineNPC::vfunc365
bool CCineNPC::vfunc365(int unused)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x101a6e00 size=0x5
#include "CCineNPC.h"
// TARGET: CCineNPC::vfunc364
bool CCineNPC::vfunc364(int unused)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x101a6e20 size=0x5
#include "CCineNPC.h"

bool CCineNPC::vfunc72(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x101a6e40 size=0x52
#include "CCineNPC.h"
void sub_100aa7b0(void *);
CCineNPC *CCineNPC::vfunc5(unsigned int flags)
{
	CCineNPCSlot *p = m_slots + 8;
	int n = 8;
	do {
		--p;
		p->sub_10015708();
	} while (--n);
	m_slotB.sub_10015708();
	m_slotA.sub_10015708();
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101a6f10 size=0x1b3
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCineNPC.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

// TARGET: CCineNPC::vfunc103
void CCineNPC::vfunc103()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (STRINGR_F(m_pszName26c)) : g_105387dc, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", this ? (STRINGR_F(m_pszName26c)) : g_105387dc, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}
	((CBaseEntity *)this)->vfunc93(0, 0);
	m_b1480 = 0;
	m_b1481 = 0;
	if (m_pszName26c == 0 || (0x10 & m_flags204)) {
		void (CCineNPC::*pfnThink)() = &CCineNPC::sub_101a8070;
		sub_100ac4e0(*(void **)&pfnThink, 0, 0);
		m_flNextThink = 1.0 + gpGlobals->curtime;
		if (m_pszName26c)
			m_flTime5f74 = gpGlobals->curtime + 1000000.0;
	}
	if (m_flags204 & 0x20)
		m_b5f90 = 0;
	else
		m_b5f90 = 1;
	((CBaseEntity *)this)->sub_100b3b00();
	m_b5f91 = 0;
	*(EHANDLE *)&m_hNPC5f94 = (CBaseEntity *)0;
	m_pSearchStart5f98 = 0;
	((CBaseEntity *)this)->sub_100b3840(0x10);
}
// END FUNCTION

// FUNCTION: 0x101a7140 size=0x13
#include "CAI_BaseNPC.h"
#include "CCineNPC.h"
// TARGET: CCineNPC::vfunc180
void sub_101a7170(void *pThis);

void CCineNPC::vfunc180()
{
	((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc180();
	sub_101a7170(this);
}
// END FUNCTION

// FUNCTION: 0x101a7210 size=0xc
#include "CCineNPC.h"
struct CineFlags { char pad[0x204]; unsigned char m; };
bool CCineNPC::vfunc585()
{
	bool r = (((CineFlags *)this)->m >> 6) & 1;
	return r;
}
// END FUNCTION
