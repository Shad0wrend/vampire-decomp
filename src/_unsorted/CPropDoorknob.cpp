// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018fb50 size=0x25
#include "CPropDoorknob.h"
#include "CBaseProp.h"

void sub_10191ac0(const char *pszModel);

// TARGET: CPropDoorknob::vfunc104
void CPropDoorknob::vfunc104()
{
	int unused;
	sub_10191ac0(*vfunc9(&unused));
	((CBaseProp *)this)->vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1020ac70 size=0x21
#include "CPropDoorknob.h"

struct CPropDoorknobHelper
{
	void sub_10009e6c(int bFlag);
};

// TARGET: CPropDoorknob::vfunc130
void CPropDoorknob::vfunc130(int bFlag)
{
	((CPropDoorknobHelper *)this)->sub_10009e6c(bFlag);
	if ((char)bFlag)
	{
		void (__fastcall *pfn)(void *) = (void (__fastcall *)(void *))(*(void ***)this)[0x440 / 4];
		pfn(this);
	}
}
// END FUNCTION

// FUNCTION: 0x10224cc0 size=0x59
#include "CPropDoorknob.h"
#include "CItemContainerLock.h"
#include "CEHandleGet.h"

namespace block_10224cc0 {
struct CItemContainerLockUnit : CItemContainerLock {
	bool IsLocked() const { if (m_unk780 >= 3) return true; return false; }
	bool sub_10224100();
};
bool CItemContainerLockUnit::sub_10224100()
{
	return !IsLocked();
}
}
using namespace block_10224cc0;

// TARGET: CPropDoorknob::vfunc33
int CPropDoorknob::vfunc33()
{
	CItemContainerLockUnit *l = (CItemContainerLockUnit *)this;
	if (!l->sub_10224100())
		return 1;
	return l->sub_10224910((int)EHandle_Get(l->m_hUser8c)) ? 1 : 300;
}
// END FUNCTION

// FUNCTION: 0x10224d40 size=0x111
#include "CPropDoorknob.h"
#include "CItemContainerLock.h"
#include "CItemContainer.h"
#include "CEHandleGet.h"

namespace block_10224d40 {
struct CItemContainerLockUnit : CItemContainerLock
{
	bool IsLocked() const { if (m_unk780 >= 3) return true; return false; }
	bool sub_10224100();
};
bool CItemContainerLockUnit::sub_10224100()
{
	return !IsLocked();
}
}
using namespace block_10224d40;

// TARGET: CPropDoorknob::vfunc35
int CPropDoorknob::vfunc35(int a)
{
	CItemContainerLockUnit *l = (CItemContainerLockUnit *)this;
	if (EHandle_Get(l->m_hContainer) && ((CItemContainer *)EHandle_Get(l->m_hContainer))->sub_100eef10())
		return 0x3a;
	if (l->sub_10224100()) {
		if (l->sub_10224910(a))
			return l->m_n820;
		return l->m_n81c;
	}
	if (EHandle_Get(l->m_hContainer) && ((CItemContainer *)EHandle_Get(l->m_hContainer))->sub_100eedd0())
		return 0x3b;
	return l->m_n818;
}
// END FUNCTION

// FUNCTION: 0x10225100 size=0x5
#include "CPropDoorknob.h"

// TARGET: CPropDoorknob::vfunc43
// the game's 0x10225100: a tail call (jmp) of sub_10224440 (the lockpick spot for the entity)
void CPropDoorknob::vfunc43(int a)
{
	sub_10224440((CBaseEntity *)a);
}
// END FUNCTION

// FUNCTION: 0x10225120 size=0x5
#include "CPropDoorknob.h"

// TARGET: CPropDoorknob::vfunc40
// the game's 0x10225120: a tail call (jmp) of sub_10224440 (the lockpick spot for the entity)
void CPropDoorknob::vfunc40(int a)
{
	sub_10224440((CBaseEntity *)a);
}
// END FUNCTION

// FUNCTION: 0x102258a0 size=0x48
#include "CPropDoorknob.h"
#include "CBaseVampireSkillEntity.h"
#include "CBaseHandle.h"

extern void *vt_1048c364[];
void __fastcall sub_1008b490(char *pThis);

struct CPropDoorknobParts	// the member the doorknob constructor builds: the attached handle at +0x80c
{
	char pad0[0x80c];
	CBaseHandle m_hAttached;
	CPropDoorknobParts() {}
};

// TARGET: CPropDoorknob::sub_102258a0
CPropDoorknob *CPropDoorknob::sub_102258a0()
{
	((CBaseVampireSkillEntity *)this)->sub_1020aa70();
	((CPropDoorknobParts *)this)->CPropDoorknobParts::CPropDoorknobParts();
	*(void ***)this = vt_1048c364;
	sub_1008b490((char *)this);
	*((char *)this + 0x815) = 0;
	*(int *)((char *)this + 0x81c) = 3;
	*(int *)((char *)this + 0x818) = 10;
	*(int *)((char *)this + 0x820) = 4;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10225930 size=0x8
#include "CPropDoorknob.h"
// TARGET: CPropDoorknob::sub_10225930
unsigned char CPropDoorknob::sub_10225930()
{
    unsigned char b;
    b = sub_100056aa();
    b &= 0xfd;
    return b;
}
// END FUNCTION

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

// FUNCTION: 0x10225af0 size=0x36
#include "CBaseVampireSkillEntity.h"


struct CUnknown10225af0
{
	char m_pad0000[0x124];
	const char *m_pszDoorName;	// 0x124
	char m_pad0128[0x17c - 0x128];
	float m_fl17c;	// 0x17c
	char m_pad0180[0x1fc - 0x180];
	int m_n1fc;	// 0x1fc

	void sub_10225af0();
	void sub_10003e63();
};

// TARGET: CUnknown10225af0::sub_10225af0
void CUnknown10225af0::sub_10225af0()
{
	sub_10003e63();
	const char *pszDoorName = m_pszDoorName;
	m_n1fc = 0;
	m_fl17c = gpGlobals->curtime + 0.1;
	((CBaseVampireSkillEntity *)this)->sub_102256f0(pszDoorName);
}
// END FUNCTION

// FUNCTION: 0x10225b40 size=0x57
#include "CBaseAnimating.h"
#include "CPropDoorknob.h"

void CPropDoorknob::vfunc273()
{
	CBaseAnimating *pAnim = (CBaseAnimating *)this;
	int iSequence;
	if (sub_10224100())
		iSequence = pAnim->sub_1008f7b0("handle_locked");
	else
		iSequence = pAnim->sub_1008f7b0("handle_unlocked");
	if (iSequence > -1) {
		if (*(int *)((char *)this + 0x6f0) != iSequence) {
			*(int *)((char *)this + 0x6f8) = 0;
			*(int *)((char *)this + 0x6f0) = iSequence;
			pAnim->sub_10090950();
			pAnim->sub_100963d0();
		}
	} else {
		*(int *)((char *)this + 0x6f0) = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10225bc0 size=0x30
#include "CPropDoorknob.h"

#define V5(p) virtual void p##a(); virtual void p##b(); virtual void p##c(); virtual void p##d(); virtual void p##e();
#define V25(p) V5(p##1) V5(p##2) V5(p##3) V5(p##4) V5(p##5)
#define V125(p) V25(p##1) V25(p##2) V25(p##3) V25(p##4) V25(p##5)
struct SlotView_10225bc0 {
	V125(x) V125(y)
	virtual float vfunc250(int a);
};

void CPropDoorknob::vfunc134()
{
	if (!*(char *)((char *)this + 0x65c))
		((SlotView_10225bc0 *)this)->vfunc250(0);
	m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION
