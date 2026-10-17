// CMoverKeyFrame (RTTI .?AVCMoverKeyFrame@@): derives from CBaseEntity (via CLogicalEntity).
#pragma once
#include "CBaseEntity.h"

class CMoverKeyFrame : public CBaseEntity
{
public:
	virtual void vfunc113();

	char m_pad0450[0x450 - sizeof(CBaseEntity)];
	void *m_pTargetName;
	CBaseEntity *m_pNext;
	CMoverKeyFrame *m_pPrev;
};
