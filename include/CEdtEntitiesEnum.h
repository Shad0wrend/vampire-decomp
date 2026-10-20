// CEdtEntitiesEnum (RTTI .?AVCEdtEntitiesEnum@@): a spatial partition enumerator (IPartitionEnumerator at +0x0).
#pragma once

class CBaseEntity;

class CEdtEntitiesEnum
{
public:
	virtual int vfunc0(void *pHandleEntity);	// EnumElement: 1 (continue) when the entity of the handle passes the +0x4c mask test and sub_101ccbb0 rejects it, else 0

	int m_pad0004[2];
	unsigned int m_nMask;	// 0x0c

	bool sub_101ccbb0(CBaseEntity *pEntity);
};
