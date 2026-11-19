// CEdtEntitiesEnum (RTTI .?AVCEdtEntitiesEnum@@): a spatial partition enumerator (IPartitionEnumerator at +0x0).
#pragma once
#include "CFireSphere.h"

class CBaseEntity;

class CEdtEntitiesEnum : public IPartitionEnumerator
{
public:
	virtual int vfunc0(CBaseEntity *pHandleEntity);	// EnumElement: 1 (continue) when the entity of the handle passes the +0x4c mask test and sub_101ccbb0 rejects it, else 0

	int m_pad0004[2];
	unsigned int m_nMask;	// 0x0c
	int m_nCount;	// 0x10

	CEdtEntitiesEnum *sub_101ccb60(CBaseEntity **pList, int nMaxList, unsigned int nFlagMask);	// the constructor body: the list (+4), its size (+8), the flag mask (+0xc), count 0 (+0x10), and the engine's entity index slot 38(0) at +0x14
	bool sub_101ccbb0(CBaseEntity *pEntity);
};
