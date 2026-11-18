// CTriggerPush: declared by pcdecomp transplant for 0x101c8850 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseTrigger.h"
#include "CBaseEntity.h"

class CTriggerPush : public CBaseTrigger
{
public:
	virtual void vfunc103();	// the base, then (angles all zero) sets the angles (0, 180, 0), then sub_101c5080; copies the int at +0x164 to +0x59c
	void vfunc175(CBaseEntity *pOther);	// slot 175 "Touch" override (0x101c8c40, ret 4): the standard CBaseEntity::IsSolid gate (pushed entity +0x2b0 set, +0x2b4 bit 2 clear), the pushed entity's slot 92 != 1 and CBaseTrigger::sub_101c5460; when the trigger's high bit of m_flags204 (+0x204) is set: add the trigger's speed m_flSpeed164 (+0x164) * m_vecMovedir (+0x190) to the pushed entity's base velocity (+0x3d4), call CBaseEntity::sub_100b2e30, sub_100b3640(1) when the entity's +0x3dc window > 0, then sub_101cd940(this); else switch on the pushed entity's slot 94 (move type): 0/8/9/0xb/0xc do nothing, 7 hands phys object (+0x36c) slot 30 the gravity-scaled (100.0f * the global time step at 0x1070b228+0x10) speed vector, default handles the STATIC / FL_BASEVELOCITY cases and stores the velocity back into +0x3b0..+0x3b8 with sub_100b3580(0x800000). Members come from CBaseEntity.h (m_flSpeed164, m_vecMovedir[3], m_flags204), so no new data members are needed.
	CTriggerPush *sub_101c88c0();
	void sub_101c5080();	// stub 0x1000dfd0
	void sub_1000350d();	// CBaseEntity::vfunc103 (stub 0x1000350d), called directly
public:
    virtual datamap_t * vfunc82();
    virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
	char m_pad0598[0x59c - 0x598];
	float m_flTargetSpeed;	// 0x059c
	char m_pad05a0[0x5a4 - 0x5a0];
};
