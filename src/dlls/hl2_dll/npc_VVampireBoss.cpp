// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c59d0 size=0xbe
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VVampireBoss.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

int sub_1000633e(CNPC_VVampireBoss *pNPC, int a, int b, float flRadius, int c, int d);
extern char g_1065ec20[];

bool CNPC_VVampireBoss::sub_103c59d0(int a, int b)
{
    ScopeTrace trace("CNPC_VVampireBoss::SelectHintNode", g_106b8540);
    m_pTarget5ddc = sub_1000633e(this, a, b, 5000.0f, 0, 0);
    if (m_pTarget5ddc) {
        sub_1000ac68(0);
        return true;
    }
    m_pszSourceFile = g_1065ec20;
    m_nSourceLine = 0xd1;
    ((CEntityVSlots *)this)->slot448(4);
    return false;
}
// END FUNCTION

// FUNCTION: 0x103c5ac0 size=0x38f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VVampireBoss.h"
#include "CEntityVSlots.h"
#include "CAI_Motor.h"
#include "CCollisionProperty.h"
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CAI_BaseNPC.h"
#include "CNPC_VHuman.h"
#include "globalvars.h"

extern const char g_1065ec20[];	// "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_VVampireBoss.cpp"
void sub_101c0b10();
void sub_101cf600(CNPC_VVampireBoss *pNpc);

