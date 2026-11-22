// CAimTargetManager: keeps the list of aim targets; base IEntityListener in the initializer unit (the global
// 0x10703650), a flat view elsewhere.
#pragma once
#ifdef PCD_INITIALIZERS
#include "utlvector.h"	// the initializer units: the vector member is Source's CUtlVector
#include "IEntityListener.h"
#endif

class CBaseEntity;

class CAimTargetManager
#ifdef PCD_INITIALIZERS
	: public IEntityListener
#endif
{
public:
#ifdef PCD_INITIALIZERS	// IEntityListener's two slots, both its own (vtable 0x10455e80; matched as the flat view's vfunc0 / vfunc1)
	virtual void OnEntityCreated(CBaseEntity *pEntity);
	virtual void OnEntityDeleted(CBaseEntity *pEntity);	// remove it from the target list

	CUtlVector<CBaseEntity *> m_targetList;	// +4 (SDK: m_targetList)
#else
	virtual void vfunc0(int);
	virtual void vfunc1(CBaseEntity *pEntity);	// entity deleted: remove it from the target list

	CBaseEntity **m_pTargets;	// +4
	int m_pad08;
	int m_pad0c;
	int m_nTargets;		// +0x10
#endif
};
