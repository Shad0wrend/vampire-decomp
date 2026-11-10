// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102f3800 size=0x3
#include "CTraceFilterNearestNode.h"
int CTraceFilterNearestNode::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102f3820 size=0xad
#include "UTIL_BloodStream.h"
#include "CTraceFilterNearestNode.h"
#include "CBaseEntity.h"
#include "CGameRules.h"

inline int GetCollisionGroup(const CBaseEntity *p) { return p->m_field368; }

bool CTraceFilterNearestNode::vfunc0(void *pEntity, int contentsMask)
{
	CBaseEntity *ent = (CBaseEntity *)pEntity;
	if (!ent->vfunc91((void *)m_collisionGroup, contentsMask))
		return false;
	CBaseEntity *pPass = (CBaseEntity *)m_pPassEntity;
	if (pPass == ent)
		return false;
	if (ent->m_p9c != 0) {
		m_bHitSolid = 1;
		return false;
	}
	if (!((CGameRules *)g_1070ba0c)->vfunc77((void *)m_collisionGroup, GetCollisionGroup(ent)))
		return false;
	if (pPass != 0) {
		if (ent->vfunc68(pPass) || pPass->vfunc68(ent))
			return false;
	}
	if (ent->vfunc94())
		return false;
	return true;
}
// END FUNCTION
