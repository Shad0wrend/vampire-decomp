// CAimTargetManager: keeps the list of aim targets (IEntityListener base: just the vtable pointer).
#pragma once
#ifdef PCD_INITIALIZERS
#include "utlvector.h"	// the initializer units: the vector member is Source's CUtlVector
#endif

class CBaseEntity;

class CAimTargetManager
{
public:
	virtual void vfunc0(int);
	virtual void vfunc1(CBaseEntity *pEntity);	// entity deleted: remove it from the target list

#ifdef PCD_INITIALIZERS	// the target list (aimtarget manager, SDK: m_targetList)
	CUtlVector<CBaseEntity *> m_targetList;	// +4
#else
	CBaseEntity **m_pTargets;	// +4
	int m_pad08;
	int m_pad0c;
	int m_nTargets;		// +0x10
#endif
};
