// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 6 blocks
#include "vampire.h"

// FUNCTION: 0x10187c90 size=0x41
#include "CLagCompensationManager.h"
#include "CAnchorList.h"

void CLagCompensationManager::sub_10187c90()
{
	m_Data.m_Size = 0;
	if (m_Data.m_Memory.m_nGrowSize != -1) {
		if (m_Data.m_Memory.m_pMemory) {
			g_109f3624(m_Data.m_Memory.m_pMemory);
			m_Data.m_Memory.m_pMemory = 0;
		}
		m_Data.m_Memory.m_nAllocationCount = 0;
	}
	m_Data.m_pElements = m_Data.m_Memory.m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10187d00 size=0x8
#include "CLagCompensationManager.h"

void CLagCompensationManager::vfunc5()
{
	m_Data.m_Size = 0;
}
// END FUNCTION

// FUNCTION: 0x10187dd0 size=0x68
#include "CLagCompensationManager.h"
#include "utlvector.h"

CLagCompensationManager *CLagCompensationManager::vfunc8(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0xc))->~CUtlVector<int>();
	sub_1042c2c0();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10187e60 size=0x6c
#include "CLagCompensationManager.h"
#include "ConVar.h"
struct CPlayerView10187e60 { char pad[0x2e0]; int m_pEdict; int edict() const { return m_pEdict; } };
struct EngBase10187e60 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual int v35(int);
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41();
};
struct EngDer10187e60 : EngBase10187e60 { virtual void v42(int, int); };
extern ConVar g_10726948;
inline int Idx10187e60(EngBase10187e60 *e, int ed) { return e->v35(ed); }
void CLagCompensationManager::sub_10187e60(CPlayerView10187e60 *pPlayer)
{
    int n = g_10726948.GetInt();
    if (n < 1)
        n = 1;
    int mx = gpGlobals->maxClients <= 1 ? 4 : 16;
    if (n >= mx)
        n = mx;
    ((EngDer10187e60 *)engine)->v42(Idx10187e60((EngBase10187e60 *)engine, pPlayer->edict()), n);
}
// END FUNCTION

// FUNCTION: 0x10187ef0 size=0x86
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CLagCompensationManager.h"


void CLagCompensationManager::sub_10187ef0()
{
	CUtlVector<CLagCompensationRecord> *v = &m_Data;
	float t0 = engine->vfunc119(1) - 1.0; float cutoff = (float)(t0);
	for (int i = v->Count() - 1; i >= 0; --i) {
		if (!(m_Data.m_Memory.m_pMemory[i].m_flSimulationTime >= cutoff))
			v->Remove(i);
	}
}
// END FUNCTION

// FUNCTION: 0x10187fb0 size=0x240
#include "vampire_all.h"
#include "QAngle.h"
void *memmove(void *, const void *, unsigned int);
inline void *operator new(unsigned int, void *p) { return p; }

#define LC_ALIVE (1 << 0)

struct CUnknown10188280 { void sub_10188280(); };

struct LagRecord
{
	LagRecord() { ((CUnknown10188280 *)this)->sub_10188280(); }
	bool m_bActive;
	int m_nPlayerIndex;
	int m_fFlags;
	Vector m_vecOrigin;
	QAngle m_vecAngles;
	Vector m_vecMins;
	Vector m_vecMaxs;
};

class LagCompensationContext
{
public:
	LagCompensationContext()
	{
		m_flRecordTime = 0.0f;
		memset(m_Records, 0, sizeof(m_Records));
	}
	LagCompensationContext(const LagCompensationContext &src)
	{
		m_flRecordTime = src.m_flRecordTime;
		int i;
		for (i = 0; i < 32; i++)
		{
			m_Records[i] = src.m_Records[i];
		}
	}
	float m_flRecordTime;
	LagRecord m_Records[32];
};

struct CPlayerCollView { virtual void s0(); virtual const Vector &WorldAlignMins(); virtual const Vector &WorldAlignMaxs(); };

class CLagPlayer
{
public:
	int edict() { return m_pEdict; }
	int entindex() { return engine->vfunc35(edict()); }
	virtual void v0();
	char pad[0x26c];
	CPlayerCollView m_Collision;	// +0x270
	char pad2[0x2e0 - 0x274];
	int m_pEdict;	// +0x2e0
};
struct CLagPlayerV
{
	bool IsAlive() { return ((CEntityVSlots *)this)->slot158() != 0; }
};

struct Mem784 { void sub_10189510(int); };
struct CLagVec
{
	LagCompensationContext *m_pMemory;
	int m_nAlloc;
	int m_nGrow;
	int m_Size;
	LagCompensationContext *m_pElements;
	void AddToHead(const LagCompensationContext &src)
	{
		if (m_Size + 1 > m_nAlloc)
			((Mem784 *)this)->sub_10189510(m_Size + 1 - m_nAlloc);
		++m_Size;
		m_pElements = m_pMemory;
		int numToMove = m_Size - 1;
		if (numToMove > 0)
			memmove(m_pMemory + 1, m_pMemory, numToMove * sizeof(LagCompensationContext));
		if (m_pMemory)
			new (m_pMemory) LagCompensationContext(src);
	}
};

CBaseEntity *sub_101cd9e0(int);

void CLagCompensationManager::vfunc7()
{
	sub_10187ef0();

	LagCompensationContext context;
	context.m_flRecordTime = engine->vfunc119(1);

	int i;
	for (i = 1; i <= gpGlobals->maxClients; i++)
	{
		CEntityVSlots *pPlayer = (CEntityVSlots *)sub_101cd9e0(i);
		if (!pPlayer)
			continue;

		LagRecord *record = &context.m_Records[i - 1];
		record->m_bActive = true;
		record->m_nPlayerIndex = ((CLagPlayer *)pPlayer)->entindex();
		record->m_fFlags = 0;
		if (pPlayer->slot158())
		{
			record->m_fFlags |= LC_ALIVE;
		}
		record->m_vecAngles = *(QAngle *)pPlayer->slot221();
		record->m_vecOrigin = *pPlayer->slot220();
		record->m_vecMaxs = ((CLagPlayer *)pPlayer)->m_Collision.WorldAlignMaxs();
		record->m_vecMins = ((CLagPlayer *)pPlayer)->m_Collision.WorldAlignMins();
	}

	((CLagVec *)&m_Data)->AddToHead(context);
}
// END FUNCTION
