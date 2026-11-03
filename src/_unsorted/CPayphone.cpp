// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aa7d0 size=0x8
#include "CPayphone.h"
// TARGET: CPayphone::sub_101aa7d0
unsigned char CPayphone::sub_101aa7d0()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x101aa7f0 size=0x14
struct CPayphoneUnit101aa7f0
{
	int sub_101aa7f0(int a);
};

// TARGET: CPayphoneUnit101aa7f0::sub_101aa7f0
int CPayphoneUnit101aa7f0::sub_101aa7f0(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CPayphoneUnit101aa7f0::*pm)(int);
	} u;
	u.p = vt[368];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x101aa820 size=0x14
struct CPayphoneUnit101aa820
{
	int sub_101aa820(int a);
};

// TARGET: CPayphoneUnit101aa820::sub_101aa820
int CPayphoneUnit101aa820::sub_101aa820(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CPayphoneUnit101aa820::*pm)(int);
	} u;
	u.p = vt[369];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x101aa850 size=0x5
#include "CPayphone.h"
bool CPayphone::vfunc363(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aa870 size=0x5
#include "CPayphone.h"
bool CPayphone::vfunc362(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aa890 size=0x5
#include "CPayphone.h"
bool CPayphone::vfunc365(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aa8b0 size=0x5
#include "CPayphone.h"
bool CPayphone::vfunc364(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aa8d0 size=0x5
#include "CPayphone.h"
bool CPayphone::vfunc294(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aa8f0 size=0x3
#include "CPayphone.h"
bool CPayphone::vfunc615()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aa910 size=0x3
#include "CPayphone.h"
bool CPayphone::vfunc617()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aa930 size=0x5
#include "CPayphone.h"
bool CPayphone::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aa950 size=0x17
#include "CPayphone.h"

int CPayphone::vfunc35(int a)
{
	return vfunc295_slot((void *)a) ? 0x2f : 0;
}
// END FUNCTION

// FUNCTION: 0x101aa9c0 size=0x165
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CPayphone.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"


// TARGET: CPayphone::vfunc103
void CPayphone::vfunc103()
{
    CCollisionProperty *coll;
    sub_10298d30();
    *(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1f;
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

// FUNCTION: 0x101aabd0 size=0x3
#include "CPayphone.h"
int CPayphone::vfunc138()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aabf0 size=0xcd
#include "CAI_BaseNPC.h"
#include "CGlobalEntityList.h"
#include "CPayphone.h"

extern CGlobalEntityList *g_10566458;


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
		F(float, 0x17c) = gpGlobals->curtime + 0.01f;
	} else {
		if (sub_1000b005())
			sub_102c1400();
		sub_10272650(1);
		F(float, 0x17c) = gpGlobals->curtime + 0.25f;
	}
}
// END FUNCTION

// FUNCTION: 0x101aad00 size=0x3
#include "CPayphone.h"
bool CPayphone::vfunc613()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101aad20 size=0x4d
#include "CPayphone.h"
int CPayphone::vfunc611()
{
    int seq;
    CPayphoneNPC *pNPC = m_hFollow.Get();
    if (pNPC != 0) {
        int activity = pNPC->m_nActivityff0;
        seq = sub_1008dc40(activity, -1);
    } else {
        seq = sub_1008dc40(1, -1);
    }
    if (seq < 0)
        seq = 0;
    return seq;
}
// END FUNCTION

// FUNCTION: 0x101aad90 size=0x3
#include "CPayphone.h"
void CPayphone::vfunc286(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x101aadb0 size=0x15
#include "CPayphone.h"

// TARGET: CPayphone::vfunc612
int CPayphone::vfunc612()
{
	int nRet = 0xa80;
	if (*(char *)((char *)this + 0x654c) == 0)
	{
		nRet = 0xe80;
	}
	return nRet;
}
// END FUNCTION

// FUNCTION: 0x101aade0 size=0x30
#include "CPayphone.h"
bool CPayphone::vfunc379(CBaseEntity *pOther, int a, int b, int c, int d, int e, int f)
{
	return sub_1026cdc0(pOther, a, b, c, d, e, f);
}
// END FUNCTION

// FUNCTION: 0x101aae20 size=0x6
#include "CPayphone.h"
int CPayphone::vfunc359(int a0)
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x101aae40 size=0x7
#include "CPayphone.h"
namespace lifted {
extern float g_1047a3ac;
}
float CPayphone::vfunc37()
{
    return lifted::g_1047a3ac;
}
// END FUNCTION

// FUNCTION: 0x101aae60 size=0x5f
#include "CPayphone.h"
Vector CPayphone::vfunc193()
{
    int bone = sub_10002c0c("Phone_bone_01");
    if (bone == -1)
        return CBaseEntity::vfunc193();
    Vector origin, angles;
    sub_1000268a(bone, &origin, &angles);
    return origin;
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

// FUNCTION: 0x101aaf80 size=0xa5
#include "CPayphone.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include <math.h>

bool sub_10240250(const Vector &, const Vector &, const Vector &, const Vector &);

bool CPayphone::vfunc45(CBaseEntity *pOther, int a, int b, int c, int d, int e, int f, int g)
{
	Vector vOther, vThis;
	const Vector *pvOther = ((CEntityVSlots *)pOther)->slot193(&vOther);
	const Vector *pvThis = ((CEntityVSlots *)this)->slot193(&vThis);
	float flDist = (float)(fabs(pvThis->z - pvOther->z) + fabs(pvThis->y - pvOther->y) + fabs(pvThis->x - pvOther->x));
	if (flDist < 85.0f) {
		CCollisionProperty *pOtherColl = (CCollisionProperty *)((char *)pOther + 0x270);
		CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
		if (sub_10240250(*(Vector *)pColl->vfunc1(), *(Vector *)pColl->vfunc2(), *(Vector *)pOtherColl->vfunc1(), *(Vector *)pOtherColl->vfunc2()))
			return true;
	}
	return false;
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
