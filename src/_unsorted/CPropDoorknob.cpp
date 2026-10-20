// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10225950 size=0x6d
#include "CPropDoorknob.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CPropDoorknob *CPropDoorknob::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x7f4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7dc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7c4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x794))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102259e0 size=0xc2
#include "CPropDoorknob.h"
#include "CBaseAnimating.h"
#include "CBaseVampireSkillEntity.h"
#include "CCollisionProperty.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CPropDoorknob::vfunc103()
{
	((CBaseVampireSkillEntity *)this)->vfunc103();
	*(int *)((char *)this + 0x19c) = 0xa0;
	const char *name = m_name26c ? m_name26c : g_106b8540;
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	(*g_109f3680)--;
	sub_100b3b00();
	if (*(int *)((char *)this + 0x77c)) {
		((CBaseAnimating *)this)->sub_10093b10(0, 1);
		*(int *)((char *)this + 0x780) = 1;
	} else {
		((CBaseAnimating *)this)->sub_10093b10(0, 0);
		*(int *)((char *)this + 0x780) = 3;
	}
}
// END FUNCTION
