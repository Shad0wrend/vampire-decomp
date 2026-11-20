// CTriggerDisciplineContext: declared by pcdecomp transplant for 0x10210be0 from CKeepUpright (0x10029200);
// CBaseTrigger -> CBaseToggle -> CBaseEntity (RTTI); only what matched code needs, as plain members.
#pragma once
#include "CBaseTrigger.h"

class CTriggerDisciplineContext : public CBaseTrigger
{
public:
	CTriggerDisciplineContext();	// 0x10210ce0: CBaseTrigger's inlined constructor (CBaseToggle, -1 at +0x564, the two outputs at +0x568 / +0x580), the vftable, then m_nDiscipline598 = 0
	CTriggerDisciplineContext *sub_10210ce0();	// the same constructor under its address name, as the allocating function 0x10210be0 calls it
	void sub_10210b00(void *pInputData);	// like sub_10210ac0, for the index at +0x59c
	void sub_10210ac0(void *pInputData);	// input function: the variant (type at +0x18, int at +0x8) of the input data names the discipline index at +0x598 (kept when above 5; 0 for a variant of another type)
	virtual void vfunc175(CBaseEntity *pOther);	// slot 175 (CBaseEntity's Touch): empty here (ret 4), 0x10210e30
	void vfunc176(CBaseEntity *pEnt);	// slot 176 (EndTouch): drops this trigger's discipline bit (index at +0x598) from the flag word at +0xeac of the object at pEnt+0x9c, then CBaseTrigger::vfunc176
	void sub_101c55d0(CBaseEntity *pEnt);	// CBaseTrigger::vfunc176 (stub 0x1001346c), called directly
	void sub_101c5590(CBaseEntity *pEnt);	// CBaseTrigger::vfunc174 (stub 0x10008ef4), called directly
	void vfunc174(CBaseEntity *pEnt);	// StartTouch: sets this trigger's discipline bit (index at +0x598) in the flag word at +0xeac of the object at pEnt+0x9c, then CBaseTrigger::vfunc174
	int m_nDiscipline598;	// 0x598: the discipline index (the second one, for sub_10210b00, at +0x59c)
public:
    virtual datamap_t * vfunc82();
    void sub_101c5080();	// as in CTriggerPlayerActivityLevel (transplant)
    void vfunc103();	// as in CTriggerPlayerActivityLevel (transplant)
    virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
};

#define m_bDisabled55c m_bDisabled	// the byte at +0x55c is CBaseTrigger::m_bDisabled; the old name stays until the matched sources use the new one
