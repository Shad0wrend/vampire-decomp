// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10037380 size=0x25a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CPushBlockerEnum.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CGameRules.h"
#include "CPhysicsPushedEntities.h"

struct SPushHandleEntity
{
	virtual void v0();
	virtual unsigned int &GetRefEHandle();
};
struct SPushTarget : CBaseEntity
{
	char m_pad2[0x400 - sizeof(CBaseEntity)];
	int m_nPushEnumCount;
	int GetCollisionGroup() const { return m_field368; }
};
extern CGlobalEntityList g_106eb5d8;
extern int g_106bcb5c;
extern CGameRules *g_1070ba0c;
CBaseEntity *sub_1012c9c0(CBaseEntity *pEnt);

inline CBaseEntity *GetBaseEntity(unsigned int hEnt)
{
	CGlobalEntityList_Ent *pUnk = (CGlobalEntityList_Ent *)g_106eb5d8.sub_100290c0(&hEnt);
	if (pUnk)
		return pUnk->vfunc4();
	else
		return 0;
}

struct CPushBlockerEnumImpl : CPushBlockerEnum
{
	inline CBaseEntity *GetPushableEntity(SPushHandleEntity *pHandleEntity)
	{
		ScopeTrace scope("CPushBlockerEnum::GetPushableEntity", g_106b8540);
		SPushTarget *pCheck = (SPushTarget *)GetBaseEntity(pHandleEntity->GetRefEHandle());
		if (!pCheck)
			return 0;
		if (pCheck->m_nPushEnumCount == g_106bcb5c)
			return 0;
		if (!pCheck->sub_10037680())
			return 0;
		if (pCheck->vfunc94() == 8 ||
			pCheck->vfunc94() == 0 ||
			pCheck->vfunc94() == 7 ||
			pCheck->vfunc94() == 9)
			return 0;
		if (!g_1070ba0c->vfunc77((void *)pCheck->GetCollisionGroup(), ((SPushTarget *)m_pPusher)->GetCollisionGroup()))
			return 0;
		CBaseEntity *pCheckHighestParent = sub_1012c9c0(pCheck);
		if (pCheckHighestParent == m_pPusher)
			return 0;
		if (!sub_10037750(pCheck))
		{
			if (!sub_10037840(pCheck))
				return 0;
		}
		return pCheckHighestParent;
	}
};

int CPushBlockerEnum::vfunc0(CBaseEntity *pHandleEntity)
{
	ScopeTrace scope("CPushBlockerEnum::EnumElement", g_106b8540);
	CBaseEntity *pCheck = ((CPushBlockerEnumImpl *)this)->GetPushableEntity((SPushHandleEntity *)pHandleEntity);
	if (!pCheck)
		return 0;
	((SPushTarget *)pCheck)->m_nPushEnumCount = g_106bcb5c;
	((CPhysicsPushedEntities *)m_pList)->sub_10035df0(pCheck);
	return 0;
}
// END FUNCTION
