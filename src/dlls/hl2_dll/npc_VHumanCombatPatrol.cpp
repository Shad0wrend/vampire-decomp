// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10387d20 size=0xe9
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CNPC_VHumanCombatPatrol.h"

#define D(x) virtual void x();
#define T(p) D(p##0) D(p##1) D(p##2) D(p##3) D(p##4) D(p##5) D(p##6) D(p##7) D(p##8) D(p##9)
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)

struct CPatrolSlots604
{
	H(a0) H(b0) H(c0) H(d0) H(e0) H(f0)
	D(g0) D(g1) D(g2) D(g3)
	virtual int slot604(unsigned int flags);
	virtual int slot605(unsigned int flags);
};

struct CPatrolSchedule
{
	int m_pad0;
	int m_iSchedule;
};

int CNPC_VHumanCombatPatrol::vfunc438()
{
	*(int *)((char *)this + 0x1b2c) = 0x16;
	switch (*(int *)((char *)this + 0x5cc0)) {
	case 2:
		if (!sub_1033e2b0() && (!sub_10014df8(0x46) || sub_10014df8(0x48)) && *(CPatrolSchedule **)((char *)this + 0x6590)) {
			*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_VHumanCombatPatrol.cpp";
			*(int *)((char *)this + 0x1b34) = 0x121;
			return (*(CPatrolSchedule **)((char *)this + 0x6590))->m_iSchedule;
		}
		{
			unsigned int flags;
			if (sub_1032e7b0())
				flags = sub_1032e7b0()->slot360();
			else
				flags = 0;
			int result;
			if (flags & 0x18000) {
				result = ((CPatrolSlots604 *)this)->slot604(flags);
				if (result)
					return result;
			} else {
				result = ((CPatrolSlots604 *)this)->slot605(flags);
				if (result)
					return result;
			}
		}
		break;
	case 3:
		if (!sub_1033e2b0() && *(CPatrolSchedule **)((char *)this + 0x6590)) {
			*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_VHumanCombatPatrol.cpp";
			*(int *)((char *)this + 0x1b34) = 0x116;
			return (*(CPatrolSchedule **)((char *)this + 0x6590))->m_iSchedule;
		}
		break;
	}
	return sub_103872d0();
}
// END FUNCTION
