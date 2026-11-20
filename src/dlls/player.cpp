// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10167850 size=0x403
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEHandleGet.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
#include "CVariantCopy.h"
#include "ScopeTrace.h"
extern CGlobalEntityList *g_10566458;
CBaseEntity *sub_104115b0(CBasePlayer *pPlayer, CBaseEntity *pNull);

struct CNpcSlot614View
{
	CBP_V100(a) CBP_V100(b) CBP_V100(c) CBP_V100(d) CBP_V100(e) CBP_V100(f)
	CBP_V10(g)
	CBP_V1(h0) CBP_V1(h1) CBP_V1(h2) CBP_V1(h3)
	virtual void vfunc614();
};

static inline CGlobalEntityList_Ent *ListGet(CGlobalEntityList *pList, const unsigned int &rh)
{
	if (rh == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &pList->m_Slots[rh & 0x1fff];
	if (pSlot->m_Serial == (int)(rh >> 13))
		return pSlot->m_pEntity;
	return 0;
}

// TARGET: CBasePlayer::vfunc460
void CBasePlayer::vfunc460()
{
	ScopeTrace trace("CBasePlayer::PlayerUse", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CGlobalEntityList *pList = g_10566458;
	if (pList->sub_100290c0((unsigned int *)&m_hInteractiveUseTarget)) {
		if (!((CBaseEntity *)pList->sub_100290c0((unsigned int *)&m_hInteractiveUseTarget))->vfunc32((int)this)) {
			sub_10167fd0();
			return;
		}
		pList = g_10566458;
	}
	if (!((m_nFlags2088 | m_n208C | m_afButtonReleased) & 0x20)) {
		if (ListGet(pList, m_hInteractiveUseTarget.m_Index))
			sub_10167e00();
		return;
	}
	if (ListGet(pList, m_hProteanTransformOther.m_Index))
		return;
	if (sub_10167370())
		return;
	CBaseEntity *pUseEntity = (CBaseEntity *)EHandle_Get(m_hInteractiveUseTarget.m_Index);
	if (!pUseEntity)
		pUseEntity = sub_104115b0(this, 0);
	if (!pUseEntity)
		pUseEntity = sub_10167470(0);
	if (!pUseEntity)
		pUseEntity = (CBaseEntity *)EHandle_Get(m_h1CB8);
	if (!pUseEntity)
		pUseEntity = (CBaseEntity *)EHandle_Get(m_h1CBC);
	if (!pUseEntity)
		return;
	pUseEntity = (CBaseEntity *)pUseEntity->vfunc38((int)this);
	if (pUseEntity) {
		CAI_BaseNPCTroika *pNpc = pUseEntity->m_pNPC98;
		int caps = pUseEntity->vfunc117();
		if (pNpc) {
			if (pNpc->vfunc295((CBaseCombatCharacter *)this)) {
				((CNpcSlot614View *)pNpc)->vfunc614();
				pNpc->m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\player.cpp";
				pNpc->m_nLine1b34 = 0x1508;
				pNpc->sub_102ae750(0x6a, 0);
				vfunc414(pUseEntity);
			}
			return;
		}
		if (pUseEntity->vfunc32((int)this)) {
			if (m_b208C & 0x20) {
				if (!EHandle_Get(m_hInteractiveUseTarget.m_Index)) {
					sub_10167d70(pUseEntity);
					return;
				}
				if (pUseEntity->vfunc44((int)this))
					sub_10167fd0();
			} else {
				if (EHandle_Get(m_hInteractiveUseTarget.m_Index))
					sub_10167e00();
			}
			return;
		}
		if (caps & 0x38) {
			CVariantCopy v;
			if (((m_nFlags2088 & 0x20) && (caps & 0x10)) || ((m_b208C & 0x20) && (caps & 0x28))) {
				if (caps & 0x10)
					m_afPhysicsFlags |= 0x10;
				v.SetBool(true);
				pUseEntity->vfunc118("Use", (CBaseEntity *)this, (CBaseEntity *)this, v, 0);
			} else if ((m_afButtonReleased & 0x20) && (pUseEntity->vfunc117() & 0x20)) {
				v.SetBool(false);
				pUseEntity->vfunc118("Use", (CBaseEntity *)this, (CBaseEntity *)this, v, 0);
			}
		}
	}
}
// END FUNCTION
