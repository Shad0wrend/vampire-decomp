// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x102cd650 size=0xb2
#include "CAI_GoalEntity.h"
#include "CUnknown100f6d80.h"
#include "CGlobalEntityList.h"

#define GE_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define GE_V100(p) GE_V10(p##0) GE_V10(p##1) GE_V10(p##2) GE_V10(p##3) GE_V10(p##4) GE_V10(p##5) GE_V10(p##6) GE_V10(p##7) GE_V10(p##8) GE_V10(p##9)

// the vtable of the goal entity up to slot 243, then slot 244
struct CGoalSlots
{
	GE_V100(a0) GE_V100(a1) GE_V10(b0) GE_V10(b1) GE_V10(b2) GE_V10(b3)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual void OnActor(CBaseEntity *pActor);	// slot 244
};

struct SHandleSlot
{
	CBaseEntity *m_pEntity;
	int m_Serial;
};

extern CUnknown100f6d80 g_106eb5d8;
extern CGlobalEntityList *g_10566458;

static inline CBaseEntity *ResolveHandle(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	SHandleSlot *s = (SHandleSlot *)&g_10566458->m_Slots[h & 0x1fff].m_pEntity;
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

#define GOAL_FLAGS (*(unsigned int *)((char *)this + 0x480))

void CAI_GoalEntity::vfunc241(int a)
{
	if (!(GOAL_FLAGS & 1)) {
		g_106eb5d8.sub_100f6d80((int)((char *)this + 0x450));
		if (!(GOAL_FLAGS & 2)) {
			sub_102cd4a0();
			GOAL_FLAGS |= 2;
		} else {
			sub_102cd3b0();
		}
		GOAL_FLAGS |= 1;
		for (int i = 0; i < m_nActors; i++)
			((CGoalSlots *)this)->OnActor(ResolveHandle(m_pActors[i]));
	}
}
// END FUNCTION
