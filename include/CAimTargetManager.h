// CAimTargetManager: keeps the list of aim targets (IEntityListener base: just the vtable pointer).
#pragma once

class CBaseEntity;

class CAimTargetManager
{
public:
	virtual void vfunc0();
	virtual void vfunc1(CBaseEntity *pEntity);	// entity deleted: remove it from the target list

	CBaseEntity **m_pTargets;	// +4
	int m_pad08;
	int m_pad0c;
	int m_nTargets;		// +0x10
};
