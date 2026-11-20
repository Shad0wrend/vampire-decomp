// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034a2d0 size=0x3
#include "CGenericNPC.h"
int CGenericNPC::vfunc138()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034a2f0 size=0x7
#include "CGenericNPC.h"
namespace lifted {
extern float g_10455050;
}
float CGenericNPC::vfunc516()
{
    return lifted::g_10455050;
}
// END FUNCTION

// FUNCTION: 0x1034a680 size=0x1a
#include "CAI_BaseNPC.h"
#include "CGenericNPC.h"

// TARGET: CGenericNPC::vfunc259
void CGenericNPC::vfunc259(animevent_t *pEvent)
{
	switch (pEvent->event)
	{
	case 1:
		sub_1034a310();
		break;
	default:
		((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc259(pEvent);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1034a6b0 size=0x3
#include "CGenericNPC.h"
int CGenericNPC::vfunc473()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034a6d0 size=0x2bc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGenericNPC.h"
#include "CBaseCombatCharacter.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
void sub_101cf390(CBaseEntity *pEnt, const float *pMins, const float *pMaxs);
float *sub_102d6100(int a);
float *sub_102d6120(int a);

#define GV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CSlot420View
{
	GV10(a0) GV10(a1) GV10(a2) GV10(a3) GV10(a4) GV10(a5) GV10(a6) GV10(a7) GV10(a8) GV10(a9)
	GV10(b0) GV10(b1) GV10(b2) GV10(b3) GV10(b4) GV10(b5) GV10(b6) GV10(b7) GV10(b8) GV10(b9)
	GV10(c0) GV10(c1) GV10(c2) GV10(c3) GV10(c4) GV10(c5) GV10(c6) GV10(c7) GV10(c8) GV10(c9)
	GV10(d0) GV10(d1) GV10(d2) GV10(d3) GV10(d4) GV10(d5) GV10(d6) GV10(d7) GV10(d8) GV10(d9)
	GV10(e0) GV10(e1)
	virtual void slot420();
};

struct CGenericView
{
	char m_pad[0x1570];
	int m_nBloodColor;
	int m_n1574;
	char m_pad2[0x5cc0 - 0x1578];
	int m_n5cc0;
	void sub_1026dc00(int a);
};

inline const char *STRING103(const char *s)
{
	return s ? s : g_106b8540;
}

// TARGET: CGenericNPC::vfunc103
void CGenericNPC::vfunc103()
{
	CBaseCombatCharacter *p = (CBaseCombatCharacter *)this;
	CGenericView *v = (CGenericView *)this;
	p->vfunc104();
	int buf;
	p->vfunc105(STRING103(*p->vfunc9(&buf)));
	float mins[3], maxs[3];
	if (!_strcmpi(STRING103(*p->vfunc9(&buf)), "models/player.mdl") || !_strcmpi(STRING103(*p->vfunc9(&buf)), "models/holo.mdl")) {
		maxs[0] = 16.0f; maxs[1] = 16.0f; maxs[2] = 72.0f;
		mins[0] = -16.0f; mins[1] = -16.0f; mins[2] = 0;
		sub_101cf390(p, mins, maxs);
	} else {
		sub_101cf390(p, sub_102d6100(0), sub_102d6120(0));
	}
	{
		ScopeTrace trace("CBaseEntity::SetSolid", p->m_name26c ? p->m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)p + 0x270))->sub_100dc480(2);
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", p->m_name26c ? p->m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)p + 0x270))->AddSolidFlags(0x10);
	}
	p->vfunc93(4, 0);
	v->m_nBloodColor = 0xf7;
	p->m_iHealth = 8;
	v->m_n1574 = 0x3f000000;
	v->m_n5cc0 = 0;
	v->sub_1026dc00(0x801);
	((CSlot420View *)p)->slot420();
	if (p->m_flags204 & 4) {
		{
			ScopeTrace trace("CBaseEntity::AddSolidFlags", p->m_name26c ? p->m_name26c : g_106b8540);
			((CCollisionProperty *)((char *)p + 0x270))->AddSolidFlags(4);
		}
		p->m_nTakeDamage = 0;
		p->vfunc225();
	}
	p->sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x1034aa40 size=0x4b
#include "CBaseEntity.h"
#include "CGenericNPC.h"
#include "engineiface.h"
#include "engineserver.h"
extern const char *g_106244c0[3];
extern char g_106b8540[];
// TARGET: CGenericNPC::vfunc104
void CGenericNPC::vfunc104()
{
	CBaseEntity *p = (CBaseEntity *)this;
	for (unsigned int i = 0; i < 3; i++)
		enginesound->vfunc0(g_106244c0[i], 0);
	int dummy;
	const char *name = *p->vfunc9(&dummy);
	engine->vfunc13(name ? name : g_106b8540, 0);
}
// END FUNCTION

// FUNCTION: 0x1034aab0 size=0x1e
#include "CGenericNPC.h"

void sub_100aa7b0(void *p);

// TARGET: CGenericNPC::vfunc5
CAI_BaseNPC *CGenericNPC::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
