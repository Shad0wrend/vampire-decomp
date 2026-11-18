// CTriggerTeleport: declared by pcdecomp transplant for 0x101c90e0 from CKeepUpright (0x10029200);
// CBaseTrigger -> CBaseToggle -> CBaseEntity (RTTI), only what matched code needs, as plain members.
#pragma once
#include "CBaseTrigger.h"

class CTriggerTeleport : public CBaseTrigger
{
public:
	CTriggerTeleport();	// 0x101c91e0: same shape as CTriggerDisciplineContext's constructor (CBaseTrigger inlined, the vftable, no members of its own)
	CTriggerTeleport *sub_101c91e0();
	const char *m_targetName598;	// 0x598: the destination entity's target name (FindEntityByName input)
	int m_n59c;	// 0x59c: cleared by the constructor
	void vfunc103();	// slot 103: 0x101c92a0 in the game's CTriggerTeleport vtable (link audit, CTriggerTeleport)
	void vfunc175(CBaseEntity *pOther);	// slot 175 (0x101c92c0, vtable stub 0x1000c239): the teleport touch; a plain member like CBaseEntity's, which declares its virtuals up to slot 133 only
public:
    virtual datamap_t * vfunc82();
    void *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
};
