// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010f560 size=0x6
#include "datamap.h"
#include "CWindowPane.h"
namespace lifted {
extern char g_1056f060;
}
datamap_t * CWindowPane::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1056f060);
}
// END FUNCTION

// FUNCTION: 0x1010f5f0 size=0xb6
#include "CWindowPane.h"
#include "CCollisionProperty.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

#define WP_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define WP_V100(p) WP_V10(p##0) WP_V10(p##1) WP_V10(p##2) WP_V10(p##3) WP_V10(p##4) WP_V10(p##5) WP_V10(p##6) WP_V10(p##7) WP_V10(p##8) WP_V10(p##9)

// the vtable of the entity up to slot 104, then SetModel at 105
struct CPaneSlots
{
	WP_V100(a0) virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual void SetModelName(const char *pszModel);	// slot 105
};

void CWindowPane::vfunc103()
{
	vfunc104();
	const char *name = m_name26c ? m_name26c : g_106b8540;
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(2);
	(*g_109f3680)--;
	vfunc93(6, 0);
	m_nTakeDamage = 2;
	sub_100aaa40(4);
	((CPaneSlots *)this)->SetModelName("models/gibs/brokenglass_piece.mdl");
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x1010f6e0 size=0x13
#include "CWindowPane.h"

void CWindowPane::vfunc104()
{
	engine->vfunc13("models/gibs/brokenglass_piece.mdl", 0);
}
// END FUNCTION

// FUNCTION: 0x10113590 size=0x1e
#include "CWindowPane.h"

void sub_100aa7b0(void *p);

// TARGET: CWindowPane::vfunc5
CWindowPane *CWindowPane::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
