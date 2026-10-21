// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aa9c0 size=0x165
#include "CBaseEntity.h"
#include "CPayphone.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct CGlobalVarsView { char pad[0xc]; float curtime; };
extern CGlobalVarsView *g_1070b228;

// TARGET: CPayphone::vfunc103
void CPayphone::vfunc103()
{
    CCollisionProperty *coll;
    sub_10298d30();
    *(float *)((char *)this + 0x17c) = g_1070b228->curtime + 0.1f;
    vfunc93(0, 0);
    {
        ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
        coll = (CCollisionProperty *)((char *)this + 0x270);
        coll->sub_100dc480(2);
    }
    m_iHealth = 80000;
    m_nTakeDamage = 0;
    sub_100b3580(0x10000);
    *(int *)((char *)this + 0x6f0) = 0;
    sub_10090950();
    *(int *)((char *)this + 0x6f8) = 0;
    {
        ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
        coll->sub_100dc580(coll->m_usSolidFlags | 4);
    }
    sub_100b3900(4);
    sub_100b3840(0x10);
}
// END FUNCTION

// FUNCTION: 0x101aabf0 size=0xcd
#include "CPayphone.h"

extern CGlobalEntityList *g_10566458;

struct CGlobalVars_101aabf0
{
	char m_pad0000[0xc];
	float curtime;	// 0x0c
};
extern CGlobalVars_101aabf0 *g_1070b228;

// the entity vtable up to slot 250
struct CPayphoneSlots250
{
	CAI_NPC_V(0) CAI_NPC_V(1) CAI_NPC_V(2) CAI_NPC_V(3) CAI_NPC_V(4) CAI_NPC_V(5) CAI_NPC_V(6) CAI_NPC_V(7) CAI_NPC_V(8) CAI_NPC_V(9)
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
	CAI_NPC_V10(20) CAI_NPC_V10(21) CAI_NPC_V10(22) CAI_NPC_V10(23) CAI_NPC_V10(24)
	virtual float vfunc250(int a);
};

// the NPC the payphone listens to (an entity whose activity / sequence state is copied)
struct CPayphoneTarget
{
	char m_pad0000[0x6f8];
	int m_n6f8;	// 0x6f8
	char m_pad06fc[0xff0 - 0x6fc];
	int m_nActivity;	// 0xff0
};

struct CPayphoneHandle
{
	unsigned int m_Index;

	CPayphoneTarget *Get() const
	{
		if (m_Index != -1) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return (CPayphoneTarget *)pSlot->m_pEntity;
		}
		return 0;
	}
};

#define F(T, off) (*(T *)((char *)this + off))

void CPayphone::vfunc431()
{
	((CPayphoneSlots250 *)this)->vfunc250(0);
	CPayphoneTarget *pTarget = ((CPayphoneHandle *)((char *)this + 0xfe8))->Get();
	if (pTarget) {
		sub_102c1400();
		int nActivity = pTarget->m_nActivity;
		if (nActivity != F(int, 0xff0)) {
			sub_10272650(nActivity);
			F(int, 0x6f0) = sub_1008dc40(nActivity, -1);
			sub_10090950();
		}
		F(int, 0x6f8) = pTarget->m_n6f8;
		F(float, 0x17c) = g_1070b228->curtime + 0.01f;
	} else {
		if (sub_1000b005())
			sub_102c1400();
		sub_10272650(1);
		F(float, 0x17c) = g_1070b228->curtime + 0.25f;
	}
}
// END FUNCTION

// FUNCTION: 0x101aaee0 size=0x77
#include "CPayphone.h"

inline bool BitSet(unsigned int v, int n)
{
	return ((v >> n) & 1) != 0;
}

bool CPayphone::vfunc295(void *pOther)
{
	if (!pOther)
		return false;
	if (!*(int *)((char *)this + 0x128))
		return false;
	if (sub_10014da8())
		return false;
	if (!*((char *)this + 0x1088))
		return false;
	if (BitSet(*(unsigned int *)((char *)this + 0x5b64), 2))
		return false;
	if (*(unsigned int *)((char *)this + 0x14b8) & 0x80000)
		return false;
	return sub_1000b005() ? false : true;
}
// END FUNCTION

// FUNCTION: 0x101ab1b0 size=0x1e
#include "CPayphone.h"

void sub_100aa7b0(void *p);

// TARGET: CPayphone::vfunc5
CPayphone *CPayphone::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
