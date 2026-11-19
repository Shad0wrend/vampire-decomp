// CPushBlockerEnum (RTTI .?AVCPushBlockerEnum@@): partition enumerator that collects the entities blocking a push.
#pragma once
#include "CFireSphere.h"

class CBaseEntity;

struct CPushBlockerEntry
{
	CBaseEntity *m_pEntity;
	int m_pad[3];
};

struct CPushBlockerList
{
	CPushBlockerEntry *m_pData;
	int m_pad[2];
	int m_nCount;
};

class CPushBlockerEnum : public IPartitionEnumerator
{
public:
	virtual int vfunc0(CBaseEntity *pHandleEntity);	// "CPushBlockerEnum::EnumElement"

	CPushBlockerList *m_pList;
	CBaseEntity *m_pPusher;	// 0x08
	char m_push[4];	// 0x0c, start of the push description handed to the entity

	bool sub_10037750(CBaseEntity *pEnt);	// "CPushBlockerEnum::IsStandingOnPusher": scope trace, true when the entity from slot 209 of pEnt (or any, when pEnt has flag bit 0 set) is in the list
	char sub_10037840(CBaseEntity *pEnt);	// "CPushBlockerEnum::IntersectsPush": scope trace, builds a trace record through slot 237 of pEnt and the engine trace interface and returns its flag byte at +0x37
};