struct CBossView : CNPC_VVampireBoss
{
	CAI_Motor *GetMotor() { return m_pMotor5d44; }
	void RemoveSolidFlags(int flags)
	{
		ScopeTrace trace("CBaseEntity::RemoveSolidFlags", m_pszName26c ? m_pszName26c : g_106b8540, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->RemoveSolidFlags(flags);
	}
	void AddEffects(int f) { m_nFlags19c |= f; }
	void RemoveEffects(int f) { m_nFlags19c &= ~f; }
	void TaskFail(int line) { m_pszSourceFile = g_1065ec20; m_nSourceLine = line; ((CEntityVSlots *)this)->slot448(4); }
};

// TARGET: CNPC_VVampireBoss::vfunc442
void CNPC_VVampireBoss::vfunc442(int *pTask)
{
	CBossView *self = (CBossView *)this;
	ScopeTrace trace("CNPC_VVampireBoss::StartTask", g_106b8540);
	m_fTaskStartTime = gpGlobals->curtime;
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	switch (*pTask) {
	case 0x2f:
		sub_102e0b40((float *)self->GetMotor());
		self->GetMotor()->sub_102e2020((const float *)((CEntityVSlots *)m_pTarget5ddc)->slot217(), 0);
		pSelf->slot572();
		break;
	case 0x14a:
		if (!m_pTarget5ddc) {
			self->TaskFail(0xee);
			return;
		}
		((CAI_BaseNPC *)this)->sub_10273180(1);
		pSelf->slot66();
		self->AddEffects(0x20);
		((CBaseEntity *)this)->sub_100b3b00();
		sub_1000ac68(0);
		break;
	case 0x14b:
		if (!m_pTarget5ddc) {
			self->TaskFail(0xfd);
			return;
		}
		{
			pSelf->slot216(((CEntityVSlots *)m_pTarget5ddc)->slot217());
			Vector vec = *pSelf->slot220();
			pSelf->slot181(&vec, 0, 0);
			pSelf->slot62(&vec.x);
			sub_10273070(1);
			pSelf->slot67();
			self->RemoveEffects(0x20);
			self->RemoveSolidFlags(4);
			((CBaseEntity *)this)->sub_1009d1e0();
			((CBaseEntity *)this)->sub_100b3b00();
			((CBaseAnimating *)this)->sub_1008eec0("bip01", 1, 1);
			self->AddEffects(0x10);
		}
		sub_1000ac68(0);
		break;
	case 0x14c:
		pSelf->slot618();
		sub_1000ac68(0);
		break;
	case 0x14d:
		break;
	case 0x14e:
		if (!m_pMonsterModelName) {
			self->TaskFail(0x131);
			return;
		}
		pSelf->slot105(m_pMonsterModelName);
		self->AddEffects(0x10);
		*(int *)((char *)this + 0x168) = 0;
		*(int *)((char *)this + 0x16c) = 0;
		*(int *)((char *)this + 0x1568) = 0;
		*(int *)((char *)this + 0x156c) = 0;
		sub_10273070(1);
		sub_101cf600(this);
		sub_1000ac68(0);
		break;
	case 0x14f:
		((CBaseEntity *)this)->sub_100ac4e0((int)sub_101c0b10, 0, 0);
		m_flNextThink = gpGlobals->curtime + 0.01f;
		sub_1000ac68(0);
		break;
	default:
		((CNPC_VHuman *)this)->vfunc442(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103c60a0 size=0x278
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"
#include "CBaseEntity.h"
#include "CNPC_VVampireBoss.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPCSlots614.h"
#include "CEntityVSlots.h"

extern char g_1065ec20[];
extern char g_10587908[];
extern char g_1062a654[];
CBaseEntity *sub_10136580(const char *pszName);
void sub_101d1280(void *p);

void CNPC_VVampireBoss::vfunc618()
{
	ScopeTrace trace("CNPC_VVampireBoss::TransformationStart", g_106b8540);

	CNPC_VVampireBoss *pNew;
	CBaseEntity *pEnt = sub_10136580(m_pDefaultNPCName);
	if (!(!((int)pEnt == 0))) pNew = 0; else pNew = (CNPC_VVampireBoss *)pEnt->m_pNPC98;

	((CAI_BaseNPCTroika *)pNew)->m_flags204 |= 4;

	((CEntityVSlots *)pNew)->slot62((const float *)((CEntityVSlots *)this)->slot217());
	((CEntityVSlots *)pNew)->slot64((const float *)((CEntityVSlots *)this)->slot221());
	((CEntityVSlots *)pNew)->slot202((CEntityVSlots *)this);
	((CBaseAnimating *)pNew)->sub_10097310((CBaseAnimating *)this);

	((CAI_BaseNPCTroika *)pNew)->m_flSeekDistBase = 4096.0f;
	((CEntityVSlots *)pNew)->slot105(m_pMonsterModelName);
	sub_101d1280(pNew);

	((CAI_BaseNPCTroika *)pNew)->m_flags19c |= 0x60;
	((CNPCSlots614 *)pNew)->slot614();
	((CEntityVSlots *)pNew)->slot105(m_pMonsterModelName);

	((CAI_BaseNPCTroika *)pNew)->m_flags19c &= ~0x60;
	*(unsigned char *)((char *)pNew + 0x1a3) = 1;
	pNew->m_n168 = 0x1f;
	pNew->m_n16c = 2;
	pNew->m_h155c = *((CEntityVSlots *)this)->slot1();
	float flCurTime = gpGlobals->curtime;
	m_flTime1560 = flCurTime;
	pNew->m_flTime1560 = flCurTime;
	((CAI_BaseNPCTroika *)pNew)->m_n5cc0 = 5;
	const char *pszFile = g_1065ec20;
	*(0x1480 + (char *)pNew) = 1;
	((CAI_BaseNPCTroika *)pNew)->m_pszFile1b3c = pszFile;
	((CAI_BaseNPCTroika *)pNew)->m_n5cc4 = 5;
	((CAI_BaseNPCTroika *)pNew)->m_nLine1b40 = 0x205;
	((CAI_BaseNPCTroika *)pNew)->m_pszFile1b30 = pszFile;
	((CAI_BaseNPCTroika *)pNew)->m_nLine1b34 = 0x206;
	((CAI_BaseNPCTroika *)pNew)->sub_102ae750(0x158, 0);

	pNew->m_n6348[0] = m_n6348[0];
	pNew->m_n6348[1] = m_n6348[1];
	*(pNew->m_n6348 + 2) = m_n6348[2];
	pNew->m_n6348[3] = *(3 + m_n6348);
	*(pNew->m_n6348 + 4) = *(m_n6348 + 4);
	*(pNew->m_n6420 + 0) = m_n6420[0];
	*(pNew->m_n6420 + 1) = m_n6420[1];
	pNew->m_n6420[2] = m_n6420[2];
	pNew->m_n6420[3] = m_n6420[3];
	pNew->m_n6420[4] = m_n6420[4];

	CNPC_VVampireBoss *pOther = (CNPC_VVampireBoss *)__RTDynamicCast(pNew, 0, g_10587908, g_1062a654, 0);
	if (pOther)
		*(unsigned int *)((char *)pOther + 0x66b0) = *((CEntityVSlots *)this)->slot1();

	m_n168 = 0x1e;
	m_n16c = 2;
	m_h155c = *((CEntityVSlots *)pNew)->slot1();
}
// END FUNCTION
