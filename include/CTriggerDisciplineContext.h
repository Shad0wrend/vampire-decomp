// CTriggerDisciplineContext: declared by pcdecomp transplant for 0x10210be0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CTriggerDisciplineContext : public CBaseEntity
{
public:
	CTriggerDisciplineContext *sub_10210ce0();
	void sub_10210b00(void *pInputData);	// like sub_10210ac0, for the index at +0x59c
	void sub_10210ac0(void *pInputData);	// input function: the variant (type at +0x18, int at +0x8) of the input data names the discipline index at +0x598 (kept when above 5; 0 for a variant of another type)
	void vfunc176(CBaseEntity *pEnt);	// slot 176 (EndTouch): drops this trigger's discipline bit (index at +0x598) from the flag word at +0xeac of the object at pEnt+0x9c, then CBaseTrigger::vfunc176
	void sub_101c55d0(CBaseEntity *pEnt);	// CBaseTrigger::vfunc176 (stub 0x1001346c), called directly
	void sub_101c5590(CBaseEntity *pEnt);	// CBaseTrigger::vfunc174 (stub 0x10008ef4), called directly
	void vfunc174(CBaseEntity *pEnt);	// StartTouch: sets this trigger's discipline bit (index at +0x598) in the flag word at +0xeac of the object at pEnt+0x9c, then CBaseTrigger::vfunc174
	char m_pad03e0[0x55c - 0x3e0];
	char m_bDisabled55c;
	char m_pad55d[0x598 - 0x55d];
	int m_nDiscipline598;
public:
    virtual datamap_t * vfunc82();
    void sub_101c5080();	// as in CTriggerPlayerActivityLevel (transplant)
    void vfunc103();	// as in CTriggerPlayerActivityLevel (transplant)
    void *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
};
