// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102623e0 size=0x9
extern float g_104492dc;
float CAI_Motor::vfunc11(int a) { return g_104492dc; }
// END FUNCTION

// FUNCTION: 0x102e0990 size=0x1e
#include "CAI_Motor.h"

// TARGET: CAI_Motor::vfunc0
CAI_Motor *CAI_Motor::vfunc0(unsigned int flags)
{
	sub_10014b32();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102e0ea0 size=0xb8
#include "CAI_Motor.h"
#include "CCollisionProperty.h"
#include "CBCCSlotViews.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

class COuterView	// the NPC that owns the motor: slots 208 and 310
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1)
	VIEW_SLOT(200) VIEW_SLOT(201) VIEW_SLOT(202) VIEW_SLOT(203) VIEW_SLOT(204) VIEW_SLOT(205) VIEW_SLOT(206) VIEW_SLOT(207)
	virtual void vfunc208(int a);
	VIEW_SLOT(209)
	VIEW_SLOT10(21) VIEW_SLOT10(22) VIEW_SLOT10(23) VIEW_SLOT10(24) VIEW_SLOT10(25) VIEW_SLOT10(26) VIEW_SLOT10(27) VIEW_SLOT10(28) VIEW_SLOT10(29)
	VIEW_SLOT10(30)
	virtual void vfunc310(int a);
};

void CAI_Motor::vfunc3()
{
	COuterView *pOuter = (COuterView *)m_pOuter;
	pOuter->vfunc310(0x33);
	sub_102e2840(5, 0);
	pOuter = (COuterView *)m_pOuter;
	const char *name = pOuter ? (*(const char **)((char *)pOuter + 0x26c) ? *(const char **)((char *)pOuter + 0x26c) : g_106b8540) : "NULL ENTITY";
	CCollisionProperty *pCol = (CCollisionProperty *)((char *)pOuter + 0x270);
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	pCol->sub_100dc480(2);
	(*g_109f3680)--;
	*(int *)(m_pOuter + 0x3ec) = 0;
	((COuterView *)m_pOuter)->vfunc208(0);
}
// END FUNCTION
