// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020ab00 size=0x6d
#include "CBaseVampireSkillEntity.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseVampireSkillEntity *CBaseVampireSkillEntity::vfunc5(unsigned int flags)
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

// FUNCTION: 0x1020ab90 size=0x18
#include "CBaseVampireSkillEntity.h"
struct CUnknownGlobals1070b228 { int m_pad[3]; int m_unkc; };
extern CUnknownGlobals1070b228 *g_1070b228;
void CBaseVampireSkillEntity::vfunc103()
{
	sub_10012eef();
	m_unk788 = g_1070b228->m_unkc;
}
// END FUNCTION

// FUNCTION: 0x1020ac50 size=0xb
void CBaseVampireSkillEntity::vfunc272()
{
	m_unk78c = 0;
}
// END FUNCTION
